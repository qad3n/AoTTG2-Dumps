// Type: CustomLogic.CustomLogicGameBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGameBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicGameBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicGameBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGameBuiltin_o* CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203cc50

CustomLogic_CustomLogicGameBuiltin_o *
CustomLogic_CustomLogicGameBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843463a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin);
    Il2CppMethodInitialized_1843463a0 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin);
      CustomLogic_CustomLogicGameBuiltin___ctor(__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGameBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044d50

void CustomLogic_CustomLogicGameBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843463f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843463f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicGameBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetExperienceScore>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetExperienceScore_b__27_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f540

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetExperienceScore_b__27_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__GetExperienceScore(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceScore>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceScore_b__28_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040ec0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceScore_b__28_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool lowerIsBetter;
  System_String_o *unit;
  float score;
  
  if (Il2CppMethodInitialized_1843463f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182040fde:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    score = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (1 < (uint)__a->max_length) {
      unit = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      lowerIsBetter = false;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_182040fe4;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        lowerIsBetter =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (pIVar2,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                       );
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore
                  (__c,score,unit,lowerIsBetter,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_182040fde;
    }
  }
label_182040fe4:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveExperienceCompletionTime>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceCompletionTime_b__29_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040e20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SaveExperienceCompletionTime_b__29_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float elapsed;
  
  if (Il2CppMethodInitialized_1843463f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    elapsed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
    ;
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime(__c,elapsed,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHorse>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHorse_b__30_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042d50

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHorse_b__30_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicHorseBuiltin_o *pCVar3;
  float rotationY;
  
  if (Il2CppMethodInitialized_1843463f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_182042e37:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      rotationY = 0.0;
    }
    else {
      if (uVar1 < 2) goto label_182042e37;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (pIVar2,(MethodInfo_66ED40 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar3 = CustomLogic_CustomLogicGameBuiltin__SpawnHorse(__c,position,rotationY,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Debug>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Debug_b__31_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e370

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
      CustomLogic_CustomLogicGameBuiltin__Debug(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__Print>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__Print_b__32_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040a30

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
      CustomLogic_CustomLogicGameBuiltin__Print(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrintAll>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__PrintAll_b__33_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820409f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__PrintAll_b__33_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__PrintAll(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetGeneralSetting>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetGeneralSetting_b__34_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f560

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetGeneralSetting_b__34_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843463f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting(__c,settingName,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTitanSetting>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetTitanSetting_b__35_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820400a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetTitanSetting_b__35_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843463f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetTitanSetting(__c,settingName,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMiscSetting>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetMiscSetting_b__36_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203fad0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__GetMiscSetting_b__36_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843463f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicGameBuiltin__GetMiscSetting(__c,settingName,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGeneralSetting>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGeneralSetting_b__37_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041db0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGeneralSetting_b__37_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182041e62:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        local_res18[0] =
             CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
                       (__c,settingName,__a->m_Items[1],(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_182041e62;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadTitanSetting>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadTitanSetting_b__38_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820420d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadTitanSetting_b__38_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182042182:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        local_res18[0] =
             CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
                       (__c,settingName,__a->m_Items[1],(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_182042182;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMiscSetting>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMiscSetting_b__39_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041f50

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMiscSetting_b__39_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463f9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182042002:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        local_res18[0] =
             CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
                       (__c,settingName,__a->m_Items[1],(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_182042002;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadModeSetting>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadModeSetting_b__40_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042010

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadModeSetting_b__40_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *settingName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463fa = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820420c2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    settingName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        local_res18[0] =
             CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
                       (__c,settingName,__a->m_Items[1],(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_1820420c2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadMap>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMap_b__41_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041e70

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadMap_b__41_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *mapCategory;
  System_String_o *mapName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463fb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182041f3c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    mapCategory = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      mapName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        local_res18[0] =
             CustomLogic_CustomLogicGameBuiltin__SetPreloadMap(__c,mapCategory,mapName,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_182041f3c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPreloadGameMode>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGameMode_b__42_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041d00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPreloadGameMode_b__42_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *gameMode;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463fc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    gameMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      local_res18[0] = CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode(__c,gameMode,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadPreloadPreset>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__LoadPreloadPreset_b__43_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820407d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__LoadPreloadPreset_b__43_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *presetName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843463fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463fd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    presetName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      local_res18[0] = CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset(__c,presetName,(MethodInfo *)0x0)
      ;
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__RestartWithPreloadSettings>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__RestartWithPreloadSettings_b__44_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040de0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__RestartWithPreloadSettings_b__44_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res10 [24];
  
  if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res10[0] = CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings(__c,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res10);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__End>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__End_b__45_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e720

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__End_b__45_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float delay;
  
  if (Il2CppMethodInitialized_1843463fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463fe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__End(__c,delay,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindCharacterByViewID>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__FindCharacterByViewID_b__46_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e9c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__FindCharacterByViewID_b__46_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t viewID;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843463ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    viewID = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID(__c,viewID,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitan>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitan_b__47_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043bf0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitan_b__47_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346400 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitan(__c,type,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitanAt>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitanAt_b__48_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043ac0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitanAt_b__48_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicTitanBuiltin_o *pCVar3;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346401 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182043bde:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (1 < (uint)__a->max_length) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        rotationY = 0.0;
      }
      else {
        if (uVar1 < 3) goto label_182043be4;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (pIVar2,(MethodInfo_66ED40 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt
                           (__c,type,position,rotationY,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto label_182043bde;
    }
  }
label_182043be4:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitans>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitans_b__49_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182044040

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitans_b__49_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346402 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820440fa:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnTitans(__c,type,count,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto label_1820440fa;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAsync>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAsync_b__50_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043c90

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAsync_b__50_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t count;
  System_String_o *type;
  
  if (Il2CppMethodInitialized_184346403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346403 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182043d4d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync(__c,type,count,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_182043d4d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAt>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAt_b__51_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043ed0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAt_b__51_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346404 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[1],
                           (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if (2 < (uint)__a->max_length) {
          position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          uVar1 = (uint)__a->max_length;
          if ((int)uVar1 < 4) {
            rotationY = 0.0;
          }
          else {
            if (uVar1 < 4) goto label_18204402c;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                  (pIVar2,(MethodInfo_66ED40 *)
                                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            pCVar3 = CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
                               (__c,type,count,position,rotationY,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar3;
          }
          goto label_182044026;
        }
      }
    }
label_18204402c:
    ThrowIndexOutOfRangeException();
  }
label_182044026:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnTitansAtAsync>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAtAsync_b__52_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043d60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnTitansAtAsync_b__52_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  int32_t count;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346405 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        count = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (__a->m_Items[1],
                           (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if (2 < (uint)__a->max_length) {
          position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          uVar1 = (uint)__a->max_length;
          if ((int)uVar1 < 4) {
            rotationY = 0.0;
          }
          else {
            if (uVar1 < 4) goto label_182043ebe;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                  (pIVar2,(MethodInfo_66ED40 *)
                                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
                      (__c,type,count,position,rotationY,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_182043eb8;
        }
      }
    }
label_182043ebe:
    ThrowIndexOutOfRangeException();
  }
label_182043eb8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifter>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifter_b__53_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043a20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifter_b__53_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *type;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346406 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnShifter(__c,type,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHuman>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHuman_b__54_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042fd0

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
  
  if (Il2CppMethodInitialized_184346407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346407 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      costume = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
      ;
      if (1 < (uint)__a->max_length) {
        costumeName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[1],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          loadout = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicGameBuiltin__SpawnHuman
                               (__c,costume,costumeName,loadout,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_1820430bd;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820430bd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnHumanAt>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHumanAt_b__55_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042e40

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnHumanAt_b__55_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  int32_t costume;
  System_String_o *costumeName;
  System_String_o *loadout;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar3;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346408 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      costume = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (pIVar2,(MethodInfo_66E9A0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (1 < (uint)__a->max_length) {
        costumeName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[1],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          loadout = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (3 < (uint)__a->max_length) {
            position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[3],
                                  (MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                 );
            uVar1 = (uint)__a->max_length;
            if ((int)uVar1 < 5) {
              rotationY = 0.0;
            }
            else {
              if (uVar1 < 5) goto label_182042fc2;
              pIVar2 = __a->m_Items[4];
              if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
              }
              rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                    (pIVar2,(MethodInfo_66ED40 *)
                                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            }
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              pCVar3 = CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
                                 (__c,costume,costumeName,loadout,position,rotationY,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar3;
            }
            goto label_182042fbc;
          }
        }
      }
    }
label_182042fc2:
    ThrowIndexOutOfRangeException();
  }
label_182042fbc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnShifterAt>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifterAt_b__56_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820438f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnShifterAt_b__56_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *type;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar3;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346409 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182043a0e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    type = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (1 < (uint)__a->max_length) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        rotationY = 0.0;
      }
      else {
        if (uVar1 < 3) goto label_182043a14;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (pIVar2,(MethodInfo_66ED40 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        pCVar3 = CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt
                           (__c,type,position,rotationY,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto label_182043a0e;
    }
  }
label_182043a14:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectile>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectile_b__57_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820434e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectile_b__57_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  System_String_o *team;
  Il2CppObject *extraParam2;
  Il2CppObject *pIVar2;
  float liveTime;
  
  if (Il2CppMethodInitialized_18434640a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      projectileName =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
      if (1 < (uint)__a->max_length) {
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if (2 < (uint)__a->max_length) {
          rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          if (3 < (uint)__a->max_length) {
            velocity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[3],
                                  (MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                 );
            if (4 < (uint)__a->max_length) {
              gravity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[4],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                  );
              if (5 < (uint)__a->max_length) {
                liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                     (__a->m_Items[5],
                                      (MethodInfo_66ED40 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
                if (6 < (uint)__a->max_length) {
                  team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                   (__a->m_Items[6],
                                    (MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
                  pIVar2 = (Il2CppObject *)0x0;
                  uVar1 = (uint)__a->max_length;
                  if (7 < (int)uVar1) {
                    if (uVar1 < 8) goto label_1820436d7;
                    pIVar2 = __a->m_Items[7];
                  }
                  extraParam2 = (Il2CppObject *)0x0;
                  uVar1 = (uint)__a->max_length;
                  if (8 < (int)uVar1) {
                    if (uVar1 < 9) goto label_1820436d7;
                    extraParam2 = __a->m_Items[8];
                  }
                  if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
                              (__c,projectileName,position,rotation,velocity,gravity,liveTime,team,pIVar2,
                               extraParam2,(MethodInfo *)0x0);
                    return (Il2CppObject *)0x0;
                  }
                  goto label_1820436d1;
                }
              }
            }
          }
        }
      }
    }
label_1820436d7:
    ThrowIndexOutOfRangeException();
  }
label_1820436d1:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnProjectileWithOwner>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectileWithOwner_b__58_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820436e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnProjectileWithOwner_b__58_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  System_String_o *projectileName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  CustomLogic_CustomLogicVector3Builtin_o *gravity;
  CustomLogic_CustomLogicCharacterBuiltin_o *owner;
  Il2CppObject *extraParam2;
  Il2CppObject *pIVar2;
  float liveTime;
  
  if (Il2CppMethodInitialized_18434640b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      projectileName =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
      if (1 < (uint)__a->max_length) {
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if (2 < (uint)__a->max_length) {
          rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          if (3 < (uint)__a->max_length) {
            velocity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[3],
                                  (MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                 );
            if (4 < (uint)__a->max_length) {
              gravity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[4],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                  );
              if (5 < (uint)__a->max_length) {
                liveTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                     (__a->m_Items[5],
                                      (MethodInfo_66ED40 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
                if (6 < (uint)__a->max_length) {
                  owner = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[6],
                                     (MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicCharacterBuiltin
                                    );
                  pIVar2 = (Il2CppObject *)0x0;
                  uVar1 = (uint)__a->max_length;
                  if (7 < (int)uVar1) {
                    if (uVar1 < 8) goto label_1820438e3;
                    pIVar2 = __a->m_Items[7];
                  }
                  extraParam2 = (Il2CppObject *)0x0;
                  uVar1 = (uint)__a->max_length;
                  if (8 < (int)uVar1) {
                    if (uVar1 < 9) goto label_1820438e3;
                    extraParam2 = __a->m_Items[8];
                  }
                  if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
                    CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner
                              (__c,projectileName,position,rotation,velocity,gravity,liveTime,owner,pIVar2,
                               extraParam2,(MethodInfo *)0x0);
                    return (Il2CppObject *)0x0;
                  }
                  goto label_1820438dd;
                }
              }
            }
          }
        }
      }
    }
label_1820438e3:
    ThrowIndexOutOfRangeException();
  }
label_1820438dd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnEffect>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnEffect_b__59_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042b70

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnEffect_b__59_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  float scale;
  
  if (Il2CppMethodInitialized_18434640c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if (2 < (uint)__a->max_length) {
          rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          if (3 < (uint)__a->max_length) {
            scale = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (__a->m_Items[3],
                               (MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
            uVar1 = (uint)__a->max_length;
            if (4 < (int)uVar1) {
              if (uVar1 < 5) goto label_182042d42;
              pIVar2 = __a->m_Items[4];
              if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
              }
              tsExplodeColor =
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin
                             );
            }
            tsKillSound = (System_String_o *)0x0;
            uVar1 = (uint)__a->max_length;
            if (5 < (int)uVar1) {
              if (uVar1 < 6) goto label_182042d42;
              pIVar2 = __a->m_Items[5];
              if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
              }
              tsKillSound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                      (pIVar2,(MethodInfo_66EB70 *)
                                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            }
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__SpawnEffect
                        (__c,effectName,position,rotation,scale,tsExplodeColor,tsKillSound,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_182042d3c;
          }
        }
      }
    }
label_182042d42:
    ThrowIndexOutOfRangeException();
  }
label_182042d3c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnUnscaledEffect>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnUnscaledEffect_b__60_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182044110

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnUnscaledEffect_b__60_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *effectName;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor;
  System_String_o *tsKillSound;
  
  if (Il2CppMethodInitialized_18434640d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (pIVar2,(MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if (2 < (uint)__a->max_length) {
          rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          tsExplodeColor = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
          uVar1 = (uint)__a->max_length;
          if (3 < (int)uVar1) {
            if (uVar1 < 4) goto label_18204429f;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            tsExplodeColor =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin
                           );
          }
          tsKillSound = (System_String_o *)0x0;
          uVar1 = (uint)__a->max_length;
          if (4 < (int)uVar1) {
            if (uVar1 < 5) goto label_18204429f;
            pIVar2 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            tsKillSound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (pIVar2,(MethodInfo_66EB70 *)
                                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect
                      (__c,effectName,position,rotation,tsExplodeColor,tsKillSound,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_182044299;
        }
      }
    }
label_18204429f:
    ThrowIndexOutOfRangeException();
  }
label_182044299:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayer>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayer_b__61_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043410

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayer_b__61_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool force;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  
  if (Il2CppMethodInitialized_18434640e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820434ce:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if (1 < (uint)__a->max_length) {
      force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayer(__c,player,force,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_1820434ce;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAll>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAll_b__62_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820430d0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAll_b__62_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool force;
  
  if (Il2CppMethodInitialized_18434640f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434640f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll(__c,force,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAt>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAt_b__63_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820432a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAt_b__63_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool force;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346410 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin
                         );
      if (1 < (uint)__a->max_length) {
        force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        if (2 < (uint)__a->max_length) {
          position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
          uVar1 = (uint)__a->max_length;
          if ((int)uVar1 < 4) {
            rotationY = 0.0;
          }
          else {
            if (uVar1 < 4) goto label_182043400;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                  (pIVar2,(MethodInfo_66ED40 *)
                                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          }
          if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
            CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt
                      (__c,player,force,position,rotationY,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_1820433fa;
        }
      }
    }
label_182043400:
    ThrowIndexOutOfRangeException();
  }
label_1820433fa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SpawnPlayerAtAll>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAtAll_b__64_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182043170

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SpawnPlayerAtAll_b__64_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool force;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float rotationY;
  
  if (Il2CppMethodInitialized_184346411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346411 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_182043291:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (pIVar2,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
    ;
    if (1 < (uint)__a->max_length) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        rotationY = 0.0;
      }
      else {
        if (uVar1 < 3) goto label_182043297;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        rotationY = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (pIVar2,(MethodInfo_66ED40 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
        CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll(__c,force,position,rotationY,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_182043291;
    }
  }
label_182043297:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPlaylist>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPlaylist_b__65_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041c60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetPlaylist_b__65_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *playlist;
  
  if (Il2CppMethodInitialized_184346412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346412 = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SetPlaylist(__c,playlist,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSong>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetSong_b__66_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820424f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__SetSong_b__66_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *song;
  
  if (Il2CppMethodInitialized_184346413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346413 = '\x01';
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
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__SetSong(__c,song,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__DrawRay>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__DrawRay_b__67_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e5e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__DrawRay_b__67_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *dir;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  float duration;
  
  if (Il2CppMethodInitialized_184346414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346414 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        dir = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
          if (3 < (uint)__a->max_length) {
            duration = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 (__a->m_Items[3],
                                  (MethodInfo_66ED40 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__DrawRay(__c,start,dir,color,duration,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_18203e70a;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18203e70a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillScore>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillScore_b__68_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042ad0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillScore_b__68_0
          (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicGameBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t damage;
  
  if (Il2CppMethodInitialized_184346415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346415 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    damage = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
      CustomLogic_CustomLogicGameBuiltin__ShowKillScore(__c,damage,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeed>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeed_b__69_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820429a0

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
  
  if (Il2CppMethodInitialized_184346416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346416 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      killer = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        victim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
        ;
        if (2 < (uint)__a->max_length) {
          score = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (__a->m_Items[2],
                             (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (3 < (uint)__a->max_length) {
            weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[3],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__ShowKillFeed
                        (__c,killer,victim,score,weapon,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_182042abc;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182042abc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowKillFeedAll>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings___c_____CreateMethodBinding__ShowKillFeedAll_b__70_0 (CustomLogic_CustomLogicGameBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicGameBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042870

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
  
  if (Il2CppMethodInitialized_184346417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346417 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      killer = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        victim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
        ;
        if (2 < (uint)__a->max_length) {
          score = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (__a->m_Items[2],
                             (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (3 < (uint)__a->max_length) {
            weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[3],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            if (__c != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
              CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll
                        (__c,killer,victim,score,weapon,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_18204298c;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18204298c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18201c050

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGameBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicGameBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843463a1 == '\0') {
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
    Il2CppMethodInitialized_1843463a1 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6e104b4f) {
    if (uVar3 < 0x444d9eda) {
      if (uVar3 < 0x2b56c4fc) {
        if (uVar3 < 0x1f94047f) {
          if (uVar3 < 0x177ad93c) {
            if (uVar3 == 0x541c794) {
              bVar2 = System_String__op_Equality(name,"SetPreloadGeneralSetting",(MethodInfo *)0x0);
              if (!bVar2) goto label_18202087d;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843463c5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
                Il2CppMethodInitialized_1843463c5 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              }
              __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0;
              if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
              __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_02,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0 =
                   (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0;
            }
            else {
              if (uVar3 != 0x177ad93b) goto label_18202087d;
              bVar2 = System_String__op_Equality(name,"ShowKillFeedAll",(MethodInfo *)0x0);
              if (!bVar2) goto label_18202087d;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843463e6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
                Il2CppMethodInitialized_1843463e6 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              }
              __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0;
              if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
              __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_02,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0 =
                   (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0;
            }
          }
          else if (uVar3 == 0x1aa259a2) {
            bVar2 = System_String__op_Equality(name,"SpawnProjectileWithOwner",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463da == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463da = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0;
          }
          else {
            if (uVar3 != 0x1f94047e) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"SaveExperienceScore",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463bc == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463bc = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0;
          }
        }
        else {
          if (uVar3 < 0x2075e2a8) {
            if (uVar3 == 0x203c8139) {
              bVar2 = System_String__op_Equality(name,"DefaultAddKillScore",(MethodInfo *)0x0);
              if (!bVar2) goto label_18202087d;
              if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843463b6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
                Il2CppMethodInitialized_1843463b6 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____ge
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____se
              ;
              goto label_18201c4c8;
            }
            if (uVar3 != 0x2075e2a7) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"MainCharacter",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463a7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463a7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
            ;
            goto label_18201df4b;
          }
          if (uVar3 == 0x2a610338) {
            bVar2 = System_String__op_Equality(name,"Debug",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463bf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463bf = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0;
          }
          else {
            if (uVar3 != 0x2b56c4fb) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"SpawnShifter",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463d5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463d5 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0;
          }
        }
      }
      else if (uVar3 < 0x3411d8c8) {
        if (uVar3 < 0x2e389efc) {
          if (uVar3 != 0x2cf09a84) {
            if (uVar3 != 0x2e389efb) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"PlayerTitans",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463aa == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463aa = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
            ;
            goto label_18201df4b;
          }
          bVar2 = System_String__op_Equality(name,"SetPreloadMiscSetting",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463c7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463c7 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0;
        }
        else if (uVar3 == 0x31cb34ce) {
          bVar2 = System_String__op_Equality(name,"SpawnShifterAt",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463d8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463d8 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0;
        }
        else {
          if (uVar3 != 0x3411d8c7) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"SpawnTitanAt",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463d0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463d0 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0;
        }
      }
      else if (uVar3 < 0x35d2d6c6) {
        if (uVar3 == 0x34e873c4) {
          bVar2 = System_String__op_Equality(name,"SpawnUnscaledEffect",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463dc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463dc = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0;
        }
        else {
          if (uVar3 != 0x35d2d6c5) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"SetPlaylist",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463e1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463e1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0;
        }
      }
      else if (uVar3 == 0x3bba96bf) {
        bVar2 = System_String__op_Equality(name,"SpawnProjectile",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463d9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463d9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0;
      }
      else {
        if (uVar3 != 0x3c86640b) {
          if (uVar3 != 0x444d9ed9) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"IsExperience",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463a4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463a4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
          ;
          goto label_18201df4b;
        }
        bVar2 = System_String__op_Equality(name,"SaveExperienceCompletionTime",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463bd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463bd = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0;
      }
    }
    else if (uVar3 < 0x55e82501) {
      if (0x4e95b0ed < uVar3) {
        if (uVar3 < 0x4f326cfd) {
          if (uVar3 != 0x4f00efb2) {
            if (uVar3 != 0x4f326cfc) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"SpawnHumanAt",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463d7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463d7 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0;
            goto label_182020841;
          }
          bVar2 = System_String__op_Equality(name,"EndTimeLeft",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463a3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463a3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
          ;
        }
        else {
          if (uVar3 != 0x52ed1a20) {
            if (uVar3 != 0x55e82500) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"ShowScoreboardStatus",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463b8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463b8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____g
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____s
            ;
            goto label_18201c4c8;
          }
          bVar2 = System_String__op_Equality(name,"AITitans",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463a9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463a9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
          ;
        }
        goto label_18201df4b;
      }
      if (uVar3 < 0x459c1314) {
        if (uVar3 == 0x4514d439) {
          bVar2 = System_String__op_Equality(name,"SetPreloadGameMode",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463ca == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463ca = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0;
        }
        else {
          if (uVar3 != 0x459c1313) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"GetGeneralSetting",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463c2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463c2 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0;
        }
      }
      else {
        if (uVar3 == 0x4609842f) {
          bVar2 = System_String__op_Equality(name,"DefaultShowKillFeed",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463b4 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463b4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____ge
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____se
          ;
          goto label_18201c4c8;
        }
        if (uVar3 != 0x4e95b0ed) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"SpawnPlayer",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463dd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463dd = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0;
      }
    }
    else if (uVar3 < 0x5ea6cd54) {
      if (uVar3 < 0x5d069fc9) {
        if (uVar3 != 0x5c14003e) {
          if (uVar3 != 0x5d069fc8) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"DefaultHideKillScore",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463b5 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463b5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____s
          ;
          goto label_18201c4c8;
        }
        bVar2 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463a8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463a8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
        ;
        goto label_18201df4b;
      }
      if (uVar3 == 0x5e4e5f76) {
        bVar2 = System_String__op_Equality(name,"ShowKillScore",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463e4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463e4 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0;
      }
      else {
        if (uVar3 != 0x5ea6cd53) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"SpawnTitans",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463d1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463d1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0;
      }
    }
    else if (uVar3 < 0x62485e87) {
      if (uVar3 == 0x619baabe) {
        bVar2 = System_String__op_Equality(name,"CanSaveExperienceScore",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463a6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463a6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
        ;
        goto label_18201df4b;
      }
      if (uVar3 != 0x62485e86) goto label_18202087d;
      bVar2 = System_String__op_Equality(name,"SpawnTitansAt",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463d3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0;
    }
    else if (uVar3 == 0x66ef4f10) {
      bVar2 = System_String__op_Equality(name,"SpawnPlayerAt",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463df == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463df = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0;
    }
    else {
      if (uVar3 != 0x6d57abb9) {
        if (uVar3 != 0x6e104b4e) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"PlayerHumans",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463b1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463b1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
        ;
        goto label_18201df4b;
      }
      bVar2 = System_String__op_Equality(name,"GetMiscSetting",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463c4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463c4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0;
    }
  }
  else if (uVar3 < 0xc4c554de) {
    if (uVar3 < 0x9061daa7) {
      if (uVar3 < 0x7b40a20a) {
        if (uVar3 < 0x770cabbb) {
          if (uVar3 == 0x73e55886) {
            bVar2 = System_String__op_Equality(name,"SetPreloadMap",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463c9 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0;
          }
          else {
            if (uVar3 != 0x770cabba) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"SetSong",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463e2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843463e2 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0;
            if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
            __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_02,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0 =
                 (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0;
          }
        }
        else if (uVar3 == 0x7a63a383) {
          bVar2 = System_String__op_Equality(name,"SpawnPlayerAtAll",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463e0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463e0 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0;
        }
        else {
          if (uVar3 != 0x7b40a209) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"SetPreloadModeSetting",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463c8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463c8 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0;
        }
      }
      else if (uVar3 < 0x8da9183e) {
        if (uVar3 == 0x86a5057c) {
          bVar2 = System_String__op_Equality(name,"SpawnPlayerAll",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463de == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463de = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0;
        }
        else {
          if (uVar3 != 0x8da9183d) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"DrawRay",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463e3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463e3 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0;
        }
      }
      else {
        if (uVar3 != 0x8deaef15) {
          if (uVar3 != 0x9061daa6) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"IsEnding",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463a2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
          ;
          goto label_18201df4b;
        }
        bVar2 = System_String__op_Equality(name,"SpawnTitansAsync",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463d2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463d2 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0;
      }
    }
    else {
      if (uVar3 < 0xa0137020) {
        if (uVar3 < 0x935c8bb0) {
          if (uVar3 == 0x930b044b) {
            bVar2 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463af == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463af = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
            ;
          }
          else {
            if (uVar3 != 0x935c8baf) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"AIShifters",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463ac == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463ac = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
            ;
          }
        }
        else {
          if (uVar3 != 0x947f7155) {
            if (uVar3 != 0xa013701f) goto label_18202087d;
            bVar2 = System_String__op_Equality(name,"DefaultShowKillScore",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463b3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463b3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____g
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____s
            ;
            goto label_18201c4c8;
          }
          bVar2 = System_String__op_Equality(name,"AIHumans",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463b0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463b0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
          ;
        }
label_18201df4b:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
label_18201df6d:
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)__this_00,
                   (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor)
        ;
        return (CustomLogic_ICLMemberBinding_o *)__this_01;
      }
      if (uVar3 < 0xbc3a7c7a) {
        if (uVar3 == 0xa100db20) {
          bVar2 = System_String__op_Equality(name,"PlayerShifters",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463ad == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463ad = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
          ;
          goto label_18201df4b;
        }
        if (uVar3 != 0xbc3a7c79) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"LoadPreloadPreset",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463cb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463cb = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0;
      }
      else if (uVar3 == 0xbcac6db6) {
        bVar2 = System_String__op_Equality(name,"SetPreloadTitanSetting",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463c6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463c6 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0;
      }
      else {
        if (uVar3 != 0xc008ebe1) {
          if (uVar3 != 0xc4c554dd) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"Shifters",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463ab == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463ab = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
          ;
          goto label_18201df4b;
        }
        bVar2 = System_String__op_Equality(name,"SpawnHuman",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463d6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463d6 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0;
      }
    }
  }
  else if (uVar3 < 0xe5ac988a) {
    if (uVar3 < 0xcf93764b) {
      if (uVar3 < 0xcc06912c) {
        if (uVar3 == 0xc7260798) {
          bVar2 = System_String__op_Equality(name,"ShowKillFeed",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463e5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463e5 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0;
        }
        else {
          if (uVar3 != 0xcc06912b) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"PrintAll",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463c1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463c1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0;
        }
      }
      else {
        if (uVar3 == 0xce302050) {
          bVar2 = System_String__op_Equality(name,"Loadouts",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463b2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            Il2CppMethodInitialized_1843463b2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
          ;
          goto label_18201df4b;
        }
        if (uVar3 != 0xcf93764a) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"End",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463cd = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0;
      }
    }
    else if (uVar3 < 0xdbc1608d) {
      if (uVar3 == 0xd14f5a0c) {
        bVar2 = System_String__op_Equality(name,"ExperienceID",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463a5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
        ;
        goto label_18201df4b;
      }
      if (uVar3 != 0xdbc1608c) goto label_18202087d;
      bVar2 = System_String__op_Equality(name,"RestartWithPreloadSettings",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463cc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463cc = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0;
    }
    else if (uVar3 == 0xe19eaead) {
      bVar2 = System_String__op_Equality(name,"SpawnHorse",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463be = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0;
    }
    else {
      if (uVar3 == 0xe3470562) {
        bVar2 = System_String__op_Equality(name,"ShowScoreboardLoadout",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_409f720
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463b7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_409f720
        ;
        goto label_18201c4c8;
      }
      if (uVar3 != 0xe5ac9889) goto label_18202087d;
      bVar2 = System_String__op_Equality(name,"SpawnEffect",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463db == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463db = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0;
    }
  }
  else {
    if (0xeb1c5d32 < uVar3) {
      if (uVar3 < 0xf1244ac1) {
        if (uVar3 == 0xeb1f3d1a) {
          bVar2 = System_String__op_Equality(name,"SpawnTitansAtAsync",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463d4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463d4 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0;
          goto label_182020841;
        }
        if (uVar3 != 0xf1244ac0) {
label_18202087d:
          pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGameBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
          pMVar5 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
        }
        bVar2 = System_String__op_Equality(name,"ForcedLoadout",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463ba == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463ba = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____getter_2
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____setter_2
        ;
      }
      else {
        if (uVar3 != 0xf6719867) {
          if (uVar3 == 0xf6b9b56f) {
            bVar2 = System_String__op_Equality(name,"Horses",(MethodInfo *)0x0);
            if (!bVar2) goto label_18202087d;
            if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843463ae == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
              Il2CppMethodInitialized_1843463ae = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
            ;
            goto label_18201df4b;
          }
          if (uVar3 != 0xfbcf6143) goto label_18202087d;
          bVar2 = System_String__op_Equality(name,"GetExperienceScore",(MethodInfo *)0x0);
          if (!bVar2) goto label_18202087d;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843463bb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843463bb = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0;
          if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
          if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0 =
               (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0;
          goto label_182020841;
        }
        bVar2 = System_String__op_Equality(name,"ForcedCharacterType",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463b9 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
          Il2CppMethodInitialized_1843463b9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____ge
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____se
        ;
      }
label_18201c4c8:
      System_Action_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
      goto label_18201df6d;
    }
    if (uVar3 < 0xe7990e31) {
      if (uVar3 == 0xe6a5bf31) {
        bVar2 = System_String__op_Equality(name,"GetTitanSetting",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463c3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463c3 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0;
      }
      else {
        if (uVar3 != 0xe7990e30) goto label_18202087d;
        bVar2 = System_String__op_Equality(name,"FindCharacterByViewID",(MethodInfo *)0x0);
        if (!bVar2) goto label_18202087d;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843463ce == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843463ce = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
        if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0 =
             (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0;
      }
    }
    else if (uVar3 == 0xe8320d28) {
      bVar2 = System_String__op_Equality(name,"Print",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463c0 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0;
    }
    else {
      if (uVar3 != 0xeb1c5d32) goto label_18202087d;
      bVar2 = System_String__op_Equality(name,"SpawnTitan",(MethodInfo *)0x0);
      if (!bVar2) goto label_18202087d;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843463cf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843463cf = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182020849;
      if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0 =
           (System_Func_CustomLogicGameBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0;
    }
  }
label_182020841:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_02);
label_182020849:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_02,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsEnding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding (const MethodInfo* method);
// 0x18202e790

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsEnding(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsEnding_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__EndTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft (const MethodInfo* method);
// 0x18202e330

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__EndTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__EndTimeLeft_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__IsExperience
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsExperience (const MethodInfo* method);
// 0x18202e830

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__IsExperience(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__IsExperience_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ExperienceID (const MethodInfo* method);
// 0x18202e3d0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ExperienceID(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__CanSaveExperienceScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__CanSaveExperienceScore (const MethodInfo* method);
// 0x18202dd40

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__CanSaveExperienceScore
          (MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__CanSaveExperienceScore_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__MainCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__MainCharacter (const MethodInfo* method);
// 0x18202eab0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__MainCharacter(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__MainCharacter_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x18202f2d0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Titans_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AITitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans (const MethodInfo* method);
// 0x18202dca0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AITitans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AITitans_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerTitans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans (const MethodInfo* method);
// 0x18202ef10

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerTitans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463aa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerTitans_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Shifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters (const MethodInfo* method);
// 0x18202f050

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Shifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Shifters_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters (const MethodInfo* method);
// 0x18202dc00

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIShifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIShifters_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerShifters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters (const MethodInfo* method);
// 0x18202ee70

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerShifters(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerShifters_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Horses
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Horses (const MethodInfo* method);
// 0x18202e650

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Horses(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Horses_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x18202e6f0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Humans_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__AIHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans (const MethodInfo* method);
// 0x18202db60

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__AIHumans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__AIHumans_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__PlayerHumans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans (const MethodInfo* method);
// 0x18202edd0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__PlayerHumans(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__PlayerHumans_g____getter_17
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__Loadouts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts (const MethodInfo* method);
// 0x18202ea10

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__Loadouts(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843463b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463b2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__Loadouts_g____getter_18_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore (const MethodInfo* method);
// 0x18202e240

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b3 == '\0') {
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
    Il2CppMethodInitialized_1843463b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillScore_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultShowKillFeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillFeed (const MethodInfo* method);
// 0x18202e150

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultShowKillFeed(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b4 == '\0') {
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
    Il2CppMethodInitialized_1843463b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultShowKillFeed_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultHideKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore (const MethodInfo* method);
// 0x18202df70

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultHideKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b5 == '\0') {
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
    Il2CppMethodInitialized_1843463b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultHideKillScore_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__DefaultAddKillScore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore (const MethodInfo* method);
// 0x18202de80

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__DefaultAddKillScore(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b6 == '\0') {
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
    Il2CppMethodInitialized_1843463b6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__DefaultAddKillScore_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout (const MethodInfo* method);
// 0x18202f0f0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardLoadout
          (MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicGameBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_409f720
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGameBuiltin_object);
    Il2CppMethodInitialized_1843463b7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardLoadout_g_409f720
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ShowScoreboardStatus
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus (const MethodInfo* method);
// 0x18202f1e0

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ShowScoreboardStatus(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b8 == '\0') {
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
    Il2CppMethodInitialized_1843463b8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ShowScoreboardStatus_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedCharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType (const MethodInfo* method);
// 0x18202e470

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedCharacterType(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463b9 == '\0') {
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
    Il2CppMethodInitialized_1843463b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedCharacterType_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreatePropertyBinding__ForcedLoadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout (const MethodInfo* method);
// 0x18202e560

CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreatePropertyBinding__ForcedLoadout(MethodInfo *method)

{
  System_Func_CustomLogicGameBuiltin__object__o *__this;
  System_Action_CustomLogicGameBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843463ba == '\0') {
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
    Il2CppMethodInitialized_1843463ba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicGameBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings___CreatePropertyBinding__ForcedLoadout_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGameBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetExperienceScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetExperienceScore (const MethodInfo* method);
// 0x1820277b0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetExperienceScore(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463bb == '\0') {
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
    Il2CppMethodInitialized_1843463bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetExperienceScore_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceScore (const MethodInfo* method);
// 0x18202a170

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceScore(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463bc == '\0') {
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
    Il2CppMethodInitialized_1843463bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceScore_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SaveExperienceCompletionTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceCompletionTime (const MethodInfo* method);
// 0x18202a050

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SaveExperienceCompletionTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463bd == '\0') {
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
    Il2CppMethodInitialized_1843463bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SaveExperienceCompletionTim
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHorse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHorse (const MethodInfo* method);
// 0x18202c050

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHorse(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463be == '\0') {
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
    Il2CppMethodInitialized_1843463be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHorse_b__30_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Debug
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug (const MethodInfo* method);
// 0x1820260f0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Debug(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843463bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Debug_b__31_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__Print
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print (const MethodInfo* method);
// 0x182029860

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__Print(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843463c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__Print_b__32_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__PrintAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll (const MethodInfo* method);
// 0x182029740

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__PrintAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c1 == '\0') {
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
    Il2CppMethodInitialized_1843463c1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__PrintAll_b__33_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting (const MethodInfo* method);
// 0x1820278d0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetGeneralSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c2 == '\0') {
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
    Il2CppMethodInitialized_1843463c2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetGeneralSetting_b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting (const MethodInfo* method);
// 0x1820289b0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetTitanSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c3 == '\0') {
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
    Il2CppMethodInitialized_1843463c3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetTitanSetting_b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__GetMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting (const MethodInfo* method);
// 0x182027e70

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__GetMiscSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c4 == '\0') {
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
    Il2CppMethodInitialized_1843463c4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__GetMiscSetting_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGeneralSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting (const MethodInfo* method);
// 0x18202b040

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGeneralSetting
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c5 == '\0') {
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
    Il2CppMethodInitialized_1843463c5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGeneralSetting_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadTitanSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting (const MethodInfo* method);
// 0x18202b4c0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadTitanSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c6 == '\0') {
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
    Il2CppMethodInitialized_1843463c6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadTitanSetting_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMiscSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting (const MethodInfo* method);
// 0x18202b280

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMiscSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c7 == '\0') {
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
    Il2CppMethodInitialized_1843463c7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMiscSetting_b__39
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadModeSetting
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting (const MethodInfo* method);
// 0x18202b3a0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadModeSetting(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c8 == '\0') {
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
    Il2CppMethodInitialized_1843463c8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadModeSetting_b__40
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadMap
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap (const MethodInfo* method);
// 0x18202b160

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadMap(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463c9 == '\0') {
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
    Il2CppMethodInitialized_1843463c9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadMap_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPreloadGameMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode (const MethodInfo* method);
// 0x18202af10

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPreloadGameMode(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ca == '\0') {
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
    Il2CppMethodInitialized_1843463ca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPreloadGameMode_b__42_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__LoadPreloadPreset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset (const MethodInfo* method);
// 0x1820293d0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__LoadPreloadPreset(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463cb == '\0') {
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
    Il2CppMethodInitialized_1843463cb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__LoadPreloadPreset_b__43_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__RestartWithPreloadSettings
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings (const MethodInfo* method);
// 0x182029f20

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__RestartWithPreloadSettings
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463cc == '\0') {
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
    Il2CppMethodInitialized_1843463cc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__RestartWithPreloadSettings
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__44_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__End
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End (const MethodInfo* method);
// 0x1820266b0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__End(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843463cd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__End_b__45_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__45_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__FindCharacterByViewID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID (const MethodInfo* method);
// 0x182026a20

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__FindCharacterByViewID(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463ce == '\0') {
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
    Il2CppMethodInitialized_1843463ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__FindCharacterByViewID_b__46
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__46_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan (const MethodInfo* method);
// 0x18202ce80

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitan(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463cf == '\0') {
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
    Il2CppMethodInitialized_1843463cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitan_b__47_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__47_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt (const MethodInfo* method);
// 0x18202cd50

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitanAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d0 == '\0') {
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
    Il2CppMethodInitialized_1843463d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitanAt_b__48_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__48_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitans
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans (const MethodInfo* method);
// 0x18202d340

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitans(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d1 == '\0') {
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
    Il2CppMethodInitialized_1843463d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitans_b__49_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__49_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync (const MethodInfo* method);
// 0x18202cfb0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAsync(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d2 == '\0') {
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
    Il2CppMethodInitialized_1843463d2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAsync_b__50_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__50_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt (const MethodInfo* method);
// 0x18202d210

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d3 == '\0') {
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
    Il2CppMethodInitialized_1843463d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAt_b__51_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__51_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnTitansAtAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync (const MethodInfo* method);
// 0x18202d0e0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnTitansAtAsync(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d4 == '\0') {
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
    Il2CppMethodInitialized_1843463d4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnTitansAtAsync_b__52_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__52_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter (const MethodInfo* method);
// 0x18202cc20

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifter(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d5 == '\0') {
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
    Il2CppMethodInitialized_1843463d5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifter_b__53_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__53_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHuman
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman (const MethodInfo* method);
// 0x18202c2a0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHuman(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d6 == '\0') {
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
    Il2CppMethodInitialized_1843463d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHuman_b__54_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__54_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnHumanAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt (const MethodInfo* method);
// 0x18202c170

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnHumanAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d7 == '\0') {
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
    Il2CppMethodInitialized_1843463d7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnHumanAt_b__55_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__55_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnShifterAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt (const MethodInfo* method);
// 0x18202caf0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnShifterAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d8 == '\0') {
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
    Il2CppMethodInitialized_1843463d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnShifterAt_b__56_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__56_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile (const MethodInfo* method);
// 0x18202c9c0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectile(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463d9 == '\0') {
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
    Il2CppMethodInitialized_1843463d9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectile_b__57_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__57_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnProjectileWithOwner
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner (const MethodInfo* method);
// 0x18202c890

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnProjectileWithOwner
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463da == '\0') {
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
    Il2CppMethodInitialized_1843463da = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnProjectileWithOwner_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__58_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect (const MethodInfo* method);
// 0x18202bf20

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnEffect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463db == '\0') {
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
    Il2CppMethodInitialized_1843463db = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnEffect_b__59_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__59_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnUnscaledEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect (const MethodInfo* method);
// 0x18202d470

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnUnscaledEffect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463dc == '\0') {
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
    Il2CppMethodInitialized_1843463dc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnUnscaledEffect_b__60_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__60_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer (const MethodInfo* method);
// 0x18202c760

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayer(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463dd == '\0') {
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
    Il2CppMethodInitialized_1843463dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayer_b__61_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__61_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll (const MethodInfo* method);
// 0x18202c3d0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463de == '\0') {
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
    Il2CppMethodInitialized_1843463de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAll_b__62_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__62_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt (const MethodInfo* method);
// 0x18202c630

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463df == '\0') {
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
    Il2CppMethodInitialized_1843463df = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAt_b__63_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__63_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SpawnPlayerAtAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll (const MethodInfo* method);
// 0x18202c500

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SpawnPlayerAtAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e0 == '\0') {
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
    Il2CppMethodInitialized_1843463e0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SpawnPlayerAtAll_b__64_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__64_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetPlaylist
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist (const MethodInfo* method);
// 0x18202ade0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetPlaylist(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e1 == '\0') {
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
    Il2CppMethodInitialized_1843463e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetPlaylist_b__65_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__65_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__SetSong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong (const MethodInfo* method);
// 0x18202b820

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__SetSong(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e2 == '\0') {
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
    Il2CppMethodInitialized_1843463e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__SetSong_b__66_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__66_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__DrawRay
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay (const MethodInfo* method);
// 0x182026580

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__DrawRay(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e3 == '\0') {
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
    Il2CppMethodInitialized_1843463e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__DrawRay_b__67_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__67_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillScore
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore (const MethodInfo* method);
// 0x18202bdf0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillScore(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e4 == '\0') {
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
    Il2CppMethodInitialized_1843463e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillScore_b__68_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__68_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed (const MethodInfo* method);
// 0x18202bcc0

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e5 == '\0') {
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
    Il2CppMethodInitialized_1843463e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeed_b__69_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__69_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$__CreateMethodBinding__ShowKillFeedAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o* CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll (const MethodInfo* method);
// 0x18202bb90

CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *
CustomLogic_CustomLogicGameBuiltin_Bindings____CreateMethodBinding__ShowKillFeedAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843463e6 == '\0') {
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
    Il2CppMethodInitialized_1843463e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicGameBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c___CreateMethodBinding__ShowKillFeedAll_b__70_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0 =
         (System_Func_CustomLogicGameBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings_c->static_fields->__9__70_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicGameBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicGameBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18202f370

void CustomLogic_CustomLogicGameBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843463e7 == '\0') {
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
    Il2CppMethodInitialized_1843463e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsEnding",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsExperience",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExperienceID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanSaveExperienceScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MainCharacter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AITitans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerTitans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shifters",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIShifters",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerShifters",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horses",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Humans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIHumans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayerHumans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loadouts",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultShowKillScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultShowKillFeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultHideKillScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultAddKillScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowScoreboardLoadout",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowScoreboardStatus",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForcedCharacterType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForcedLoadout",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetExperienceScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveExperienceScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveExperienceCompletionTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHorse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Debug",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Print",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PrintAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetGeneralSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTitanSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMiscSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadGeneralSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadTitanSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadMiscSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadModeSetting",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadMap",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPreloadGameMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadPreloadPreset",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RestartWithPreloadSettings",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"End",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindCharacterByViewID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitanAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitans",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAsync",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnTitansAtAsync",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnShifter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHuman",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnHumanAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnShifterAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnProjectile",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnProjectileWithOwner",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnEffect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnUnscaledEffect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPlayerAtAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPlaylist",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSong",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DrawRay",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillScore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillFeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowKillFeedAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsEnding>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsEnding_g____getter_2_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024da0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsEnding_g____getter_2_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_IsEnding(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__EndTimeLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__EndTimeLeft_g____getter_3_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024bc0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__EndTimeLeft_g____getter_3_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__IsExperience>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsExperience_g____getter_4_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024dd0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__IsExperience_g____getter_4_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_IsExperience(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_5_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024c00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_5_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicGameBuiltin__get_ExperienceID(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__CanSaveExperienceScore>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__CanSaveExperienceScore_g____getter_6_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024700

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__CanSaveExperienceScore_g____getter_6_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__MainCharacter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__MainCharacter_g____getter_7_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024f20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__MainCharacter_g____getter_7_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_MainCharacter(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Titans>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Titans_g____getter_8_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182025470

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Titans_g____getter_8_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Titans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AITitans>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AITitans_g____getter_9_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820246e0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AITitans_g____getter_9_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AITitans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerTitans>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerTitans_g____getter_10_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182025140

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerTitans_g____getter_10_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Shifters>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Shifters_g____getter_11_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820252f0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Shifters_g____getter_11_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Shifters(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIShifters>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIShifters_g____getter_12_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820246c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIShifters_g____getter_12_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AIShifters(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerShifters>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerShifters_g____getter_13_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182025120

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerShifters_g____getter_13_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Horses>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Horses_g____getter_14_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024d60

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Horses_g____getter_14_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Horses(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Humans>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Humans_g____getter_15_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024d80

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Humans_g____getter_15_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Humans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__AIHumans>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIHumans_g____getter_16_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820246a0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__AIHumans_g____getter_16_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_AIHumans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__PlayerHumans>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerHumans_g____getter_17_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182025100

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__PlayerHumans_g____getter_17_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__Loadouts>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Loadouts_g____getter_18_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024f00

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__Loadouts_g____getter_18_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicGameBuiltin__get_Loadouts(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____getter_19_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024b10

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____getter_19_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillScore>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____setter_19_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182024b40

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillScore_g____setter_19_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____getter_20_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024870

Il2CppObject*
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____getter_20_0(CustomLogic_CustomLogicGameBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultShowKillFeed>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____setter_20_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182024a90

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultShowKillFeed_g____setter_20_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____getter_21_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024870

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____getter_21_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultHideKillScore>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____setter_21_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820248a0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultHideKillScore_g____setter_21_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____getter_22_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820247c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____getter_22_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__DefaultAddKillScore>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____setter_22_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820247f0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__DefaultAddKillScore_g____setter_22_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_23_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182025310

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____getter_23_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardLoadout>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_23_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182025340

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardLoadout_g____setter_23_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____getter_24_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x1820253c0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____getter_24_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ShowScoreboardStatus>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____setter_24_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820253f0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ShowScoreboardStatus_g____setter_24_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_1843463ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____getter_25_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024c20

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____getter_25_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedCharacterType>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____setter_25_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182024c40

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedCharacterType_g____setter_25_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843463ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____getter_26_0 (CustomLogic_CustomLogicGameBuiltin_o* __i, const MethodInfo* method);
// 0x182024cc0

Il2CppObject *
CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____getter_26_0
          (CustomLogic_CustomLogicGameBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.Bindings$$<__CreatePropertyBinding__ForcedLoadout>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____setter_26_1 (CustomLogic_CustomLogicGameBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182024ce0

void CustomLogic_CustomLogicGameBuiltin_Bindings_____CreatePropertyBinding__ForcedLoadout_g____setter_26_1
               (CustomLogic_CustomLogicGameBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843463ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843463ef = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicGameBuiltin_o *)0x0) {
    CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___cctor (const MethodInfo* method);
// 0x182044c00

void CustomLogic_CustomLogicGameBuiltin___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin___c_o *__this;
  
  if (Il2CppMethodInitialized_184346418 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    Il2CppMethodInitialized_184346418 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___c___ctor (CustomLogic_CustomLogicGameBuiltin___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicGameBuiltin___c___ctor(CustomLogic_CustomLogicGameBuiltin___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin.<>c$$<get_Loadouts>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin___c___get_Loadouts_b__43_0 (CustomLogic_CustomLogicGameBuiltin___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x1808e13a0

Il2CppObject*
CustomLogic_CustomLogicGameBuiltin___c___get_Loadouts_b__43_0(CustomLogic_CustomLogicGameBuiltin___c_o* __this, System_String_o* x, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// CustomLogic.CustomLogicGameBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicGameBuiltin___ctor (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182011ed0

void CustomLogic_CustomLogicGameBuiltin___ctor
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_Dictionary_string__CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434630e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin);
    Il2CppMethodInitialized_18434630e = '\x01';
  }
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._lastSetTopLabel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSetTopLabel,value);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ctor);
  (__this->fields)._cachedLists = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedLists,__this_00);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$get__inGameManager
// il2cpp: GameManagers_InGameManager_o* CustomLogic_CustomLogicGameBuiltin__get__inGameManager (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182014600

GameManagers_InGameManager_o *
CustomLogic_CustomLogicGameBuiltin__get__inGameManager
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_18434630f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434630f = '\x01';
  }
  pGVar2 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2,TypeInfo_GameManagers_InGameManager);
    }
  }
  return pGVar2;
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsEnding
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsEnding (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182013260

bool CustomLogic_CustomLogicGameBuiltin__get_IsEnding
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  
  pGVar1 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
    return (pGVar1->fields).IsEnding;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_EndTimeLeft
// il2cpp: float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012b60

float CustomLogic_CustomLogicGameBuiltin__get_EndTimeLeft
                (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  
  pGVar1 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
    return (pGVar1->fields).EndTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsExperience
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsExperience (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182013280

bool CustomLogic_CustomLogicGameBuiltin__get_IsExperience
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346310 = '\x01';
  }
  bVar1 = Settings_ExperienceIdentity__IsExperience
                    (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$get_ExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ExperienceID (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012b80

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ExperienceID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346311 = '\x01';
  }
  pSVar1 = Settings_ExperienceIdentity__GetId
                     (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$get_CanSaveExperienceScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012930

bool CustomLogic_CustomLogicGameBuiltin__get_CanSaveExperienceScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346312 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
    return false;
  }
  bVar1 = Settings_ExperienceIdentity__HasScoring
                    (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$GetExperienceScore
// il2cpp: CustomLogic_CustomLogicExperienceScoreBuiltin_o* CustomLogic_CustomLogicGameBuiltin__GetExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x18200da10

CustomLogic_CustomLogicExperienceScoreBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__GetExperienceScore
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *__this_00;
  System_String_o *experienceID;
  Settings_ExperienceScoreRecord_o *value;
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184346313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    Il2CppMethodInitialized_184346313 = '\x01';
  }
  experienceID = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  }
  __this_00 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
  if (__this_00 != (Settings_ExperienceScoreStore_o *)0x0) {
    value = Settings_ExperienceScoreStore__Get(__this_00,experienceID,(MethodInfo *)0x0);
    if (value != (Settings_ExperienceScoreRecord_o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
      if (Il2CppMethodInitialized_184346306 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346306 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields)._record = value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._record,value);
      return __this_01;
    }
    return (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SaveExperienceScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore (CustomLogic_CustomLogicGameBuiltin_o* __this, float score, System_String_o* unit, bool lowerIsBetter, const MethodInfo* method);
// 0x18200e6b0

void CustomLogic_CustomLogicGameBuiltin__SaveExperienceScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float score,System_String_o *unit,
               bool lowerIsBetter,MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *__this_00;
  System_String_o *pSVar1;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this_01;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184346314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346314 = '\x01';
  }
  pSVar1 = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode != false) {
    if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
    }
    __this_00 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
    if (__this_00 != (Settings_ExperienceScoreStore_o *)0x0) {
      Settings_ExperienceScoreStore__Save(__this_00,pSVar1,score,unit,lowerIsBetter,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
  __this_01 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
  pSVar1 = il2cpp_codegen_get_runtime_metadata(&"Experience scores can only be saved in singleplayer.");
  System_InvalidOperationException___ctor_1b2aec0(__this_01,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceScore)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicGameBuiltin$$SaveExperienceCompletionTime
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime (CustomLogic_CustomLogicGameBuiltin_o* __this, float elapsed, const MethodInfo* method);
// 0x18200e2d0

void CustomLogic_CustomLogicGameBuiltin__SaveExperienceCompletionTime
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float elapsed,MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Settings_ExperienceScoreRecord_o *pSVar4;
  CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this_00;
  System_String_o *pSVar5;
  System_ArgumentOutOfRangeException_o *__this_01;
  Il2CppClass *pIVar6;
  System_InvalidOperationException_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184346315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_184346315 = '\x01';
  }
  if (Il2CppMethodInitialized_184346312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346312 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) ||
     (bVar2 = Settings_ExperienceIdentity__HasScoring
                        (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0),
     !bVar2)) {
    return;
  }
  if (((0x7f800000 < (uint)ABS(elapsed)) || (ABS(elapsed) == INFINITY)) || (elapsed < 0.0)) {
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar6);
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Completion time must be finite and nonnegative.");
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"elapsed");
    System_ArgumentOutOfRangeException___ctor_1a78390(__this_01,pSVar5,pSVar3,(MethodInfo *)0x0);
    pMVar7 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceCompletionTime);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar7);
  }
  if (Il2CppMethodInitialized_184346313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    Il2CppMethodInitialized_184346313 = '\x01';
  }
  pSVar3 = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  }
  pSVar1 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
  if (pSVar1 != (Settings_ExperienceScoreStore_o *)0x0) {
    pSVar4 = Settings_ExperienceScoreStore__Get(pSVar1,pSVar3,(MethodInfo *)0x0);
    if (pSVar4 != (Settings_ExperienceScoreRecord_o *)0x0) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin);
      if (Il2CppMethodInitialized_184346306 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346306 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._record = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._record,pSVar4);
      pSVar4 = (__this_00->fields)._record;
      if (pSVar4 == (Settings_ExperienceScoreRecord_o *)0x0) goto label_18200e69b;
      bVar2 = System_String__op_Inequality((pSVar4->fields).Unit,"s",(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar4 = (__this_00->fields)._record;
        if (pSVar4 == (Settings_ExperienceScoreRecord_o *)0x0) goto label_18200e69b;
        if (((pSVar4->fields).LowerIsBetter != false) && ((pSVar4->fields).Score <= elapsed)) {
          return;
        }
      }
    }
    pSVar3 = "s";
    if (Il2CppMethodInitialized_184346314 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      Il2CppMethodInitialized_184346314 = '\x01';
    }
    pSVar5 = CustomLogic_CustomLogicGameBuiltin__RequireExperienceID(__this,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    if (Il2CppMethodInitialized_184344524 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      Il2CppMethodInitialized_184344524 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
      pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_02 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar6);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Experience scores can only be saved in singleplayer.");
      System_InvalidOperationException___ctor_1b2aec0(__this_02,pSVar3,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SaveExperienceScore);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
    }
    if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
    }
    pSVar1 = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
    if (pSVar1 != (Settings_ExperienceScoreStore_o *)0x0) {
      Settings_ExperienceScoreStore__Save(pSVar1,pSVar5,elapsed,pSVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
label_18200e69b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$RequireExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__RequireExperienceID (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x18200e130

System_String_o *
CustomLogic_CustomLogicGameBuiltin__RequireExperienceID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppClass *pIVar3;
  System_InvalidOperationException_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_184346316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346316 = '\x01';
  }
  if (Il2CppMethodInitialized_184346311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346311 = '\x01';
  }
  pSVar2 = Settings_ExperienceIdentity__GetId
                     (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = Settings_ExperienceIdentity__HasScoring
                      (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,(MethodInfo *)0x0);
    if (bVar1) {
      return pSVar2;
    }
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    pSVar4 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar3);
    pSVar2 = il2cpp_codegen_get_runtime_metadata(&"This experience does not have a scoring system.");
    System_InvalidOperationException___ctor_1b2aec0(pSVar4,pSVar2,(MethodInfo *)0x0);
    pMVar5 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_RequireExperienceID);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
  }
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
  pSVar4 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(pIVar3);
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Experience scores are only available in an official experience.");
  System_InvalidOperationException___ctor_1b2aec0(pSVar4,pSVar2,(MethodInfo *)0x0);
  pMVar5 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_RequireExperienceID);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar5);
}


// CustomLogic.CustomLogicGameBuiltin$$get_MainCharacter
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_MainCharacter (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182013450

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_MainCharacter
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *character;
  bool bVar1;
  GameManagers_InGameManager_o *pGVar2;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346317 = '\x01';
  }
  pGVar2 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  character = (pGVar2->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
    return pCVar3;
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$get_Titans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Titans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182014320
// eh: try 0x1820144b1..0x1820145f4 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18201455f: mov rdx, qword ptr [rip + 0x20629ea]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x182014566: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18201456b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182014570: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182014575: test rcx, rcx
// asm:   0x182014578: jne 0x1820145f4
// asm:   0x18201457a: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x182014582: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x1820145f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Titans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_BasicTitan_o *titan;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_BasicTitan_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_BasicTitan_o *local_38;
  
  if (Il2CppMethodInitialized_184346318 == '\0') {
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
    Il2CppMethodInitialized_184346318 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_BasicTitan_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1820145dd;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Titans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Titans,true,true,false,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Titans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_1820145dd;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      titan = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titan,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (titan == (Characters_BasicTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((titan->fields).Dead == false) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
          CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820145dd;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"Titans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"Titans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_1820145dd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AITitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AITitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012640
// eh: try 0x1820127d1..0x18201291d -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182012888: mov rdx, qword ptr [rip + 0x20646c1]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x18201288f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182012894: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182012899: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18201289e: test rcx, rcx
// asm:   0x1820128a1: jne 0x18201291d
// asm:   0x1820128a3: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x1820128ab: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x18201291d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AITitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_BasicTitan_o *titan;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_BasicTitan_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_BasicTitan_o *local_38;
  
  if (Il2CppMethodInitialized_184346319 == '\0') {
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
    Il2CppMethodInitialized_184346319 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_BasicTitan_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182012906;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AITitans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Titans,true,false,false,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Titans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182012906;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      titan = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titan,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (titan == (Characters_BasicTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((titan->fields).Dead == false) && ((titan->fields).AI != false)) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
          CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182012906;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"AITitans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"AITitans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182012906:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182013ba0
// eh: try 0x182013d31..0x182013e7d -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182013de8: mov rdx, qword ptr [rip + 0x2063161]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x182013def: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182013df4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182013df9: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182013dfe: test rcx, rcx
// asm:   0x182013e01: jne 0x182013e7d
// asm:   0x182013e03: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x182013e0b: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x182013e7d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_BasicTitan_o *titan;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_BasicTitan_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_BasicTitan_o *local_38;
  
  if (Il2CppMethodInitialized_18434631a == '\0') {
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
    Il2CppMethodInitialized_18434631a = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_BasicTitan_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182013e66;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerTitans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Titans,false,true,false,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BasicTitan);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Titans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182013e66;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
      titan = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titan,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (titan == (Characters_BasicTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((titan->fields).Dead == false) && ((titan->fields).AI == false)) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
          CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182013e66;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"PlayerTitans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"PlayerTitans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182013e66:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Shifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Shifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182013e90
// eh: try 0x182014040..0x18201417c -> pad 0x183328840 catch Il2CppExceptionWrapper
// eh: try 0x18201417c..0x182014188 -> pad 0x180355990 cleanup
// eh: try 0x182014217..0x18201423a -> pad 0x183328840 catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182014039: nop dword ptr [rax]
// asm:   0x18201417c: jmp 0x182014132
// asm:   0x18201418f: mov rdx, qword ptr [rip + 0x206287a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x182014196: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18201419b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820141a0: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820141a5: test rcx, rcx
// asm:   0x1820141a8: jne 0x18201423a
// asm:   0x1820141ae: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x1820141b6: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x18201423a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Shifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_WallColossalShifter_o *shifter;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar6;
  undefined1 local_60 [16];
  Characters_WallColossalShifter_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_WallColossalShifter_o *local_38;
  
  if (Il2CppMethodInitialized_18434631b == '\0') {
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
    Il2CppMethodInitialized_18434631b = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_WallColossalShifter_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182014211;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Shifters",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Shifters,true,true,true,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Shifters,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182014211;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext),
          shifter = local_38, bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).Dead == false) || ((shifter->fields).TransformingToHuman != false)) {
          bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
             ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,
                       (Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          else {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
            bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
            if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
               ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
              il2cpp_codegen_raise_invalid_cast_exception(shifter);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          il2cpp_runtime_helper_180012890(pSVar6,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182014211;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"Shifters",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"Shifters",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182014211:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012280
// eh: try 0x182012430..0x182012575 -> pad 0x183328840 catch Il2CppExceptionWrapper
// eh: try 0x182012575..0x182012581 -> pad 0x180355990 cleanup
// eh: try 0x182012610..0x182012633 -> pad 0x183328840 catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182012429: nop dword ptr [rax]
// asm:   0x182012575: jmp 0x18201252b
// asm:   0x182012588: mov rdx, qword ptr [rip + 0x2064481]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x18201258f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182012594: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182012599: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18201259e: test rcx, rcx
// asm:   0x1820125a1: jne 0x182012633
// asm:   0x1820125a7: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x1820125af: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x182012633: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_WallColossalShifter_o *shifter;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar6;
  undefined1 local_60 [16];
  Characters_WallColossalShifter_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_WallColossalShifter_o *local_38;
  
  if (Il2CppMethodInitialized_18434631c == '\0') {
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
    Il2CppMethodInitialized_18434631c = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_WallColossalShifter_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_18201260a;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AIShifters",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Shifters,true,false,true,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Shifters,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_18201260a;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext),
          shifter = local_38, bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).AI != false) &&
           (((shifter->fields).Dead == false || ((shifter->fields).TransformingToHuman != false)))) {
          bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
             ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,
                       (Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          else {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
            bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
            if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
               ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
              il2cpp_codegen_raise_invalid_cast_exception(shifter);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          il2cpp_runtime_helper_180012890(pSVar6,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18201260a;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"AIShifters",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"AIShifters",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_18201260a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerShifters
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1820137e0
// eh: try 0x182013990..0x182013ad5 -> pad 0x183328840 catch Il2CppExceptionWrapper
// eh: try 0x182013ad5..0x182013ae1 -> pad 0x180355990 cleanup
// eh: try 0x182013b70..0x182013b93 -> pad 0x183328840 catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182013989: nop dword ptr [rax]
// asm:   0x182013ad5: jmp 0x182013a8b
// asm:   0x182013ae8: mov rdx, qword ptr [rip + 0x2062f21]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x182013aef: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182013af4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182013af9: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182013afe: test rcx, rcx
// asm:   0x182013b01: jne 0x182013b93
// asm:   0x182013b07: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x182013b0f: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x182013b93: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerShifters
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_WallColossalShifter_o *shifter;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar6;
  undefined1 local_60 [16];
  Characters_WallColossalShifter_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_WallColossalShifter_o *local_38;
  
  if (Il2CppMethodInitialized_18434631d == '\0') {
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
    Il2CppMethodInitialized_18434631d = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_WallColossalShifter_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182013b6a;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerShifters",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Shifters,false,true,true,
                     (MethodInfo_66F0F0 *)
                     MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_BaseShifter);
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Shifters,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182013b6a;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext),
          shifter = local_38, bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)shifter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (shifter == (Characters_WallColossalShifter_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((shifter->fields).AI == false) &&
           (((shifter->fields).Dead == false || ((shifter->fields).TransformingToHuman != false)))) {
          bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
          if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
             ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,
                       (Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          else {
            if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pCVar5->fields).List;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
            bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
            if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
               ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
              il2cpp_codegen_raise_invalid_cast_exception(shifter);
            }
            CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          il2cpp_runtime_helper_180012890(pSVar6,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182013b6a;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"PlayerShifters",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"PlayerShifters",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182013b6a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Horses
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Horses (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012ca0
// eh: try 0x182012e31..0x182012f74 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182012edf: mov rdx, qword ptr [rip + 0x206eda2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x182012ee6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182012eeb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182012ef0: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182012ef5: test rcx, rcx
// asm:   0x182012ef8: jne 0x182012f74
// asm:   0x182012efa: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x182012f02: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x182012f74: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Horses
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_Horse_o *horse;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_Horse_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_Horse_o *local_38;
  
  if (Il2CppMethodInitialized_18434631e == '\0') {
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
    Il2CppMethodInitialized_18434631e = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_Horse_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182012f5d;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Horses",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Horses,true,true,false,
                     (MethodInfo_66F0F0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Horse)
  ;
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Horses,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182012f5d;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
      horse = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)horse,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (horse == (Characters_Horse_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((horse->fields).Dead == false) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
          CustomLogic_CustomLogicHorseBuiltin___ctor(__this_01,horse,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182012f5d;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"Horses",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"Horses",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182012f5d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHorse
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHorse (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x18200f7d0

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHorse
          (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          float rotationY,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  System_String_o *name;
  bool bVar4;
  UnityEngine_Quaternion_o *pUVar5;
  Characters_Horse_o *horse;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_00;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_18434631f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_18434631f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((bVar4) && (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_48.x = (position->fields).Value.fields.x;
    local_48.y = (position->fields).Value.fields.y;
    local_48.z = (position->fields).Value.fields.z;
    bVar4 = Controllers_HorseController__IsFinite_20fdce0
                      ((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = Controllers_HorseController__IsFinite(rotationY,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        uVar1._0_4_ = (position->fields).Value.fields.x;
        uVar1._4_4_ = (position->fields).Value.fields.y;
        name = TypeInfo_Characters_CharacterPrefabs->static_fields->Horse;
        fVar3 = (position->fields).Value.fields.z;
        local_48._0_8_ = (ulonglong)(uint)(rotationY * 0.017453292) << 0x20;
        local_48.z = 0.0;
        pUVar5 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Quaternion_o *)local_38,(UnityEngine_Vector3_o *)&local_48,
                            (MethodInfo *)0x0);
        local_38[0].x = (pUVar5->fields).x;
        local_38[0].y = (pUVar5->fields).y;
        local_38[0].z = (pUVar5->fields).z;
        local_38[0].w = (pUVar5->fields).w;
        local_48._0_8_ = uVar1;
        local_48.z = fVar3;
        horse = (Characters_Horse_o *)
                Characters_CharacterSpawner__Spawn
                          (name,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,
                           (MethodInfo *)0x0);
        if (horse != (Characters_Horse_o *)0x0) {
          bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if (((horse->klass->_2).typeHierarchyDepth < bVar2) ||
             ((horse->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_Horse)) {
            il2cpp_codegen_raise_invalid_cast_exception(horse);
          }
        }
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        if (horse != (Characters_Horse_o *)0x0) {
          (*(horse->klass->vtable)._75_Init.methodPtr)
                    (horse,true,TypeInfo_GameManagers_TeamInfo->static_fields->None,
                     (horse->klass->vtable)._75_Init.method);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
          CustomLogic_CustomLogicHorseBuiltin___ctor(__this_00,horse,(MethodInfo *)0x0);
          return __this_00;
        }
        ThrowNullReferenceException();
      }
    }
  }
  return (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$get_Humans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Humans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012f80
// eh: try 0x182013111..0x182013254 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820131bf: mov rdx, qword ptr [rip + 0x206ed62]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1820131c6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820131cb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820131d0: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820131d5: test rcx, rcx
// asm:   0x1820131d8: jne 0x182013254
// asm:   0x1820131da: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x1820131e2: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x182013254: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Humans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_Human_o *human;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_Human_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_Human_o *local_38;
  
  if (Il2CppMethodInitialized_184346320 == '\0') {
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
    Il2CppMethodInitialized_184346320 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_Human_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_18201323d;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"Humans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Humans,true,true,false,
                     (MethodInfo_66F0F0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human)
  ;
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Humans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_18201323d;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      human = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (human == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((human->fields).Dead == false) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
          CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18201323d;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"Humans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"Humans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_18201323d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_AIHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_AIHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182011f90
// eh: try 0x182012121..0x18201226d -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820121d8: mov rdx, qword ptr [rip + 0x206fd49]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1820121df: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1820121e4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820121e9: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820121ee: test rcx, rcx
// asm:   0x1820121f1: jne 0x18201226d
// asm:   0x1820121f3: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x1820121fb: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x18201226d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_AIHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_Human_o *human;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_Human_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_Human_o *local_38;
  
  if (Il2CppMethodInitialized_184346321 == '\0') {
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
    Il2CppMethodInitialized_184346321 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_Human_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182012256;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"AIHumans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Humans,true,false,false,
                     (MethodInfo_66F0F0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human)
  ;
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Humans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_182012256;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      human = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (human == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((human->fields).Dead == false) && ((human->fields).AI != false)) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
          CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182012256;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"AIHumans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"AIHumans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_182012256:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_PlayerHumans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1820134f0
// eh: try 0x182013681..0x1820137cd -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182013738: mov rdx, qword ptr [rip + 0x206e7e9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x18201373f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182013744: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182013749: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18201374e: test rcx, rcx
// asm:   0x182013751: jne 0x1820137cd
// asm:   0x182013753: mov r13, qword ptr [rsp + 0xb0]
// asm:   0x18201375b: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x1820137cd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_PlayerHumans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_Human_o *human;
  bool bVar3;
  GameManagers_InGameManager_o *pGVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  undefined1 local_60 [16];
  Characters_Human_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Characters_Human_o *local_38;
  
  if (Il2CppMethodInitialized_184346322 == '\0') {
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
    Il2CppMethodInitialized_184346322 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Characters_Human_o *)0x0;
  pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1820137b6;
  bVar3 = CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
                    (__this,"PlayerHumans",
                     (System_Collections_Generic_HashSet_T__o *)(pGVar4->fields).Humans,false,true,false,
                     (MethodInfo_66F0F0 *)MethodInfo_CustomLogic_CustomLogicGameBuiltin_NeedRefreshList_Human)
  ;
  if (bVar3) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
    pGVar4 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Humans,
       __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) goto label_1820137b6;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      human = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (human == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((human->fields).Dead == false) && ((human->fields).AI == false)) {
          if (pCVar5 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar1 = (pCVar5->fields).List;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
          CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,__this_01);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820137b6;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"PlayerHumans",(Il2CppObject *)pCVar5,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_set_Item);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"PlayerHumans",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                       );
    return pCVar5;
  }
label_1820137b6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_Loadouts
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__get_Loadouts (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1820132c0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__get_Loadouts
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_string__o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_List_TOutput__o *value;
  
  if (Il2CppMethodInitialized_184346323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Converter_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ConvertAll_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_c_get_Loadouts_b__43_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    Il2CppMethodInitialized_184346323 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  __this_00 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
  }
  __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
              TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9__43_0;
  if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9;
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_object);
    System_Converter_object__object____ctor
              (__this_02,object,(intptr_t)MethodInfo_CustomLogic_CustomLogicGameBuiltin_c_get_Loadouts_b__43_0
               ,(MethodInfo_AF4D50 *)0x0);
    TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9__43_0 =
         (System_Converter_string__object__o *)__this_02;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGameBuiltin_c->static_fields->__9__43_0,__this_02);
  }
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    value = System_Collections_Generic_List_object___ConvertAll_object_
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (System_Converter_T__TOutput__o *)__this_02,
                       (MethodInfo_59CC30 *)
                       MethodInfo_System_Collections_Generic_List_string_ConvertAll_object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).List,value);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012af0

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346324 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346324 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).DefaultShowKillScore;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182014760

void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346325 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).DefaultShowKillScore = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultShowKillFeed
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012a80

bool
CustomLogic_CustomLogicGameBuiltin__get_DefaultShowKillFeed(CustomLogic_CustomLogicGameBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346326 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).DefaultShowKillFeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultShowKillFeed
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x1820146f0

void
CustomLogic_CustomLogicGameBuiltin__set_DefaultShowKillFeed(CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, MethodInfo* method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346327 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).DefaultShowKillFeed = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultHideKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012a80

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultHideKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346326 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).DefaultShowKillFeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultHideKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x1820146f0

void CustomLogic_CustomLogicGameBuiltin__set_DefaultHideKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346327 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).DefaultShowKillFeed = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_DefaultAddKillScore
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012a10

bool CustomLogic_CustomLogicGameBuiltin__get_DefaultAddKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346328 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346328 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).DefaultAddKillScore;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_DefaultAddKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182014680

void CustomLogic_CustomLogicGameBuiltin__set_DefaultAddKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346329 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346329 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).DefaultAddKillScore = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardLoadout
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182014240

bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).ShowScoreboardLoadout;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x1820148d0

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ShowScoreboardLoadout = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ShowScoreboardStatus
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1820142b0

bool CustomLogic_CustomLogicGameBuiltin__get_ShowScoreboardStatus
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).ShowScoreboardStatus;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ShowScoreboardStatus
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus (CustomLogic_CustomLogicGameBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182014940

void CustomLogic_CustomLogicGameBuiltin__set_ShowScoreboardStatus
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ShowScoreboardStatus = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedCharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012bc0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedCharacterType
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).ForcedCharacterType;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedCharacterType
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820147d0

void CustomLogic_CustomLogicGameBuiltin__set_ForcedCharacterType
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434632f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434632f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ForcedCharacterType = value;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ForcedCharacterType,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ForcedLoadout
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x182012c30

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ForcedLoadout
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346330 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346330 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).ForcedLoadout;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$set_ForcedLoadout
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182014850

void CustomLogic_CustomLogicGameBuiltin__set_ForcedLoadout
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346331 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346331 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).ForcedLoadout = value;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).ForcedLoadout,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$Debug
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__Debug (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x18200cf10

void CustomLogic_CustomLogicGameBuiltin__Debug
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  bool showInChat;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_184346332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184346332 = '\x01';
  }
  if ((message != (Il2CppObject *)0x0) ||
     (message = (Il2CppObject *)"null", "null" != (System_String_o *)0x0)) {
    message_00 = (System_String_o *)
                 (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
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
// 0x18200e060

void CustomLogic_CustomLogicGameBuiltin__Print
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  System_String_o *message_00;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184346333 = '\x01';
  }
  if ((message == (Il2CppObject *)0x0) &&
     (message = (Il2CppObject *)"null", "null" == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  message_00 = (System_String_o *)
               (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
                         (message,(((System_String_o *)message)->klass->vtable)._3_ToString.method);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
  GameManagers_ChatManager__AddLine
            (message_00,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$PrintAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__PrintAll (CustomLogic_CustomLogicGameBuiltin_o* __this, Il2CppObject* message, const MethodInfo* method);
// 0x18200dfd0

void CustomLogic_CustomLogicGameBuiltin__PrintAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,Il2CppObject *message,MethodInfo *method)

{
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_184346334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184346334 = '\x01';
  }
  if ((message == (Il2CppObject *)0x0) &&
     (message = (Il2CppObject *)"null", "null" == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  message_00 = (System_String_o *)
               (*(((System_String_o *)message)->klass->vtable)._3_ToString.methodPtr)
                         (message,(((System_String_o *)message)->klass->vtable)._3_ToString.method);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__SendChatAll(message_00,3,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$GetGeneralSetting
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGameBuiltin__GetGeneralSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, const MethodInfo* method);
// 0x18200db10

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
  
  if (Il2CppMethodInitialized_184346335 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_184346335 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_147A5B0 *)
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
// 0x18200dc90

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
  
  if (Il2CppMethodInitialized_184346336 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_184346336 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_147A5B0 *)
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
// 0x18200dbd0

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
  
  if (Il2CppMethodInitialized_184346337 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_184346337 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)settingName,
                           (MethodInfo_147A5B0 *)
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
// 0x18200e940

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGeneralSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Settings_BaseSetting_o *local_18 [2];
  
  if (Il2CppMethodInitialized_184346338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346338 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
  if (Il2CppMethodInitialized_184346358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    Il2CppMethodInitialized_184346358 = '\x01';
  }
  local_18[0] = (Settings_BaseSetting_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)local_18,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar3) {
      bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_18[0],value,(MethodInfo *)0x0);
      return bVar3;
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadTitanSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x18200ee40

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadTitanSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Settings_BaseSetting_o *local_18 [2];
  
  if (Il2CppMethodInitialized_184346339 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346339 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
  if (Il2CppMethodInitialized_184346358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    Il2CppMethodInitialized_184346358 = '\x01';
  }
  local_18[0] = (Settings_BaseSetting_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)local_18,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar3) {
      bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_18[0],value,(MethodInfo *)0x0);
      return bVar3;
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMiscSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x18200ec30

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMiscSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Settings_BaseSetting_o *local_18 [2];
  
  if (Il2CppMethodInitialized_18434633a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434633a = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
  if (Il2CppMethodInitialized_184346358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    Il2CppMethodInitialized_184346358 = '\x01';
  }
  local_18[0] = (Settings_BaseSetting_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)local_18,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar3) {
      bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_18[0],value,(MethodInfo *)0x0);
      return bVar3;
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadModeSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x18200ed50

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadModeSetting
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *settingName,Il2CppObject *value,
               MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameModeSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Settings_BaseSetting_o *local_18 [2];
  
  if (Il2CppMethodInitialized_18434633b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434633b = '\x01';
  }
  local_18[0] = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings((MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).Mode, pSVar2 == (Settings_InGameModeSettings_o *)0x0)) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).Current,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)settingName,(Il2CppObject **)local_18,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar3) {
      bVar3 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_18[0],value,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return false;
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadMap
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMap (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* mapCategory, System_String_o* mapName, const MethodInfo* method);
// 0x18200ea60

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadMap
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *mapCategory,
               System_String_o *mapName,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434633c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_18434633c = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_18200ec1d;
  a = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar4 = System_String__op_Equality
                    (a,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar3 = (pSVar2->fields).MapCategory;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_18200ec1d;
    bVar4 = System_String__op_Inequality((pSVar3->fields)._value,mapCategory,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar3 = (pSVar2->fields).MapName;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_18200ec1d;
      bVar4 = System_String__op_Inequality((pSVar3->fields)._value,mapName,(MethodInfo *)0x0);
      if (!bVar4) goto label_18200ebc7;
    }
    pSVar3 = (pSVar2->fields).PrevGameMode;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_18200ec1d;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
label_18200ebc7:
  pSVar3 = (pSVar2->fields).MapCategory;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)mapCategory,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar3 = (pSVar2->fields).MapName;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)mapName,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings((MethodInfo *)0x0);
      return true;
    }
  }
label_18200ec1d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPreloadGameMode
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* gameMode, const MethodInfo* method);
// 0x18200e880

bool CustomLogic_CustomLogicGameBuiltin__SetPreloadGameMode
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *gameMode,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434633d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_18434633d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
       (__this_00 = (pSVar2->fields).GameMode, __this_00 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)gameMode,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings((MethodInfo *)0x0);
      return true;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// CustomLogic.CustomLogicGameBuiltin$$LoadPreloadPreset
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__LoadPreloadPreset (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* presetName, const MethodInfo* method);
// 0x18200dd50
// eh: try 0x18200dea0..0x18200dfc3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18200df7d: mov rdx, qword ptr [rip + 0x2068554]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x18200df84: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18200df89: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18200df8e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18200df93: test rcx, rcx
// asm:   0x18200df96: jne 0x18200dfc3
// asm:   0x18200dfc3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

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
  System_Collections_Generic_List_BaseSetting__o *__this_01;
  undefined1 local_40 [16];
  Settings_BaseSetting_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434633e == '\0') {
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
    Il2CppMethodInitialized_18434633e = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
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
                             (MethodInfo_182B160 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems),
     __this_01 == (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)__this_01,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = (Il2CppObject *)local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    pIVar5 = local_28.fields._current;
    if (!bVar6) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      return false;
    }
    if ((Settings_BaseSetting_o *)local_28.fields._current == (Settings_BaseSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
    if (((((Settings_BaseSetting_c *)(local_28.fields._current)->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((Settings_BaseSetting_c *)(local_28.fields._current)->klass)->_2).typeHierarchy
        [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(local_28.fields._current);
    }
    if (((Settings_BaseSetting_o *)((longlong)local_28.fields._current + 0x30))->klass ==
        (Settings_BaseSetting_c *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__Equals_196c550
                      ((((Settings_BaseSetting_o *)((longlong)local_28.fields._current + 0x30))->klass->_1).
                       byval_arg.data,presetName,5,(MethodInfo *)0x0);
  } while (!bVar6);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (pSVar4 == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
            (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
             MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$RestartWithPreloadSettings
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x18200e250

bool CustomLogic_CustomLogicGameBuiltin__RestartWithPreloadSettings
               (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434633f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_18434633f = '\x01';
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
    return true;
  }
  return false;
}


// CustomLogic.CustomLogicGameBuiltin$$End
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__End (CustomLogic_CustomLogicGameBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x18200d100

void CustomLogic_CustomLogicGameBuiltin__End
               (CustomLogic_CustomLogicGameBuiltin_o *__this,float delay,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184346340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"EndGameRPC");
    Il2CppMethodInitialized_184346340 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res20[0] = delay;
  pIVar2 = il2cpp_value_box(g_data_184354e38,local_res20);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"EndGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$FindCharacterByViewID
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t viewID, const MethodInfo* method);
// 0x18200d950

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__FindCharacterByViewID
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t viewID,MethodInfo *method)

{
  bool bVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_184346341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346341 = '\x01';
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
      }
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitan
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitan (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x182011400

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitan
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184346342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346342 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
  }
  __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    titan = GameManagers_InGameManager__SpawnAITitan(__this_00,type,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitanAt
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x182011310

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346343 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_00 == (GameManagers_InGameManager_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_28[0].z = (position->fields).Value.fields.z;
    local_28[0].x = (position->fields).Value.fields.x;
    local_28[0].y = (position->fields).Value.fields.y;
    titan = GameManagers_InGameManager__SpawnAITitanAt
                      (__this_00,type,(UnityEngine_Vector3_o *)local_28,rotationY,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    CustomLogic_CustomLogicTitanBuiltin___ctor(__this_01,titan,(MethodInfo *)0x0);
  }
  else {
    __this_01 = (CustomLogic_CustomLogicTitanBuiltin_o *)0x0;
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitans
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitans (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x182011890
// eh: try 0x182011a10..0x182011c28 -> pad 0x183318f20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182011bdc: lea rcx, [rsp + 0x40]
// asm:   0x182011be1: call 0x180611640  ; il2cpp_runtime_helper_180611640()
// asm:   0x182011be6: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182011beb: test rcx, rcx
// asm:   0x182011bee: jne 0x182011c28
// asm:   0x182011bf0: mov r14, qword ptr [rsp + 0x28]
// asm:   0x182011c28: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitans
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,MethodInfo *method
          )

{
  int32_t *piVar1;
  ushort uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  GameManagers_InGameManager_o *__this_02;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_03;
  ushort uVar11;
  Il2CppObject *local_58;
  CustomLogic_CustomLogicListBuiltin_o *local_50;
  undefined8 local_40;
  Il2CppObject **local_38 [3];
  
  if (Il2CppMethodInitialized_184346344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346344 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar8) {
    return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (__this_02 != (GameManagers_InGameManager_o *)0x0) {
    pIVar9 = (Il2CppObject *)GameManagers_InGameManager__SpawnAITitans(__this_02,type,count,(MethodInfo *)0x0)
    ;
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar4 = pIVar9->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      local_50 = __this_01;
      if (uVar2 != 0) {
        uVar11 = 0;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        do {
          if (pIVar5[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan) {
            pVVar10 = pIVar4->vtable + pIVar5[uVar11].offset;
            goto label_1820119e6;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar2);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BasicTitan,0)
      ;
label_1820119e6:
      local_58 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      local_40 = 0;
      local_38[0] = &local_58;
      do {
        pIVar9 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = local_58->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar11 = 0;
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          do {
            if (pIVar5[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar4->vtable + pIVar5[uVar11].offset;
              goto label_182011a66;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_182011a66:
        bVar8 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
        pIVar9 = local_58;
        if (!bVar8) {
          il2cpp_runtime_helper_180611640(local_38);
          return __this_01;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = local_58->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar11 = 0;
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          do {
            if (pIVar5[uVar11].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan) {
              pVVar10 = pIVar4->vtable + pIVar5[uVar11].offset;
              goto label_182011ad6;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)
                                      TypeInfo_System_Collections_Generic_IEnumerator_BasicTitan,0);
label_182011ad6:
        titan = (Characters_BasicTitan_o *)(*pVVar10->methodPtr)(pIVar9,pVVar10->method);
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (__this_01->fields).List;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
        CustomLogic_CustomLogicTitanBuiltin___ctor(__this_03,titan,(MethodInfo *)0x0);
        pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar6->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_03;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3,__this_03);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)__this_03,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x1820114c0

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184346345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346345 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_InGameManager__SpawnAITitansAsync(__this_00,type,count,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAt
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x182011610
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820116df: movss xmm6, dword ptr [rsp + 0xa0]
// asm:   0x1820116e8: nop dword ptr [rax + rax]
// asm:   0x18201172f: mov r9, r13
// asm:   0x182011732: jmp 0x182011767

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnTitansAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  GameManagers_InGameManager_o *pGVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Characters_BasicTitan_o *titan;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  uint uVar7;
  GameManagers_InGameManager_o *pGVar8;
  GameManagers_InGameManager_o *__this_03;
  UnityEngine_Vector3_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184346346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346346 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar6) {
    return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pGVar8 = (GameManagers_InGameManager_o *)0x0;
  if (0 < count) {
    do {
      if (Il2CppMethodInitialized_18434630f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_18434630f = '\x01';
      }
      pGVar3 = (GameManagers_InGameManager_o *)
               TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      __this_03 = (GameManagers_InGameManager_o *)0x0;
      if (pGVar3 != (GameManagers_InGameManager_o *)0x0) {
        bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((pGVar3->klass->_2).typeHierarchyDepth < bVar2) ||
           (__this_03 = pGVar3,
           (pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
           (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
        }
      }
      if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
         (__this_03 == (GameManagers_InGameManager_o *)0x0)) {
label_182011886:
        ThrowNullReferenceException();
      }
      local_48[0].x = (position->fields).Value.fields.x;
      local_48[0].y = (position->fields).Value.fields.y;
      local_48[0].z = (position->fields).Value.fields.z;
      titan = GameManagers_InGameManager__SpawnAITitanAt
                        (__this_03,type,(UnityEngine_Vector3_o *)local_48,rotationY,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
      CustomLogic_CustomLogicTitanBuiltin___ctor(__this_02,titan,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
      if ((__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
         (__this_00 = (__this_01->fields).List, __this_00 == (System_Collections_Generic_List_object__o *)0x0)
         ) goto label_182011886;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) goto label_182011886;
      uVar7 = (__this_00->fields)._size;
      if (uVar7 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar7 + 1;
        if ((uint)pSVar4->max_length <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)__this_02;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7,__this_02);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)__this_02,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      uVar7 = (int)pGVar8 + 1;
      pGVar8 = (GameManagers_InGameManager_o *)(ulonglong)uVar7;
    } while ((int)uVar7 < count);
  }
  return __this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnTitansAtAsync
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, int32_t count, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x182011550

void CustomLogic_CustomLogicGameBuiltin__SpawnTitansAtAsync
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,int32_t count,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184346347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346347 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_00 == (GameManagers_InGameManager_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_38[0].x = (position->fields).Value.fields.x;
    local_38[0].y = (position->fields).Value.fields.y;
    local_38[0].z = (position->fields).Value.fields.z;
    GameManagers_InGameManager__SpawnAITitansAtAsync
              (__this_00,type,count,(UnityEngine_Vector3_o *)local_38,rotationY,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifter
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifter (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, const MethodInfo* method);
// 0x182011190

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifter
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  GameManagers_InGameManager_o *__this_00;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_01;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_184346348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_184346348 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    return (CustomLogic_CustomLogicShifterBuiltin_o *)0x0;
  }
  __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  shifter = (Characters_WallColossalShifter_o *)
            GameManagers_InGameManager__SpawnAIShifter(__this_00,type,(MethodInfo *)0x0);
  b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    CustomLogic_CustomLogicShifterBuiltin___ctor
              (__this_01,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
    return __this_01;
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
  if (shifter == (Characters_WallColossalShifter_o *)0x0) {
    CustomLogic_CustomLogicWallColossalBuiltin___ctor
              (__this_02,(Characters_WallColossalShifter_o *)0x0,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_02;
  }
  bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
  if ((bVar1 <= (shifter->klass->_2).typeHierarchyDepth) &&
     ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
    CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_02,shifter,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_02;
  }
  il2cpp_codegen_raise_invalid_cast_exception(shifter);
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHuman
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHuman (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x18200fb00

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHuman
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184346349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346349 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
  }
  __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    human = GameManagers_InGameManager__SpawnAIHuman(__this_00,costume,costumeName,loadout,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnHumanAt
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x18200fa00

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnHumanAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,
          MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager_o *__this_00;
  Characters_Human_o *human;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_18434634a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_18434634a = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return (CustomLogic_CustomLogicHumanBuiltin_o *)0x0;
  }
  __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 != (GameManagers_InGameManager_o *)0x0)) {
    local_38[0].x = (position->fields).Value.fields.x;
    local_38[0].y = (position->fields).Value.fields.y;
    local_38[0].z = (position->fields).Value.fields.z;
    human = GameManagers_InGameManager__SpawnAIHumanAt
                      (__this_00,costume,costumeName,loadout,(UnityEngine_Vector3_o *)local_38,rotationY,
                       (MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnShifterAt
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x182011000
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18201110a: mov rax, rbx

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicGameBuiltin__SpawnShifterAt
          (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *type,
          CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  GameManagers_InGameManager_o *__this_00;
  Characters_WallColossalShifter_o *shifter;
  System_String_o *b;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434634b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_18434634b = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_00 == (GameManagers_InGameManager_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_28[0].z = (position->fields).Value.fields.z;
    local_28[0].x = (position->fields).Value.fields.x;
    local_28[0].y = (position->fields).Value.fields.y;
    shifter = (Characters_WallColossalShifter_o *)
              GameManagers_InGameManager__SpawnAIShifterAt
                        (__this_00,type,(UnityEngine_Vector3_o *)local_28,rotationY,(MethodInfo *)0x0);
    b = CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
      if (shifter == (Characters_WallColossalShifter_o *)0x0) {
        CustomLogic_CustomLogicWallColossalBuiltin___ctor
                  (__this_01,(Characters_WallColossalShifter_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
        if (((shifter->klass->_2).typeHierarchyDepth < bVar1) ||
           ((shifter->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(shifter);
        }
        CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
      }
    }
    else {
      __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
      CustomLogic_CustomLogicShifterBuiltin___ctor
                ((CustomLogic_CustomLogicShifterBuiltin_o *)__this_01,(Characters_BaseShifter_o *)shifter,
                 (MethodInfo *)0x0);
    }
  }
  else {
    __this_01 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0;
  }
  return (CustomLogic_CustomLogicShifterBuiltin_o *)__this_01;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectile
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, System_String_o* team, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x182010a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182010cff: jmp 0x182010c4d

void CustomLogic_CustomLogicGameBuiltin__SpawnProjectile
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *projectileName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicVector3Builtin_o *velocity,
               CustomLogic_CustomLogicVector3Builtin_o *gravity,float liveTime,System_String_o *team,
               Il2CppObject *extraParam,Il2CppObject *extraParam2,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  Utility_Color255_o *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  System_Object_array *settings;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar12;
  UnityEngine_Color_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  Il2CppObject **targetAddress;
  float fVar15;
  undefined1 local_res10 [8];
  float local_a8;
  float local_a4 [3];
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  UnityEngine_Color_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_18434634c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434634c = '\x01';
  }
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  bVar9 = System_String__op_Equality
                    (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear,
                     (MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (extraParam,
                        (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    pCVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (extraParam2,
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((pCVar12 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (pUVar4 = (pCVar12->fields).Value, pUVar4 == (Utility_Color255_o *)0x0)) {
label_182010f82:
      ThrowNullReferenceException();
    }
    pUVar13 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_48,pUVar4,(MethodInfo *)0x0);
    uVar7._0_4_ = (pUVar13->fields).r;
    uVar7._4_4_ = (pUVar13->fields).g;
    uVar8._0_4_ = (pUVar13->fields).b;
    uVar8._4_4_ = (pUVar13->fields).a;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_a4[0] = fVar15;
    pIVar10 = il2cpp_value_box(g_data_184354e38,local_a4);
    if (settings == (System_Object_array *)0x0) goto label_182010f82;
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
       pIVar11 == (Il2CppObject *)0x0)) {
      pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
    }
    if ((int)settings->max_length == 0) {
label_182010ff6:
      ThrowIndexOutOfRangeException();
    }
    settings->m_Items[0] = pIVar10;
    Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar10);
    local_58 = uVar7;
    uStack_50 = uVar8;
    pIVar10 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_58);
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
       pIVar11 == (Il2CppObject *)0x0)) {
      pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
    }
    if ((uint)settings->max_length < 2) goto label_182010ff6;
    settings->m_Items[1] = pIVar10;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar10);
    local_res10[0] = 0;
    pIVar10 = il2cpp_value_box(g_data_184354de8,local_res10);
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
       pIVar11 == (Il2CppObject *)0x0)) {
      pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
    }
    if ((uint)settings->max_length < 3) goto label_182010ff6;
    settings->m_Items[2] = pIVar10;
    targetAddress = settings->m_Items + 2;
  }
  else {
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar9 = System_String__op_Equality
                      (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare,
                       (MethodInfo *)0x0);
    if (bVar9) {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (extraParam,
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if ((pCVar12 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
         (pUVar4 = (pCVar12->fields).Value, pUVar4 == (Utility_Color255_o *)0x0)) {
label_182010fba:
        ThrowNullReferenceException();
      }
      pUVar13 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_48,pUVar4,(MethodInfo *)0x0);
      uVar5._0_4_ = (pUVar13->fields).r;
      uVar5._4_4_ = (pUVar13->fields).g;
      uVar6._0_4_ = (pUVar13->fields).b;
      uVar6._4_4_ = (pUVar13->fields).a;
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_68 = uVar5;
      uStack_60 = uVar6;
      pIVar10 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_68);
      if (settings == (System_Object_array *)0x0) goto label_182010fba;
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
         pIVar11 == (Il2CppObject *)0x0)) {
        pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      bVar9 = System_String__op_Equality
                        (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1,
                         (MethodInfo *)0x0);
      if (!bVar9) {
        settings = (System_Object_array *)0x0;
        if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
        }
        bVar9 = System_String__op_Equality
                          (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2,
                           (MethodInfo *)0x0);
        if (!bVar9) goto label_182010e69;
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (extraParam,
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_a8 = fVar15;
      pIVar10 = il2cpp_value_box(g_data_184354e38,&local_a8);
      if (settings == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
         pIVar11 == (Il2CppObject *)0x0)) {
        pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
    }
    settings->m_Items[0] = pIVar10;
    targetAddress = settings->m_Items;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,pIVar10);
label_182010e69:
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (rotation->fields).Value.fields.x;
    uVar3 = (rotation->fields).Value.fields.y;
    fVar15 = (position->fields).Value.fields.z;
    uVar2._0_4_ = (position->fields).Value.fields.x;
    uVar2._4_4_ = (position->fields).Value.fields.y;
    local_98.y = (float)uVar3 * 0.017453292;
    local_98.x = (float)uVar1 * 0.017453292;
    local_98.z = (rotation->fields).Value.fields.z * 0.017453292;
    pUVar14 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_48,(UnityEngine_Vector3_o *)&local_98,
                         (MethodInfo *)0x0);
    if ((velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (gravity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      local_88.x = (gravity->fields).Value.fields.x;
      local_88.y = (gravity->fields).Value.fields.y;
      local_88.z = (gravity->fields).Value.fields.z;
      local_78.x = (velocity->fields).Value.fields.x;
      local_78.y = (velocity->fields).Value.fields.y;
      local_78.z = (velocity->fields).Value.fields.z;
      local_48[0].r = (pUVar14->fields).x;
      local_48[0].g = (pUVar14->fields).y;
      local_48[0].b = (pUVar14->fields).z;
      local_48[0].a = (pUVar14->fields).w;
      local_98._0_8_ = uVar2;
      local_98.z = fVar15;
      Projectiles_ProjectileSpawner__Spawn
                (projectileName,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_48,
                 (UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,liveTime,-1,team,
                 settings,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnProjectileWithOwner
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnProjectileWithOwner (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* projectileName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* velocity, CustomLogic_CustomLogicVector3Builtin_o* gravity, float liveTime, CustomLogic_CustomLogicCharacterBuiltin_o* owner, Il2CppObject* extraParam, Il2CppObject* extraParam2, const MethodInfo* method);
// 0x182010400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820106ea: jmp 0x182010638

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
  undefined4 uVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar6;
  float fVar7;
  Photon_Pun_MonoBehaviourPun_o *__this_00;
  Utility_Color255_o *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  System_Object_array *settings;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar18;
  UnityEngine_Color_o *pUVar19;
  UnityEngine_Quaternion_o *pUVar20;
  Photon_Pun_PhotonView_o *pPVar21;
  Il2CppObject **targetAddress;
  float fVar22;
  float local_c8;
  float local_c4 [3];
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  UnityEngine_Color_Fields local_68 [5];
  
  if (Il2CppMethodInitialized_18434634d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_18434634d = '\x01';
  }
  if (CONCAT71(owner._1_7_,owner._0_1_) == 0) goto label_1820109b9;
  __this_00 = *(Photon_Pun_MonoBehaviourPun_o **)(CONCAT71(owner._1_7_,owner._0_1_) + 0x30);
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
  }
  bVar15 = System_String__op_Equality
                     (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear,
                      (MethodInfo *)0x0);
  if (bVar15) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (extraParam,
                        (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    pCVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (extraParam2,
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if ((pCVar18 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
       (pUVar8 = (pCVar18->fields).Value, pUVar8 == (Utility_Color255_o *)0x0)) {
label_182010a2d:
      ThrowNullReferenceException();
    }
    pUVar19 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_68,pUVar8,(MethodInfo *)0x0);
    uVar11._0_4_ = (pUVar19->fields).r;
    uVar11._4_4_ = (pUVar19->fields).g;
    uVar12._0_4_ = (pUVar19->fields).b;
    uVar12._4_4_ = (pUVar19->fields).a;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_c4[0] = fVar22;
    pIVar16 = il2cpp_value_box(g_data_184354e38,local_c4);
    if (settings == (System_Object_array *)0x0) goto label_182010a2d;
    if ((pIVar16 != (Il2CppObject *)0x0) &&
       (pIVar17 = il2cpp_vm_Object_IsInst(pIVar16,(((settings->obj).klass)->_1).element_class),
       pIVar17 == (Il2CppObject *)0x0)) {
      pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
    }
    if ((int)settings->max_length == 0) {
label_182010a27:
      ThrowIndexOutOfRangeException();
    }
    settings->m_Items[0] = pIVar16;
    Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar16);
    local_78 = uVar11;
    uStack_70 = uVar12;
    pIVar16 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_78);
    if ((pIVar16 != (Il2CppObject *)0x0) &&
       (pIVar17 = il2cpp_vm_Object_IsInst(pIVar16,(((settings->obj).klass)->_1).element_class),
       pIVar17 == (Il2CppObject *)0x0)) {
      pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
    }
    if ((uint)settings->max_length < 2) goto label_182010a27;
    settings->m_Items[1] = pIVar16;
    Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar16);
    owner._0_1_ = 0;
    pIVar16 = il2cpp_value_box(g_data_184354de8,&owner);
    if ((pIVar16 != (Il2CppObject *)0x0) &&
       (pIVar17 = il2cpp_vm_Object_IsInst(pIVar16,(((settings->obj).klass)->_1).element_class),
       pIVar17 == (Il2CppObject *)0x0)) {
      pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
    }
    if ((uint)settings->max_length < 3) goto label_182010a27;
    settings->m_Items[2] = pIVar16;
    targetAddress = settings->m_Items + 2;
label_18201084e:
    Il2CppCodeGenWriteBarrier(targetAddress,pIVar16);
  }
  else {
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar15 = System_String__op_Equality
                       (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare,
                        (MethodInfo *)0x0);
    if (bVar15) {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (extraParam,
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if ((pCVar18 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
         (pUVar8 = (pCVar18->fields).Value, pUVar8 == (Utility_Color255_o *)0x0)) {
label_1820109f1:
        ThrowNullReferenceException();
      }
      pUVar19 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_68,pUVar8,(MethodInfo *)0x0);
      uVar9._0_4_ = (pUVar19->fields).r;
      uVar9._4_4_ = (pUVar19->fields).g;
      uVar10._0_4_ = (pUVar19->fields).b;
      uVar10._4_4_ = (pUVar19->fields).a;
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_88 = uVar9;
      uStack_80 = uVar10;
      pIVar16 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_88);
      if (settings == (System_Object_array *)0x0) goto label_1820109f1;
      if ((pIVar16 != (Il2CppObject *)0x0) &&
         (pIVar17 = il2cpp_vm_Object_IsInst(pIVar16,(((settings->obj).klass)->_1).element_class),
         pIVar17 == (Il2CppObject *)0x0)) {
        pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
label_182010638:
      settings->m_Items[0] = pIVar16;
      targetAddress = settings->m_Items;
      goto label_18201084e;
    }
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar15 = System_String__op_Equality
                       (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1,
                        (MethodInfo *)0x0);
    if (bVar15) {
label_1820105b2:
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar22 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (extraParam,
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_c8 = fVar22;
      pIVar16 = il2cpp_value_box(g_data_184354e38,&local_c8);
      if (settings == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar16 != (Il2CppObject *)0x0) &&
         (pIVar17 = il2cpp_vm_Object_IsInst(pIVar16,(((settings->obj).klass)->_1).element_class),
         pIVar17 == (Il2CppObject *)0x0)) {
        pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      goto label_182010638;
    }
    settings = (System_Object_array *)0x0;
    if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    }
    bVar15 = System_String__op_Equality
                       (projectileName,TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2,
                        (MethodInfo *)0x0);
    if (bVar15) goto label_1820105b2;
  }
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (rotation->fields).Value.fields.x;
    uVar5 = (rotation->fields).Value.fields.y;
    local_b8.x = (float)uVar1 * 0.017453292;
    local_b8.y = (float)uVar5 * 0.017453292;
    uVar2._0_4_ = (position->fields).Value.fields.x;
    uVar2._4_4_ = (position->fields).Value.fields.y;
    fVar22 = (position->fields).Value.fields.z;
    local_b8.z = (rotation->fields).Value.fields.z * 0.017453292;
    pUVar20 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_68,(UnityEngine_Vector3_o *)&local_b8,
                         (MethodInfo *)0x0);
    if ((velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       ((gravity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (__this_00 != (Photon_Pun_MonoBehaviourPun_o *)0x0)))) {
      uVar3._0_4_ = (velocity->fields).Value.fields.x;
      uVar3._4_4_ = (velocity->fields).Value.fields.y;
      fVar6 = (velocity->fields).Value.fields.z;
      uVar4._0_4_ = (gravity->fields).Value.fields.x;
      uVar4._4_4_ = (gravity->fields).Value.fields.y;
      fVar7 = (gravity->fields).Value.fields.z;
      uVar13._0_4_ = (pUVar20->fields).x;
      uVar13._4_4_ = (pUVar20->fields).y;
      uVar14._0_4_ = (pUVar20->fields).z;
      uVar14._4_4_ = (pUVar20->fields).w;
      pPVar21 = Photon_Pun_MonoBehaviourPun__get_photonView(__this_00,(MethodInfo *)0x0);
      if (pPVar21 != (Photon_Pun_PhotonView_o *)0x0) {
        local_b8._0_8_ = uVar4;
        local_b8.z = fVar7;
        local_a8._0_8_ = uVar3;
        local_a8.z = fVar6;
        local_98._0_8_ = uVar2;
        local_98.z = fVar22;
        local_68[0]._0_8_ = uVar13;
        local_68[0]._8_8_ = uVar14;
        Projectiles_ProjectileSpawner__Spawn
                  (projectileName,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_68,
                   (UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,liveTime,
                   (pPVar21->fields).viewIdField,
                   (System_String_o *)(*(uint64_t *)((char *)__this_00 + 0x90)),settings,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
label_1820109b9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x18200f7a0

void CustomLogic_CustomLogicGameBuiltin__SpawnEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,scale,true,tsExplodeColor,tsKillSound,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnUnscaledEffect
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x182011c30

void CustomLogic_CustomLogicGameBuiltin__SpawnUnscaledEffect
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *effectName,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
            (effectName,position,rotation,1.0,false,tsExplodeColor,tsKillSound,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayer
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, const MethodInfo* method);
// 0x182010240

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayer
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               bool force,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  GameManagers_InGameManager_o *__this_01;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_18434634e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_18434634e = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pPVar1 = (player->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pPVar1 = (player->fields).Player;
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res10[0] = force;
      pIVar4 = il2cpp_value_box(g_data_184354de8,local_res10);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"SpawnPlayerRPC",pPVar1,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    __this_01 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if (__this_01 != (GameManagers_InGameManager_o *)0x0) {
      GameManagers_InGameManager__SpawnPlayer(__this_01,force,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, const MethodInfo* method);
// 0x18200fbd0

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool force,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res20 [8];
  
  if (Il2CppMethodInitialized_18434634f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerRPC");
    Il2CppMethodInitialized_18434634f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res20[0] = force;
  pIVar2 = il2cpp_value_box(g_data_184354de8,local_res20);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAt
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x18200ff60

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAt
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               bool force,CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method
               )

{
  Photon_Realtime_Player_o *pPVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  GameManagers_InGameManager_o *__this_01;
  undefined1 local_res10 [8];
  float local_38 [4];
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_184346350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtRPC");
    Il2CppMethodInitialized_184346350 = '\x01';
  }
  if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
label_1820101fb:
    ThrowNullReferenceException();
  }
  pPVar1 = (player->fields).Player;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar1 == pPVar3) {
    __this_01 = CustomLogic_CustomLogicGameBuiltin__get__inGameManager(__this,(MethodInfo *)0x0);
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_01 == (GameManagers_InGameManager_o *)0x0)) goto label_1820101fb;
    local_28.z = (position->fields).Value.fields.z;
    local_28.x = (position->fields).Value.fields.x;
    local_28.y = (position->fields).Value.fields.y;
    GameManagers_InGameManager__SpawnPlayerAt
              (__this_01,force,(UnityEngine_Vector3_o *)&local_28,rotationY,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) {
      pPVar1 = (player->fields).Player;
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      local_res10[0] = force;
      pIVar4 = il2cpp_value_box(g_data_184354de8,local_res10);
      if (parameters == (System_Object_array *)0x0) {
label_182010237:
        ThrowNullReferenceException();
      }
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
        if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_182010237;
        local_28.x = (position->fields).Value.fields.x;
        local_28.y = (position->fields).Value.fields.y;
        local_28.z = (position->fields).Value.fields.z;
        pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_28);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar4);
          local_38[0] = rotationY;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_38);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar4;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar4);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_1d4d8d0
                        (__this_00,"SpawnPlayerAtRPC",pPVar1,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_182010237;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  return;
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnPlayerAtAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll (CustomLogic_CustomLogicGameBuiltin_o* __this, bool force, CustomLogic_CustomLogicVector3Builtin_o* position, float rotationY, const MethodInfo* method);
// 0x18200fd10

void CustomLogic_CustomLogicGameBuiltin__SpawnPlayerAtAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,bool force,
               CustomLogic_CustomLogicVector3Builtin_o *position,float rotationY,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_38 [4];
  float local_34;
  undefined8 local_30;
  float local_28;
  
  if (Il2CppMethodInitialized_184346351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPlayerAtRPC");
    Il2CppMethodInitialized_184346351 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  local_38[0] = force;
  pIVar2 = il2cpp_value_box(g_data_184354de8,local_38);
  if (parameters == (System_Object_array *)0x0) {
label_18200ff17:
    ThrowNullReferenceException();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_18200ff17;
    local_30._0_4_ = (position->fields).Value.fields.x;
    local_30._4_4_ = (position->fields).Value.fields.y;
    local_28 = (position->fields).Value.fields.z;
    pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_30);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
      local_34 = rotationY;
      pIVar2 = il2cpp_value_box(g_data_184354e38,&local_34);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar2);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SpawnPlayerAtRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_18200ff17;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetPlaylist
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetPlaylist (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* playlist, const MethodInfo* method);
// 0x18200e810

void CustomLogic_CustomLogicGameBuiltin__SetPlaylist
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *playlist,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346352 = '\x01';
  }
  ApplicationManagers_MusicManager__SetPlaylist(playlist,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).HasSetMusic = true;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SetSong
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SetSong (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* song, const MethodInfo* method);
// 0x18200ef60

void CustomLogic_CustomLogicGameBuiltin__SetSong
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *song,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346353 = '\x01';
  }
  ApplicationManagers_MusicManager__SetSong(song,0.0,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (pCVar1->fields).HasSetMusic = true;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$DrawRay
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__DrawRay (CustomLogic_CustomLogicGameBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* dir, CustomLogic_CustomLogicColorBuiltin_o* color, float duration, const MethodInfo* method);
// 0x18200cfe0

void CustomLogic_CustomLogicGameBuiltin__DrawRay
               (CustomLogic_CustomLogicGameBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *start,
               CustomLogic_CustomLogicVector3Builtin_o *dir,CustomLogic_CustomLogicColorBuiltin_o *color,
               float duration,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184346354 = '\x01';
  }
  if ((((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (dir != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    fVar3 = (start->fields).Value.fields.z;
    uVar1._0_4_ = (start->fields).Value.fields.x;
    uVar1._4_4_ = (start->fields).Value.fields.y;
    uVar2._0_4_ = (dir->fields).Value.fields.x;
    uVar2._4_4_ = (dir->fields).Value.fields.y;
    fVar4 = (dir->fields).Value.fields.z;
    pUVar5 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_48,__this_00,(MethodInfo *)0x0);
    local_48[0].r = (pUVar5->fields).r;
    local_48[0].g = (pUVar5->fields).g;
    local_48[0].b = (pUVar5->fields).b;
    local_48[0].a = (pUVar5->fields).a;
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    local_68._0_8_ = uVar2;
    local_68.z = fVar4;
    local_58._0_8_ = uVar1;
    local_58.z = fVar3;
    UnityEngine_Debug__DrawRay
              ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
               (UnityEngine_Color_o *)local_48,duration,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillScore
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillScore (CustomLogic_CustomLogicGameBuiltin_o* __this, int32_t damage, const MethodInfo* method);
// 0x18200f2b0

void CustomLogic_CustomLogicGameBuiltin__ShowKillScore
               (CustomLogic_CustomLogicGameBuiltin_o *__this,int32_t damage,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_184346355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346355 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__ShowKillScore(__this_00,damage,true,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeed
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x18200f1e0

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeed
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_184346356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346356 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$ShowKillFeedAll
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x18200efe0

void CustomLogic_CustomLogicGameBuiltin__ShowKillFeedAll
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184346357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedRPC");
    Il2CppMethodInitialized_184346357 = '\x01';
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if (parameters == (System_Object_array *)0x0) {
label_18200f18d:
    ThrowNullReferenceException();
  }
  if (killer != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)killer,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)killer;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,killer);
    if (victim != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)victim,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)victim;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,victim);
      local_res10[0] = score;
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar1);
        if (weapon != (System_String_o *)0x0) {
          pIVar1 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)weapon,(((parameters->obj).klass)->_1).element_class);
          if (pIVar1 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)parameters->max_length) {
          parameters->m_Items[3] = (Il2CppObject *)weapon;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,weapon);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"ShowKillFeedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18200f18d;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicGameBuiltin$$TrySetTypedSetting
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting (System_Collections_Generic_Dictionary_string__BaseSetting__o* typedSettings, System_String_o* settingName, Il2CppObject* value, const MethodInfo* method);
// 0x182011e30

bool CustomLogic_CustomLogicGameBuiltin__TrySetTypedSetting
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *typedSettings,
               System_String_o *settingName,Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  Settings_BaseSetting_o *local_res8;
  
  if (Il2CppMethodInitialized_184346358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    Il2CppMethodInitialized_184346358 = '\x01';
  }
  local_res8 = (Settings_BaseSetting_o *)0x0;
  if (typedSettings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)typedSettings,
                       (Il2CppObject *)settingName,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar1) {
      bVar1 = CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue(local_res8,value,(MethodInfo *)0x0);
      return bVar1;
    }
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$TryAssignSettingValue
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue (Settings_BaseSetting_o* setting, Il2CppObject* value, const MethodInfo* method);
// 0x182011c80
// eh: try 0x182011cc4..0x182011e09 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182011e16: xor al, al
// asm:   0x182011e18: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x182011e1d: add rsp, 0x30
// asm:   0x182011e21: pop rdi
// asm:   0x182011e22: ret 
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

bool CustomLogic_CustomLogicGameBuiltin__TryAssignSettingValue
               (Settings_BaseSetting_o *setting,Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346359 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346359 = '\x01';
  }
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  if (iVar2 == 2) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res8[0] =
         (float)CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (value,(MethodInfo_66E9A0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    Settings_SettingsUtil__SetSettingValue(setting,2,pIVar3,(MethodInfo *)0x0);
    return true;
  }
  if (iVar2 == 3) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res8[0] =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (value,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    Settings_SettingsUtil__SetSettingValue(setting,3,pIVar3,(MethodInfo *)0x0);
    return true;
  }
  if (iVar2 != 1) {
    if (iVar2 == 4) {
      if ((value == (Il2CppObject *)0x0) ||
         (pIVar3 = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      Settings_SettingsUtil__SetSettingValue(setting,4,pIVar3,(MethodInfo *)0x0);
      return true;
    }
    return false;
  }
  bVar1 = CustomLogic_CustomLogicGameBuiltin__ConvertToBool(value,(MethodInfo *)0x0);
  local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,bVar1);
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
  Settings_SettingsUtil__SetSettingValue(setting,1,pIVar3,(MethodInfo *)0x0);
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$EnsurePreloadSelectionsAndModeSettings
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__EnsurePreloadSelectionsAndModeSettings (const MethodInfo* method);
// 0x18200d250
// eh: try 0x18200d476..0x18200d4fc -> pad 0x1833318f0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x18200d852..0x18200d8b4 -> pad 0x183315f50 catch Il2CppExceptionWrapper
// eh: try 0x18200d927..0x18200d93d -> pad 0x1833318f0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x18200d943..0x18200d949 -> pad 0x183315f50 catch Il2CppExceptionWrapper
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18200d4fe: mov rax, qword ptr [rip + 0x234794b]
// asm:   0x18200d505: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18200d50c: mov r12, qword ptr [rcx]
// asm:   0x18200d50f: xor bl, bl
// asm:   0x18200d511: mov rdi, qword ptr [rsp + 0xb8]
// asm:   0x18200d519: mov r14, rdi
// asm:   0x18200d8c5: mov rdx, qword ptr [rip + 0x208a04c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18200d8cc: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18200d8d1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18200d8d6: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18200d8db: test rcx, rcx
// asm:   0x18200d8de: jne 0x18200d949
// asm:   0x18200d8e0: mov rdi, qword ptr [rsp + 0xb8]
// asm:   0x18200d8e8: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x18200d949: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315f50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315f55: push rbp
// asm:   0x183315f56: sub rsp, 0x30
// asm:   0x183315f5a: mov rbp, rdx
// asm:   0x183315f5d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183315f61: mov rcx, qword ptr [rax]
// asm:   0x183315f64: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315f68: movabs rax, 0
// asm:   0x183315f72: add rsp, 0x30
// asm:   0x183315f76: pop rbp
// asm:   0x183315f77: ret 
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

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
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_IEnumerable_TKey__o *collection;
  System_Collections_Generic_List_string__o *__this_01;
  Settings_BaseSetting_o *value;
  System_String_o **ppSVar13;
  uint uVar14;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_18434635a == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_18434635a = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if ((((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
      (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields).MapName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    pSVar10 = (pSVar3->fields)._value;
    pSVar12 = (pSVar4->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar9 = Map_BuiltinLevels__GetMapNames(pSVar10,(MethodInfo *)0x0);
    if (pSVar9 == (System_String_array *)0x0) goto label_18200d921;
    for (uVar14 = 0; (int)uVar14 < (int)pSVar9->max_length; uVar14 = uVar14 + 1) {
      if ((uint)pSVar9->max_length <= uVar14) goto label_18200d93d;
      bVar8 = System_String__op_Equality(pSVar9->m_Items[(int)uVar14],pSVar12,(MethodInfo *)0x0);
      if (bVar8) goto label_18200d45c;
    }
    pSVar2 = (pSVar1->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) goto label_18200d921;
    if (pSVar9->max_length == 0) {
      ppSVar13 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((int)pSVar9->max_length == 0) goto label_18200d93d;
      ppSVar13 = pSVar9->m_Items;
    }
    pSVar3 = (pSVar2->fields).MapName;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)*ppSVar13,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
label_18200d45c:
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
      pSVar12 = (pSVar4->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar10 = Map_BuiltinLevels__LoadMap(pSVar10,pSVar12,(MethodInfo *)0x0);
      if (__this_00 == (Map_MapScript_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
                (__this_00,pSVar10,(__this_00->klass->vtable)._5_Deserialize.method);
      pSVar10 = (__this_00->fields).Logic;
      bVar8 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).General;
      if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
         (pSVar4 = (pSVar2->fields).MapName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        pSVar12 = (pSVar3->fields)._value;
        pSVar5 = (pSVar4->fields)._value;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar9 = Map_BuiltinLevels__GetGameModes(pSVar12,pSVar5,!bVar8,(MethodInfo *)0x0);
        if (pSVar9 != (System_String_array *)0x0) {
          for (uVar14 = 0; (int)uVar14 < (int)pSVar9->max_length; uVar14 = uVar14 + 1) {
            if ((uint)pSVar9->max_length <= uVar14) goto label_18200d93d;
            pSVar2 = (pSVar1->fields).General;
            if ((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
               (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0))
            goto label_18200d921;
            bVar8 = System_String__op_Equality
                              (pSVar9->m_Items[(int)uVar14],(pSVar3->fields)._value,(MethodInfo *)0x0);
            if (bVar8) goto label_18200d603;
          }
          if (pSVar9->max_length != 0) {
            pSVar2 = (pSVar1->fields).General;
            if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) goto label_18200d921;
            if ((int)pSVar9->max_length == 0) {
label_18200d93d:
              ThrowIndexOutOfRangeException();
            }
            pSVar3 = (pSVar2->fields).GameMode;
            if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_18200d921;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar9->m_Items[0],
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
label_18200d603:
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
              goto label_18200d921;
              pSVar12 = (pSVar3->fields)._value;
              pSVar5 = (pSVar4->fields)._value;
              gameMode = (pSVar6->fields)._value;
              settings = (pSVar1->fields).Misc;
              if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
              }
              Map_BuiltinLevels__LoadSandboxMiscSettings(pSVar12,pSVar5,gameMode,settings,(MethodInfo *)0x0);
              pSVar7 = (pSVar1->fields).Mode;
              pSVar11 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
              System_Collections_Generic_Dictionary_object__object____ctor
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                         (MethodInfo_1454140 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
              if (pSVar7 == (Settings_InGameModeSettings_o *)0x0) goto label_18200d921;
              (pSVar7->fields).Current = pSVar11;
              Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current,pSVar11);
            }
            pSVar2 = (pSVar1->fields).General;
            if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
               (pSVar4 = (pSVar2->fields).PrevGameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              pSVar2 = (pSVar1->fields).General;
              if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                 (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
                pSVar12 = (pSVar3->fields)._value;
                if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
                }
                pSVar12 = Map_BuiltinLevels__LoadLogic(pSVar12,(MethodInfo *)0x0);
                bVar8 = System_String__op_Equality
                                  (pSVar12,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                                   (MethodInfo *)0x0);
                if (!bVar8) {
                  pSVar10 = pSVar12;
                }
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar11 = CustomLogic_CustomLogicManager__GetModeSettings(pSVar10,(MethodInfo *)0x0);
                pSVar7 = (pSVar1->fields).Mode;
                if ((pSVar7 != (Settings_InGameModeSettings_o *)0x0) &&
                   (pSVar11 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
                  __this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields).Current
                  ;
                  collection = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                                          (MethodInfo_13C6500 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                         );
                  __this_01 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                  System_Collections_Generic_List_object____ctor_94fb10
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (System_Collections_Generic_IEnumerable_T__o *)collection,
                             (MethodInfo_94FB10 *)
                             MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
                  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
                    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                               (System_Collections_Generic_List_T__o *)__this_01,
                               (MethodInfo_91F180 *)
                               MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
                    local_48 = (undefined1  [8])local_60._0_8_;
                    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
                    local_38 = local_50;
                    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
                    while( true ) {
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                         (MethodInfo_153A2A0 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
                                        );
                      key = local_38;
                      if (!bVar8) break;
                      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                         local_38,(MethodInfo_1455450 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey
                                        );
                      if (bVar8) {
                        value = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (__this,key,
                                           (MethodInfo_147A5B0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                          );
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,key,
                                   (Il2CppObject *)value,
                                   (MethodInfo_147A7F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item
                                  );
                      }
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                    pSVar7 = (pSVar1->fields).Mode;
                    if (pSVar7 != (Settings_InGameModeSettings_o *)0x0) {
                      (pSVar7->fields).Current = pSVar11;
                      Il2CppCodeGenWriteBarrier(&(pSVar7->fields).Current,pSVar11);
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
label_18200d921:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$ConvertToBool
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__ConvertToBool (Il2CppObject* value, const MethodInfo* method);
// 0x18200cca0

bool CustomLogic_CustomLogicGameBuiltin__ConvertToBool(Il2CppObject *value,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  float *pfVar3;
  int *piVar4;
  undefined1 *puVar5;
  System_String_o *value_00;
  float fVar6;
  bool local_res8 [8];
  float local_res18 [2];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_18434635b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18434635b = '\x01';
  }
  local_res8[0] = false;
  local_res20[0] = 0;
  local_res18[0] = 0.0;
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354de8) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
        puVar5 = il2cpp_object_unbox(value);
        return (bool)*puVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        piVar4 = il2cpp_object_unbox(value);
        return *piVar4 != 0;
      }
      il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e08);
    }
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
      }
      pfVar3 = il2cpp_object_unbox(value);
      fVar6 = *pfVar3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
label_18200ce4d:
      return 1.4013e-45 < ABS(fVar6);
    }
    value_00 = (System_String_o *)0x0;
    if (value->klass == g_data_184354e50) {
      value_00 = (System_String_o *)value;
    }
    if (value_00 != (System_String_o *)0x0) {
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      bVar1 = System_Boolean__TryParse(value_00,local_res8,(MethodInfo *)0x0);
      if (bVar1) {
        return local_res8[0];
      }
      bVar1 = System_Int32__TryParse(value_00,local_res20,(MethodInfo *)0x0);
      if (bVar1) {
        return local_res20[0] != 0;
      }
      bVar1 = System_Single__TryParse(value_00,local_res18,(MethodInfo *)0x0);
      fVar6 = local_res18[0];
      if (bVar1) {
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          return 1.4013e-45 < ABS(fVar6);
        }
        goto label_18200ce4d;
      }
    }
  }
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  bVar1 = System_Convert__ToBoolean(value,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicGameBuiltin$$NeedRefreshList<object>
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_ (CustomLogic_CustomLogicGameBuiltin_o* __this, System_String_o* cacheKey, System_Collections_Generic_HashSet_T__o* currentSet, bool includeAI, bool includeNonAI, bool isShifter, const MethodInfo_66F0F0* method);
// 0x18066f0f0
// eh: try 0x18066f268..0x18066f4b9 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18066f435: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18066f43a: mov rcx, qword ptr [rax]
// asm:   0x18066f43d: mov rdx, qword ptr [rcx + 0x38]
// asm:   0x18066f441: mov rdx, qword ptr [rdx + 0x40]
// asm:   0x18066f445: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18066f44a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18066f44f: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18066f454: test rcx, rcx
// asm:   0x18066f457: jne 0x18066f4b9
// asm:   0x18066f459: mov r14, qword ptr [rsp + 0x98]
// asm:   0x18066f461: mov edi, dword ptr [rsp + 0x90]
// asm:   0x18066f4b9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

bool CustomLogic_CustomLogicGameBuiltin__NeedRefreshList_object_
               (CustomLogic_CustomLogicGameBuiltin_o *__this,System_String_o *cacheKey,
               System_Collections_Generic_HashSet_T__o *currentSet,bool includeAI,bool includeNonAI,
               bool isShifter,MethodInfo_66F0F0 *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicListBuiltin__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_object__o *pSVar2;
  Il2CppClass *x;
  UnityEngine_Object_o *x_00;
  bool bVar3;
  CustomLogic_CustomLogicListBuiltin_o *pCVar4;
  Il2CppObject *pIVar5;
  int index;
  undefined1 local_60 [8];
  undefined1 *puStack_58;
  UnityEngine_Object_o *local_50;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (method->rgctx_data == (MethodInfo_66F0F0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_66F0F0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  local_60 = (undefined1  [8])0x0;
  puStack_58 = (undefined1 *)0x0;
  local_50 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._cachedLists;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicListBuiltin__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)cacheKey,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_ContainsKey
                      );
    if (!bVar3) {
      return true;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cachedLists;
    if ((((__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_01,(Il2CppObject *)cacheKey,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicListBuiltin_get_Item
                             ), pCVar4 != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) &&
        (pSVar2 = (pCVar4->fields).List, pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) &&
       (currentSet != (System_Collections_Generic_HashSet_T__o *)0x0)) {
      if ((currentSet->fields)._count < (pSVar2->fields)._size) {
        return true;
      }
      index = 0;
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_HashSet_Vector2Int__o *)currentSet,
                 (MethodInfo_175C200 *)
                 method->rgctx_data->_2_System_Collections_Generic_HashSet_T__GetEnumerator);
      local_60 = (undefined1  [8])local_48._0_8_;
      puStack_58 = (undefined1 *)local_48._8_8_;
      local_50 = local_38;
      local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_48._8_8_ = local_60;
      local_38 = (UnityEngine_Object_o *)&method;
label_18066f280:
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                         (MethodInfo_15381F0 *)
                         method->rgctx_data->_7_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
      x_00 = local_50;
      if (bVar3) {
        if (!isShifter) goto label_18066f2f7;
        if (local_50 == (UnityEngine_Object_o *)0x0) {
label_18066f4a1:
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((local_50->klass->_2).typeHierarchyDepth < bVar1) ||
           ((local_50->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BaseShifter)) goto label_18066f4a1;
        if (((char)(*(uint64_t *)((char *)local_50 + 0x70)) == '\0') ||
           (*(char *)((longlong)&local_50[0x1b].klass + 1) != '\0')) {
label_18066f2f7:
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if (x_00 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (((char)(*(uint64_t *)((char *)x_00 + 0x70)) == '\0') &&
               (((includeAI && (*(char *)&(*(uint64_t *)((char *)x_00 + 0x80)) != '\0')) ||
                ((includeNonAI && (*(char *)&(*(uint64_t *)((char *)x_00 + 0x80)) == '\0')))))) {
              pSVar2 = (pCVar4->fields).List;
              if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              if (index < (pSVar2->fields)._size) {
                pIVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (pSVar2,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_object_get_Item);
                if (pIVar5 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
                if (((pIVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pIVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
                }
                x = pIVar5[3].klass;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,x_00,(MethodInfo *)0x0);
                if (!bVar3) {
                  index = index + 1;
                  goto label_18066f280;
                }
              }
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                         (MethodInfo *)method->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_);
              return true;
            }
          }
        }
        goto label_18066f280;
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                 (MethodInfo *)method->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_);
      pSVar2 = (pCVar4->fields).List;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        return index != (pSVar2->fields)._size;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$SpawnEffectInternal
// il2cpp: void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal (System_String_o* effectName, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, float scale, bool scaled, CustomLogic_CustomLogicColorBuiltin_o* tsExplodeColor, System_String_o* tsKillSound, const MethodInfo* method);
// 0x18200f360

void CustomLogic_CustomLogicGameBuiltin__SpawnEffectInternal
               (System_String_o *effectName,CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,float scale,bool scaled,
               CustomLogic_CustomLogicColorBuiltin_o *tsExplodeColor,System_String_o *tsKillSound,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Utility_Color255_o *__this;
  Il2CppType *handle;
  bool bVar5;
  System_Type_o *__this_00;
  System_Reflection_FieldInfo_o *left;
  System_String_o *pSVar6;
  System_Object_array *settings;
  UnityEngine_Color_o *pUVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Quaternion_o *pUVar10;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  int32_t local_88 [4];
  UnityEngine_Vector3_Fields local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  UnityEngine_Color_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_18434635c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_TSKillType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    Il2CppMethodInitialized_18434635c = '\x01';
  }
  handle = TypeRef_Effects_EffectPrefabs;
  local_res8[0] = 0;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  __this_00 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Type_o *)0x0) {
    left = System_Type__GetField(__this_00,effectName,(MethodInfo *)0x0);
    bVar5 = System_Reflection_PropertyInfo__op_Inequality
                      ((System_Reflection_PropertyInfo_o *)left,(System_Reflection_PropertyInfo_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      if (left == (System_Reflection_FieldInfo_o *)0x0) goto label_18200f700;
      pSVar6 = (System_String_o *)(*(left->klass->vtable)._26_unknown.methodPtr)(left,0);
      effectName = (System_String_o *)0x0;
      if (pSVar6 != (System_String_o *)0x0) {
        if (pSVar6->klass == g_data_184354e50) {
          effectName = pSVar6;
        }
        if (effectName == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
      }
    }
    settings = (System_Object_array *)0x0;
    if (Il2CppMethodInitialized_184345a1f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
      Il2CppMethodInitialized_184345a1f = '\x01';
    }
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    bVar5 = System_String__op_Equality
                      (effectName,TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode,
                       (MethodInfo *)0x0);
    if (bVar5) {
      local_res8[0] = 2;
      if (tsKillSound != (System_String_o *)0x0) {
        if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e58);
        }
        bVar5 = System_Enum__TryParse_Int32Enum_
                          (tsKillSound,local_res8,
                           (MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_TSKillType);
        if (!bVar5) {
          pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Unknown Thunderspear kill sound type: ");
          pSVar6 = System_String__Concat_1969e50(pSVar6,tsKillSound,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
          __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
          System_ArgumentException___ctor_1a77cc0(__this_01,pSVar6,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicGameBuiltin_SpawnEffectInternal);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
        }
      }
      settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if ((tsExplodeColor == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
         (__this = (tsExplodeColor->fields).Value, __this == (Utility_Color255_o *)0x0)) {
label_18200f78f:
        ThrowNullReferenceException();
      }
      pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_58,__this,(MethodInfo *)0x0);
      local_68._0_4_ = (pUVar7->fields).r;
      local_68._4_4_ = (pUVar7->fields).g;
      uStack_60._0_4_ = (pUVar7->fields).b;
      uStack_60._4_4_ = (pUVar7->fields).a;
      pIVar8 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_68);
      if (settings == (System_Object_array *)0x0) goto label_18200f78f;
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
      }
      if ((int)settings->max_length == 0) {
label_18200f789:
        ThrowIndexOutOfRangeException();
      }
      settings->m_Items[0] = pIVar8;
      Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar8);
      local_88[0] = local_res8[0];
      pIVar8 = il2cpp_value_box((Il2CppClass *)TypeInfo_Projectiles_TSKillType,local_88);
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((settings->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
      }
      if ((uint)settings->max_length < 2) goto label_18200f789;
      settings->m_Items[1] = pIVar8;
      Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar8);
    }
    if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      uVar1 = (rotation->fields).Value.fields.x;
      uVar3 = (rotation->fields).Value.fields.y;
      fVar4 = (position->fields).Value.fields.z;
      uVar2._0_4_ = (position->fields).Value.fields.x;
      uVar2._4_4_ = (position->fields).Value.fields.y;
      local_78.y = (float)uVar3 * 0.017453292;
      local_78.x = (float)uVar1 * 0.017453292;
      local_78.z = (rotation->fields).Value.fields.z * 0.017453292;
      pUVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)local_58,(UnityEngine_Vector3_o *)&local_78,
                           (MethodInfo *)0x0);
      local_58[0].r = (pUVar10->fields).x;
      local_58[0].g = (pUVar10->fields).y;
      local_58[0].b = (pUVar10->fields).z;
      local_58[0].a = (pUVar10->fields).w;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_78._0_8_ = uVar2;
      local_78.z = fVar4;
      Effects_EffectSpawner__Spawn
                (effectName,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)local_58,scale,
                 scaled,settings,(MethodInfo *)0x0);
      return;
    }
  }
label_18200f700:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGameBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGameBuiltin__get_ClassName (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1820129e0

System_String_o *
CustomLogic_CustomLogicGameBuiltin__get_ClassName
          (CustomLogic_CustomLogicGameBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434635d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    Il2CppMethodInitialized_18434635d = '\x01';
  }
  return "Game";
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsAbstract (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGameBuiltin__get_IsAbstract(CustomLogic_CustomLogicGameBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_IsStatic (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGameBuiltin__get_IsStatic(CustomLogic_CustomLogicGameBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicGameBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicGameBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGameBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicGameBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


