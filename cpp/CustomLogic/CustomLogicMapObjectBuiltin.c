// Type: CustomLogic.CustomLogicMapObjectBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicMapObjectBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapObjectBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapObjectBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a2c650

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapObjectBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a330a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075460e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460e2 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a33110

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddComponent>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddComponent_b__29_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33120

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddComponent_b__29_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *componentName;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  
  if (Il2CppMethodInitialized_075460e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    componentName =
         CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07546076 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07546076 = '\x01';
        uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      }
      else {
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                     ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
      }
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
                           (__this_00,(__c->fields).Value,componentName,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveComponent>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveComponent_b__30_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33230

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveComponent_b__30_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent(__c,name,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetComponent>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetComponent_b__31_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a332c0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetComponent_b__31_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *__this_00;
  System_String_o *name;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_075460e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (Map_MapObject_o *)0x0)) {
      pCVar1 = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetUnityComponent>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetUnityComponent_b__32_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33360

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetUnityComponent_b__32_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_075460e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07546078 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
        Il2CppMethodInitialized_07546078 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
      }
      pCVar1 = CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
                         (__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentEnabled>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentEnabled_b__33_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33430

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentEnabled_b__33_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_075460e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a334e2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled(__c,name,enabled,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05a334e2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentsEnabled>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentsEnabled_b__34_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a334f0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentsEnabled_b__34_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
    ;
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled(__c,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereCollider>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereCollider_b__35_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33580

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereCollider_b__35_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  MethodInfo *in_R8;
  float radius;
  
  if (Il2CppMethodInitialized_075460e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a3368c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if ((__a->max_length & 0xfffffffc) != 0) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (__a->m_Items[3],
                              (MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
                      (__c,collideMode,collideWith,center,radius,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto label_05a3368c;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxCollider>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxCollider_b__36_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a336a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxCollider_b__36_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicVector3Builtin_o *size;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075460ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ea = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a337e4:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((int)__a->max_length < 3) {
        center = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        size = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                           );
        if ((int)__a->max_length < 4) {
          size = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          size = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                           );
        }
      }
      if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider(__c,collideMode,collideWith,center,size,in_R9)
        ;
        return (Il2CppObject *)0x0;
      }
      goto label_05a337e4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideWith>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideWith_b__37_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a337f0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideWith_b__37_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *collideWith;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460eb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith(__c,collideWith,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideMode>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideMode_b__38_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33880

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideMode_b__38_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *collideMode;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ec = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode(__c,collideMode,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereTarget>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereTarget_b__39_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33910

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereTarget_b__39_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *team;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar1;
  float radius;
  
  if (Il2CppMethodInitialized_075460ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ed = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a339fd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
        ;
        if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
          pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget(__c,team,center,radius,method);
          return (Il2CppObject *)pCVar1;
        }
        goto label_05a339fd;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxTarget>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxTarget_b__40_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33a10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxTarget_b__40_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *team;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicVector3Builtin_o *size;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075460ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ee = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a33aee:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        size = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
          pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget(__c,team,center,size,in_R8);
          return (Il2CppObject *)pCVar1;
        }
        goto label_05a33aee;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChild>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChild_b__41_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33b00

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChild_b__41_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ef = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetChild(__c,name,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChildren>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChildren_b__42_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33b90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChildren_b__42_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetChildren(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__43_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33bb0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__43_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetTransform(__c,name,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetColorAll>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetColorAll_b__44_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33c40

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetColorAll_b__44_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll(__c,color,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__InBounds>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__InBounds_b__45_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33cd0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__InBounds_b__45_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_075460f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicMapObjectBuiltin__InBounds(__c,position,method_00);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsAverageCenter>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsAverageCenter_b__46_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33d80

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsAverageCenter_b__46_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsCenter>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsCenter_b__47_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33da0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsCenter_b__47_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsSize>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsSize_b__48_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33dc0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsSize_b__48_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMin>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMin_b__49_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33de0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMin_b__49_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMax>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMax_b__50_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33e00

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMax_b__50_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsExtents>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsExtents_b__51_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33e20

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsExtents_b__51_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCorners>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetCorners_b__52_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33e40

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetCorners_b__52_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetCorners(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasTag>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__HasTag_b__53_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33e60

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__HasTag_b__53_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *obj;
  System_String_o *tag;
  Il2CppObject *pIVar1;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_075460f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_0754608b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
        Il2CppMethodInitialized_0754608b = '\x01';
      }
      obj = (__c->fields).Value;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      uStack_19 = Map_MapLoader__HasTag(obj,tag,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_19);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBuiltinComponent>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBuiltinComponent_b__54_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33f60

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBuiltinComponent_b__54_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent(__c,name,method_00);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddRigidbody>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddRigidbody_b__55_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a33ff0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddRigidbody_b__55_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBuiltinComponent>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBuiltinComponent_b__56_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a34010

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBuiltinComponent_b__56_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  CustomLogic_BuiltinComponentInstance_o *pCVar3;
  
  if (Il2CppMethodInitialized_075460f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_0754608e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item)
        ;
        Il2CppMethodInitialized_0754608e = '\x01';
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar1,(Il2CppObject *)key,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                          );
        if (!bVar2) {
          return (Il2CppObject *)0x0;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)key,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                             );
          return (Il2CppObject *)pCVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveBuiltinComponent>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveBuiltinComponent_b__57_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a34110

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveBuiltinComponent_b__57_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460f6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent(__c,name,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__ConvertToCSV>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__ConvertToCSV_b__58_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a341a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__ConvertToCSV_b__58_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  
  if (((__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__c->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                     (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  return (Il2CppObject *)pSVar3;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a2c6e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AddBoxCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureTilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"GetComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsMax");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsSize");
    il2cpp_codegen_initialize_runtime_metadata(&"AddRigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"GetUnityComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsMin");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"AddBoxTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionLocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsAverageCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"ConvertToCSV");
    il2cpp_codegen_initialize_runtime_metadata(&"AddBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCorners");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSphereTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRenderer");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureOffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"InBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"SetComponentsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSphereCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"Tag");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsExtents");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureOffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"SetComponentEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetChild");
    il2cpp_codegen_initialize_runtime_metadata(&"Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    il2cpp_codegen_initialize_runtime_metadata(&"SetColorAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ActiveInHierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureTilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"HasTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"GetChildren");
    Il2CppMethodInitialized_07546093 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x56e8eb61) {
    if (uVar2 < 0x27a969bc) {
      if (uVar2 < 0x1be9479d) {
        if (uVar2 < 0x65b2735) {
          if (uVar2 == 0x232777f) {
            bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x3134bce) {
            bVar1 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x65b2734) {
            bVar1 = System_String__op_Equality(name,"GetBoundsMax",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0x18a43c5c) {
          if (uVar2 == 0xfe07306) {
            bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x18a43c5b) {
            bVar1 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x1b288681) {
          bVar1 = System_String__op_Equality(name,"HasTag",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1be9479c) {
          bVar1 = System_String__op_Equality(name,"HasRenderer",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x20810131) {
        if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x1f89134f) {
          bVar1 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x20810130) {
          bVar1 = System_String__op_Equality(name,"SetCollideMode",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x23cef8ba) {
        if (uVar2 == 0x22cef726) {
          bVar1 = System_String__op_Equality(name,"TextureTilingY",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x23cef8b9) {
          bVar1 = System_String__op_Equality(name,"TextureTilingX",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x25ea1867) {
        bVar1 = System_String__op_Equality(name,"GetChild",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x27a969bb) {
        bVar1 = System_String__op_Equality(name,"SetComponentEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x342cdb7a) {
      if (uVar2 < 0x2ac20558) {
        if (uVar2 == 0x28528e11) {
          bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x2862c297) {
          bVar1 = System_String__op_Equality(name,"RemoveBuiltinComponent",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2ac20557) {
          bVar1 = System_String__op_Equality(name,"AddRigidbody",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x2fe74448) {
        if (uVar2 == 0x2ace984c) {
          bVar1 = System_String__op_Equality(name,"SetComponentsEnabled",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2fe74447) {
          bVar1 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x30f356f2) {
        bVar1 = System_String__op_Equality(name,"GetComponent",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x342cdb79) {
        bVar1 = System_String__op_Equality(name,"SetColorAll",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x448260ec) {
      if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x43c043a7) {
        bVar1 = System_String__op_Equality(name,"GetCorners",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x448260eb) {
        bVar1 = System_String__op_Equality(name,"ConvertToCSV",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x51826a21) {
      if (uVar2 == 0x4614013f) {
        bVar1 = System_String__op_Equality(name,"SetCollideWith",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x51826a20) {
        bVar1 = System_String__op_Equality(name,"AddBoxTarget",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x53e18937) {
      bVar1 = System_String__op_Equality(name,"GetBoundsCenter",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x56e8eb60) {
      bVar1 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xad82abbc) {
    if (uVar2 < 0x83c140bc) {
      if (uVar2 < 0x67cfeb84) {
        if (uVar2 == 0x5eabd17f) {
          bVar1 = System_String__op_Equality(name,"InBounds",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x61e48c35) {
          bVar1 = System_String__op_Equality(name,"GetBuiltinComponent",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x67cfeb83) {
          bVar1 = System_String__op_Equality(name,"GetUnityComponent",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x755b5308) {
        if (uVar2 == 0x6a01cd56) {
          bVar1 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x755b5307) {
          bVar1 = System_String__op_Equality(name,"GetBoundsExtents",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x83c140bb) {
        bVar1 = System_String__op_Equality(name,"GetBoundsSize",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x770e2958) {
        bVar1 = System_String__op_Equality(name,"RemoveComponent",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x917c21f1) {
      if (uVar2 == 0x8d7dfb42) {
        bVar1 = System_String__op_Equality(name,"TextureOffsetY",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x8e7dfcd5) {
        bVar1 = System_String__op_Equality(name,"TextureOffsetX",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x917c21f0) {
        bVar1 = System_String__op_Equality(name,"GetBoundsAverageCenter",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xa18f595a) {
      if (uVar2 == 0x9f4e7c78) {
        bVar1 = System_String__op_Equality(name,"NetworkView",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xa18f5959) {
        bVar1 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa3370cc8) {
      bVar1 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xad82abbb) {
      bVar1 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd82af811) {
    if (uVar2 < 0xb6997fba) {
      if (uVar2 == 0xaf82143b) {
        bVar1 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xafdc1b96) {
        bVar1 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xb6997fb9) {
        bVar1 = System_String__op_Equality(name,"AddSphereCollider",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xbbdcd0a7) {
      if (uVar2 == 0xbbaa27dc) {
        bVar1 = System_String__op_Equality(name,"AddSphereTarget",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xbbdcd0a6) {
        bVar1 = System_String__op_Equality(name,"AddBuiltinComponent",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc156ee1d) {
      bVar1 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd82af810) {
      bVar1 = System_String__op_Equality(name,"GetChildren",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe50883bb) {
    if (uVar2 < 0xd948e168) {
      if (uVar2 == 0xd8f3e233) {
        bVar1 = System_String__op_Equality(name,"AddComponent",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd948e167) {
        bVar1 = System_String__op_Equality(name,"ActiveInHierarchy",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ActiveInHierarchy
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xe27f342a) {
      bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe50883ba) {
      bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe9952416) {
    if (uVar2 == 0xe5b43cf8) {
      bVar1 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe9952415) {
      bVar1 = System_String__op_Equality(name,"AddBoxCollider",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf445f026) {
    bVar1 = System_String__op_Equality(name,"GetBoundsMin",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf8835433) {
    bVar1 = System_String__op_Equality(name,"Tag",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapObjectBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x5a2dbe0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546094 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546094 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a2dc80

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546095 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x5a2dd60

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546096 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5a2de40

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546097 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_5
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x5a2df20

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546098 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x5a2e000

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c08c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_07546099 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c08c0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x5a2e0e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754609a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c08b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c08b0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x5a2e1c0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754609b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x5a2e2a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754609c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x5a2e380

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754609d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x5a2e460

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754609e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_12_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_12_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x5a2e540

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754609f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_0754609f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x5a2e5e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_14
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x5a2e6c0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_15
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_15
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ActiveInHierarchy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ActiveInHierarchy (const MethodInfo* method);
// 0x5a2e7a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ActiveInHierarchy
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x5a2e840

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__HasRenderer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer (const MethodInfo* method);
// 0x5a2e8e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x5a2e980

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_19_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_19_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_19_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX (const MethodInfo* method);
// 0x5a2ea60

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY (const MethodInfo* method);
// 0x5a2eb40

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX (const MethodInfo* method);
// 0x5a2ec20

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY (const MethodInfo* method);
// 0x5a2ed00

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x5a2ede0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460aa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Tag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag (const MethodInfo* method);
// 0x5a2ee80

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____getter_25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____setter_25_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____getter_25_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____setter_25_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x5a2ef60

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_26_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_26_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_26_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x5a2f040

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__NetworkView
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView (const MethodInfo* method);
// 0x5a2f0e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075460ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_075460ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent (const MethodInfo* method);
// 0x5a2f1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f1f5: jmp 0x5a2f265

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddComponent_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460af = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddComponent_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent (const MethodInfo* method);
// 0x5a2f300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f335: jmp 0x5a2f3a5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveComponent_b__30
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveComponent_b__30
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent (const MethodInfo* method);
// 0x5a2f440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f475: jmp 0x5a2f4e5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetComponent_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetComponent_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetUnityComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent (const MethodInfo* method);
// 0x5a2f580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f5b5: jmp 0x5a2f625

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetUnityComponent_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetUnityComponent_b__3
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled (const MethodInfo* method);
// 0x5a2f6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f6f5: jmp 0x5a2f765

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentEnabled_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentEnabled_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentsEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled (const MethodInfo* method);
// 0x5a2f800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f835: jmp 0x5a2f8a5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentsEnabled_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentsEnabled_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider (const MethodInfo* method);
// 0x5a2f940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2f975: jmp 0x5a2f9e5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereCollider_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereCollider_b__3
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider (const MethodInfo* method);
// 0x5a2fa80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2fab5: jmp 0x5a2fb25

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxCollider_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxCollider_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith (const MethodInfo* method);
// 0x5a2fbc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2fbf5: jmp 0x5a2fc65

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideWith_b__37_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideWith_b__37_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode (const MethodInfo* method);
// 0x5a2fd00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2fd35: jmp 0x5a2fda5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideMode_b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideMode_b__38_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget (const MethodInfo* method);
// 0x5a2fe40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2fe75: jmp 0x5a2fee5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereTarget_b__39
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460b9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereTarget_b__39
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget (const MethodInfo* method);
// 0x5a2ff80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2ffb5: jmp 0x5a30025

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxTarget_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460ba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxTarget_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChild
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild (const MethodInfo* method);
// 0x5a300c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a300f5: jmp 0x5a30165

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChild_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460bb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChild_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChildren
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren (const MethodInfo* method);
// 0x5a30200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30235: jmp 0x5a302a5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChildren_b__42_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460bc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChildren_b__42_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x5a30340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30375: jmp 0x5a303e5

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460bd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetColorAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll (const MethodInfo* method);
// 0x5a30480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a304b8: jmp 0x5a3052b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetColorAll_b__44_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460be = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetColorAll_b__44_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__InBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds (const MethodInfo* method);
// 0x5a305c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a305f8: jmp 0x5a3066b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__InBounds_b__45_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460bf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__45_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__45_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__InBounds_b__45_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__45_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__45_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsAverageCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter (const MethodInfo* method);
// 0x5a30700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30738: jmp 0x5a307ab

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsAverageCenter
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__46_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__46_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsAverageCenter
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__46_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__46_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter (const MethodInfo* method);
// 0x5a30840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30878: jmp 0x5a308eb

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsCenter_b__47
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__47_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__47_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsCenter_b__47
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__47_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsSize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize (const MethodInfo* method);
// 0x5a30980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a309b8: jmp 0x5a30a2b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsSize_b__48_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__48_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__48_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsSize_b__48_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__48_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin (const MethodInfo* method);
// 0x5a30ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30af8: jmp 0x5a30b6b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMin_b__49_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__49_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__49_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMin_b__49_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__49_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMax
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax (const MethodInfo* method);
// 0x5a30c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30c38: jmp 0x5a30cab

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMax_b__50_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__50_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__50_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMax_b__50_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__50_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__50_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsExtents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents (const MethodInfo* method);
// 0x5a30d40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30d78: jmp 0x5a30deb

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsExtents_b__51
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__51_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__51_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsExtents_b__51
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__51_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__51_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetCorners
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners (const MethodInfo* method);
// 0x5a30e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30eb8: jmp 0x5a30f2b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetCorners_b__52_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__52_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__52_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetCorners_b__52_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__52_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__52_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__HasTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag (const MethodInfo* method);
// 0x5a30fc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a30ff8: jmp 0x5a3106b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__HasTag_b__53_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__53_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__53_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__HasTag_b__53_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__53_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__53_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent (const MethodInfo* method);
// 0x5a31100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a31138: jmp 0x5a311ab

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBuiltinComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__54_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__54_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBuiltinComponent_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__54_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__54_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddRigidbody
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody (const MethodInfo* method);
// 0x5a31240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a31278: jmp 0x5a312eb

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddRigidbody_b__55_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460c9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__55_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__55_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddRigidbody_b__55_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__55_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__55_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent (const MethodInfo* method);
// 0x5a31380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a313b8: jmp 0x5a3142b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBuiltinComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460ca = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__56_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__56_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBuiltinComponent_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__56_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__56_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent (const MethodInfo* method);
// 0x5a314c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a314f8: jmp 0x5a3156b

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveBuiltinComponent
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460cb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__57_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__57_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveBuiltinComponent
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__57_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__57_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__ConvertToCSV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV (const MethodInfo* method);
// 0x5a31600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a31638: jmp 0x5a316ab

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075460cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__ConvertToCSV_b__58_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_075460cc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__58_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__58_0;
  }
  if (__this == (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__ConvertToCSV_b__58_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields;
    pCVar2->__9__58_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__58_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a31740

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075460cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AddBoxCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureTilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"GetComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsMax");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsSize");
    il2cpp_codegen_initialize_runtime_metadata(&"AddRigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"GetUnityComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsMin");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"AddBoxTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionLocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsAverageCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"ConvertToCSV");
    il2cpp_codegen_initialize_runtime_metadata(&"AddBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCorners");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSphereTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRenderer");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureOffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"InBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"SetComponentsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSphereCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"Tag");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBoundsExtents");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureOffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"SetComponentEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetChild");
    il2cpp_codegen_initialize_runtime_metadata(&"Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    il2cpp_codegen_initialize_runtime_metadata(&"SetColorAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ActiveInHierarchy");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBuiltinComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureTilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"HasTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"GetChildren");
    Il2CppMethodInitialized_075460cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Static",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionLocalRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Parent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Active",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActiveInHierarchy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasRenderer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureTilingX",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureTilingY",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureOffsetX",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureOffsetY",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Layer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rigidbody",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NetworkView",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetUnityComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetComponentEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetComponentsEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddSphereCollider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBoxCollider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCollideWith",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCollideMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddSphereTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBoxTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetChild",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetChildren",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetColorAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InBounds",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsAverageCenter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsCenter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsSize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsMin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsMax",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsExtents",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCorners",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasTag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBuiltinComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddRigidbody",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBuiltinComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveBuiltinComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ConvertToCSV",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_2_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a31f50

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_2_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     ((pMVar1->fields).ScriptObject == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a31f90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Position(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a31fa0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (__this_00,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_4_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32050

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_4_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_4_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32060

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_4_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                (__this_00,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_5_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32110

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_5_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_5_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32120

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_5_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_075460d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar4 = (pCVar6->fields).Value.fields.x;
    fVar5 = (pCVar6->fields).Value.fields.y;
    (__i->fields)._internalRotation.fields.z = (pCVar6->fields).Value.fields.z;
    (__i->fields)._internalRotation.fields.x = fVar4;
    (__i->fields)._internalRotation.fields.y = fVar5;
    (__i->fields)._needSetRotation = false;
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalRotation.fields.x;
      uVar2 = (__i->fields)._internalRotation.fields.y;
      UStack_20.x = (float)uVar1 * 0.017453292;
      UStack_20.y = (float)uVar2 * 0.017453292;
      UStack_20.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_6_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32210

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_6_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_6_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32220

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_6_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_075460d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar4 = (pCVar6->fields).Value.fields.x;
    fVar5 = (pCVar6->fields).Value.fields.y;
    (__i->fields)._internalLocalRotation.fields.z = (pCVar6->fields).Value.fields.z;
    (__i->fields)._internalLocalRotation.fields.x = fVar4;
    (__i->fields)._internalLocalRotation.fields.y = fVar5;
    (__i->fields)._needSetLocalRotation = false;
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalLocalRotation.fields.x;
      uVar2 = (__i->fields)._internalLocalRotation.fields.y;
      UStack_20.x = (float)uVar1 * 0.017453292;
      UStack_20.y = (float)uVar2 * 0.017453292;
      UStack_20.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_7_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32310

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_7_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_7_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32320

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_7_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this_00,(UnityEngine_Quaternion_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a323d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a323e0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localRotation
                (__this_00,(UnityEngine_Quaternion_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32490

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Forward(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a324a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_forward
                (__this_00,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32550

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Up(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32560

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_up
                (__this_00,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32610

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Right(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32620

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075460d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_right
                (__this_00,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_12_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a326d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_12_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  undefined1 auVar4 [16];
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_o UVar6;
  undefined8 local_18;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546070 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07546070 = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
        auVar5._0_8_ = UVar6.fields._0_8_;
        auVar5._8_8_ = extraout_XMM0_Qb;
        pMVar3 = (__i->fields).Value;
        if (pMVar3 != (Map_MapObject_o *)0x0) {
          uVar1 = (pMVar3->fields).BaseScale.fields.x;
          uVar2 = (pMVar3->fields).BaseScale.fields.y;
          auVar4._4_4_ = uVar2;
          auVar4._0_4_ = uVar1;
          auVar4._8_8_ = 0;
          auVar5 = divps(auVar5,auVar4);
          UVar6.fields.z = UVar6.fields.z / (pMVar3->fields).BaseScale.fields.z;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)
          ;
          local_18._0_4_ = auVar5._0_4_;
          local_18._4_4_ = auVar5._4_4_;
          UVar6.fields.x = (float)(undefined4)local_18;
          UVar6.fields.y = (float)local_18._4_4_;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,UVar6,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_12_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32780

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_12_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_Scale(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32800

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar2->fields).Name;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_14_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32830

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_14_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Parent(__i,method);
  return pIVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_14_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32840

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_14_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_Parent(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_15_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a328c0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_15_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar2 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_15_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32900

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_15_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_075460d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460d9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ActiveInHierarchy>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ActiveInHierarchy_g____getter_16_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32990

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ActiveInHierarchy_g____getter_16_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_17_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a329d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_17_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546073 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_07546073 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      transform = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__HasRenderer>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__HasRenderer_g____getter_18_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32a50

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__HasRenderer_g____getter_18_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     ((pMVar1->fields).renderCache == (UnityEngine_Renderer_array *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_19_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32a90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_19_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Color(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_19_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32aa0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_19_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075460da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460da = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_Color(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____getter_20_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32b20

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____getter_20_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX(__i,method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____setter_20_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32b50

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____setter_20_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_075460db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460db = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____getter_21_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32bd0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____getter_21_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY(__i,method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____setter_21_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32c00

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____setter_21_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_075460dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460dc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____getter_22_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32c80

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____getter_22_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX(__i,method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____setter_22_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32cb0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____setter_22_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_075460dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____getter_23_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32d30

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____getter_23_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY(__i,method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____setter_23_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32d60

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____setter_23_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_075460de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_24_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32de0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_24_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     ((pMVar1->fields).ScriptObject == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____getter_25_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32e20

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____getter_25_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  System_String_o *pSVar2;
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = UnityEngine_GameObject__get_tag(__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____setter_25_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32e50

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____setter_25_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *obj;
  System_String_o *tag;
  
  if (Il2CppMethodInitialized_075460df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460df = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546075 = '\x01';
  }
  obj = (__i->fields).Value;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__RegisterTag(tag,obj,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_26_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32f10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_26_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_26_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a32f50

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_26_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_075460e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (__this = (pMVar1->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_27_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a32fe0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_27_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._rigidBody;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____getter_28_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x5a33000

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____getter_28_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____setter|28_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____setter_28_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a33020

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____setter_28_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_075460e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075460e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicNetworkViewBuiltin)
  ;
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields)._NetworkView_k__BackingField = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__i->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___cctor (const MethodInfo* method);
// 0x5a341e0

void CustomLogic_CustomLogicMapObjectBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075460f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
    Il2CppMethodInitialized_075460f7 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicMapObjectBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, const MethodInfo* method);
// 0x5a34250

void CustomLogic_CustomLogicMapObjectBuiltin___c___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$<GetCorners>b__100_1
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin___c___GetCorners_b__100_1 (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x5a34260

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin___c___GetCorners_b__100_1
          (CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this,UnityEngine_Vector3_o v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  
  if (Il2CppMethodInitialized_075460f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_075460f8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,v,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x5a2bc70

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$<GetCorners>b__0
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___GetCorners_b__0 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o* __this, int32_t signX, const MethodInfo* method);
// 0x5a342c0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___GetCorners_b__0
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *__this,int32_t signX,
               MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *__this_01;
  System_Action_T__o *action;
  
  if (Il2CppMethodInitialized_075460f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ForEach);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1_GetCorners_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1);
    Il2CppMethodInitialized_075460f9 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) {
    (__this_01->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).CS___8__locals1);
    (__this_01->fields).signX = signX;
    __this_00 = (__this->fields).signs;
    action = (System_Action_T__o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
    System_Action_int____ctor
              ((System_Action_int__o *)action,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1_GetCorners_b__2,
               (MethodInfo_4A80B60 *)0x0);
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___ForEach
                (__this_00,action,(MethodInfo_39177D0 *)MethodInfo_System_Collections_Generic_List_int_ForEach
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o* __this, const MethodInfo* method);
// 0x5a343a0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$<GetCorners>b__2
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___GetCorners_b__2 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o* __this, int32_t signY, const MethodInfo* method);
// 0x5a343b0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___GetCorners_b__2
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *__this,int32_t signY,
               MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *pCVar1;
  System_Collections_Generic_List_int__o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *__this_01;
  System_Action_T__o *action;
  
  if (Il2CppMethodInitialized_075460fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ForEach);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2_GetCorners_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2);
    Il2CppMethodInitialized_075460fa = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *)0x0) {
    (__this_01->fields).CS___8__locals2 = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).CS___8__locals2);
    (__this_01->fields).signY = signY;
    pCVar1 = (__this->fields).CS___8__locals1;
    if (pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0) {
      __this_00 = (pCVar1->fields).signs;
      action = (System_Action_T__o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
      System_Action_int____ctor
                ((System_Action_int__o *)action,(Il2CppObject *)__this_01,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2_GetCorners_b__3,
                 (MethodInfo_4A80B60 *)0x0);
      if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___ForEach
                  (__this_00,action,
                   (MethodInfo_39177D0 *)MethodInfo_System_Collections_Generic_List_int_ForEach);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o* __this, const MethodInfo* method);
// 0x5a34490

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$<GetCorners>b__3
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___GetCorners_b__3 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o* __this, int32_t signZ, const MethodInfo* method);
// 0x5a344a0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___GetCorners_b__3
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *__this,int32_t signZ,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *pCVar8;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *pCVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  System_Object_array *pSVar11;
  MethodInfo *pMVar12;
  UnityEngine_Transform_o *__this_03;
  CustomLogic_CustomLogicVector3Builtin_o *__this_04;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o position;
  float fStack_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_075460fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_075460fb = '\x01';
  }
  pCVar8 = (__this->fields).CS___8__locals2;
  if ((((pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) &&
       (pCVar9 = (pCVar8->fields).CS___8__locals1,
       pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0)) &&
      (pCVar10 = (pCVar9->fields).result, pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar9->fields).boxCollider,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    uVar5 = (pCVar9->fields).size.fields.x;
    uVar6 = (pCVar9->fields).size.fields.y;
    iVar2 = (__this->fields).signY;
    iVar3 = (pCVar8->fields).signX;
    fVar4 = (pCVar9->fields).size.fields.z;
    __this_01 = (pCVar10->fields).List;
    __this_03 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    pCVar8 = (__this->fields).CS___8__locals2;
    if (((pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) &&
        (pCVar9 = (pCVar8->fields).CS___8__locals1,
        pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0)) &&
       (__this_02 = (pCVar9->fields).boxCollider, __this_02 != (UnityEngine_BoxCollider_o *)0x0)) {
      UVar13 = UnityEngine_BoxCollider__get_center(__this_02,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_Transform_o *)0x0) {
        position.fields.y = (float)uVar6 * (float)iVar2 * 0.5 + UVar13.fields.y;
        position.fields.x = (float)uVar5 * (float)iVar3 * 0.5 + UVar13.fields.x;
        position.fields.z = (float)signZ * fVar4 * 0.5 + UVar13.fields.z;
        UVar13 = UnityEngine_Transform__TransformPoint(__this_03,position,(MethodInfo *)0x0);
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_04,UVar13,(MethodInfo *)0x0);
        pMVar12 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this_01->fields)._items;
          if (pSVar11 != (System_Object_array *)0x0) {
            uVar7 = (__this_01->fields)._size;
            if (uVar7 < (uint)pSVar11->max_length) {
              (__this_01->fields)._size = uVar7 + 1;
              pSVar11->m_Items[(int)uVar7] = (Il2CppObject *)__this_04;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar7);
              return;
            }
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)__this_04,
                       (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___ctor (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5a26830

void CustomLogic_CustomLogicMapObjectBuiltin___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  
  if (Il2CppMethodInitialized_07546066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance);
    Il2CppMethodInitialized_07546066 = '\x01';
  }
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ctor);
  (__this->fields)._builtinCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._builtinCache);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Static (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a268f0

bool CustomLogic_CustomLogicMapObjectBuiltin__get_Static
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar2->fields).Static;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26910

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Position
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546067 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a269a0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Position
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a269f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546068 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a26a80

void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalPosition
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26ad0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  float local_2c;
  undefined8 local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_07546069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546069 = '\x01';
  }
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__this->fields)._needSetRotation == false) {
    local_28._0_4_ = (__this->fields)._internalRotation.fields.x;
    local_28._4_4_ = (__this->fields)._internalRotation.fields.y;
    local_2c = (__this->fields)._internalRotation.fields.z;
label_05a26b8f:
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    UVar2.fields.z = local_2c;
    UVar2.fields.x = (float)(undefined4)local_28;
    UVar2.fields.y = (float)local_28._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar2,(MethodInfo *)0x0);
    return __this_02;
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_18 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
      UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      euler.fields.x = UVar2.fields.x * 57.29578;
      euler.fields.y = UVar2.fields.y * 57.29578;
      euler.fields.z = UVar2.fields.z * 57.29578;
      UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      local_2c = UVar2.fields.z;
      local_28 = UVar2.fields._0_8_;
      (__this->fields)._internalRotation.fields.x = UVar2.fields.x;
      (__this->fields)._internalRotation.fields.y = UVar2.fields.y;
      (__this->fields)._internalRotation.fields.z = local_2c;
      (__this->fields)._needSetRotation = false;
      goto label_05a26b8f;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a26bd0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Rotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  float fVar4;
  float fVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.x;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalRotation.fields.z = (value->fields).Value.fields.z;
    (__this->fields)._internalRotation.fields.x = fVar4;
    (__this->fields)._internalRotation.fields.y = fVar5;
    (__this->fields)._needSetRotation = false;
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalRotation.fields.x;
      uVar2 = (__this->fields)._internalRotation.fields.y;
      UStack_20.x = (float)uVar1 * 0.017453292;
      UStack_20.y = (float)uVar2 * 0.017453292;
      UStack_20.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_01,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26c60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  float local_2c;
  undefined8 local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_0754606a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754606a = '\x01';
  }
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__this->fields)._needSetLocalRotation == false) {
    local_28._0_4_ = (__this->fields)._internalLocalRotation.fields.x;
    local_28._4_4_ = (__this->fields)._internalLocalRotation.fields.y;
    local_2c = (__this->fields)._internalLocalRotation.fields.z;
label_05a26d1f:
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    UVar2.fields.z = local_2c;
    UVar2.fields.x = (float)(undefined4)local_28;
    UVar2.fields.y = (float)local_28._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar2,(MethodInfo *)0x0);
    return __this_02;
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_18 = UnityEngine_Transform__get_localRotation(__this_01,(MethodInfo *)0x0);
      UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      euler.fields.x = UVar2.fields.x * 57.29578;
      euler.fields.y = UVar2.fields.y * 57.29578;
      euler.fields.z = UVar2.fields.z * 57.29578;
      UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      local_2c = UVar2.fields.z;
      local_28 = UVar2.fields._0_8_;
      (__this->fields)._internalLocalRotation.fields.x = UVar2.fields.x;
      (__this->fields)._internalLocalRotation.fields.y = UVar2.fields.y;
      (__this->fields)._internalLocalRotation.fields.z = local_2c;
      (__this->fields)._needSetLocalRotation = false;
      goto label_05a26d1f;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a26d60

void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  float fVar4;
  float fVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.x;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalLocalRotation.fields.z = (value->fields).Value.fields.z;
    (__this->fields)._internalLocalRotation.fields.x = fVar4;
    (__this->fields)._internalLocalRotation.fields.y = fVar5;
    (__this->fields)._needSetLocalRotation = false;
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalLocalRotation.fields.x;
      uVar2 = (__this->fields)._internalLocalRotation.fields.y;
      UStack_20.x = (float)uVar1 * 0.017453292;
      UStack_20.y = (float)uVar2 * 0.017453292;
      UStack_20.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_01,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26df0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_o value;
  
  if (Il2CppMethodInitialized_0754606b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_0754606b = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a26e80

void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this_01,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26ed0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_o value;
  
  if (Il2CppMethodInitialized_0754606c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_0754606c = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_localRotation(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a26f60

void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionLocalRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localRotation
                (__this_01,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a26fb0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Forward
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  float local_24;
  undefined1 local_20 [12];
  float fStack_14;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_0754606d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754606d = '\x01';
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 == (Map_MapObject_o *)0x0) ||
      (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar8 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
  local_24 = UVar8.fields.z;
  unique0x1000006a = extraout_XMM0_Dc;
  unique0x10000062 = UVar8.fields._0_8_;
  unique0x1000006e = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  if (g_data_0753e729 == '\0') {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    in_XMM1_Db = extraout_XMM0_Db;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (1e-05 < fVar6) {
    local_24 = local_24 / fVar6;
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6;
    auVar7._8_4_ = in_XMM1_Db;
    auVar7._12_4_ = in_XMM1_Db;
    auVar7 = divps(unique0x1000021a,auVar7);
    local_20._0_4_ = auVar7._0_4_;
    local_20._4_4_ = auVar7._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)local_20;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_24 = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  fStack_14 = (float)uVar2;
  local_20._8_4_ = uVar1;
  uStack_10 = 0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  UVar8.fields.z = local_24;
  UVar8.fields.x = (float)local_20._8_4_;
  UVar8.fields.y = fStack_14;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar8,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a27180

void CustomLogic_CustomLogicMapObjectBuiltin__set_Forward
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_forward
                (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a271d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Up
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  float local_24;
  undefined1 local_20 [12];
  float fStack_14;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_0754606e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754606e = '\x01';
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 == (Map_MapObject_o *)0x0) ||
      (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar8 = UnityEngine_Transform__get_up(__this_01,(MethodInfo *)0x0);
  local_24 = UVar8.fields.z;
  unique0x1000006a = extraout_XMM0_Dc;
  unique0x10000062 = UVar8.fields._0_8_;
  unique0x1000006e = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  if (g_data_0753e729 == '\0') {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    in_XMM1_Db = extraout_XMM0_Db;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (1e-05 < fVar6) {
    local_24 = local_24 / fVar6;
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6;
    auVar7._8_4_ = in_XMM1_Db;
    auVar7._12_4_ = in_XMM1_Db;
    auVar7 = divps(unique0x1000021a,auVar7);
    local_20._0_4_ = auVar7._0_4_;
    local_20._4_4_ = auVar7._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)local_20;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_24 = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  fStack_14 = (float)uVar2;
  local_20._8_4_ = uVar1;
  uStack_10 = 0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  UVar8.fields.z = local_24;
  UVar8.fields.x = (float)local_20._8_4_;
  UVar8.fields.y = fStack_14;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar8,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a273a0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Up
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_up
                (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a273f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Right
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  float local_24;
  undefined1 local_20 [12];
  float fStack_14;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_0754606f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754606f = '\x01';
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 == (Map_MapObject_o *)0x0) ||
      (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar8 = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
  local_24 = UVar8.fields.z;
  unique0x1000006a = extraout_XMM0_Dc;
  unique0x10000062 = UVar8.fields._0_8_;
  unique0x1000006e = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
  }
  if (g_data_0753e729 == '\0') {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar6 = local_24 * local_24 + fStack_14 * fStack_14 + (float)local_20._8_4_ * (float)local_20._8_4_;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    in_XMM1_Db = extraout_XMM0_Db;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (1e-05 < fVar6) {
    local_24 = local_24 / fVar6;
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6;
    auVar7._8_4_ = in_XMM1_Db;
    auVar7._12_4_ = in_XMM1_Db;
    auVar7 = divps(unique0x1000021a,auVar7);
    local_20._0_4_ = auVar7._0_4_;
    local_20._4_4_ = auVar7._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)local_20;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_24 = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  fStack_14 = (float)uVar2;
  local_20._8_4_ = uVar1;
  uStack_10 = 0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  UVar8.fields.z = local_24;
  UVar8.fields.x = (float)local_20._8_4_;
  UVar8.fields.y = fStack_14;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar8,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a275c0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Right
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_right
                (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27610

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Scale
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar4 [16];
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_o UVar6;
  undefined8 local_18;
  
  if (Il2CppMethodInitialized_07546070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546070 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
      auVar5._0_8_ = UVar6.fields._0_8_;
      auVar5._8_8_ = extraout_XMM0_Qb;
      pMVar3 = (__this->fields).Value;
      if (pMVar3 != (Map_MapObject_o *)0x0) {
        uVar1 = (pMVar3->fields).BaseScale.fields.x;
        uVar2 = (pMVar3->fields).BaseScale.fields.y;
        auVar4._4_4_ = uVar2;
        auVar4._0_4_ = uVar1;
        auVar4._8_8_ = 0;
        auVar5 = divps(auVar5,auVar4);
        UVar6.fields.z = UVar6.fields.z / (pMVar3->fields).BaseScale.fields.z;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_18._0_4_ = auVar5._0_4_;
        local_18._4_4_ = auVar5._4_4_;
        UVar6.fields.x = (float)(undefined4)local_18;
        UVar6.fields.y = (float)local_18._4_4_;
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar6,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a276c0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Scale
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value_00;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  if (((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (pMVar7 = (__this->fields).Value, pMVar7 != (Map_MapObject_o *)0x0)) &&
     (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    uVar3 = (value->fields).Value.fields.x;
    uVar5 = (value->fields).Value.fields.y;
    fVar1 = (value->fields).Value.fields.z;
    fVar2 = (pMVar7->fields).BaseScale.fields.z;
    uVar4 = (pMVar7->fields).BaseScale.fields.x;
    uVar6 = (pMVar7->fields).BaseScale.fields.y;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value_00.fields.x = (float)uVar3 * (float)uVar4;
      value_00.fields.y = (float)uVar5 * (float)uVar6;
      value_00.fields.z = fVar1 * fVar2;
      UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Name (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27740

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Name
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar2->fields).Name;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Parent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__get_Parent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27760

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__get_Parent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int32_t key;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546071 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    key = (pMVar1->fields).Parent;
    if (key < 1) {
      return (Il2CppObject *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pMVar1 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (__this_01,key,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,pMVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Parent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Parent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5a27840
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a279b3: mov rdi, r15
// asm:   0x5a279b6: mov rsi, rbx

void CustomLogic_CustomLogicMapObjectBuiltin__set_Parent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar3;
  Map_MapObject_o *pMVar4;
  
  if (Il2CppMethodInitialized_07546072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546072 = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    pMVar4 = (__this->fields).Value;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pIVar3 = (Il2CppClass *)0x0;
  }
  else {
    pIVar3 = value->klass;
    bVar1 = (pIVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
        pMVar4 = (__this->fields).Value;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParent(pMVar4,(Map_MapObject_o *)0x0,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        pMVar4 = (__this->fields).Value;
        if (((pMVar4 == (Map_MapObject_o *)0x0) ||
            (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
           (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Transform_o *)0x0)) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)value[3].klass,(MethodInfo *)0x0);
      }
      goto label_05a279c0;
    }
    pMVar4 = (__this->fields).Value;
    pIVar3 = value[3].klass;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
  }
  Map_MapLoader__SetParent(pMVar4,(Map_MapObject_o *)pIVar3,(MethodInfo *)0x0);
label_05a279c0:
  (__this->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a279e0

bool CustomLogic_CustomLogicMapObjectBuiltin__get_Active
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a27a00

void CustomLogic_CustomLogicMapObjectBuiltin__set_Active
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ActiveInHierarchy
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_ActiveInHierarchy (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27a30

bool CustomLogic_CustomLogicMapObjectBuiltin__get_ActiveInHierarchy
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Transform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27a50

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Transform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546073 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_HasRenderer
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27ac0

bool CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 == (UnityEngine_Renderer_array *)0x0)) {
    ThrowNullReferenceException();
  }
  return (int)pUVar2->max_length != 0;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27af0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Color
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  Utility_Color255_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *__this_02;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07546074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07546074 = '\x01';
  }
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        color = UnityEngine_Material__get_color(__this_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor_5ce7790(__this_01,color,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_02,__this_01,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x5a27c40

void CustomLogic_CustomLogicMapObjectBuiltin__set_Color
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_o value_00;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)value);
  if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    value_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this_01 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__set_color(__this_01,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingX
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27d70

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.x;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingX
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a27dc0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float fStack_24;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_05a27e5e:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_05a27e5e;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              fStack_24 = UVar3.fields.y;
              UVar3.fields.y = fStack_24;
              UVar3.fields.x = value;
              UnityEngine_Material__set_mainTextureScale(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingY
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27e70

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.y;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a27ec0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float fStack_28;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_05a27f5e:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_05a27f5e;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              fStack_28 = UVar3.fields.x;
              UVar3.fields.y = value;
              UVar3.fields.x = fStack_28;
              UnityEngine_Material__set_mainTextureScale(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetX
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27f70

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.x;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetX
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a27fc0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float fStack_24;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_05a2805e:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_05a2805e;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              fStack_24 = UVar3.fields.y;
              UVar3.fields.y = fStack_24;
              UVar3.fields.x = value;
              UnityEngine_Material__set_mainTextureOffset(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetY
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a28070

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.y;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a280c0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float fStack_28;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_05a2815e:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_05a2815e;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              fStack_28 = UVar3.fields.x;
              UVar3.fields.y = value;
              UVar3.fields.x = fStack_28;
              UnityEngine_Material__set_mainTextureOffset(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_ID (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a28170

int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_ID
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar2->fields).Id;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Tag
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a28190

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Tag
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = UnityEngine_GameObject__get_tag(__this_00,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Tag
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a281b0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_07546075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546075 = '\x01';
  }
  obj = (__this->fields).Value;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__RegisterTag(value,obj,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Layer
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_Layer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a28210

int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_Layer
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Layer
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Layer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a28230

void CustomLogic_CustomLogicMapObjectBuiltin__set_Layer
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__AddComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a28250

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546076 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
                     (__this_00,(__this->fields).Value,name,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a282e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a28310: jmp 0x5a28378

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  
  if (Il2CppMethodInitialized_07546077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546077 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = (__this->fields).Value;
  }
  else {
    __this_00 = (__this->fields).Value;
  }
  if (__this_00 != (Map_MapObject_o *)0x0) {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    instance = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__RemoveComponent(__this_01,instance,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__GetComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a28380

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_MapObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetUnityComponent
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a283a0

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    Il2CppMethodInitialized_07546078 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
  }
  pCVar1 = CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
                     (__this,name,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentEnabled
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, bool enabled, const MethodInfo* method);
// 0x5a28400

void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,bool enabled,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_o *p;
  bool bVar2;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  Il2CppClass *pIVar4;
  System_String_array *values;
  Il2CppObject *pIVar5;
  System_String_o *message;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  CustomLogic_BuiltinComponentInstance_o *local_28;
  
  if (Il2CppMethodInitialized_07546079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_TryGetValue);
    Il2CppMethodInitialized_07546079 = '\x01';
  }
  local_28 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    pCVar3 = Map_MapObject__FindComponentInstance(pMVar1,name,(MethodInfo *)0x0);
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
      (*(pCVar3->klass->vtable)._5_set_Enabled.methodPtr)
                (pCVar3,enabled,(pCVar3->klass->vtable)._5_set_Enabled.method);
      return;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)name,(Il2CppObject **)&local_28,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_TryGetValue
                        );
      if (!bVar2) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        values = (System_String_array *)SZArrayNew(pIVar4,5);
        NullCheck(values);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"Component '");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar5);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)name);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"' not found on MapObject '");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar5);
        pMVar1 = (__this->fields).Value;
        NullCheck(pMVar1);
        p = (pMVar1->fields).ScriptObject;
        NullCheck(p);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)(p->fields).Name);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"'.");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar5);
        message = System_String__Concat_5302910(values,(MethodInfo *)0x0);
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
        System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetComponentEnabled);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      if (local_28 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__set_Enabled(local_28,enabled,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentsEnabled
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x5a285b0
// eh: try 0x5a286c3..0x5a287ad -> pad 0x5a28801 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a287d2..0x5a287d7 -> pad 0x5a287f2 cleanup
// eh: try 0x5a287f5..0x5a287ff -> pad 0x5a28858 catch (...) [compiler noexcept guard]
// eh: try 0x5a28819..0x5a2881e -> pad 0x5a28843 cleanup
// eh: try 0x5a28846..0x5a28850 -> pad 0x5a28858 catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a28759: nop dword ptr [rax]
// asm:   0x5a287b2: jmp 0x5a287ba
// asm:   0x5a287b4: jmp 0x5a287ba
// asm:   0x5a287b6: jmp 0x5a28801
// asm:   0x5a287b8: jmp 0x5a28801
// asm:   0x5a287ba: mov r14, rax
// asm:   0x5a287bd: cmp edx, 1
// asm:   0x5a287c0: jne 0x5a287f5
// asm:   0x5a287c2: mov rdi, r14
// asm:   0x5a287c5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a287ca: mov rbx, qword ptr [rax]
// asm:   0x5a287cd: mov qword ptr [rsp + 8], rbx
// asm:   0x5a287d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a287d7: lea rax, [rip + 0x186769a]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance
// asm:   0x5a287de: mov rsi, qword ptr [rax]
// asm:   0x5a287e1: lea rdi, [rsp + 0x40]
// asm:   0x5a287e6: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5a287eb: test rbx, rbx
// asm:   0x5a287ee: je 0x5a28798
// asm:   0x5a287f0: jmp 0x5a2883b
// asm:   0x5a287f2: mov r14, rax
// asm:   0x5a287f5: lea rdi, [rsp + 8]
// asm:   0x5a287fa: call 0x2fd5bb0  ; il2cpp_runtime_helper_02fd5bb0()
// asm:   0x5a287ff: jmp 0x5a28850
// asm:   0x5a28801: mov r14, rax
// asm:   0x5a28804: cmp edx, 1
// asm:   0x5a28807: jne 0x5a28846
// asm:   0x5a28809: mov rdi, r14
// asm:   0x5a2880c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a28811: mov rbx, qword ptr [rax]
// asm:   0x5a28814: mov qword ptr [rsp + 8], rbx
// asm:   0x5a28819: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a2881e: lea rax, [rip + 0x186520b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a28825: mov rsi, qword ptr [rax]
// asm:   0x5a28828: lea rdi, [rsp + 0x20]
// asm:   0x5a2882d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a28832: test rbx, rbx
// asm:   0x5a28835: je 0x5a28705
// asm:   0x5a2883b: mov rdi, rbx
// asm:   0x5a2883e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a28843: mov r14, rax
// asm:   0x5a28846: lea rdi, [rsp + 8]
// asm:   0x5a2884b: call 0x2fd5b80  ; il2cpp_runtime_helper_02fd5b80()
// asm:   0x5a28850: mov rdi, r14
// asm:   0x5a28853: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a28858: mov rdi, rax
// asm:   0x5a2885b: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  Il2CppObject *local_48;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_0754607a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_718fe80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_718fe88
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BuiltinComponentInstance_GetEnumera
              );
    Il2CppMethodInitialized_0754607a = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).ComponentInstances,
     __this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_48 = local_60;
    local_58 = (undefined1  [8])local_70._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar2) break;
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*local_48->klass->vtable[5].methodPtr)(local_48,(ulong)enabled,local_48->klass->vtable[5].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this_01,
                             (MethodInfo_4AAD2A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Values
                            );
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  (&local_38,__this_02,
                   (MethodInfo_43F93D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BuiltinComponentInstance_GetEnumera
                  );
        local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_70._8_8_ = &local_38;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&local_38,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_718fe80
                            );
          if (!bVar2) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                      (&local_38,
                       (MethodInfo_4CE71F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance
                      );
            return;
          }
          if ((CustomLogic_BuiltinComponentInstance_o *)local_38.fields._currentValue ==
              (CustomLogic_BuiltinComponentInstance_o *)0x0) break;
          CustomLogic_BuiltinComponentInstance__set_Enabled
                    ((CustomLogic_BuiltinComponentInstance_o *)local_38.fields._currentValue,enabled,
                     (MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereCollider
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, System_String_o* collideWith, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x5a28860
// eh: try 0x5a28c33..0x5a28cd2 -> pad 0x5a28ce1 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a28cfb..0x5a28d00 -> pad 0x5a28d21 cleanup
// eh: try 0x5a28d24..0x5a28d2e -> pad 0x5a28d36 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a28cd7: jmp 0x5a28ce3
// asm:   0x5a28cd9: jmp 0x5a28ce3
// asm:   0x5a28cdb: jmp 0x5a28ce3
// asm:   0x5a28cdd: jmp 0x5a28ce3
// asm:   0x5a28cdf: jmp 0x5a28ce3
// asm:   0x5a28ce1: jmp 0x5a28ce3
// asm:   0x5a28ce3: mov rbx, rax
// asm:   0x5a28ce6: cmp edx, 1
// asm:   0x5a28ce9: jne 0x5a28d24
// asm:   0x5a28ceb: mov rdi, rbx
// asm:   0x5a28cee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a28cf3: mov rbx, qword ptr [rax]
// asm:   0x5a28cf6: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5a28cfb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a28d00: lea rax, [rip + 0x1864d29]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a28d07: mov rsi, qword ptr [rax]
// asm:   0x5a28d0a: lea rdi, [rsp + 0x10]
// asm:   0x5a28d0f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a28d14: test rbx, rbx
// asm:   0x5a28d17: je 0x5a28cbe
// asm:   0x5a28d19: mov rdi, rbx
// asm:   0x5a28d1c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a28d21: mov rbx, rax
// asm:   0x5a28d24: lea rdi, [rsp + 0x48]
// asm:   0x5a28d29: call 0x2fd5be0  ; il2cpp_runtime_helper_02fd5be0()
// asm:   0x5a28d2e: mov rdi, rbx
// asm:   0x5a28d31: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a28d36: mov rdi, rax
// asm:   0x5a28d39: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,float radius,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  Il2CppObject *classInstance;
  bool bVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o b;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_0754607b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754607b = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2._0_4_ = (pMVar4->fields).BaseScale.fields.x;
    uVar2._4_4_ = (pMVar4->fields).BaseScale.fields.y;
    fVar8 = (pMVar4->fields).BaseScale.fields.z;
    uVar3._0_4_ = (center->fields).Value.fields.x;
    uVar3._4_4_ = (center->fields).Value.fields.y;
    fVar1 = (center->fields).Value.fields.z;
    uStack_70 = 0;
    local_78 = uVar2;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      uStack_40 = 0;
      local_48 = uVar3;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      uVar3._0_4_ = (undefined4)local_48;
      uVar3._4_4_ = local_48._4_4_;
      uVar2._0_4_ = (float)local_78;
      uVar2._4_4_ = local_78._4_4_;
    }
    UVar9.fields.y = (float)uVar3._4_4_;
    UVar9.fields.x = (float)(undefined4)uVar3;
    UVar9.fields.z = fVar1;
    b.fields.y = (float)uVar2._4_4_;
    b.fields.x = (float)(undefined4)uVar2;
    b.fields.z = fVar8;
    UVar9 = Utility_Util__DivideVectors(UVar9,b,(MethodInfo *)0x0);
    pCVar6 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar9,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    v.fields.z = fVar8;
    v.fields.x = (float)local_78;
    v.fields.y = (float)local_78._4_4_;
    fVar8 = MiscExtensions__MaxComponent(v,(MethodInfo *)0x0);
    local_78 = CONCAT44(local_78._4_4_,fVar8);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa10(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      pMVar4 = (__this->fields).Value;
      if ((pMVar4 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar7,p,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      (pUVar7,(UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e72b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_0753e72b = '\x01';
            }
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localRotation
                        (pUVar7,(UnityEngine_Quaternion_o)
                                *(UnityEngine_Quaternion_Fields *)
                                 TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b7 = '\x01';
              }
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localScale
                          (pUVar7,(UnityEngine_Vector3_o)
                                  (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                           (MethodInfo *)0x0);
                c = UnityEngine_GameObject__AddComponent_object_
                              (__this_02,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                Map_MapLoader__SetCollider
                          ((UnityEngine_Collider_o *)c,collideMode,collideWith,(MethodInfo *)0x0);
                if (c != (UnityEngine_SphereCollider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius(c,radius / (float)local_78,(MethodInfo *)0x0);
                  if (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    UnityEngine_SphereCollider__set_center
                              (c,(UnityEngine_Vector3_o)(pCVar6->fields).Value.fields,(MethodInfo *)0x0);
                    __this_03 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_02,
                                           (MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                          );
                    pMVar4 = (__this->fields).Value;
                    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
                       (__this_01 = (pMVar4->fields).ComponentInstances,
                       __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                                 (System_Collections_Generic_List_object__o *)__this_01,
                                 (MethodInfo_395E050 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                );
                      local_98.fields._current = (Il2CppObject *)local_50;
                      local_98.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
                      local_98.fields._index = local_60._8_4_;
                      local_98.fields._version = local_60._12_4_;
                      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                      local_60._8_8_ = &local_98;
                      if (__this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                        while( true ) {
                          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                            (&local_98,
                                             (MethodInfo_4C45C50 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                            );
                          if (!bVar5) break;
                          if ((CustomLogic_CustomLogicComponentInstance_o *)local_98.fields._current ==
                              (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a28ccd;
                          bVar5 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                            ((CustomLogic_CustomLogicComponentInstance_o *)
                                             local_98.fields._current,(MethodInfo *)0x0);
                          if (bVar5) {
                            ThrowNullReferenceException();
                          }
                        }
                      }
                      else {
                        while( true ) {
                          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                            (&local_98,
                                             (MethodInfo_4C45C50 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                            );
                          classInstance = local_98.fields._current;
                          if (!bVar5) break;
                          if ((CustomLogic_CustomLogicComponentInstance_o *)local_98.fields._current ==
                              (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a28ccd:
                            ThrowNullReferenceException();
                          }
                          bVar5 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                            ((CustomLogic_CustomLogicComponentInstance_o *)
                                             local_98.fields._current,(MethodInfo *)0x0);
                          if (bVar5) {
                            CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                      (__this_03,(CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                       (MethodInfo *)0x0);
                          }
                        }
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                (&local_98,
                                 (MethodInfo_4C45C40 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                );
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
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxCollider
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, System_String_o* collideWith, CustomLogic_CustomLogicVector3Builtin_o* center, CustomLogic_CustomLogicVector3Builtin_o* size, const MethodInfo* method);
// 0x5a28d40
// eh: try 0x5a294f4..0x5a29585 -> pad 0x5a29599 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a295b3..0x5a295b8 -> pad 0x5a295d9 cleanup
// eh: try 0x5a295dc..0x5a295e6 -> pad 0x5a295ee catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a294ef: nop 
// asm:   0x5a2952c: nop dword ptr [rax]
// asm:   0x5a2958f: jmp 0x5a2959b
// asm:   0x5a29591: jmp 0x5a2959b
// asm:   0x5a29593: jmp 0x5a2959b
// asm:   0x5a29595: jmp 0x5a2959b
// asm:   0x5a29597: jmp 0x5a2959b
// asm:   0x5a29599: jmp 0x5a2959b
// asm:   0x5a2959b: mov rbx, rax
// asm:   0x5a2959e: cmp edx, 1
// asm:   0x5a295a1: jne 0x5a295dc
// asm:   0x5a295a3: mov rdi, rbx
// asm:   0x5a295a6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a295ab: mov rbx, qword ptr [rax]
// asm:   0x5a295ae: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5a295b3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a295b8: lea rax, [rip + 0x1864471]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a295bf: mov rsi, qword ptr [rax]
// asm:   0x5a295c2: lea rdi, [rsp + 0x60]
// asm:   0x5a295c7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a295cc: test rbx, rbx
// asm:   0x5a295cf: je 0x5a2956e
// asm:   0x5a295d1: mov rdi, rbx
// asm:   0x5a295d4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a295d9: mov rbx, rax
// asm:   0x5a295dc: lea rdi, [rsp + 0x28]
// asm:   0x5a295e1: call 0x2fd5c10  ; il2cpp_runtime_helper_02fd5c10()
// asm:   0x5a295e6: mov rdi, rbx
// asm:   0x5a295e9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a295ee: mov rdi, rax
// asm:   0x5a295f1: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,
               CustomLogic_CustomLogicVector3Builtin_o *size,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_Renderer_array *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_Fields b;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_Fields b_00;
  Il2CppObject *classInstance;
  bool bVar17;
  bool bVar18;
  ulong uVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Transform_o *p;
  UnityEngine_BoxCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  ulong uVar22;
  float fVar23;
  float fVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  UnityEngine_Vector3_o a;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o a_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o value_00;
  float local_100;
  float local_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_String_o *local_b8;
  float local_ac;
  System_Collections_Generic_List_Enumerator_object__o local_a8;
  CustomLogic_CustomLogicMapObjectBuiltin_o *local_88;
  undefined8 uStack_80;
  System_String_o *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_0754607c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754607c = '\x01';
  }
  UVar40.fields.z = local_ac;
  UVar40.fields.x = (float)local_48;
  UVar40.fields.y = local_48._4_4_;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  pMVar6 = (__this->fields).Value;
  if (pMVar6 == (Map_MapObject_o *)0x0) goto label_05a29585;
  if ((center == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (size == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    UVar41.fields.z = local_ac;
    UVar41.fields.x = (float)local_48;
    UVar41.fields.y = local_48._4_4_;
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    pMVar6 = (__this->fields).Value;
    if ((pMVar6 == (Map_MapObject_o *)0x0) ||
       (pUVar7 = (pMVar6->fields).renderCache, UVar40.fields = UVar41.fields,
       pUVar7 == (UnityEngine_Renderer_array *)0x0)) goto label_05a29585;
    local_c8 = *(System_Collections_Generic_List_T__o **)
                &(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
    uStack_c0 = 0;
    local_fc = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar8->zeroVector).fields.x;
    uVar4 = (pUVar8->zeroVector).fields.y;
    local_f8._4_4_ = (float)uVar4 * 0.5;
    local_f8._0_4_ = (float)uVar2 * 0.5;
    _fStack_f0 = 0;
    local_100 = (pUVar8->zeroVector).fields.z * 0.5;
    local_b8 = collideWith;
    local_88 = __this;
    local_70 = collideMode;
    if (0 < (int)pUVar7->max_length) {
      uVar19 = pUVar7->max_length & 0xffffffff;
      bVar18 = false;
      uVar22 = 0;
      do {
        if (uVar19 <= uVar22) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pUVar7->m_Items[uVar22];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar17 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        UVar40.fields.z = local_ac;
        UVar40.fields.x = (float)local_48;
        UVar40.fields.y = local_48._4_4_;
        UVar13.fields.z = local_ac;
        UVar13.fields.x = (float)local_48;
        UVar13.fields.y = local_48._4_4_;
        if (bVar17) {
          if (bVar18) {
            UVar40.fields = UVar13.fields;
            if (x == (UnityEngine_Object_o *)0x0) goto label_05a29585;
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)local_e0,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            fVar28 = (float)local_e0._8_4_ - fStack_cc;
            fVar29 = (float)local_e0._8_4_ + fStack_cc;
            auVar24._0_4_ = (float)local_c8 - (float)local_f8._0_4_;
            auVar24._4_4_ = local_c8._4_4_ - (float)local_f8._4_4_;
            auVar24._8_4_ = (float)uStack_c0 - fStack_f0;
            auVar24._12_4_ = uStack_c0._4_4_ - fStack_ec;
            fVar23 = local_fc - local_100;
            if (fVar28 <= local_fc - local_100) {
              fVar23 = fVar28;
            }
            fVar26 = local_fc + local_100;
            if (local_fc + local_100 <= fVar28) {
              fVar26 = fVar28;
            }
            fVar28 = (fVar26 - fVar23) * 0.5;
            local_fc = (fVar23 + fVar28) - fVar28;
            if (fVar29 <= local_fc) {
              local_fc = fVar29;
            }
            fVar28 = fVar23 + fVar28 + fVar28;
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
            }
            fVar32 = local_e0._0_4_ + fStack_d4;
            fVar33 = local_e0._4_4_ + fStack_d0;
            auVar35._0_4_ = (float)local_f8._0_4_ + (float)local_c8;
            auVar35._4_4_ = (float)local_f8._4_4_ + local_c8._4_4_;
            auVar35._8_4_ = fStack_f0 + (float)uStack_c0;
            auVar35._12_4_ = fStack_ec + uStack_c0._4_4_;
            auVar30._0_4_ = local_e0._0_4_ - fStack_d4;
            auVar30._4_4_ = local_e0._4_4_ - fStack_d0;
            auVar30._8_8_ = 0;
            auVar24 = minps(auVar24,auVar30);
            auVar36 = maxps(auVar35,auVar30);
            fVar34 = (auVar36._0_4_ - auVar24._0_4_) * 0.5;
            fVar37 = (auVar36._4_4_ - auVar24._4_4_) * 0.5;
            fVar38 = (auVar36._8_4_ - auVar24._8_4_) * 0.0;
            fVar39 = (auVar36._12_4_ - auVar24._12_4_) * 0.0;
            fVar23 = auVar24._0_4_ + fVar34;
            fVar29 = auVar24._4_4_ + fVar37;
            fVar26 = auVar24._8_4_ + fVar38;
            fVar27 = auVar24._12_4_ + fVar39;
            auVar31._0_4_ = fVar23 - fVar34;
            auVar31._4_4_ = fVar29 - fVar37;
            auVar31._8_4_ = fVar26 - fVar38;
            auVar31._12_4_ = fVar27 - fVar39;
            auVar36._4_4_ = fVar33;
            auVar36._0_4_ = fVar32;
            auVar36._8_8_ = 0;
            auVar36 = minps(auVar31,auVar36);
            auVar25._0_4_ = fVar23 + fVar34;
            auVar25._4_4_ = fVar29 + fVar37;
            auVar25._8_4_ = fVar26 + fVar38;
            auVar25._12_4_ = fVar27 + fVar39;
            auVar10._4_4_ = fVar33;
            auVar10._0_4_ = fVar32;
            auVar10._8_8_ = 0;
            auVar24 = maxps(auVar25,auVar10);
            local_f8._0_4_ = (auVar24._0_4_ - auVar36._0_4_) * 0.5;
            local_f8._4_4_ = (auVar24._4_4_ - auVar36._4_4_) * 0.5;
            fStack_f0 = (auVar24._8_4_ - auVar36._8_4_) * 0.0;
            fStack_ec = (auVar24._12_4_ - auVar36._12_4_) * 0.0;
            local_100 = (fVar28 - local_fc) * 0.5;
            local_c8 = (System_Collections_Generic_List_T__o *)
                       CONCAT44(auVar36._4_4_ + (float)local_f8._4_4_,auVar36._0_4_ + (float)local_f8._0_4_);
            uStack_c0 = CONCAT44(auVar36._12_4_ + fStack_ec,auVar36._8_4_ + fStack_f0);
            local_fc = local_fc + local_100;
          }
          else {
            if (x == (UnityEngine_Object_o *)0x0) goto label_05a29585;
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)local_e0,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)local_e0,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            local_c8 = (System_Collections_Generic_List_T__o *)local_e0._0_8_;
            uStack_c0 = 0;
            local_fc = (float)local_e0._8_4_;
            local_f8._4_4_ = fStack_d0;
            local_f8._0_4_ = fStack_d4;
            _fStack_f0 = 0;
            local_100 = fStack_cc;
            bVar18 = true;
          }
        }
        uVar22 = uVar22 + 1;
        uVar5 = (uint)pUVar7->max_length;
        uVar19 = (ulong)uVar5;
      } while ((long)uVar22 < (long)(int)uVar5);
    }
    collideMode = local_70;
    __this = local_88;
    collideWith = local_b8;
    UVar14.fields.z = local_ac;
    UVar14.fields.x = (float)local_48;
    UVar14.fields.y = local_48._4_4_;
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    pMVar6 = (local_88->fields).Value;
    if (pMVar6 == (Map_MapObject_o *)0x0) goto label_05a29585;
    pUVar20 = (pMVar6->fields).GameObject;
    UVar40.fields = UVar14.fields;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_05a29585;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05a29585;
    UVar41 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    local_ac = UVar41.fields.z;
    local_48 = UVar41.fields._0_8_;
    pMVar6 = (__this->fields).Value;
    if (pMVar6 == (Map_MapObject_o *)0x0) goto label_05a29585;
    pUVar20 = (pMVar6->fields).GameObject;
    UVar40 = UVar41;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_05a29585;
    uStack_40 = extraout_XMM0_Qb_00;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05a29585;
    UVar41 = UnityEngine_Transform__get_localScale(pUVar21,(MethodInfo *)0x0);
    UVar15.fields.z = local_ac;
    UVar15.fields.x = (float)local_48;
    UVar15.fields.y = local_48._4_4_;
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    pMVar6 = (__this->fields).Value;
    if (pMVar6 == (Map_MapObject_o *)0x0) goto label_05a29585;
    pUVar20 = (pMVar6->fields).GameObject;
    local_58 = UVar41.fields._0_8_;
    UVar40.fields = UVar15.fields;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_05a29585;
    uStack_50 = extraout_XMM0_Qb_01;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05a29585;
    UVar41 = UnityEngine_Transform__get_localScale(pUVar21,(MethodInfo *)0x0);
    UVar16.fields.z = local_ac;
    UVar16.fields.x = (float)local_48;
    UVar16.fields.y = local_48._4_4_;
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    pMVar6 = (__this->fields).Value;
    if (pMVar6 == (Map_MapObject_o *)0x0) goto label_05a29585;
    pUVar20 = (pMVar6->fields).GameObject;
    local_68 = UVar41.fields._0_8_;
    UVar40.fields = UVar16.fields;
    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_05a29585;
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_05a29585;
    local_c8 = (System_Collections_Generic_List_T__o *)
               CONCAT44(local_c8._4_4_ - local_48._4_4_,(float)local_c8 - (float)local_48);
    uStack_c0 = CONCAT44(uStack_c0._4_4_ - uStack_40._4_4_,(float)uStack_c0 - (float)uStack_40);
    local_fc = local_fc - local_ac;
    local_f8._4_4_ = (float)local_f8._4_4_ + (float)local_f8._4_4_;
    local_f8._0_4_ = (float)local_f8._0_4_ + (float)local_f8._0_4_;
    fStack_f0 = fStack_f0 + fStack_f0;
    fStack_ec = fStack_ec + fStack_ec;
    UVar40 = UnityEngine_Transform__get_localScale(pUVar21,(MethodInfo *)0x0);
    auVar9._4_4_ = local_68._4_4_;
    auVar9._0_4_ = (undefined4)local_58;
    auVar9._8_4_ = (undefined4)uStack_50;
    auVar9._12_4_ = uStack_50._4_4_;
    auVar24 = divps(_local_f8,auVar9);
    value.fields.z = (local_100 + local_100) / UVar40.fields.z;
    value.fields.x = (float)auVar24._0_4_;
    value.fields.y = (float)auVar24._4_4_;
  }
  else {
    pUVar1 = &(pMVar6->fields).BaseScale;
    b_00 = pUVar1->fields;
    b = pUVar1->fields;
    pSVar3 = *(System_Collections_Generic_List_T__o **)&(center->fields).Value.fields;
    fVar23 = (center->fields).Value.fields.z;
    local_88 = *(CustomLogic_CustomLogicMapObjectBuiltin_o **)&(size->fields).Value.fields;
    uStack_80 = 0;
    local_b8 = (System_String_o *)CONCAT44(local_b8._4_4_,(size->fields).Value.fields.z);
    fVar28 = SUB84(pSVar3,0);
    fVar29 = (float)((ulong)pSVar3 >> 0x20);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      uStack_c0 = 0;
      local_c8 = pSVar3;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      fVar28 = (float)local_c8;
      fVar29 = local_c8._4_4_;
    }
    a.fields.y = fVar29;
    a.fields.x = fVar28;
    a.fields.z = fVar23;
    UVar40 = Utility_Util__DivideVectors(a,(UnityEngine_Vector3_o)b_00,(MethodInfo *)0x0);
    local_fc = UVar40.fields.z;
    local_c8 = UVar40.fields._0_8_;
    a_00.fields.z = local_b8._0_4_;
    a_00.fields._0_8_ = local_88;
    uStack_c0 = extraout_XMM0_Qb;
    value = Utility_Util__DivideVectors(a_00,(UnityEngine_Vector3_o)b,(MethodInfo *)0x0);
  }
  pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(pUVar20,(MethodInfo *)0x0);
  UVar40.fields.z = local_ac;
  UVar40.fields.x = (float)local_48;
  UVar40.fields.y = local_48._4_4_;
  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
    pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
    UVar11.fields.z = local_ac;
    UVar11.fields.x = (float)local_48;
    UVar11.fields.y = local_48._4_4_;
    UVar40.fields.z = local_ac;
    UVar40.fields.x = (float)local_48;
    UVar40.fields.y = local_48._4_4_;
    pMVar6 = (__this->fields).Value;
    if ((pMVar6 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar6->fields).GameObject, UVar40.fields = UVar11.fields,
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      UVar40.fields.z = local_ac;
      UVar40.fields.x = (float)local_48;
      UVar40.fields.y = local_48._4_4_;
      if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar21,p,(MethodInfo *)0x0);
        pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        UVar40.fields.z = local_ac;
        UVar40.fields.x = (float)local_48;
        UVar40.fields.y = local_48._4_4_;
        if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar21,(UnityEngine_Vector3_o)
                             (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_0753e72b = '\x01';
          }
          UVar40.fields.z = local_ac;
          UVar40.fields.x = (float)local_48;
          UVar40.fields.y = local_48._4_4_;
          if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar21,(UnityEngine_Quaternion_o)
                               *(UnityEngine_Quaternion_Fields *)
                                TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
            pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            UVar40.fields.z = local_ac;
            UVar40.fields.x = (float)local_48;
            UVar40.fields.y = local_48._4_4_;
            if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar21,(UnityEngine_Vector3_o)
                                 (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                         (MethodInfo *)0x0);
              c = UnityEngine_GameObject__AddComponent_object_
                            (pUVar20,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              Map_MapLoader__SetCollider
                        ((UnityEngine_Collider_o *)c,collideMode,collideWith,(MethodInfo *)0x0);
              UVar40.fields.z = local_ac;
              UVar40.fields.x = (float)local_48;
              UVar40.fields.y = local_48._4_4_;
              if (c != (UnityEngine_BoxCollider_o *)0x0) {
                UnityEngine_BoxCollider__set_size(c,value,(MethodInfo *)0x0);
                value_00.fields.z = local_fc;
                value_00.fields._0_8_ = local_c8;
                UnityEngine_BoxCollider__set_center(c,value_00,(MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar20,(MethodInfo_353B6A0 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                      );
                UVar12.fields.z = local_ac;
                UVar12.fields.x = (float)local_48;
                UVar12.fields.y = local_48._4_4_;
                UVar40.fields.z = local_ac;
                UVar40.fields.x = (float)local_48;
                UVar40.fields.y = local_48._4_4_;
                pMVar6 = (__this->fields).Value;
                if ((pMVar6 != (Map_MapObject_o *)0x0) &&
                   (__this_01 = (pMVar6->fields).ComponentInstances, UVar40.fields = UVar12.fields,
                   __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,
                             (System_Collections_Generic_List_object__o *)__this_01,
                             (MethodInfo_395E050 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                            );
                  local_a8.fields._current = (Il2CppObject *)CONCAT44(fStack_cc,fStack_d0);
                  local_a8.fields._list = (System_Collections_Generic_List_T__o *)local_e0._0_8_;
                  local_e0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                  unique0x00009c00 = &local_a8;
                  if (__this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                    while( true ) {
                      bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (&local_a8,
                                          (MethodInfo_4C45C50 *)
                                          MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                         );
                      if (!bVar18) break;
                      if ((CustomLogic_CustomLogicComponentInstance_o *)local_a8.fields._current ==
                          (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a29580;
                      bVar18 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                         ((CustomLogic_CustomLogicComponentInstance_o *)
                                          local_a8.fields._current,(MethodInfo *)0x0);
                      if (bVar18) {
                        ThrowNullReferenceException();
                      }
                    }
                  }
                  else {
                    while( true ) {
                      bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (&local_a8,
                                          (MethodInfo_4C45C50 *)
                                          MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                         );
                      classInstance = local_a8.fields._current;
                      if (!bVar18) break;
                      if ((CustomLogic_CustomLogicComponentInstance_o *)local_a8.fields._current ==
                          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a29580:
                        ThrowNullReferenceException();
                      }
                      bVar18 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                         ((CustomLogic_CustomLogicComponentInstance_o *)
                                          local_a8.fields._current,(MethodInfo *)0x0);
                      if (bVar18) {
                        CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                  (__this_02,(CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                   (MethodInfo *)0x0);
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (&local_a8,
                             (MethodInfo_4C45C40 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05a29585:
  local_ac = UVar40.fields.z;
  local_48 = UVar40.fields._0_8_;
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideWith
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideWith, const MethodInfo* method);
// 0x5a29600

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideWith,
               MethodInfo *method)

{
  uint32_t uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Collider_o *__this_00;
  System_String_o *collideMode;
  bool bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  Map_MapObjectCollideMode_StaticFields *pMVar7;
  UnityEngine_Collider_array *pUVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_0754607d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_0754607d = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (pUVar3,(MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (0 < (int)uVar5) {
        uVar9 = 0;
        do {
          if (uVar5 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar9];
          if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_05a297cd;
          bVar4 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
          if (bVar4) {
            bVar4 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
            uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
            if (bVar4) {
              if (uVar1 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
              }
              pMVar7 = (Map_MapObjectCollideMode_StaticFields *)
                       &TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
            }
            else {
              if (uVar1 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
              }
              pMVar7 = TypeInfo_Map_MapObjectCollideMode->static_fields;
            }
          }
          else {
            if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
            }
            pMVar7 = (Map_MapObjectCollideMode_StaticFields *)
                     &TypeInfo_Map_MapObjectCollideMode->static_fields->None;
          }
          collideMode = pMVar7->Physical;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetCollider(__this_00,collideMode,collideWith,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar9 < (int)uVar5);
      }
      pMVar2 = (__this->fields).Value;
      if ((pMVar2 != (Map_MapObject_o *)0x0) &&
         (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar8 = (UnityEngine_Collider_array *)
                 UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pUVar3,(MethodInfo_353C030 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        (pMVar2->fields).colliderCache = pUVar8;
        Il2CppCodeGenWriteBarrier(&(pMVar2->fields).colliderCache);
        return;
      }
    }
  }
label_05a297cd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideMode
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, const MethodInfo* method);
// 0x5a297e0

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               MethodInfo *method)

{
  uint uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Collider_o *c;
  System_Object_array *pSVar4;
  ulong uVar5;
  System_String_o *collideWith;
  UnityEngine_Collider_array *pUVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_0754607e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754607e = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (pUVar3,(MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar4 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar4->max_length) {
        uVar5 = pSVar4->max_length & 0xffffffff;
        uVar7 = 0;
        do {
          if (uVar5 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          c = (UnityEngine_Collider_o *)pSVar4->m_Items[uVar7];
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          collideWith = Map_MapLoader__GetColliderCollideWith(c,(MethodInfo *)0x0);
          Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar7 < (long)(int)uVar1);
      }
      pMVar2 = (__this->fields).Value;
      if ((pMVar2 != (Map_MapObject_o *)0x0) &&
         (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar6 = (UnityEngine_Collider_array *)
                 UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pUVar3,(MethodInfo_353C030 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        (pMVar2->fields).colliderCache = pUVar6;
        Il2CppCodeGenWriteBarrier(&(pMVar2->fields).colliderCache);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereTarget
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* team, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x5a29910
// eh: try 0x5a29d43..0x5a29edc -> pad 0x5a29eeb (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a29f05..0x5a29f0a -> pad 0x5a29f2f cleanup
// eh: try 0x5a29f32..0x5a29f3c -> pad 0x5a29f44 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a29ee1: jmp 0x5a29eed
// asm:   0x5a29ee3: jmp 0x5a29eed
// asm:   0x5a29ee5: jmp 0x5a29eed
// asm:   0x5a29ee7: jmp 0x5a29eed
// asm:   0x5a29ee9: jmp 0x5a29eed
// asm:   0x5a29eeb: jmp 0x5a29eed
// asm:   0x5a29eed: mov rbp, rax
// asm:   0x5a29ef0: cmp edx, 1
// asm:   0x5a29ef3: jne 0x5a29f32
// asm:   0x5a29ef5: mov rdi, rbp
// asm:   0x5a29ef8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a29efd: mov rbx, qword ptr [rax]
// asm:   0x5a29f00: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5a29f05: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a29f0a: lea rax, [rip + 0x1863b1f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a29f11: mov rsi, qword ptr [rax]
// asm:   0x5a29f14: lea rdi, [rsp + 0x10]
// asm:   0x5a29f19: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a29f1e: test rbx, rbx
// asm:   0x5a29f21: je 0x5a29dd2
// asm:   0x5a29f27: mov rdi, rbx
// asm:   0x5a29f2a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a29f2f: mov rbp, rax
// asm:   0x5a29f32: lea rdi, [rsp + 0x48]
// asm:   0x5a29f37: call 0x2fd5c40  ; il2cpp_runtime_helper_02fd5c40()
// asm:   0x5a29f3c: mov rdi, rbp
// asm:   0x5a29f3f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a29f44: mov rdi, rax
// asm:   0x5a29f47: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,float radius,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  System_String_o *pSVar4;
  uint uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_MapTargetable__o *__this_02;
  Map_MapTargetable_array *pMVar8;
  MethodInfo *pMVar9;
  System_String_o *collideMode;
  CustomLogic_CustomLogicComponentInstance_o *classInstance;
  bool bVar10;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_04;
  Map_MapTargetable_o *__this_05;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_06;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o b;
  undefined1 auStack_98 [8];
  undefined1 *puStack_90;
  CustomLogic_CustomLogicComponentInstance_o *pCStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_0754607f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapTargetable_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_0754607f = '\x01';
  }
  collideMode = "Region";
  auStack_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  pCStack_88 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pSStack_38 = "Hitboxes";
    uVar3 = (pMVar7->fields).BaseScale.fields.x;
    uVar5 = (pMVar7->fields).BaseScale.fields.y;
    auStack_78._4_4_ = uVar5;
    auStack_78._0_4_ = uVar3;
    fVar14 = (pMVar7->fields).BaseScale.fields.z;
    pSVar4 = *(System_String_o **)&(center->fields).Value.fields;
    fVar2 = (center->fields).Value.fields.z;
    auStack_78._8_8_ = 0;
    uVar13 = (int)pSVar4;
    uVar15 = (int)((ulong)pSVar4 >> 0x20);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      uStack_40 = 0;
      uStack_48 = pSVar4;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      uVar13 = (undefined4)uStack_48;
      uVar15 = uStack_48._4_4_;
      uVar3 = auStack_78._0_4_;
      uVar5 = auStack_78._4_4_;
    }
    UVar16.fields.y = (float)uVar15;
    UVar16.fields.x = (float)uVar13;
    UVar16.fields.z = fVar2;
    b.fields.y = (float)uVar5;
    b.fields.x = (float)uVar3;
    b.fields.z = fVar14;
    UVar16 = Utility_Util__DivideVectors(UVar16,b,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar16,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    v.fields.z = fVar14;
    v.fields.x = (float)auStack_78._0_4_;
    v.fields.y = (float)auStack_78._4_4_;
    fVar14 = MiscExtensions__MaxComponent(v,(MethodInfo *)0x0);
    auStack_78._0_4_ = fVar14;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa10(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
      pUVar12 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
      pMVar7 = (__this->fields).Value;
      if ((pMVar7 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar12,p,(MethodInfo *)0x0);
          pUVar12 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      (pUVar12,(UnityEngine_Vector3_o)
                               (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            pUVar12 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e72b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_0753e72b = '\x01';
            }
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localRotation
                        (pUVar12,(UnityEngine_Quaternion_o)
                                 *(UnityEngine_Quaternion_Fields *)
                                  TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
              pUVar12 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b7 = '\x01';
              }
              uStack_48 = team;
              if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localScale
                          (pUVar12,(UnityEngine_Vector3_o)
                                   (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                           (MethodInfo *)0x0);
                c = UnityEngine_GameObject__AddComponent_object_
                              (__this_03,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                Map_MapLoader__SetCollider
                          ((UnityEngine_Collider_o *)c,collideMode,pSStack_38,(MethodInfo *)0x0);
                if (c != (UnityEngine_SphereCollider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius(c,radius / (float)auStack_78._0_4_,(MethodInfo *)0x0)
                  ;
                  if (pCVar11 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    UnityEngine_SphereCollider__set_center
                              (c,(UnityEngine_Vector3_o)(pCVar11->fields).Value.fields,(MethodInfo *)0x0);
                    __this_04 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_03,
                                           (MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                          );
                    pMVar7 = (__this->fields).Value;
                    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
                       (__this_01 = (pMVar7->fields).ComponentInstances,
                       __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                                 (System_Collections_Generic_List_object__o *)__this_01,
                                 (MethodInfo_395E050 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                );
                      pCStack_88 = pCStack_50;
                      auStack_98 = (undefined1  [8])auStack_60._0_8_;
                      puStack_90 = (undefined1 *)auStack_60._8_8_;
                      auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                      auStack_60._8_8_ = auStack_98;
                      if (__this_04 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                        while( true ) {
                          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             ((System_Collections_Generic_List_Enumerator_object__o *)
                                              auStack_98,
                                              (MethodInfo_4C45C50 *)
                                              MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                             );
                          if (!bVar10) break;
                          if (pCStack_88 == (CustomLogic_CustomLogicComponentInstance_o *)0x0)
                          goto label_05a29ed7;
                          bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                             (pCStack_88,(MethodInfo *)0x0);
                          if (bVar10) {
                            ThrowNullReferenceException();
                          }
                        }
                      }
                      else {
                        while( true ) {
                          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             ((System_Collections_Generic_List_Enumerator_object__o *)
                                              auStack_98,
                                              (MethodInfo_4C45C50 *)
                                              MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                             );
                          classInstance = pCStack_88;
                          if (!bVar10) break;
                          if (pCStack_88 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a29ed7:
                            ThrowNullReferenceException();
                          }
                          bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                             (pCStack_88,(MethodInfo *)0x0);
                          if (bVar10) {
                            CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                      (__this_04,classInstance,(MethodInfo *)0x0);
                          }
                        }
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_98,
                                 (MethodInfo_4C45C40 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                );
                      pUVar12 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                      UVar16 = UnityEngine_SphereCollider__get_center(c,(MethodInfo *)0x0);
                      center_00.fields.z = UVar16.fields.z;
                      auStack_78._8_4_ = extraout_XMM0_Dc;
                      auStack_78._0_8_ = UVar16.fields._0_8_;
                      auStack_78._12_4_ = extraout_XMM0_Dd;
                      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTargetable);
                      center_00.fields.x = (float)auStack_78._0_4_;
                      center_00.fields.y = (float)auStack_78._4_4_;
                      Map_MapTargetable___ctor(__this_05,pUVar12,center_00,uStack_48,(MethodInfo *)0x0);
                      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                      }
                      pMVar9 = MethodInfo_System_Collections_Generic_List_MapTargetable_Add;
                      __this_02 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
                      if (__this_02 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                        piVar1 = &(__this_02->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pMVar8 = (__this_02->fields)._items;
                        if (pMVar8 != (Map_MapTargetable_array *)0x0) {
                          uVar6 = (__this_02->fields)._size;
                          if (uVar6 < (uint)pMVar8->max_length) {
                            (__this_02->fields)._size = uVar6 + 1;
                            pMVar8->m_Items[(int)uVar6] = __this_05;
                            Il2CppCodeGenWriteBarrier(pMVar8->m_Items + (int)uVar6);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (Il2CppObject *)__this_05,
                                       (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
                          }
                          __this_06 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)
                                                 TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
                          CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                                    (__this_06,__this_03,__this_05,(MethodInfo *)0x0);
                          return __this_06;
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
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxTarget
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* team, CustomLogic_CustomLogicVector3Builtin_o* center, CustomLogic_CustomLogicVector3Builtin_o* size, const MethodInfo* method);
// 0x5a29f50
// eh: try 0x5a2a394..0x5a2a531 -> pad 0x5a2a540 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a2a55a..0x5a2a55f -> pad 0x5a2a584 cleanup
// eh: try 0x5a2a587..0x5a2a591 -> pad 0x5a2a599 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2a38c: nop dword ptr [rax]
// asm:   0x5a2a536: jmp 0x5a2a542
// asm:   0x5a2a538: jmp 0x5a2a542
// asm:   0x5a2a53a: jmp 0x5a2a542
// asm:   0x5a2a53c: jmp 0x5a2a542
// asm:   0x5a2a53e: jmp 0x5a2a542
// asm:   0x5a2a540: jmp 0x5a2a542
// asm:   0x5a2a542: mov rbp, rax
// asm:   0x5a2a545: cmp edx, 1
// asm:   0x5a2a548: jne 0x5a2a587
// asm:   0x5a2a54a: mov rdi, rbp
// asm:   0x5a2a54d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a2a552: mov rbx, qword ptr [rax]
// asm:   0x5a2a555: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5a2a55a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a2a55f: lea rax, [rip + 0x18634ca]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a2a566: mov rsi, qword ptr [rax]
// asm:   0x5a2a569: lea rdi, [rsp + 0x10]
// asm:   0x5a2a56e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a2a573: test rbx, rbx
// asm:   0x5a2a576: je 0x5a2a422
// asm:   0x5a2a57c: mov rdi, rbx
// asm:   0x5a2a57f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a2a584: mov rbp, rax
// asm:   0x5a2a587: lea rdi, [rsp + 0x58]
// asm:   0x5a2a58c: call 0x2fd5c70  ; il2cpp_runtime_helper_02fd5c70()
// asm:   0x5a2a591: mov rdi, rbp
// asm:   0x5a2a594: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a2a599: mov rdi, rax
// asm:   0x5a2a59c: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,CustomLogic_CustomLogicVector3Builtin_o *size,
          MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  System_String_o *pSVar4;
  uint uVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_MapTargetable__o *__this_02;
  Map_MapTargetable_array *pMVar7;
  MethodInfo *pMVar8;
  System_String_o *pSVar9;
  CustomLogic_CustomLogicComponentInstance_o *classInstance;
  bool bVar10;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *p;
  UnityEngine_BoxCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_04;
  Map_MapTargetable_o *__this_05;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_06;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o b_00;
  undefined1 local_a8 [8];
  undefined1 *puStack_a0;
  CustomLogic_CustomLogicComponentInstance_o *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07546080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapTargetable_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_07546080 = '\x01';
  }
  pSVar9 = "Region";
  local_a8 = (undefined1  [8])0x0;
  puStack_a0 = (undefined1 *)0x0;
  local_98 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar6 = (__this->fields).Value;
  if ((pMVar6 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_78._0_8_ = __this;
    local_38 = "Hitboxes";
    local_88 = *(System_String_o **)&(pMVar6->fields).BaseScale.fields;
    fVar2 = (pMVar6->fields).BaseScale.fields.z;
    pSVar4 = *(System_String_o **)&(center->fields).Value.fields;
    fVar3 = (center->fields).Value.fields.z;
    uStack_80 = 0;
    uVar14 = (int)pSVar4;
    uVar15 = (int)((ulong)pSVar4 >> 0x20);
    uVar16 = (int)((ulong)local_88 >> 0x20);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      uStack_40 = 0;
      local_48 = pSVar4;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      uVar14 = (undefined4)local_48;
      uVar15 = local_48._4_4_;
      uVar16 = local_88._4_4_;
    }
    UVar17.fields.y = (float)uVar15;
    UVar17.fields.x = (float)uVar14;
    UVar17.fields.z = fVar3;
    b.fields.y = (float)uVar16;
    b.fields.x = (float)(undefined4)local_88;
    b.fields.z = fVar2;
    UVar17 = Utility_Util__DivideVectors(UVar17,b,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar17,(MethodInfo *)0x0);
    if (size != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_48 = pSVar9;
      b_00.fields.z = fVar2;
      b_00.fields._0_8_ = local_88;
      UVar17 = Utility_Util__DivideVectors
                         ((UnityEngine_Vector3_o)(size->fields).Value.fields,b_00,(MethodInfo *)0x0);
      pCVar12 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar17,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa10(__this_03,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if ((*(long *)(local_78._0_8_ + 0x30) != 0) &&
           (__this_00 = *(UnityEngine_GameObject_o **)(*(long *)(local_78._0_8_ + 0x30) + 0x18),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar13,p,(MethodInfo *)0x0);
            pUVar13 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b6 = '\x01';
            }
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localPosition
                        (pUVar13,(UnityEngine_Vector3_o)
                                 (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar13 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e72b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_0753e72b = '\x01';
              }
              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localRotation
                          (pUVar13,(UnityEngine_Quaternion_o)
                                   *(UnityEngine_Quaternion_Fields *)
                                    TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
                pUVar13 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b7 = '\x01';
                }
                local_88 = team;
                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localScale
                            (pUVar13,(UnityEngine_Vector3_o)
                                     (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                             (MethodInfo *)0x0);
                  c = UnityEngine_GameObject__AddComponent_object_
                                (__this_03,
                                 (MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  Map_MapLoader__SetCollider((UnityEngine_Collider_o *)c,local_48,local_38,(MethodInfo *)0x0);
                  if ((pCVar12 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
                     (c != (UnityEngine_BoxCollider_o *)0x0)) {
                    UnityEngine_BoxCollider__set_size
                              (c,(UnityEngine_Vector3_o)(pCVar12->fields).Value.fields,(MethodInfo *)0x0);
                    if (pCVar11 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                      UnityEngine_BoxCollider__set_center
                                (c,(UnityEngine_Vector3_o)(pCVar11->fields).Value.fields,(MethodInfo *)0x0);
                      __this_04 = UnityEngine_GameObject__AddComponent_object_
                                            (__this_03,
                                             (MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                            );
                      if ((*(long *)(local_78._0_8_ + 0x30) != 0) &&
                         (__this_01 = *(System_Collections_Generic_List_object__o **)
                                       (*(long *)(local_78._0_8_ + 0x30) + 0x38),
                         __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
                        System_Collections_Generic_List_object___GetEnumerator
                                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_01,
                                   (MethodInfo_395E050 *)
                                   MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                  );
                        local_98 = local_50;
                        local_a8 = (undefined1  [8])local_60._0_8_;
                        puStack_a0 = (undefined1 *)local_60._8_8_;
                        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                        local_60._8_8_ = local_a8;
                        if (__this_04 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                          while( true ) {
                            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               ((System_Collections_Generic_List_Enumerator_object__o *)
                                                local_a8,(MethodInfo_4C45C50 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                               );
                            if (!bVar10) break;
                            if (local_98 == (CustomLogic_CustomLogicComponentInstance_o *)0x0)
                            goto label_05a2a52c;
                            bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                               (local_98,(MethodInfo *)0x0);
                            if (bVar10) {
                              ThrowNullReferenceException();
                            }
                          }
                        }
                        else {
                          while( true ) {
                            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                               ((System_Collections_Generic_List_Enumerator_object__o *)
                                                local_a8,(MethodInfo_4C45C50 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                               );
                            classInstance = local_98;
                            if (!bVar10) break;
                            if (local_98 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a2a52c:
                              ThrowNullReferenceException();
                            }
                            bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                               (local_98,(MethodInfo *)0x0);
                            if (bVar10) {
                              CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                        (__this_04,classInstance,(MethodInfo *)0x0);
                            }
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                   (MethodInfo_4C45C40 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                  );
                        pUVar13 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                        UVar17 = UnityEngine_BoxCollider__get_center(c,(MethodInfo *)0x0);
                        center_00.fields.z = UVar17.fields.z;
                        local_78._8_4_ = extraout_XMM0_Dc;
                        local_78._0_8_ = UVar17.fields._0_8_;
                        local_78._12_4_ = extraout_XMM0_Dd;
                        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTargetable);
                        center_00.fields.x = (float)local_78._0_4_;
                        center_00.fields.y = (float)local_78._4_4_;
                        Map_MapTargetable___ctor(__this_05,pUVar13,center_00,local_88,(MethodInfo *)0x0);
                        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        }
                        pMVar8 = MethodInfo_System_Collections_Generic_List_MapTargetable_Add;
                        __this_02 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
                        if (__this_02 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                          piVar1 = &(__this_02->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pMVar7 = (__this_02->fields)._items;
                          if (pMVar7 != (Map_MapTargetable_array *)0x0) {
                            uVar5 = (__this_02->fields)._size;
                            if (uVar5 < (uint)pMVar7->max_length) {
                              (__this_02->fields)._size = uVar5 + 1;
                              pMVar7->m_Items[(int)uVar5] = __this_05;
                              Il2CppCodeGenWriteBarrier(pMVar7->m_Items + (int)uVar5);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_02,
                                         (Il2CppObject *)__this_05,
                                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                            }
                            __this_06 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
                            CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                                      (__this_06,__this_03,__this_05,(MethodInfo *)0x0);
                            return __this_06;
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
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetChild
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetChild (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a2a5b0
// eh: try 0x5a2a774..0x5a2a8b9 -> pad 0x5a2a8d1 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a2a8e9..0x5a2a8ee -> pad 0x5a2a916 cleanup
// eh: try 0x5a2a919..0x5a2a923 -> pad 0x5a2a92b catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2a8b9: jmp 0x5a2a8d1
// asm:   0x5a2a8bb: jmp 0x5a2a8d1
// asm:   0x5a2a8bd: jmp 0x5a2a8d1
// asm:   0x5a2a8bf: jmp 0x5a2a8d1
// asm:   0x5a2a8c1: jmp 0x5a2a8d1
// asm:   0x5a2a8c3: jmp 0x5a2a8d1
// asm:   0x5a2a8c5: jmp 0x5a2a8d1
// asm:   0x5a2a8c7: jmp 0x5a2a8d1
// asm:   0x5a2a8c9: jmp 0x5a2a8d1
// asm:   0x5a2a8cb: jmp 0x5a2a8d1
// asm:   0x5a2a8cd: jmp 0x5a2a8d1
// asm:   0x5a2a8cf: jmp 0x5a2a8d1
// asm:   0x5a2a8d1: mov rbx, rax
// asm:   0x5a2a8d4: cmp edx, 1
// asm:   0x5a2a8d7: jne 0x5a2a919
// asm:   0x5a2a8d9: mov rdi, rbx
// asm:   0x5a2a8dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a2a8e1: mov rbx, qword ptr [rax]
// asm:   0x5a2a8e4: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5a2a8e9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a2a8ee: lea rax, [rip + 0x18638eb]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5a2a8f5: mov rsi, qword ptr [rax]
// asm:   0x5a2a8f8: mov rdi, rsp
// asm:   0x5a2a8fb: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5a2a900: test rbx, rbx
// asm:   0x5a2a903: jne 0x5a2a90e
// asm:   0x5a2a905: xor ebp, ebp
// asm:   0x5a2a907: xor ebx, ebx
// asm:   0x5a2a909: jmp 0x5a2a880
// asm:   0x5a2a90e: mov rdi, rbx
// asm:   0x5a2a911: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a2a916: mov rbx, rax
// asm:   0x5a2a919: lea rdi, [rsp + 0x20]
// asm:   0x5a2a91e: call 0x2fd5ca0  ; il2cpp_runtime_helper_02fd5ca0()
// asm:   0x5a2a923: mov rdi, rbx
// asm:   0x5a2a926: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a2a92b: mov rdi, rax
// asm:   0x5a2a92e: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetChild
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  int32_t key;
  bool bVar3;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *pMVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  int iVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07546081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546081 = '\x01';
  }
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(pMVar1->fields).Id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar3) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar4 = (__this->fields).Value;
    if (((pMVar4 != (Map_MapObject_o *)0x0) &&
        (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren,
        pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0 &&
        (__this_01 = (System_Collections_Generic_HashSet_int__o *)
                     System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar2,(pMVar1->fields).Id,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
        __this_01 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_01,
                 (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_68.fields._current = local_38;
      local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_48._8_8_ = &local_68;
      do {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_68,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar3) {
            iVar6 = 2;
            pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
            goto label_05a2a86e;
          }
          key = (int32_t)local_68.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar2,key,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar3);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar2,key,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (pMVar4 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar1 = (pMVar4->fields).ScriptObject;
        if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_String__op_Equality((pMVar1->fields).Name,name,(MethodInfo *)0x0);
      } while (!bVar3);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,pMVar4,(MethodInfo *)0x0);
      iVar6 = 5;
label_05a2a86e:
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                (&local_68,
                 (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      if (iVar6 == 5) {
        return pCVar5;
      }
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetChildren
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetChildren (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2a940
// eh: try 0x5a2ab5f..0x5a2ad72 -> pad 0x5a2ad8e (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a2adaa..0x5a2adaf -> pad 0x5a2add4 cleanup
// eh: try 0x5a2add7..0x5a2ade1 -> pad 0x5a2ade9 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2ad72: jmp 0x5a2ad92
// asm:   0x5a2ad74: jmp 0x5a2ad92
// asm:   0x5a2ad76: jmp 0x5a2ad92
// asm:   0x5a2ad78: jmp 0x5a2ad92
// asm:   0x5a2ad7a: jmp 0x5a2ad92
// asm:   0x5a2ad7c: jmp 0x5a2ad92
// asm:   0x5a2ad7e: jmp 0x5a2ad92
// asm:   0x5a2ad80: jmp 0x5a2ad92
// asm:   0x5a2ad82: jmp 0x5a2ad92
// asm:   0x5a2ad84: jmp 0x5a2ad92
// asm:   0x5a2ad86: jmp 0x5a2ad92
// asm:   0x5a2ad88: jmp 0x5a2ad92
// asm:   0x5a2ad8a: jmp 0x5a2ad92
// asm:   0x5a2ad8c: jmp 0x5a2ad92
// asm:   0x5a2ad8e: jmp 0x5a2ad92
// asm:   0x5a2ad90: jmp 0x5a2ad92
// asm:   0x5a2ad92: mov rbx, rax
// asm:   0x5a2ad95: cmp edx, 1
// asm:   0x5a2ad98: jne 0x5a2add7
// asm:   0x5a2ad9a: mov rdi, rbx
// asm:   0x5a2ad9d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a2ada2: mov rbx, qword ptr [rax]
// asm:   0x5a2ada5: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5a2adaa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a2adaf: lea rax, [rip + 0x186342a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5a2adb6: mov rsi, qword ptr [rax]
// asm:   0x5a2adb9: lea rdi, [rsp + 0x10]
// asm:   0x5a2adbe: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5a2adc3: test rbx, rbx
// asm:   0x5a2adc6: je 0x5a2ad34
// asm:   0x5a2adcc: mov rdi, rbx
// asm:   0x5a2adcf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a2add4: mov rbx, rax
// asm:   0x5a2add7: lea rdi, [rsp + 0x30]
// asm:   0x5a2addc: call 0x2fd5cd0  ; il2cpp_runtime_helper_02fd5cd0()
// asm:   0x5a2ade1: mov rdi, rbx
// asm:   0x5a2ade4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a2ade9: mov rdi, rax
// asm:   0x5a2adec: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetChildren
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  int32_t iVar7;
  bool bVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_HashSet_int__o *__this_03;
  Map_MapObject_o *pMVar9;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07546082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546082 = '\x01';
  }
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar9 = (__this->fields).Value;
  if (((pMVar9 != (Map_MapObject_o *)0x0) &&
      (pMVar3 = (pMVar9->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar4,(pMVar3->fields).Id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar8) {
      return __this_02;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar9 = (__this->fields).Value;
    if (((pMVar9 != (Map_MapObject_o *)0x0) &&
        (pMVar3 = (pMVar9->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren,
        pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0 &&
        (__this_03 = (System_Collections_Generic_HashSet_int__o *)
                     System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar4,(pMVar3->fields).Id,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
        __this_03 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_03,
                 (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_68.fields._current = local_38;
      local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_48._8_8_ = &local_68;
      if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        do {
          bVar8 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_68,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar8) goto label_05a2ad20;
          iVar7 = (int32_t)local_68.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05a2ad48;
          bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,iVar7,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar8);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___get_Item
                    (pSVar4,iVar7,
                     (MethodInfo_4A0F690 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          ThrowNullReferenceException();
        }
label_05a2ad1b:
        ThrowNullReferenceException();
      }
      do {
        do {
          bVar8 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_68,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar8) {
label_05a2ad20:
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      (&local_68,
                       (MethodInfo_4C3AED0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            return __this_02;
          }
          iVar7 = (int32_t)local_68.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05a2ad48:
            ThrowNullReferenceException();
          }
          bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,iVar7,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar8);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05a2ad1b;
        pMVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar4,iVar7,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        __this_00 = (__this_02->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
        item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_01,pMVar9,(MethodInfo *)0x0);
        pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_05a2ad4d:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) goto label_05a2ad4d;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetTransform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a2ae00

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetTransform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07546083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546083 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)
        ;
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,pUVar3,(MethodInfo *)0x0);
      }
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetColorAll
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5a2aec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2af5c: jmp 0x5a2af62

void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color
               ,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Utility_Color255_o *__this_00;
  uint uVar4;
  UnityEngine_Material_o *__this_01;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  uint uVar5;
  UnityEngine_Color_o value;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Static != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"SetColorAll cannot be called on a static MapObject.");
      System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetColorAll);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    pUVar3 = (pMVar1->fields).renderCache;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar4 = (uint)pUVar3->max_length;
      if (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        if (0 < (int)uVar4) {
          if (pUVar3->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__get_material(pUVar3->m_Items[0],(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
          goto label_05a2afc3;
        }
      }
      else if (0 < (int)uVar4) {
        uVar5 = 0;
        do {
          if (uVar4 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          if (pUVar3->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0) goto label_05a2afc3;
          __this_01 = UnityEngine_Renderer__get_material(pUVar3->m_Items[(int)uVar5],(MethodInfo *)0x0);
          __this_00 = (color->fields).Value;
          if ((__this_00 == (Utility_Color255_o *)0x0) ||
             (value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_Material_o *)0x0)) goto label_05a2afc3;
          UnityEngine_Material__set_color(__this_01,value,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar4 = (uint)pUVar3->max_length;
        } while ((int)uVar5 < (int)uVar4);
      }
      return;
    }
  }
label_05a2afc3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$InBounds
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__InBounds (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5a2afe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2b03c: nop dword ptr [rax]
// asm:   0x5a2b0b6: jmp 0x5a2b0be

bool CustomLogic_CustomLogicMapObjectBuiltin__InBounds
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UnityEngine_Bounds_o local_80;
  UnityEngine_Bounds_o local_68;
  UnityEngine_Vector3_Fields local_48 [2];
  
  local_68.fields.m_Center.fields.x = 0.0;
  local_68.fields.m_Center.fields.y = 0.0;
  local_68.fields.m_Center.fields.z = 0.0;
  local_68.fields.m_Extents.fields.x = 0.0;
  local_68.fields.m_Extents.fields.y = 0.0;
  local_68.fields.m_Extents.fields.z = 0.0;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 == (UnityEngine_Collider_array *)0x0)) {
label_05a2b0da:
    ThrowNullReferenceException();
  }
  uVar4 = (uint)pUVar2->max_length;
  if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if (0 < (int)uVar4) {
      if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        UnityEngine_Collider__get_bounds(&local_80,pUVar2->m_Items[0],(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      goto label_05a2b0da;
    }
  }
  else {
    uVar5 = 0;
    if (0 < (int)uVar4) {
      while( true ) {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar2->m_Items[(int)uVar5] == (UnityEngine_Collider_o *)0x0) break;
        UnityEngine_Collider__get_bounds(&local_80,pUVar2->m_Items[(int)uVar5],(MethodInfo *)0x0);
        local_48[1].y = local_80.fields.m_Extents.fields.y;
        local_48[1].z = local_80.fields.m_Extents.fields.z;
        local_68.fields.m_Extents.fields.x = local_80.fields.m_Extents.fields.x;
        local_68.fields.m_Center.fields.z = local_80.fields.m_Center.fields.z;
        local_48[0].x = local_80.fields.m_Center.fields.x;
        local_48[0].y = local_80.fields.m_Center.fields.y;
        local_68.fields.m_Center.fields.x = local_80.fields.m_Center.fields.x;
        local_68.fields.m_Center.fields.y = local_80.fields.m_Center.fields.y;
        local_68.fields.m_Extents.fields.y = local_80.fields.m_Extents.fields.y;
        local_68.fields.m_Extents.fields.z = local_80.fields.m_Extents.fields.z;
        local_80.fields.m_Center.fields.x = (position->fields).Value.fields.x;
        local_80.fields.m_Center.fields.y = (position->fields).Value.fields.y;
        local_80.fields.m_Center.fields.z = (position->fields).Value.fields.z;
        local_48._8_8_ = local_68.fields._8_8_;
        bVar3 = UnityEngine_Bounds__Internal_Contains
                          (&local_68,(UnityEngine_Vector3_o *)&local_80,(MethodInfo *)0x0);
        if (bVar3) {
          return true;
        }
        uVar5 = uVar5 + 1;
        uVar4 = (uint)pUVar2->max_length;
        if ((int)uVar4 <= (int)uVar5) {
          return false;
        }
      }
      goto label_05a2b0da;
    }
  }
  return false;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsAverageCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b0f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2b11a: jmp 0x5a2b290
// asm:   0x5a2b199: nop dword ptr [rax]

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_Collider_array *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar6 [16];
  uint uVar7;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  UnityEngine_Bounds_o UStack_40;
  
  if (Il2CppMethodInitialized_07546084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546084 = '\x01';
    if (Il2CppMethodInitialized_0753e4b6 == '\0') goto label_05a2b13b;
label_05a2b111:
    pMVar3 = (__this->fields).Value;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 != '\0') goto label_05a2b111;
label_05a2b13b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    pMVar3 = (__this->fields).Value;
  }
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (pUVar4 = (pMVar3->fields).colliderCache, pUVar4 != (UnityEngine_Collider_array *)0x0)) {
    uVar7 = (uint)pUVar4->max_length;
    if (0 < (int)uVar7) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar5->zeroVector).fields.x;
      uVar2 = (pUVar5->zeroVector).fields.y;
      auVar11._4_4_ = (float)uVar2;
      auVar11._0_4_ = (float)uVar1;
      auVar11._8_8_ = 0;
      fStack_5c = (pUVar5->zeroVector).fields.z;
      uVar9 = 0xffffffff;
      do {
        uVar8 = uVar9;
        uVar9 = uVar8 + 1;
        if (uVar7 <= uVar9) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar4->m_Items[(int)uVar9] == (UnityEngine_Collider_o *)0x0) goto label_05a2b290;
        UnityEngine_Collider__get_bounds(&UStack_40,pUVar4->m_Items[(int)uVar9],(MethodInfo *)0x0);
        uStack_58._0_4_ = auVar11._0_4_;
        uStack_58._4_4_ = auVar11._4_4_;
        fStack_50 = auVar11._8_4_;
        fStack_4c = auVar11._12_4_;
        auVar11._0_4_ = (float)uStack_58 + UStack_40.fields.m_Center.fields.x;
        auVar11._4_4_ = uStack_58._4_4_ + UStack_40.fields.m_Center.fields.y;
        auVar11._8_4_ = fStack_50 + 0.0;
        auVar11._12_4_ = fStack_4c + 0.0;
        fStack_5c = fStack_5c + UStack_40.fields.m_Center.fields.z;
        uVar7 = (uint)pUVar4->max_length;
      } while ((int)(uVar8 + 2) < (int)uVar7);
      if (uVar9 < 0x7fffffff) {
        fVar10 = (float)(int)(uVar8 + 2);
        fStack_5c = fStack_5c / fVar10;
        auVar6._4_4_ = fVar10;
        auVar6._0_4_ = fVar10;
        auVar6._8_4_ = fVar10;
        auVar6._12_4_ = fVar10;
        auVar11 = divps(auVar11,auVar6);
        uStack_58 = auVar11._0_8_;
        goto label_05a2b259;
      }
    }
    pMVar3 = (__this->fields).Value;
    if (((pMVar3 != (Map_MapObject_o *)0x0) &&
        (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UVar12 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      fStack_5c = UVar12.fields.z;
      uStack_58 = UVar12.fields._0_8_;
label_05a2b259:
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      UVar12.fields.z = fStack_5c;
      UVar12.fields.x = (float)uStack_58;
      UVar12.fields.y = uStack_58._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,UVar12,(MethodInfo *)0x0);
      return __this_02;
    }
  }
label_05a2b290:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b2a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_07546085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546085 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Center.fields.z;
      value.fields.x = local_20.fields.m_Center.fields.x;
      value.fields.y = local_20.fields.m_Center.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsSize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b360

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_07546086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546086 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      value.fields.y = local_20.fields.m_Extents.fields.y + local_20.fields.m_Extents.fields.y;
      value.fields.x = local_20.fields.m_Extents.fields.x + local_20.fields.m_Extents.fields.x;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Extents.fields.z + local_20.fields.m_Extents.fields.z;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMin
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b420

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o UStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_07546087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546087 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&UStack_30,pUVar2->m_Items[0],(MethodInfo *)0x0);
      uStack_18 = CONCAT44(UStack_30.fields.m_Center.fields.y - UStack_30.fields.m_Extents.fields.y,
                           UStack_30.fields.m_Center.fields.x - UStack_30.fields.m_Extents.fields.x);
      uStack_10 = 0;
      value.fields.z = UStack_30.fields.m_Center.fields.z - UStack_30.fields.m_Extents.fields.z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      value.fields.x = (float)(undefined4)uStack_18;
      value.fields.y = (float)uStack_18._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMax
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b4f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_07546088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546088 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_30,pUVar2->m_Items[0],(MethodInfo *)0x0);
      local_18 = CONCAT44(local_30.fields.m_Extents.fields.y + local_30.fields.m_Center.fields.y,
                          local_30.fields.m_Extents.fields.x + local_30.fields.m_Center.fields.x);
      uStack_10 = 0;
      value.fields.z = local_30.fields.m_Center.fields.z + local_30.fields.m_Extents.fields.z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      value.fields.x = (float)(undefined4)local_18;
      value.fields.y = (float)local_18._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsExtents
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b5c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_07546089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546089 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Extents.fields.z;
      value.fields.x = local_20.fields.m_Extents.fields.x;
      value.fields.y = local_20.fields.m_Extents.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetCorners
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetCorners (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2b680
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a2b9b1: jmp 0x5a2b9d4
// asm:   0x5a2bc2f: lea rax, [rip + 0x18694c2]  ; MethodInfo_System_Collections_Generic_List_int_ForEach
// asm:   0x5a2bc36: mov rdx, qword ptr [rax]
// asm:   0x5a2bc39: mov rdi, r12
// asm:   0x5a2bc3c: mov rsi, rbx
// asm:   0x5a2bc3f: call 0x3a177d0  ; System_Collections_Generic_List_int___ForEach()
// asm:   0x5a2bc44: mov r14, qword ptr [r14]
// asm:   0x5a2bc47: jmp 0x5a2ba67

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetCorners
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_BoxCollider_o **targetAddress;
  CustomLogic_CustomLogicListBuiltin_o **targetAddress_00;
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Collider_array *pUVar5;
  UnityEngine_Collider_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *object;
  UnityEngine_BoxCollider_o *__this_02;
  UnityEngine_BoxCollider_c *pUVar6;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *__this_03;
  Il2CppObject *source;
  CustomLogic_CustomLogicListBuiltin_o *pCVar7;
  CustomLogic_CustomLogicMapObjectBuiltin___c_StaticFields *pCVar8;
  System_Func_T__TResult__o *__this_04;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_List_Vector3__o *__this_05;
  System_Collections_Generic_List_int__o *pSVar9;
  MethodInfo *pMVar10;
  System_Action_T__o *action;
  System_Int32_array *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Bounds_o UStack_70;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  if (Il2CppMethodInitialized_0754608a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_Vector3_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Vector3_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ForEach);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c_GetCorners_b__100_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0_GetCorners_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754608a = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UnityEngine_BoxCollider;
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 != (Map_MapObject_o *)0x0) &&
     (pUVar5 = (pMVar4->fields).colliderCache, pUVar5 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar5->max_length == 0) {
      return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
    }
    if ((int)pUVar5->max_length == 0) {
label_05a2bc51:
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pUVar5->m_Items[0];
    if (__this_00 != (UnityEngine_Collider_o *)0x0) {
      bVar2 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
        UnityEngine_Collider__get_bounds(&UStack_70,__this_00,(MethodInfo *)0x0);
        auStack_48 = ZEXT416((uint)UStack_70.fields.m_Center.fields.x);
        auStack_58 = ZEXT416((uint)UStack_70.fields.m_Center.fields.y);
        source = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
        if (source != (Il2CppObject *)0x0) {
          uVar3 = *(uint *)&source[1].monitor;
          if (uVar3 != 0) {
            fVar14 = (float)auStack_48._0_4_ - UStack_70.fields.m_Extents.fields.x;
            fVar13 = (float)auStack_58._0_4_ - UStack_70.fields.m_Extents.fields.y;
            fVar12 = UStack_70.fields.m_Center.fields.z - UStack_70.fields.m_Extents.fields.z;
            source[2].klass = (Il2CppClass *)CONCAT44(fVar13,fVar14);
            *(float *)&source[2].monitor = fVar12;
            if (uVar3 != 1) {
              UStack_70.fields.m_Center.fields.z =
                   UStack_70.fields.m_Center.fields.z + UStack_70.fields.m_Extents.fields.z;
              *(ulong *)((long)&source[2].monitor + 4) = CONCAT44(fVar13,fVar14);
              *(float *)((long)&source[3].klass + 4) = UStack_70.fields.m_Center.fields.z;
              if (2 < uVar3) {
                UStack_70.fields.m_Extents.fields.y =
                     (float)auStack_58._0_4_ + UStack_70.fields.m_Extents.fields.y;
                source[3].monitor = (void *)CONCAT44(UStack_70.fields.m_Extents.fields.y,fVar14);
                *(float *)&source[4].klass = fVar12;
                if (uVar3 != 3) {
                  *(ulong *)((long)&source[4].klass + 4) =
                       CONCAT44(UStack_70.fields.m_Extents.fields.y,fVar14);
                  *(float *)((long)&source[4].monitor + 4) = UStack_70.fields.m_Center.fields.z;
                  if (4 < uVar3) {
                    UStack_70.fields.m_Extents.fields.x =
                         (float)auStack_48._0_4_ + UStack_70.fields.m_Extents.fields.x;
                    source[5].klass = (Il2CppClass *)CONCAT44(fVar13,UStack_70.fields.m_Extents.fields.x);
                    *(float *)&source[5].monitor = fVar12;
                    if (uVar3 != 5) {
                      *(ulong *)((long)&source[5].monitor + 4) =
                           CONCAT44(fVar13,UStack_70.fields.m_Extents.fields.x);
                      *(float *)((long)&source[6].klass + 4) = UStack_70.fields.m_Center.fields.z;
                      if (6 < uVar3) {
                        source[6].monitor =
                             (void *)CONCAT44(UStack_70.fields.m_Extents.fields.y,
                                              UStack_70.fields.m_Extents.fields.x);
                        *(float *)&source[7].klass = fVar12;
                        if (uVar3 != 7) {
                          *(ulong *)((long)&source[7].klass + 4) =
                               CONCAT44(UStack_70.fields.m_Extents.fields.y,
                                        UStack_70.fields.m_Extents.fields.x);
                          *(float *)((long)&source[7].monitor + 4) = UStack_70.fields.m_Center.fields.z;
                          pCVar7 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
                          CustomLogic_CustomLogicListBuiltin___ctor(pCVar7,(MethodInfo *)0x0);
                          if (pCVar7 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                            __this_01 = (pCVar7->fields).List;
                            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
                              pCVar8 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields;
                              __this_04 = (System_Func_T__TResult__o *)pCVar8->__9__100_1;
                            }
                            else {
                              pCVar8 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields;
                              __this_04 = (System_Func_T__TResult__o *)pCVar8->__9__100_1;
                            }
                            if (__this_04 == (System_Func_T__TResult__o *)0x0) {
                              if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c)->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
                                pCVar8 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields;
                              }
                              object = (Il2CppObject *)pCVar8->__9;
                              __this_04 = (System_Func_T__TResult__o *)
                                          il2cpp_codegen_object_new
                                                    ((Il2CppClass *)
                                                     TypeInfo_System_Func_Vector3_CustomLogicVector3Builtin);
                              System_Func_Vector3__object____ctor
                                        (__this_04,object,
                                         (intptr_t)
                                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c_GetCorners_b__100_1
                                         ,(MethodInfo_4F1C2A0 *)0x0);
                              pCVar8 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields;
                              pCVar8->__9__100_1 =
                                   (System_Func_Vector3__CustomLogicVector3Builtin__o *)__this_04;
                              Il2CppCodeGenWriteBarrier(&pCVar8->__9__100_1);
                            }
                            collection = System_Linq_Enumerable__Select_Vector3__object_
                                                   ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                    source,(System_Func_TSource__TResult__o *)__this_04,
                                                    (MethodInfo_34F67D0 *)
                                                    MethodInfo_System_Linq_Enumerable_Select_Vector3_CustomLogicVector3Builtin
                                                   );
                            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                              System_Collections_Generic_List_object___AddRange
                                        (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
                                         (MethodInfo_395D490 *)
                                         MethodInfo_System_Collections_Generic_List_object_AddRange);
                              return pCVar7;
                            }
                          }
                          goto label_05a2bc4c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_05a2bc51;
        }
      }
      else if (__this_03 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0) {
        (__this_03->fields).boxCollider = (UnityEngine_BoxCollider_o *)__this_00;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pUVar6)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00,pUVar6);
        }
        targetAddress = &(__this_03->fields).boxCollider;
        Il2CppCodeGenWriteBarrier(targetAddress);
        __this_02 = *targetAddress;
        if (__this_02 != (UnityEngine_BoxCollider_o *)0x0) {
          UVar15 = UnityEngine_BoxCollider__get_size(__this_02,(MethodInfo *)0x0);
          (__this_03->fields).size.fields.x = UVar15.fields.x;
          (__this_03->fields).size.fields.y = UVar15.fields.y;
          (__this_03->fields).size.fields.z = UVar15.fields.z;
          pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
          CustomLogic_CustomLogicListBuiltin___ctor(pCVar7,(MethodInfo *)0x0);
          targetAddress_00 = &(__this_03->fields).result;
          (__this_03->fields).result = pCVar7;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          __this_05 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
          System_Collections_Generic_List_Vector3____ctor
                    (__this_05,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
          pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor
                    (pSVar9,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
          pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (pSVar9 != (System_Collections_Generic_List_int__o *)0x0) {
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar11 = (pSVar9->fields)._items;
            if (pSVar11 != (System_Int32_array *)0x0) {
              uVar3 = (pSVar9->fields)._size;
              if (uVar3 < (uint)pSVar11->max_length) {
                (pSVar9->fields)._size = uVar3 + 1;
                pSVar11->m_Items[(int)uVar3] = -1;
                piVar1 = &(pSVar9->fields)._version;
                *piVar1 = *piVar1 + 1;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar9,-1,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
                pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
                pSVar11 = (pSVar9->fields)._items;
                piVar1 = &(pSVar9->fields)._version;
                *piVar1 = *piVar1 + 1;
                if (pSVar11 == (System_Int32_array *)0x0) goto label_05a2bc4c;
              }
              uVar3 = (pSVar9->fields)._size;
              if (uVar3 < (uint)pSVar11->max_length) {
                (pSVar9->fields)._size = uVar3 + 1;
                pSVar11->m_Items[(int)uVar3] = 1;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar9,1,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              (__this_03->fields).signs = pSVar9;
              Il2CppCodeGenWriteBarrier(&(__this_03->fields).signs);
              pSVar9 = (__this_03->fields).signs;
              action = (System_Action_T__o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
              System_Action_int____ctor
                        ((System_Action_int__o *)action,(Il2CppObject *)__this_03,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0_GetCorners_b__0
                         ,(MethodInfo_4A80B60 *)0x0);
              if (pSVar9 != (System_Collections_Generic_List_int__o *)0x0) {
                System_Collections_Generic_List_int___ForEach
                          (pSVar9,action,
                           (MethodInfo_39177D0 *)MethodInfo_System_Collections_Generic_List_int_ForEach);
                return *targetAddress_00;
              }
            }
          }
        }
      }
    }
  }
label_05a2bc4c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$HasTag
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__HasTag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* tag, const MethodInfo* method);
// 0x5a2bc80

bool CustomLogic_CustomLogicMapObjectBuiltin__HasTag
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *tag,MethodInfo *method)

{
  Map_MapObject_o *obj;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754608b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754608b = '\x01';
  }
  obj = (__this->fields).Value;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  bVar1 = Map_MapLoader__HasTag(obj,tag,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBuiltinComponent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a2bce0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **targetAddress;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  bool bVar4;
  CustomLogic_CustomLogicLodBuiltin_o *__this_00;
  CustomLogic_BuiltinComponentInstance_o *pCVar5;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_01;
  System_String_o *str2;
  MethodInfo *lastManagedFrame;
  Il2CppClass *pIVar6;
  System_Exception_o *__this_02;
  System_String_o *pSVar7;
  int32_t type;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *pSVar8;
  
  if (Il2CppMethodInitialized_0754608c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"SpotLight");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomPhysicsMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"NavMeshObstacle");
    il2cpp_codegen_initialize_runtime_metadata(&"Lod");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"PointLight");
    il2cpp_codegen_initialize_runtime_metadata(&"DayLight");
    Il2CppMethodInitialized_0754608c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05a2bf88;
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)name,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                    );
  if (bVar4) {
    pSVar7 = il2cpp_codegen_get_runtime_metadata(&"MapObject already has a ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" component.");
    pSVar7 = System_String__Concat_5301f10(pSVar7,name,str2,(MethodInfo *)0x0);
label_05a2c07c:
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar6);
label_05a2c09c:
    System_Exception___ctor_54fa440(__this_02,pSVar7,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddBuiltinComponent);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  bVar4 = System_String__op_Equality(name,"DayLight",(MethodInfo *)0x0);
  if (bVar4) {
    pSVar8 = (__this->fields)._builtinCache;
    __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
    type = 1;
label_05a2be89:
    CustomLogic_CustomLogicLightBuiltin___ctor_58f6f20
              ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__this,type,(MethodInfo *)0x0);
  }
  else {
    bVar4 = System_String__op_Equality(name,"PointLight",(MethodInfo *)0x0);
    if (bVar4) {
      pSVar8 = (__this->fields)._builtinCache;
      __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
      type = 2;
      goto label_05a2be89;
    }
    bVar4 = System_String__op_Equality(name,"SpotLight",(MethodInfo *)0x0);
    if (bVar4) {
      pSVar8 = (__this->fields)._builtinCache;
      __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
      type = 0;
      goto label_05a2be89;
    }
    bVar4 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
    if (bVar4) {
      pMVar2 = (__this->fields).Value;
      if ((pMVar2 == (Map_MapObject_o *)0x0) ||
         (pMVar3 = (pMVar2->fields).ScriptObject, pMVar3 == (Map_MapScriptBaseObject_o *)0x0))
      goto label_05a2bf88;
      if ((pMVar3->fields).Static != false) {
        pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar6);
        pSVar7 = il2cpp_codegen_get_runtime_metadata(&"AddRigidbody cannot be called on a static MapObject.");
        goto label_05a2c09c;
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5903b10
                (__this_01,__this,1.0,(System_Nullable_Vector3__o)ZEXT416(0),false,false,(MethodInfo *)0x0);
      targetAddress = &(__this->fields)._rigidBody;
      (__this->fields)._rigidBody = __this_01;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05a2bf88;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)name,(Il2CppObject *)*targetAddress,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
      pSVar8 = (__this->fields)._builtinCache;
      if (pSVar8 == (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
      goto label_05a2bf88;
      goto label_05a2bebe;
    }
    bVar4 = System_String__op_Equality(name,"CustomPhysicsMaterial",(MethodInfo *)0x0);
    if (bVar4) {
      pSVar8 = (__this->fields)._builtinCache;
      __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor_59028d0
                ((CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)__this_00,__this,(MethodInfo *)0x0);
    }
    else {
      bVar4 = System_String__op_Equality(name,"NavMeshObstacle",(MethodInfo *)0x0);
      if (bVar4) {
        pSVar8 = (__this->fields)._builtinCache;
        __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor_5900390
                  ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__this_00,__this,(MethodInfo *)0x0);
      }
      else {
        bVar4 = System_String__op_Equality(name,"Lod",(MethodInfo *)0x0);
        if (!bVar4) {
          pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Unknown builtin component: ");
          pSVar7 = System_String__Concat_52f0320(pSVar7,name,(MethodInfo *)0x0);
          goto label_05a2c07c;
        }
        pSVar8 = (__this->fields)._builtinCache;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin);
        CustomLogic_CustomLogicLodBuiltin___ctor_58fee60(__this_00,__this,(MethodInfo *)0x0);
      }
    }
  }
  if (pSVar8 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,(Il2CppObject *)name,
               (Il2CppObject *)__this_00,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
    pSVar8 = (__this->fields)._builtinCache;
    if (pSVar8 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
label_05a2bebe:
      pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)pSVar8,
                          (Il2CppObject *)name,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                         );
      return (Il2CppObject *)pCVar5;
    }
  }
label_05a2bf88:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddRigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c110

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **targetAddress;
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  Il2CppClass *pIVar5;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_0754608d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_0754608d = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Static != false) {
      pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar5);
      metadataPointer = &"AddRigidbody cannot be called on a static MapObject.";
label_05a2c264:
      message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
      System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)"Rigidbody",
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                        );
      if (bVar4) {
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar5);
        metadataPointer = &"MapObject already has a Rigidbody component.";
        goto label_05a2c264;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5903b10
                (__this_00,__this,1.0,(System_Nullable_Vector3__o)ZEXT416(0),false,false,(MethodInfo *)0x0);
      targetAddress = &(__this->fields)._rigidBody;
      (__this->fields)._rigidBody = __this_00;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)"Rigidbody",(Il2CppObject *)*targetAddress,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
        return *targetAddress;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBuiltinComponent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a2c290

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  CustomLogic_BuiltinComponentInstance_o *pCVar3;
  
  if (Il2CppMethodInitialized_0754608e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item);
    Il2CppMethodInitialized_0754608e = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                      );
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)name,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                         );
      return (Il2CppObject *)pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveBuiltinComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a2c320

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  CustomLogic_BuiltinComponentInstance_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_0754608f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_0754608f = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                      );
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"MapObject does not have a ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" component.");
      pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_54fa440(__this_01,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_RemoveBuiltinComponent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar1,(Il2CppObject *)name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                            );
      if (__this_00 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__Unload(__this_00,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar1,(Il2CppObject *)name,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove);
          bVar2 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields)._rigidBody = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidBody);
            return;
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$ConvertToCSV
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__ConvertToCSV (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c490

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ConvertToCSV
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                     (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  return pSVar3;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c4c0

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._rigidBody;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c4d0

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x5a2c4e0

void CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererGet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27bd0

void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 == (UnityEngine_Renderer_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if (pUVar2->max_length == 0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"MapObject has no renderer.");
    System_Exception___ctor_54fa440(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererGet);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererSet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a27cd0

void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Il2CppClass *pIVar4;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
label_05a27cfb:
    ThrowNullReferenceException();
  }
  if ((pMVar2->fields).Static == false) {
    pUVar3 = (pMVar1->fields).renderCache;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_05a27cfb;
    if (pUVar3->max_length != 0) {
      return;
    }
    pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
    metadataPointer = &"MapObject has no renderer.";
  }
  else {
    pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
    metadataPointer = &"Property cannot be set on a static MapObject.";
  }
  message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  System_Exception___ctor_54fa440(__this_00,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererSet);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicMapObjectBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__Equals (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5a2c4f0

bool CustomLogic_CustomLogicMapObjectBuiltin__Equals
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_07546090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_07546090 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppClass *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      return false;
    }
    pIVar2 = obj[3].klass;
  }
  return (Il2CppClass *)(__this->fields).Value == pIVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__GetHashCode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c570

int32_t CustomLogic_CustomLogicMapObjectBuiltin__GetHashCode
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar2->fields).Id;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__ToString (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c590

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ToString
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546091 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" (MapObject)");
    Il2CppMethodInitialized_07546091 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (__this_00 = (UnityEngine_Object_o *)(pMVar1->fields).GameObject,
     __this_00 == (UnityEngine_Object_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320(pSVar2," (MapObject)",(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c5f0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546092 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    Il2CppMethodInitialized_07546092 = '\x01';
  }
  return "MapObject";
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c620

bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c630

bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x5a2c640

bool CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


