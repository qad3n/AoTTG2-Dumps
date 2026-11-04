// Type: CustomLogic.CustomLogicMapObjectBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapObjectBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapObjectBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapObjectBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f7ba20

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapObjectBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f809e0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434572a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434572a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddComponent>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddComponent_b__29_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c3b0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddComponent_b__29_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *componentName;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434572b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434572b = '\x01';
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
                   (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_1843456be = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
                           (__this_00,(__c->fields).Value,componentName,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveComponent>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveComponent_b__30_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ede0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveComponent_b__30_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_String_o *name;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  
  if (Il2CppMethodInitialized_18434572c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434572c = '\x01';
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
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456bf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_1843456bf = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = (__c->fields).Value;
      if (__this_00 != (Map_MapObject_o *)0x0) {
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        instance = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__RemoveComponent(__this_01,instance,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetComponent>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetComponent_b__31_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d720

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetComponent_b__31_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *__this_00;
  System_String_o *name;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434572d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434572d = '\x01';
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
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
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
// 0x181f7da10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetUnityComponent_b__32_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434572e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434572e = '\x01';
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
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
        Il2CppMethodInitialized_1843456c0 = '\x01';
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
// 0x181f7f700

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentEnabled_b__33_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434572f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434572f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f7f7be:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled(__c,name,enabled,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f7f7be;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentsEnabled>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentsEnabled_b__34_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f7d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentsEnabled_b__34_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  
  if (Il2CppMethodInitialized_184345730 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345730 = '\x01';
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
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled(__c,enabled,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereCollider>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereCollider_b__35_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c670

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereCollider_b__35_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  float radius;
  
  if (Il2CppMethodInitialized_184345731 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345731 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (obj,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[1],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
          ;
          if (3 < (uint)__a->max_length) {
            radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               (__a->m_Items[3],
                                (MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
              CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
                        (__c,collideMode,collideWith,center,radius,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_181f7c79a;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f7c79a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxCollider>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxCollider_b__36_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c0a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxCollider_b__36_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicVector3Builtin_o *size;
  
  if (Il2CppMethodInitialized_184345732 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345732 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f7c1f8:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[1],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      center = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_181f7c1fe;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                           );
      }
      size = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      uVar1 = (uint)__a->max_length;
      if (3 < (int)uVar1) {
        if (uVar1 < 4) goto label_181f7c1fe;
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        size = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
      }
      if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider
                  (__c,collideMode,collideWith,center,size,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f7c1f8;
    }
  }
label_181f7c1fe:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideWith>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideWith_b__37_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f4d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideWith_b__37_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *collideWith;
  
  if (Il2CppMethodInitialized_184345733 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345733 = '\x01';
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
                            (obj,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith(__c,collideWith,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideMode>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideMode_b__38_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7f41c: nop dword ptr [rax]

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideMode_b__38_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Collider_o *c;
  System_String_o *collideMode;
  System_Object_array *pSVar3;
  System_String_o *collideWith;
  UnityEngine_Collider_array *value;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184345734 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345734 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f7f4bf:
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    collideMode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456c6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
        Il2CppMethodInitialized_1843456c6 = '\x01';
      }
      pMVar1 = (__c->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (pUVar2,(MethodInfo_6F5810 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        if (pSVar3 != (System_Object_array *)0x0) {
          for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
            if ((uint)pSVar3->max_length <= uVar4) goto label_181f7f4bf;
            c = (UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4];
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            collideWith = Map_MapLoader__GetColliderCollideWith(c,(MethodInfo *)0x0);
            Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
          }
          pMVar1 = (__c->fields).Value;
          if ((pMVar1 != (Map_MapObject_o *)0x0) &&
             (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            value = (UnityEngine_Collider_array *)
                    UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                              (pUVar2,(MethodInfo_6F5810 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
            (pMVar1->fields).colliderCache = value;
            Il2CppCodeGenWriteBarrier(&(pMVar1->fields).colliderCache,value);
            return (Il2CppObject *)0x0;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereTarget>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereTarget_b__39_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c7b0

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
  
  if (Il2CppMethodInitialized_184345735 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345735 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (__a->m_Items[2],
                              (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                             );
          if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget
                               (__c,team,center,radius,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181f7c8ab;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f7c8ab:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxTarget>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxTarget_b__40_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c210

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
  
  if (Il2CppMethodInitialized_184345736 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345736 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (1 < (uint)__a->max_length) {
        center = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          size = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
          if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget
                               (__c,team,center,size,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181f7c2ff;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f7c2ff:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChild>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChild_b__41_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d660

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChild_b__41_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345737 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345737 = '\x01';
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
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetChild(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChildren>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChildren_b__42_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d700

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChildren_b__42_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetChildren(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__43_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d8c0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__43_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  System_String_o *n;
  UnityEngine_Transform_o *pUVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184345738 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345738 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    n = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456cb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843456cb = '\x01';
      }
      pMVar1 = (__c->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,n,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            return (Il2CppObject *)0x0;
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
          CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,pUVar3,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetColorAll>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetColorAll_b__44_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7f62e: nop 

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetColorAll_b__44_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar4;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_o *pUVar5;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  uint uVar6;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184345739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345739 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f7f6f9:
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (((__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
        (pMVar1 = (__c->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
       (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
      if ((pMVar2->fields).Static != false) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        message = il2cpp_codegen_get_runtime_metadata(&"SetColorAll cannot be called on a static MapObject.");
        System_Exception___ctor_1b6abf0(__this_02,message,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetColorAll);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
      }
      pUVar3 = (pMVar1->fields).renderCache;
      if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
        uVar6 = 0;
        while( true ) {
          if ((int)pUVar3->max_length <= (int)uVar6) {
            return (Il2CppObject *)0x0;
          }
          if ((uint)pUVar3->max_length <= uVar6) break;
          if (pUVar3->m_Items[(int)uVar6] == (UnityEngine_Renderer_o *)0x0) goto label_181f7f6aa;
          __this_01 = UnityEngine_Renderer__get_material(pUVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
          if ((pCVar4 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
             (__this_00 = (pCVar4->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) goto label_181f7f6aa;
          pUVar5 = Utility_Color255__ToColor(&local_18,__this_00,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_181f7f6aa;
          local_28.r = (pUVar5->fields).r;
          local_28.g = (pUVar5->fields).g;
          local_28.b = (pUVar5->fields).b;
          local_28.a = (pUVar5->fields).a;
          UnityEngine_Material__set_color(__this_01,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
        }
        goto label_181f7f6f9;
      }
    }
  }
label_181f7f6aa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__InBounds>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__InBounds_b__45_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ddd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7de7f: nop 

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__InBounds_b__45_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Bounds_o *pUVar5;
  Il2CppObject *pIVar6;
  uint uVar7;
  undefined1 local_res18 [16];
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Bounds_o local_38;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_18434573a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434573a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar6 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar6,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pMVar1 = (__c->fields).Value;
      local_38.fields.m_Extents.fields.y = 0.0;
      local_38.fields.m_Extents.fields.z = 0.0;
      local_38.fields.m_Center.fields.x = 0.0;
      local_38.fields.m_Center.fields.y = 0.0;
      local_38.fields.m_Center.fields.z = 0.0;
      local_38.fields.m_Extents.fields.x = 0.0;
      if ((pMVar1 == (Map_MapObject_o *)0x0) ||
         (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 == (UnityEngine_Collider_array *)0x0)) {
label_181f7df3b:
        ThrowNullReferenceException();
      }
      uVar7 = 0;
      do {
        if ((int)pUVar2->max_length <= (int)uVar7) {
          local_res18[0] = 0;
label_181f7def8:
          pIVar6 = il2cpp_value_box(g_data_184354de8,local_res18);
          return pIVar6;
        }
        if ((uint)pUVar2->max_length <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar2->m_Items[(int)uVar7] == (UnityEngine_Collider_o *)0x0) goto label_181f7df3b;
        pUVar5 = UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[(int)uVar7],(MethodInfo *)0x0);
        local_38.fields.m_Center.fields.x = (pUVar5->fields).m_Center.fields.x;
        local_38.fields.m_Center.fields.y = (pUVar5->fields).m_Center.fields.y;
        local_38.fields._8_8_ = *(undefined8 *)&(pUVar5->fields).m_Center.fields.z;
        local_38.fields.m_Extents.fields.y = (pUVar5->fields).m_Extents.fields.y;
        local_38.fields.m_Extents.fields.z = (pUVar5->fields).m_Extents.fields.z;
        if (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_48.x = (pCVar4->fields).Value.fields.x;
        local_48.y = (pCVar4->fields).Value.fields.y;
        local_48.z = (pCVar4->fields).Value.fields.z;
        bVar3 = UnityEngine_Bounds__Internal_Contains
                          (&local_38,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        if (bVar3) {
          local_res18[0] = 1;
          goto label_181f7def8;
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsAverageCenter>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsAverageCenter_b__46_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cec0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsAverageCenter_b__46_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  int iVar5;
  UnityEngine_Bounds_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Bounds_o local_68 [4];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456cc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456cc = '\x01';
    }
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pMVar2 = (__c->fields).Value;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar10 = (pUVar4->zeroVector).fields.x;
      fVar11 = (pUVar4->zeroVector).fields.y;
      fVar12 = (pUVar4->zeroVector).fields.z;
      iVar5 = 0;
      uVar8 = 0;
      while (iVar5 < (int)pUVar3->max_length) {
        if ((uint)pUVar3->max_length <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar3->m_Items[(int)uVar8] == (UnityEngine_Collider_o *)0x0) goto label_181f7d07c;
        pUVar6 = UnityEngine_Collider__get_bounds(local_68,pUVar3->m_Items[(int)uVar8],(MethodInfo *)0x0);
        fVar10 = fVar10 + (pUVar6->fields).m_Center.fields.x;
        fVar11 = fVar11 + (pUVar6->fields).m_Center.fields.y;
        fVar12 = fVar12 + (pUVar6->fields).m_Center.fields.z;
        iVar5 = uVar8 + 1;
        uVar8 = uVar8 + 1;
      }
      if (0 < (int)uVar8) {
        fVar9 = (float)(int)uVar8;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_68[0].fields.m_Center.fields.z = fVar12 / fVar9;
        local_68[0].fields.m_Center.fields.y = fVar11 / fVar9;
        local_68[0].fields.m_Center.fields.x = fVar10 / fVar9;
label_181f7d03d:
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_02,(UnityEngine_Vector3_o *)local_68,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
      pMVar2 = (__c->fields).Value;
      if ((pMVar2 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__get_position
                             ((UnityEngine_Vector3_o *)local_68,__this_01,(MethodInfo *)0x0);
          uVar1._0_4_ = (pUVar7->fields).x;
          uVar1._4_4_ = (pUVar7->fields).y;
          fVar10 = (pUVar7->fields).z;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)
          ;
          local_68[0].fields.m_Center.fields._0_8_ = uVar1;
          local_68[0].fields.m_Center.fields.z = fVar10;
          goto label_181f7d03d;
        }
      }
    }
  }
label_181f7d07c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsCenter>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsCenter_b__47_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d090

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsCenter_b__47_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_38 [2];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456cd = '\x01';
    }
    pMVar1 = (__c->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
      if (pUVar2->max_length == 0) {
        return (Il2CppObject *)0x0;
      }
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        pUVar6 = UnityEngine_Collider__get_bounds(local_38,pUVar2->m_Items[0],(MethodInfo *)0x0);
        fVar3 = (pUVar6->fields).m_Center.fields.x;
        fVar4 = (pUVar6->fields).m_Center.fields.y;
        fVar5 = (pUVar6->fields).m_Center.fields.z;
        local_38[0].fields.m_Extents.fields.y = (pUVar6->fields).m_Extents.fields.y;
        local_38[0].fields.m_Extents.fields.z = (pUVar6->fields).m_Extents.fields.z;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_38[0].fields.m_Center.fields.x = fVar3;
        local_38[0].fields.m_Center.fields.y = fVar4;
        local_38[0].fields.m_Center.fields.z = fVar5;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsSize>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsSize_b__48_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d480

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsSize_b__48_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Collider_array *pUVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_48 [2];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456ce = '\x01';
    }
    pMVar4 = (__c->fields).Value;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (pUVar5 = (pMVar4->fields).colliderCache, pUVar5 != (UnityEngine_Collider_array *)0x0)) {
      if (pUVar5->max_length == 0) {
        return (Il2CppObject *)0x0;
      }
      if ((int)pUVar5->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar5->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        pUVar6 = UnityEngine_Collider__get_bounds(local_48,pUVar5->m_Items[0],(MethodInfo *)0x0);
        uVar2 = (pUVar6->fields).m_Extents.fields.x;
        uVar3 = (pUVar6->fields).m_Extents.fields.y;
        fVar1 = (pUVar6->fields).m_Extents.fields.z;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_48[0].fields.m_Center.fields.z = fVar1 + fVar1;
        local_48[0].fields.m_Center.fields.y = (float)uVar3 + (float)uVar3;
        local_48[0].fields.m_Center.fields.x = (float)uVar2 + (float)uVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMin>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMin_b__49_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d380

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMin_b__49_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_Collider_array *pUVar8;
  UnityEngine_Bounds_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_58 [3];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456cf = '\x01';
    }
    pMVar7 = (__c->fields).Value;
    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
       (pUVar8 = (pMVar7->fields).colliderCache, pUVar8 != (UnityEngine_Collider_array *)0x0)) {
      if (pUVar8->max_length == 0) {
        return (Il2CppObject *)0x0;
      }
      if ((int)pUVar8->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar8->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        pUVar9 = UnityEngine_Collider__get_bounds(local_58,pUVar8->m_Items[0],(MethodInfo *)0x0);
        fVar1 = (pUVar9->fields).m_Center.fields.z;
        fVar2 = (pUVar9->fields).m_Extents.fields.z;
        uVar3 = (pUVar9->fields).m_Center.fields.x;
        uVar5 = (pUVar9->fields).m_Center.fields.y;
        uVar4 = (pUVar9->fields).m_Extents.fields.x;
        uVar6 = (pUVar9->fields).m_Extents.fields.y;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_58[0].fields.m_Center.fields.y = (float)uVar5 - (float)uVar6;
        local_58[0].fields.m_Center.fields.x = (float)uVar3 - (float)uVar4;
        local_58[0].fields.m_Center.fields.z = fVar1 - fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMax>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMax_b__50_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d280

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMax_b__50_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_Collider_array *pUVar8;
  UnityEngine_Bounds_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_58 [3];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456d0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456d0 = '\x01';
    }
    pMVar7 = (__c->fields).Value;
    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
       (pUVar8 = (pMVar7->fields).colliderCache, pUVar8 != (UnityEngine_Collider_array *)0x0)) {
      if (pUVar8->max_length == 0) {
        return (Il2CppObject *)0x0;
      }
      if ((int)pUVar8->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar8->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        pUVar9 = UnityEngine_Collider__get_bounds(local_58,pUVar8->m_Items[0],(MethodInfo *)0x0);
        fVar1 = (pUVar9->fields).m_Extents.fields.z;
        fVar2 = (pUVar9->fields).m_Center.fields.z;
        uVar3 = (pUVar9->fields).m_Center.fields.x;
        uVar5 = (pUVar9->fields).m_Center.fields.y;
        uVar4 = (pUVar9->fields).m_Extents.fields.x;
        uVar6 = (pUVar9->fields).m_Extents.fields.y;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_58[0].fields.m_Center.fields.y = (float)uVar6 + (float)uVar5;
        local_58[0].fields.m_Center.fields.x = (float)uVar4 + (float)uVar3;
        local_58[0].fields.m_Center.fields.z = fVar1 + fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsExtents>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsExtents_b__51_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d180

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsExtents_b__51_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_Collider_array *pUVar4;
  undefined8 uVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Bounds_o local_38 [2];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456d1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456d1 = '\x01';
    }
    pMVar3 = (__c->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (pUVar4 = (pMVar3->fields).colliderCache, pUVar4 != (UnityEngine_Collider_array *)0x0)) {
      if (pUVar4->max_length == 0) {
        return (Il2CppObject *)0x0;
      }
      if ((int)pUVar4->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar4->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
        pUVar6 = UnityEngine_Collider__get_bounds(local_38,pUVar4->m_Items[0],(MethodInfo *)0x0);
        local_58.x = (pUVar6->fields).m_Center.fields.x;
        local_58.y = (pUVar6->fields).m_Center.fields.y;
        uVar5 = *(undefined8 *)&(pUVar6->fields).m_Center.fields.z;
        uVar1 = (pUVar6->fields).m_Extents.fields.y;
        uVar2 = (pUVar6->fields).m_Extents.fields.z;
        local_58.z = (float)uVar5;
        fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
        uVar5._4_4_ = (float)uVar1;
        uVar5._0_4_ = fStack_4c;
        fStack_48 = (float)uVar1;
        fStack_44 = (float)uVar2;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_58.z = (float)uVar2;
        local_58._0_8_ = uVar5;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCorners>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetCorners_b__52_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d7c0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetCorners_b__52_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetCorners(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasTag>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__HasTag_b__53_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7db90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__HasTag_b__53_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *obj;
  System_String_o *tag;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434573b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434573b = '\x01';
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
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
        Il2CppMethodInitialized_1843456d3 = '\x01';
      }
      obj = (__c->fields).Value;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      local_res18[0] = Map_MapLoader__HasTag(obj,tag,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBuiltinComponent>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBuiltinComponent_b__54_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c310

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBuiltinComponent_b__54_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_18434573c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434573c = '\x01';
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
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent(__c,name,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddRigidbody>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddRigidbody_b__55_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c4a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddRigidbody_b__55_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_02;
  Il2CppClass *pIVar4;
  System_Exception_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  System_Nullable_Vector3__Fields local_28 [2];
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
      Il2CppMethodInitialized_1843456d5 = '\x01';
    }
    pMVar1 = (__c->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
      if ((pMVar2->fields).Static != false) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"AddRigidbody cannot be called on a static MapObject.");
        System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
      }
      __this_00 = (__c->fields)._builtinCache;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)"Rigidbody",
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                          );
        if (bVar3) {
          pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
          pSVar6 = il2cpp_codegen_get_runtime_metadata(&"MapObject already has a Rigidbody component.");
          System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
          pMVar7 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
        }
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin)
        ;
        local_28[0].hasValue = false;
        local_28[0]._1_3_ = 0;
        local_28[0].value.fields.x = 0.0;
        local_28[0].value.fields.y = 0.0;
        local_28[0].value.fields.z = 0.0;
        CustomLogic_CustomLogicRigidbodyBuiltin___ctor_1f55530
                  (__this_02,__c,1.0,(System_Nullable_Vector3__o *)local_28,false,false,(MethodInfo *)0x0);
        (__c->fields)._rigidBody = __this_02;
        Il2CppCodeGenWriteBarrier(&(__c->fields)._rigidBody,__this_02);
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
        if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_01,(Il2CppObject *)"Rigidbody",(Il2CppObject *)(__c->fields)._rigidBody,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item
                    );
          return (Il2CppObject *)(__c->fields)._rigidBody;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBuiltinComponent>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBuiltinComponent_b__56_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d560

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBuiltinComponent_b__56_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_String_o *key;
  CustomLogic_BuiltinComponentInstance_o *pCVar2;
  
  if (Il2CppMethodInitialized_18434573d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434573d = '\x01';
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
                    (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item)
        ;
        Il2CppMethodInitialized_1843456d6 = '\x01';
      }
      __this_00 = (__c->fields)._builtinCache;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)key,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                          );
        if (!bVar1) {
          return (Il2CppObject *)0x0;
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
        if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pCVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_01,(Il2CppObject *)key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                             );
          return (Il2CppObject *)pCVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveBuiltinComponent>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveBuiltinComponent_b__57_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ec10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveBuiltinComponent_b__57_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  CustomLogic_BuiltinComponentInstance_o *__this_01;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434573e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434573e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843456d7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item)
        ;
        il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
        Il2CppMethodInitialized_1843456d7 = '\x01';
      }
      __this_00 = (__c->fields)._builtinCache;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)pSVar3,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                          );
        if (!bVar2) {
          str2 = il2cpp_codegen_get_runtime_metadata(&" component.");
          str0 = il2cpp_codegen_get_runtime_metadata(&"MapObject does not have a ");
          pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_02,pSVar3,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_RemoveBuiltinComponent);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar1,(Il2CppObject *)pSVar3,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                                );
          if (__this_01 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
            CustomLogic_BuiltinComponentInstance__Unload(__this_01,(MethodInfo *)0x0);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar1,(Il2CppObject *)pSVar3,
                         (MethodInfo_1470BF0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove
                        );
              bVar2 = System_String__op_Equality(pSVar3,"Rigidbody",(MethodInfo *)0x0);
              if (bVar2) {
                (__c->fields)._rigidBody = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0;
                Il2CppCodeGenWriteBarrier(&(__c->fields)._rigidBody,(void *)0x0);
              }
              return (Il2CppObject *)0x0;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__ConvertToCSV>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__ConvertToCSV_b__58_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cc50

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__ConvertToCSV_b__58_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  
  if (((__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__c->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    pSVar3 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    return (Il2CppObject *)pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f5a980

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *pMVar4;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *pCVar5;
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *pMVar7;
  System_Func_CustomLogicMapObjectBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843456db == '\0') {
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
    Il2CppMethodInitialized_1843456db = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x56e8eb61) {
    if (uVar3 < 0x27a969bc) {
      if (uVar3 < 0x1be9479d) {
        if (0x65b2734 < uVar3) {
          if (uVar3 < 0x18a43c5c) {
            if (uVar3 == 0xfe07306) {
              bVar2 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f5e4ae;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843456e7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
                Il2CppMethodInitialized_1843456e7 = '\x01';
              }
              __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              pMVar7 = 
              MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
              ;
            }
            else {
              if (uVar3 != 0x18a43c5b) goto label_181f5e4ae;
              bVar2 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f5e4ae;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843456dc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
                Il2CppMethodInitialized_1843456dc = '\x01';
              }
              __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              pMVar7 = 
              MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
              ;
            }
          }
          else {
            if (uVar3 == 0x1b288681) {
              bVar2 = System_String__op_Equality(name,"HasTag",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f5e4ae;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434570f == '\0') {
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
                Il2CppMethodInitialized_18434570f = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
              }
              __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0;
              if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
              __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__HasTag_b__53_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0 =
                   (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0;
              goto label_181f5e472;
            }
            if (uVar3 != 0x1be9479c) goto label_181f5e4ae;
            bVar2 = System_String__op_Equality(name,"HasRenderer",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f5e4ae;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456ec == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456ec = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
            ;
          }
label_181f5e170:
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
          pCVar5 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
          goto label_181f5e192;
        }
        if (uVar3 == 0x232777f) {
          bVar2 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456df == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456df = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_5
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_5
            ;
label_181f5b17a:
            System_Action_object__object____ctor
                      (pMVar4,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
            pCVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,(System_Func_T__object__o *)__this_01,
                       (System_Action_T__object__o *)pMVar4,
                       (MethodInfo_12B8EE0 *)
                       MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pCVar5;
          }
label_181f5e4ae:
          pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapObjectBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_03,pSVar6,(MethodInfo *)0x0);
          pMVar7 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar7);
        }
        if (uVar3 == 0x3134bce) {
          bVar2 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456e0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456e0 = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
            ;
            goto label_181f5b17a;
          }
          goto label_181f5e4ae;
        }
        if (uVar3 != 0x65b2734) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"GetBoundsMax",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434570c == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434570c = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMax_b__50_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0
        ;
      }
      else if (uVar3 < 0x20810131) {
        if (uVar3 == 0x1e9e9f85) {
          bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456e5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456e5 = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
            ;
            goto label_181f5b17a;
          }
          goto label_181f5e4ae;
        }
        if (uVar3 == 0x1f89134f) {
          bVar2 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456e9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456e9 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_15
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_15
          ;
          goto label_181f5ae92;
        }
        if (uVar3 != 0x20810130) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"SetCollideMode",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345700 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345700 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideMode_b__38_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0
        ;
      }
      else {
        if (uVar3 < 0x23cef8ba) {
          if (uVar3 == 0x22cef726) {
            bVar2 = System_String__op_Equality(name,"TextureTilingY",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f5e4ae;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456ef == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456ef = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____ge
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____se
            ;
          }
          else {
            if (uVar3 != 0x23cef8b9) goto label_181f5e4ae;
            bVar2 = System_String__op_Equality(name,"TextureTilingX",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f5e4ae;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456ee == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456ee = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____ge
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____se
            ;
          }
          goto label_181f5ae92;
        }
        if (uVar3 == 0x25ea1867) {
          bVar2 = System_String__op_Equality(name,"GetChild",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345703 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345703 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChild_b__41_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0;
        }
        else {
          if (uVar3 != 0x27a969bb) goto label_181f5e4ae;
          bVar2 = System_String__op_Equality(name,"SetComponentEnabled",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456fb == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843456fb = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentEnabled_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0;
        }
      }
    }
    else if (uVar3 < 0x342cdb7a) {
      if (uVar3 < 0x2ac20558) {
        if (uVar3 == 0x28528e11) {
          bVar2 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456e6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456e6 = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_12_0
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_12_1
            ;
            goto label_181f5b17a;
          }
          goto label_181f5e4ae;
        }
        if (uVar3 == 0x2862c297) {
          bVar2 = System_String__op_Equality(name,"RemoveBuiltinComponent",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345713 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345713 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveBuiltinComponent
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0;
        }
        else {
          if (uVar3 != 0x2ac20557) goto label_181f5e4ae;
          bVar2 = System_String__op_Equality(name,"AddRigidbody",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345711 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345711 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddRigidbody_b__55_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0;
        }
      }
      else if (uVar3 < 0x2fe74448) {
        if (uVar3 != 0x2ace984c) {
          if (uVar3 == 0x2fe74447) {
            bVar2 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843456e1 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40c1e38
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
                Il2CppMethodInitialized_1843456e1 = '\x01';
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              System_Func_object__object____ctor
                        ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                         (Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                         ,(MethodInfo_16E67D0 *)0x0);
              pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
              pMVar7 = 
              MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40c1e38
              ;
              goto label_181f5b17a;
            }
          }
          goto label_181f5e4ae;
        }
        bVar2 = System_String__op_Equality(name,"SetComponentsEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456fc == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843456fc = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentsEnabled_b
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0
        ;
      }
      else if (uVar3 == 0x30f356f2) {
        bVar2 = System_String__op_Equality(name,"GetComponent",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456f9 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843456f9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetComponent_b__31_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0
        ;
      }
      else {
        if (uVar3 != 0x342cdb79) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"SetColorAll",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345706 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345706 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetColorAll_b__44_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0
        ;
      }
    }
    else if (uVar3 < 0x448260ec) {
      if (uVar3 == 0x42f35940) {
        bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456e4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456e4 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
          ;
          goto label_181f5b17a;
        }
        goto label_181f5e4ae;
      }
      if (uVar3 == 0x43c043a7) {
        bVar2 = System_String__op_Equality(name,"GetCorners",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434570e == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434570e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetCorners_b__52_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0
        ;
      }
      else {
        if (uVar3 != 0x448260eb) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"ConvertToCSV",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345714 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345714 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__ConvertToCSV_b__58_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0
        ;
      }
    }
    else if (uVar3 < 0x51826a21) {
      if (uVar3 == 0x4614013f) {
        bVar2 = System_String__op_Equality(name,"SetCollideWith",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456ff == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843456ff = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideWith_b__37_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0
        ;
      }
      else {
        if (uVar3 != 0x51826a20) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"AddBoxTarget",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345702 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345702 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxTarget_b__40_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0
        ;
      }
    }
    else {
      if (uVar3 != 0x53e18937) {
        if (uVar3 != 0x56e8eb60) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456f2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object)
          ;
          Il2CppMethodInitialized_1843456f2 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
        ;
        goto label_181f5e170;
      }
      bVar2 = System_String__op_Equality(name,"GetBoundsCenter",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345709 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345709 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsCenter_b__47
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0 =
           (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0;
    }
  }
  else if (uVar3 < 0xad82abbc) {
    if (uVar3 < 0x83c140bc) {
      if (uVar3 < 0x67cfeb84) {
        if (uVar3 == 0x5eabd17f) {
          bVar2 = System_String__op_Equality(name,"InBounds",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345707 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345707 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__InBounds_b__45_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0;
        }
        else if (uVar3 == 0x61e48c35) {
          bVar2 = System_String__op_Equality(name,"GetBuiltinComponent",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345712 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345712 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBuiltinComponent_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0;
        }
        else {
          if (uVar3 != 0x67cfeb83) goto label_181f5e4ae;
          bVar2 = System_String__op_Equality(name,"GetUnityComponent",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456fa == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843456fa = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetUnityComponent_b__3
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0 =
               (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0;
        }
      }
      else if (uVar3 < 0x755b5308) {
        if (uVar3 == 0x6a01cd56) {
          bVar2 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843456e2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40c1c78
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
              Il2CppMethodInitialized_1843456e2 = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
                       ,(MethodInfo_16E67D0 *)0x0);
            pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40c1c78
            ;
            goto label_181f5b17a;
          }
          goto label_181f5e4ae;
        }
        if (uVar3 != 0x755b5307) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"GetBoundsExtents",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434570d == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434570d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsExtents_b__51
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0
        ;
      }
      else if (uVar3 == 0x770e2958) {
        bVar2 = System_String__op_Equality(name,"RemoveComponent",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456f8 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843456f8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveComponent_b__30
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0
        ;
      }
      else {
        if (uVar3 != 0x83c140bb) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"GetBoundsSize",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434570a == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434570a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsSize_b__48_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0
        ;
      }
    }
    else {
      if (uVar3 < 0x917c21f1) {
        if (uVar3 == 0x8d7dfb42) {
          bVar2 = System_String__op_Equality(name,"TextureOffsetY",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456f1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456f1 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____ge
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____se
          ;
        }
        else {
          if (uVar3 != 0x8e7dfcd5) {
            if (uVar3 != 0x917c21f0) goto label_181f5e4ae;
            bVar2 = System_String__op_Equality(name,"GetBoundsAverageCenter",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f5e4ae;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345708 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345708 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsAverageCenter
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0 =
                 (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0;
            goto label_181f5e472;
          }
          bVar2 = System_String__op_Equality(name,"TextureOffsetX",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456f0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456f0 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____ge
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____se
          ;
        }
label_181f5ae92:
        System_Action_object__object____ctor
                  (pMVar4,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
        pCVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin)
        ;
label_181f5e192:
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,(System_Func_T__object__o *)__this_00,
                   (System_Action_T__object__o *)pMVar4,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pCVar5;
      }
      if (0xa18f5959 < uVar3) {
        if (uVar3 == 0xa3370cc8) {
          bVar2 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456f5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456f5 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
          ;
        }
        else {
          if (uVar3 != 0xad82abbb) goto label_181f5e4ae;
          bVar2 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f5e4ae;
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456eb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456eb = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
          ;
        }
        goto label_181f5e170;
      }
      if (uVar3 == 0x9f4e7c78) {
        bVar2 = System_String__op_Equality(name,"NetworkView",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456f6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object)
          ;
          Il2CppMethodInitialized_1843456f6 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____sette
        ;
        goto label_181f5ae92;
      }
      if (uVar3 != 0xa18f5959) goto label_181f5e4ae;
      bVar2 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345705 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345705 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__43_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0 =
           (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0;
    }
  }
  else if (uVar3 < 0xd82af811) {
    if (uVar3 < 0xb6997fba) {
      if (uVar3 == 0xaf82143b) {
        bVar2 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456de == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456de = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
          ;
          goto label_181f5b17a;
        }
        goto label_181f5e4ae;
      }
      if (uVar3 == 0xafdc1b96) {
        bVar2 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456f4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object)
          ;
          Il2CppMethodInitialized_1843456f4 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_26_0
                   ,(MethodInfo_16E67D0 *)0x0);
        pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_26_1
        ;
        goto label_181f5ae92;
      }
      if (uVar3 != 0xb6997fb9) goto label_181f5e4ae;
      bVar2 = System_String__op_Equality(name,"AddSphereCollider",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843456fd == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843456fd = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereCollider_b__3
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0 =
           (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0;
    }
    else if (uVar3 < 0xbbdcd0a7) {
      if (uVar3 == 0xbbaa27dc) {
        bVar2 = System_String__op_Equality(name,"AddSphereTarget",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345701 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345701 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereTarget_b__39
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0
        ;
      }
      else {
        if (uVar3 != 0xbbdcd0a6) goto label_181f5e4ae;
        bVar2 = System_String__op_Equality(name,"AddBuiltinComponent",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345710 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345710 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBuiltinComponent_b
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0 =
             (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0
        ;
      }
    }
    else {
      if (uVar3 == 0xc156ee1d) {
        bVar2 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f5e4ae;
        if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843456e8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object)
          ;
          Il2CppMethodInitialized_1843456e8 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_14
                   ,(MethodInfo_16E67D0 *)0x0);
        pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_14
        ;
        goto label_181f5ae92;
      }
      if (uVar3 != 0xd82af810) goto label_181f5e4ae;
      bVar2 = System_String__op_Equality(name,"GetChildren",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345704 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345704 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChildren_b__42_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0 =
           (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0;
    }
  }
  else if (uVar3 < 0xe50883bb) {
    if (0xd948e167 < uVar3) {
      if (uVar3 == 0xe27f342a) {
        bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456dd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456dd = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
          ;
          goto label_181f5b17a;
        }
      }
      else if (uVar3 == 0xe50883ba) {
        bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843456e3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
            Il2CppMethodInitialized_1843456e3 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
                     ,(MethodInfo_16E67D0 *)0x0);
          pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
          ;
          goto label_181f5b17a;
        }
      }
      goto label_181f5e4ae;
    }
    if (uVar3 != 0xd8f3e233) {
      if (uVar3 != 0xd948e167) goto label_181f5e4ae;
      bVar2 = System_String__op_Equality(name,"ActiveInHierarchy",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843456ea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
        Il2CppMethodInitialized_1843456ea = '\x01';
      }
      __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
      ;
      goto label_181f5e170;
    }
    bVar2 = System_String__op_Equality(name,"AddComponent",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f5e4ae;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843456f7 == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_1843456f7 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddComponent_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0;
  }
  else if (uVar3 < 0xe9952416) {
    if (uVar3 == 0xe5b43cf8) {
      bVar2 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843456ed == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object)
        ;
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
        Il2CppMethodInitialized_1843456ed = '\x01';
      }
      __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
      System_Func_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_19_0
                 ,(MethodInfo_16E67D0 *)0x0);
      pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_19_1
      ;
      goto label_181f5ae92;
    }
    if (uVar3 != 0xe9952415) goto label_181f5e4ae;
    bVar2 = System_String__op_Equality(name,"AddBoxCollider",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f5e4ae;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843456fe == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_1843456fe = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxCollider_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0;
  }
  else {
    if (uVar3 != 0xf445f026) {
      if (uVar3 != 0xf8835433) goto label_181f5e4ae;
      bVar2 = System_String__op_Equality(name,"Tag",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f5e4ae;
      if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843456f3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object)
        ;
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
        Il2CppMethodInitialized_1843456f3 = '\x01';
      }
      __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
      System_Func_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____getter_25_0
                 ,(MethodInfo_16E67D0 *)0x0);
      pMVar4 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____setter_25_1
      ;
      goto label_181f5ae92;
    }
    bVar2 = System_String__op_Equality(name,"GetBoundsMin",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f5e4ae;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434570b == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_18434570b = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f5e47a;
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMin_b__49_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0;
  }
label_181f5e472:
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181f5e47a:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x181f6df00

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f6d0a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456dd == '\0') {
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
    Il2CppMethodInitialized_1843456dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x181f6c740

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456de == '\0') {
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
    Il2CppMethodInitialized_1843456de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x181f6d7d0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456df == '\0') {
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
    Il2CppMethodInitialized_1843456df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_5
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x181f6c830

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e0 == '\0') {
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
    Il2CppMethodInitialized_1843456e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x181f6d370

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40c1e38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40c1e38
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x181f6d280

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40c1c78
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40c1c78
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x181f6be30

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e3 == '\0') {
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
    Il2CppMethodInitialized_1843456e3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181f6eae0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e4 == '\0') {
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
    Il2CppMethodInitialized_1843456e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181f6d460

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e5 == '\0') {
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
    Il2CppMethodInitialized_1843456e5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x181f6db90

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e6 == '\0') {
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
    Il2CppMethodInitialized_1843456e6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_12_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x181f6cab0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x181f6ce20

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e8 == '\0') {
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
    Il2CppMethodInitialized_1843456e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_14
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x181f6ae90

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456e9 == '\0') {
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
    Il2CppMethodInitialized_1843456e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_15
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_15
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ActiveInHierarchy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ActiveInHierarchy (const MethodInfo* method);
// 0x181f6ad00

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ActiveInHierarchy
          (MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456ea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ActiveInHierarchy_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x181f6e860

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456eb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__HasRenderer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer (const MethodInfo* method);
// 0x181f6bfc0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456ec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__HasRenderer_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x181f6b750

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456ed == '\0') {
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
    Il2CppMethodInitialized_1843456ed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_19_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX (const MethodInfo* method);
// 0x181f6e590

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456ee == '\0') {
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
    Il2CppMethodInitialized_1843456ee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingX_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY (const MethodInfo* method);
// 0x181f6e680

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456ef == '\0') {
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
    Il2CppMethodInitialized_1843456ef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureTilingY_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX (const MethodInfo* method);
// 0x181f6e3b0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456f0 == '\0') {
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
    Il2CppMethodInitialized_1843456f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetX_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY (const MethodInfo* method);
// 0x181f6e4a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456f1 == '\0') {
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
    Il2CppMethodInitialized_1843456f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__TextureOffsetY_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x181f6c290

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_24_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Tag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag (const MethodInfo* method);
// 0x181f6e220

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456f3 == '\0') {
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
    Il2CppMethodInitialized_1843456f3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____getter_25_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Tag_g____setter_25_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x181f6c5b0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456f4 == '\0') {
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
    Il2CppMethodInitialized_1843456f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_26_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_26_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x181f6d550

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
    Il2CppMethodInitialized_1843456f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__NetworkView
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView (const MethodInfo* method);
// 0x181f6cc90

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView(MethodInfo *method)

{
  System_Func_CustomLogicMapObjectBuiltin__object__o *__this;
  System_Action_CustomLogicMapObjectBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843456f6 == '\0') {
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
    Il2CppMethodInitialized_1843456f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapObjectBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings___CreatePropertyBinding__NetworkView_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent (const MethodInfo* method);
// 0x181f67890

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456f7 == '\0') {
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
    Il2CppMethodInitialized_1843456f7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddComponent_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent (const MethodInfo* method);
// 0x181f69b20

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456f8 == '\0') {
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
    Il2CppMethodInitialized_1843456f8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveComponent_b__30
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent (const MethodInfo* method);
// 0x181f68e80

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456f9 == '\0') {
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
    Il2CppMethodInitialized_1843456f9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetComponent_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetUnityComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent (const MethodInfo* method);
// 0x181f69310

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456fa == '\0') {
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
    Il2CppMethodInitialized_1843456fa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetUnityComponent_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled (const MethodInfo* method);
// 0x181f6a430

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456fb == '\0') {
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
    Il2CppMethodInitialized_1843456fb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentEnabled_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentsEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled (const MethodInfo* method);
// 0x181f6a550

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456fc == '\0') {
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
    Il2CppMethodInitialized_1843456fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetComponentsEnabled_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider (const MethodInfo* method);
// 0x181f67ae0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456fd == '\0') {
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
    Il2CppMethodInitialized_1843456fd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereCollider_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider (const MethodInfo* method);
// 0x181f67520

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456fe == '\0') {
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
    Il2CppMethodInitialized_1843456fe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxCollider_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith (const MethodInfo* method);
// 0x181f6a1e0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843456ff == '\0') {
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
    Il2CppMethodInitialized_1843456ff = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideWith_b__37_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode (const MethodInfo* method);
// 0x181f6a0c0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345700 == '\0') {
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
    Il2CppMethodInitialized_184345700 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetCollideMode_b__38_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget (const MethodInfo* method);
// 0x181f67c00

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345701 == '\0') {
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
    Il2CppMethodInitialized_184345701 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddSphereTarget_b__39
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget (const MethodInfo* method);
// 0x181f67640

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345702 == '\0') {
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
    Il2CppMethodInitialized_184345702 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBoxTarget_b__40_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChild
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild (const MethodInfo* method);
// 0x181f68c40

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345703 == '\0') {
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
    Il2CppMethodInitialized_184345703 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChild_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChildren
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren (const MethodInfo* method);
// 0x181f68d60

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345704 == '\0') {
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
    Il2CppMethodInitialized_184345704 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetChildren_b__42_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x181f691f0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345705 == '\0') {
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
    Il2CppMethodInitialized_184345705 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__43_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetColorAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll (const MethodInfo* method);
// 0x181f6a300

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345706 == '\0') {
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
    Il2CppMethodInitialized_184345706 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__SetColorAll_b__44_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__44_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__InBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds (const MethodInfo* method);
// 0x181f69560

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345707 == '\0') {
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
    Il2CppMethodInitialized_184345707 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__InBounds_b__45_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__45_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsAverageCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter (const MethodInfo* method);
// 0x181f683f0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345708 == '\0') {
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
    Il2CppMethodInitialized_184345708 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsAverageCenter
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__46_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter (const MethodInfo* method);
// 0x181f68520

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345709 == '\0') {
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
    Il2CppMethodInitialized_184345709 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsCenter_b__47
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__47_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsSize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize (const MethodInfo* method);
// 0x181f689e0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570a == '\0') {
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
    Il2CppMethodInitialized_18434570a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsSize_b__48_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__48_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin (const MethodInfo* method);
// 0x181f688b0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570b == '\0') {
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
    Il2CppMethodInitialized_18434570b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMin_b__49_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__49_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMax
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax (const MethodInfo* method);
// 0x181f68780

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570c == '\0') {
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
    Il2CppMethodInitialized_18434570c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsMax_b__50_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__50_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsExtents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents (const MethodInfo* method);
// 0x181f68650

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570d == '\0') {
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
    Il2CppMethodInitialized_18434570d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBoundsExtents_b__51
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__51_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetCorners
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners (const MethodInfo* method);
// 0x181f68fa0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570e == '\0') {
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
    Il2CppMethodInitialized_18434570e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetCorners_b__52_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__52_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__HasTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag (const MethodInfo* method);
// 0x181f69430

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434570f == '\0') {
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
    Il2CppMethodInitialized_18434570f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__HasTag_b__53_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__53_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent (const MethodInfo* method);
// 0x181f67760

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345710 == '\0') {
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
    Il2CppMethodInitialized_184345710 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddBuiltinComponent_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__54_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddRigidbody
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody (const MethodInfo* method);
// 0x181f679b0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345711 == '\0') {
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
    Il2CppMethodInitialized_184345711 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__AddRigidbody_b__55_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__55_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent (const MethodInfo* method);
// 0x181f68b10

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345712 == '\0') {
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
    Il2CppMethodInitialized_184345712 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__GetBuiltinComponent_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__56_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent (const MethodInfo* method);
// 0x181f699f0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345713 == '\0') {
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
    Il2CppMethodInitialized_184345713 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__RemoveBuiltinComponent
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__57_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__ConvertToCSV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV (const MethodInfo* method);
// 0x181f681a0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345714 == '\0') {
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
    Il2CppMethodInitialized_184345714 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapObjectBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c___CreateMethodBinding__ConvertToCSV_b__58_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0 =
         (System_Func_CustomLogicMapObjectBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings_c->static_fields->__9__58_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f6fb70

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345715 == '\0') {
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
    Il2CppMethodInitialized_184345715 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Static",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionLocalRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Parent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Active",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActiveInHierarchy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasRenderer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureTilingX",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureTilingY",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureOffsetX",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TextureOffsetY",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Layer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rigidbody",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NetworkView",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetUnityComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetComponentEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetComponentsEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddSphereCollider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBoxCollider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCollideWith",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCollideMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddSphereTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBoxTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetChild",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetChildren",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetColorAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InBounds",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsAverageCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsCenter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsSize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsMin",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsMax",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBoundsExtents",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCorners",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasTag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddBuiltinComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddRigidbody",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBuiltinComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveBuiltinComponent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ConvertToCSV",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_2_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66130

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_2_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    local_res8[0] = (pMVar2->fields).Static;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f64cb0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456af = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_28[0]._0_8_ = uVar1;
        local_28[0].z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64e00

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345716 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345716 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_4_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f63fe0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_4_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456b0 = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_localPosition
                           ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_28[0]._0_8_ = uVar1;
        local_28[0].z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_4_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64090

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_4_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345717 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345717 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      UnityEngine_Transform__set_localPosition(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_5_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f654f0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_5_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_GameObject_o *__this;
  float fVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843456b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b1 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if ((__i->fields)._needSetRotation != false) {
    pMVar5 = (__i->fields).Value;
    if ((pMVar5 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar5->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__get_rotation(&local_38,__this_00,(MethodInfo *)0x0);
        local_28[0].x = (pUVar7->fields).x;
        local_28[0].y = (pUVar7->fields).y;
        local_28[0].z = (pUVar7->fields).z;
        local_28[0].w = (pUVar7->fields).w;
        pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                            (MethodInfo *)0x0);
        uVar1 = (pUVar8->fields).x;
        uVar3 = (pUVar8->fields).y;
        local_48.y = (float)uVar3 * 57.29578;
        local_48.x = (float)uVar1 * 57.29578;
        local_48.z = (pUVar8->fields).z * 57.29578;
        pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                            (MethodInfo *)0x0);
        fVar6 = (pUVar8->fields).y;
        fVar4 = (pUVar8->fields).z;
        (__i->fields)._internalRotation.fields.x = (pUVar8->fields).x;
        (__i->fields)._internalRotation.fields.y = fVar6;
        (__i->fields)._internalRotation.fields.z = fVar4;
        (__i->fields)._needSetRotation = false;
        goto label_181f655cd;
      }
    }
    ThrowNullReferenceException();
  }
label_181f655cd:
  uVar2._0_4_ = (__i->fields)._internalRotation.fields.x;
  uVar2._4_4_ = (__i->fields)._internalRotation.fields.y;
  fVar4 = (__i->fields)._internalRotation.fields.z;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_48._0_8_ = uVar2;
  local_48.z = fVar4;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_5_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f656d0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_5_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_184345718 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345718 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar3 = (pCVar6->fields).Value.fields.z;
    fVar5 = (pCVar6->fields).Value.fields.y;
    pMVar4 = (__i->fields).Value;
    (__i->fields)._internalRotation.fields.x = (pCVar6->fields).Value.fields.x;
    (__i->fields)._internalRotation.fields.y = fVar5;
    (__i->fields)._internalRotation.fields.z = fVar3;
    (__i->fields)._needSetRotation = false;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar4->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalRotation.fields.x;
      uVar2 = (__i->fields)._internalRotation.fields.y;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar7->fields).x;
        local_28.y = (pUVar7->fields).y;
        local_28.z = (pUVar7->fields).z;
        local_28.w = (pUVar7->fields).w;
        UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_6_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f64150

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_6_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_GameObject_o *__this;
  float fVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843456b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b2 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if ((__i->fields)._needSetLocalRotation != false) {
    pMVar5 = (__i->fields).Value;
    if ((pMVar5 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar5->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__get_localRotation(&local_38,__this_00,(MethodInfo *)0x0);
        local_28[0].x = (pUVar7->fields).x;
        local_28[0].y = (pUVar7->fields).y;
        local_28[0].z = (pUVar7->fields).z;
        local_28[0].w = (pUVar7->fields).w;
        pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                            (MethodInfo *)0x0);
        uVar1 = (pUVar8->fields).x;
        uVar3 = (pUVar8->fields).y;
        local_48.y = (float)uVar3 * 57.29578;
        local_48.x = (float)uVar1 * 57.29578;
        local_48.z = (pUVar8->fields).z * 57.29578;
        pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                            (MethodInfo *)0x0);
        fVar6 = (pUVar8->fields).y;
        fVar4 = (pUVar8->fields).z;
        (__i->fields)._internalLocalRotation.fields.x = (pUVar8->fields).x;
        (__i->fields)._internalLocalRotation.fields.y = fVar6;
        (__i->fields)._internalLocalRotation.fields.z = fVar4;
        (__i->fields)._needSetLocalRotation = false;
        goto label_181f6422d;
      }
    }
    ThrowNullReferenceException();
  }
label_181f6422d:
  uVar2._0_4_ = (__i->fields)._internalLocalRotation.fields.x;
  uVar2._4_4_ = (__i->fields)._internalLocalRotation.fields.y;
  fVar4 = (__i->fields)._internalLocalRotation.fields.z;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_48._0_8_ = uVar2;
  local_48.z = fVar4;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_6_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64290

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_6_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_184345719 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345719 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar3 = (pCVar6->fields).Value.fields.z;
    fVar5 = (pCVar6->fields).Value.fields.y;
    pMVar4 = (__i->fields).Value;
    (__i->fields)._internalLocalRotation.fields.x = (pCVar6->fields).Value.fields.x;
    (__i->fields)._internalLocalRotation.fields.y = fVar5;
    (__i->fields)._internalLocalRotation.fields.z = fVar3;
    (__i->fields)._needSetLocalRotation = false;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar4->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalLocalRotation.fields.x;
      uVar2 = (__i->fields)._internalLocalRotation.fields.y;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar7->fields).x;
        local_28.y = (pUVar7->fields).y;
        local_28.z = (pUVar7->fields).z;
        local_28.w = (pUVar7->fields).w;
        UnityEngine_Transform__set_localRotation
                  (__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_7_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f65100

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_7_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_1843456b3 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_rotation
                           ((UnityEngine_Quaternion_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar2._0_4_ = (pUVar4->fields).x;
        uVar2._4_4_ = (pUVar4->fields).y;
        uVar3._0_4_ = (pUVar4->fields).z;
        uVar3._4_4_ = (pUVar4->fields).w;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
        local_28[0]._0_8_ = uVar2;
        local_28[0]._8_8_ = uVar3;
        CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                  (__this_01,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_7_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f651a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_7_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18434571a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.w = (pCVar2->fields).Value.fields.w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f64fa0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_1843456b4 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_localRotation
                           ((UnityEngine_Quaternion_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar2._0_4_ = (pUVar4->fields).x;
        uVar2._4_4_ = (pUVar4->fields).y;
        uVar3._0_4_ = (pUVar4->fields).z;
        uVar3._4_4_ = (pUVar4->fields).w;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
        local_28[0]._0_8_ = uVar2;
        local_28[0]._8_8_ = uVar3;
        CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                  (__this_01,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65040

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18434571b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.w = (pCVar2->fields).Value.fields.w;
      UnityEngine_Transform__set_localRotation
                (__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f63650

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456b5 = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_forward(local_28,__this_00,(MethodInfo *)0x0);
        local_38.x = (pUVar4->fields).x;
        local_38.y = (pUVar4->fields).y;
        local_38.z = (pUVar4->fields).z;
        pUVar4 = UnityEngine_Vector3__get_normalized
                           (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_38._0_8_ = uVar1;
        local_38.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63730

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434571c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      UnityEngine_Transform__set_forward(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f67070

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456b6 = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_up(local_28,__this_00,(MethodInfo *)0x0);
        local_38.x = (pUVar4->fields).x;
        local_38.y = (pUVar4->fields).y;
        local_38.z = (pUVar4->fields).z;
        pUVar4 = UnityEngine_Vector3__get_normalized
                           (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_38._0_8_ = uVar1;
        local_38.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f67150

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434571d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      UnityEngine_Transform__set_up(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f65260

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456b7 = '\x01';
    }
    pMVar3 = (__i->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar3->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_right(local_28,__this_00,(MethodInfo *)0x0);
        local_38.x = (pUVar4->fields).x;
        local_38.y = (pUVar4->fields).y;
        local_38.z = (pUVar4->fields).z;
        pUVar4 = UnityEngine_Vector3__get_normalized
                           (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_38._0_8_ = uVar1;
        local_38.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65340

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434571e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (pCVar2->fields).Value.fields.z;
      local_18.x = (pCVar2->fields).Value.fields.x;
      local_18.y = (pCVar2->fields).Value.fields.y;
      UnityEngine_Transform__set_right(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_12_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f65b40

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_12_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o local_48 [5];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843456b8 = '\x01';
    }
    pMVar7 = (__i->fields).Value;
    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar7->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Transform__get_localScale(local_48,__this_00,(MethodInfo *)0x0);
        pMVar7 = (__i->fields).Value;
        if (pMVar7 != (Map_MapObject_o *)0x0) {
          fVar1 = (pUVar8->fields).z;
          fVar2 = (pMVar7->fields).BaseScale.fields.z;
          fVar3 = (pUVar8->fields).y;
          fVar4 = (pMVar7->fields).BaseScale.fields.y;
          fVar5 = (pUVar8->fields).x;
          fVar6 = (pMVar7->fields).BaseScale.fields.x;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)
          ;
          local_48[0].fields.x = fVar5 / fVar6;
          local_48[0].fields.y = fVar3 / fVar4;
          local_48[0].fields.z = fVar1 / fVar2;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this_01,local_48,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_12_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65d20

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_12_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o local_78 [9];
  
  if (Il2CppMethodInitialized_18434571f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434571f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
       (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (pMVar7 = (__i->fields).Value, pMVar7 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar7->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (pMVar7->fields).BaseScale.fields.x;
    fVar2 = (pMVar7->fields).BaseScale.fields.y;
    fVar3 = (pMVar7->fields).BaseScale.fields.z;
    fVar4 = (pCVar8->fields).Value.fields.x;
    fVar5 = (pCVar8->fields).Value.fields.y;
    fVar6 = (pCVar8->fields).Value.fields.z;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    local_78[0].fields.x = fVar1 * fVar4;
    local_78[0].fields.y = fVar2 * fVar5;
    local_78[0].fields.z = fVar3 * fVar6;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale(__this_00,local_78,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f643a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar2->fields).Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_14_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f64800

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_14_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  int32_t key;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456b9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      Il2CppMethodInitialized_1843456b9 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      key = (pMVar1->fields).Parent;
      if (key < 1) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        pMVar1 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (__this_00,key,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this,pMVar1,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_14_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64900
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f64a1b: mov rdx, rbx
// asm:   0x181f64a1e: mov rcx, rsi
// asm:   0x181f64a21: jmp 0x181f64af8

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_14_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  Map_MapObject_o *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_184345720 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345720 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
label_181f64b14:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843456ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456ba = '\x01';
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    pMVar3 = (__i->fields).Value;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pIVar4 = (Il2CppClass *)0x0;
  }
  else {
    pIVar4 = pIVar2->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar4->_2).typeHierarchyDepth) &&
         ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
        pMVar3 = (__i->fields).Value;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParent(pMVar3,(Map_MapObject_o *)0x0,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
        if (((pIVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2);
        }
        pMVar3 = (__i->fields).Value;
        if (((pMVar3 == (Map_MapObject_o *)0x0) ||
            (__this = (pMVar3->fields).GameObject, __this == (UnityEngine_GameObject_o *)0x0)) ||
           (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_181f64b14;
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)pIVar2[3].klass,(MethodInfo *)0x0);
      }
      goto label_181f64b00;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar2);
    }
    pMVar3 = (__i->fields).Value;
    pIVar4 = pIVar2[3].klass;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
  }
  Map_MapLoader__SetParent(pMVar3,(Map_MapObject_o *)pIVar4,(MethodInfo *)0x0);
label_181f64b00:
  (__i->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_15_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f62240

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_15_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    local_res8[0] = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_15_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f622d0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_15_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345721 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345721 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ActiveInHierarchy>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ActiveInHierarchy_g____getter_16_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f621f0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ActiveInHierarchy_g____getter_16_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    local_res8[0] = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_17_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66e10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_17_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456bb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_1843456bb = '\x01';
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
// 0x181f63880

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__HasRenderer_g____getter_18_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    local_res8[0] = (int)pUVar2->max_length != 0;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_19_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f62d10

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_19_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Material_o *__this;
  UnityEngine_Color_o *pUVar5;
  Utility_Color255_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456bc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      Il2CppMethodInitialized_1843456bc = '\x01';
    }
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          pUVar5 = UnityEngine_Material__get_color((UnityEngine_Color_o *)local_28,__this,(MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar5->fields).r;
          uVar3._4_4_ = (pUVar5->fields).g;
          uVar4._0_4_ = (pUVar5->fields).b;
          uVar4._4_4_ = (pUVar5->fields).a;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          local_28[0]._0_8_ = uVar3;
          local_28[0]._8_8_ = uVar4;
          Utility_Color255___ctor_23327a0(__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_01,__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_19_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62e10

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_19_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *__this;
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345722 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345722 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__i,(MethodInfo *)0x0);
    if ((pCVar5 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this = (pCVar5->fields).Value, __this != (Utility_Color255_o *)0x0)) {
      pUVar6 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this,(MethodInfo *)0x0);
      pMVar1 = (__i->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
        if ((int)pUVar2->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
          uVar3._0_4_ = (pUVar6->fields).r;
          uVar3._4_4_ = (pUVar6->fields).g;
          uVar4._0_4_ = (pUVar6->fields).b;
          uVar4._4_4_ = (pUVar6->fields).a;
          __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Material_o *)0x0) {
            local_28[0]._0_8_ = uVar3;
            local_28[0]._8_8_ = uVar4;
            UnityEngine_Material__set_color(__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____getter_20_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f668e0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____getter_20_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Vector2_o UVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UVar3 = UnityEngine_Material__get_mainTextureScale(__this,(MethodInfo *)0x0);
          local_res8[0] = UVar3.fields.x;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
          return pIVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____setter_20_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66960

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____setter_20_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184345723 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345723 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
label_181f66a7d:
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar3,(MethodInfo *)0x0);
          pMVar1 = (__i->fields).Value;
          if ((pMVar1 != (Map_MapObject_o *)0x0) &&
             (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
            if ((int)pUVar2->max_length == 0) goto label_181f66a7d;
            if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
              fStackX_c = UVar4.fields.y;
              pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UVar4.fields.y = fStackX_c;
                UVar4.fields.x = fVar5;
                UnityEngine_Material__set_mainTextureScale(pUVar3,UVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____getter_21_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66a90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____getter_21_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Vector2_o UVar3;
  Il2CppObject *pIVar4;
  float local_res8;
  float fStackX_c;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UVar3 = UnityEngine_Material__get_mainTextureScale(__this,(MethodInfo *)0x0);
          fStackX_c = UVar3.fields.y;
          _local_res8 = CONCAT44(fStackX_c,fStackX_c);
          pIVar4 = il2cpp_value_box(g_data_184354e38,&local_res8);
          return pIVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____setter_21_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66b10

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____setter_21_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184345724 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345724 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
label_181f66c27:
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar3,(MethodInfo *)0x0);
          pMVar1 = (__i->fields).Value;
          if ((pMVar1 != (Map_MapObject_o *)0x0) &&
             (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
            if ((int)pUVar2->max_length == 0) goto label_181f66c27;
            if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
              pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UVar4.fields.y = fVar5;
                UnityEngine_Material__set_mainTextureScale(pUVar3,UVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____getter_22_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66590

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____getter_22_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Vector2_o UVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UVar3 = UnityEngine_Material__get_mainTextureOffset(__this,(MethodInfo *)0x0);
          local_res8[0] = UVar3.fields.x;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
          return pIVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____setter_22_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66610

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____setter_22_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184345725 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345725 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
label_181f6672d:
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UVar4 = UnityEngine_Material__get_mainTextureOffset(pUVar3,(MethodInfo *)0x0);
          pMVar1 = (__i->fields).Value;
          if ((pMVar1 != (Map_MapObject_o *)0x0) &&
             (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
            if ((int)pUVar2->max_length == 0) goto label_181f6672d;
            if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
              fStackX_c = UVar4.fields.y;
              pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UVar4.fields.y = fStackX_c;
                UVar4.fields.x = fVar5;
                UnityEngine_Material__set_mainTextureOffset(pUVar3,UVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____getter_23_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66740

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____getter_23_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Vector2_o UVar3;
  Il2CppObject *pIVar4;
  float local_res8;
  float fStackX_c;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        __this = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this != (UnityEngine_Material_o *)0x0) {
          UVar3 = UnityEngine_Material__get_mainTextureOffset(__this,(MethodInfo *)0x0);
          fStackX_c = UVar3.fields.y;
          _local_res8 = CONCAT44(fStackX_c,fStackX_c);
          pIVar4 = il2cpp_value_box(g_data_184354e38,&local_res8);
          return pIVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____setter_23_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f667c0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____setter_23_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184345726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345726 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__i,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
label_181f668d7:
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UVar4 = UnityEngine_Material__get_mainTextureOffset(pUVar3,(MethodInfo *)0x0);
          pMVar1 = (__i->fields).Value;
          if ((pMVar1 != (Map_MapObject_o *)0x0) &&
             (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
            if ((int)pUVar2->max_length == 0) goto label_181f668d7;
            if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
              pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UVar4.fields.y = fVar5;
                UnityEngine_Material__set_mainTextureOffset(pUVar3,UVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_24_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f63ae0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_24_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Il2CppObject *pIVar3;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    local_res8[0] = (pMVar2->fields).Id;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____getter_25_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f66410

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____getter_25_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  System_String_o *pSVar2;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    pSVar2 = UnityEngine_GameObject__get_tag(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____setter_25_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66440

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____setter_25_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *obj;
  System_String_o *tag;
  
  if (Il2CppMethodInitialized_184345727 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345727 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843456bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      Il2CppMethodInitialized_1843456bd = '\x01';
    }
    obj = (__i->fields).Value;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__RegisterTag(tag,obj,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_26_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f63e70

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_26_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    local_res8[0] = UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_26_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63ec0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_26_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_184345728 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345728 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_27_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3fd0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_27_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._rigidBody;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____getter_28_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x181f64640

Il2CppObject*
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____getter_28_0(CustomLogic_CustomLogicMapObjectBuiltin_o* __i, MethodInfo* method)

{
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentIconPath;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____setter|28_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____setter_28_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64660

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____setter_28_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *value;
  
  if (Il2CppMethodInitialized_184345729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345729 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicNetworkViewBuiltin);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    (__i->fields)._NetworkView_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__i->fields)._NetworkView_k__BackingField,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___cctor (const MethodInfo* method);
// 0x181f80890

void CustomLogic_CustomLogicMapObjectBuiltin___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this;
  
  if (Il2CppMethodInitialized_18434573f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
    Il2CppMethodInitialized_18434573f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapObjectBuiltin___c___ctor(CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$<GetCorners>b__100_1
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin___c___GetCorners_b__100_1 (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x181f7c000

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin___c___GetCorners_b__100_1
          (CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this,UnityEngine_Vector3_o *v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345740 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345740 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_18.z = (v->fields).z;
  local_18.x = (v->fields).x;
  local_18.y = (v->fields).y;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___ctor(CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_0$$<GetCorners>b__0
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___GetCorners_b__0 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o* __this, int32_t signX, const MethodInfo* method);
// 0x181f801d0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0___GetCorners_b__0
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *__this,int32_t signX,
               MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *object;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  
  if (Il2CppMethodInitialized_184345741 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ForEach);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1_GetCorners_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1);
    Il2CppMethodInitialized_184345741 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) {
    (object->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
    (object->fields).signX = signX;
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields).signs;
    __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
    System_Action_int____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_1_GetCorners_b__2,
               (MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___ForEach
                (__this_00,(System_Action_T__o *)__this_01,
                 (MethodInfo_91ED60 *)MethodInfo_System_Collections_Generic_List_int_ForEach);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___ctor(CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_1$$<GetCorners>b__2
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___GetCorners_b__2 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o* __this, int32_t signY, const MethodInfo* method);
// 0x181f802b0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1___GetCorners_b__2
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *__this,int32_t signY,
               MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *pCVar1;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *object;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  
  if (Il2CppMethodInitialized_184345742 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ForEach);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2_GetCorners_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2);
    Il2CppMethodInitialized_184345742 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *)0x0) {
    (object->fields).CS___8__locals2 = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals2,__this);
    (object->fields).signY = signY;
    pCVar1 = (__this->fields).CS___8__locals1;
    if (pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0) {
      __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(pCVar1->fields).signs;
      __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
      System_Action_int____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_2_GetCorners_b__3,
                 (MethodInfo *)0x0);
      if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
        System_Collections_Generic_List_RegexCharClass_SingleRange___ForEach
                  (__this_00,(System_Action_T__o *)__this_01,
                   (MethodInfo_91ED60 *)MethodInfo_System_Collections_Generic_List_int_ForEach);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___ctor(CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass100_2$$<GetCorners>b__3
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___GetCorners_b__3 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o* __this, int32_t signZ, const MethodInfo* method);
// 0x181f803a0

void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2___GetCorners_b__3
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_2_o *__this,int32_t signZ,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *pCVar9;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *pCVar10;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  System_Object_array *pSVar12;
  MethodInfo *pMVar13;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Vector3_o *pUVar14;
  CustomLogic_CustomLogicVector3Builtin_o *__this_04;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184345743 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_184345743 = '\x01';
  }
  pCVar9 = (__this->fields).CS___8__locals2;
  if ((pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) &&
     (pCVar10 = (pCVar9->fields).CS___8__locals1,
     pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0)) {
    iVar6 = (pCVar9->fields).signX;
    iVar7 = (__this->fields).signY;
    pCVar11 = (pCVar10->fields).result;
    fVar2 = (pCVar10->fields).size.fields.x;
    fVar3 = (pCVar10->fields).size.fields.y;
    fVar4 = (pCVar10->fields).size.fields.z;
    if ((pCVar11 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (__this_00 = (UnityEngine_Component_o *)(pCVar10->fields).boxCollider,
       __this_00 != (UnityEngine_Component_o *)0x0)) {
      __this_01 = (pCVar11->fields).List;
      __this_03 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      pCVar9 = (__this->fields).CS___8__locals2;
      if (((pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_1_o *)0x0) &&
          (pCVar10 = (pCVar9->fields).CS___8__locals1,
          pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0)) &&
         (__this_02 = (pCVar10->fields).boxCollider, __this_02 != (UnityEngine_BoxCollider_o *)0x0)) {
        pUVar14 = UnityEngine_BoxCollider__get_center(local_48,__this_02,(MethodInfo *)0x0);
        if (__this_03 != (UnityEngine_Transform_o *)0x0) {
          local_58.z = (float)signZ * fVar4 * 0.5 + (pUVar14->fields).z;
          local_58.y = (float)iVar7 * fVar3 * 0.5 + (pUVar14->fields).y;
          local_58.x = (float)iVar6 * fVar2 * 0.5 + (pUVar14->fields).x;
          pUVar14 = UnityEngine_Transform__TransformPoint
                              (local_48,__this_03,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          uVar5._0_4_ = (pUVar14->fields).x;
          uVar5._4_4_ = (pUVar14->fields).y;
          fVar2 = (pUVar14->fields).z;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)
          ;
          local_58._0_8_ = uVar5;
          local_58.z = fVar2;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (__this_04,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          pMVar13 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar12 = (__this_01->fields)._items;
            if (pSVar12 != (System_Object_array *)0x0) {
              uVar8 = (__this_01->fields)._size;
              if (uVar8 < (uint)pSVar12->max_length) {
                (__this_01->fields)._size = uVar8 + 1;
                if ((uint)pSVar12->max_length <= uVar8) {
                  ThrowIndexOutOfRangeException();
                }
                pSVar12->m_Items[(int)uVar8] = (Il2CppObject *)__this_04;
                Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar8,__this_04);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)__this_04,
                           (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
              }
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___ctor (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181f74900

void CustomLogic_CustomLogicMapObjectBuiltin___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  
  if (Il2CppMethodInitialized_1843456ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance);
    Il2CppMethodInitialized_1843456ae = '\x01';
  }
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,obj);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ctor);
  (__this->fields)._builtinCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._builtinCache,__this_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Static (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75480

bool CustomLogic_CustomLogicMapObjectBuiltin__get_Static
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar2->fields).Static;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74f90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Position
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456af = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f75c30

void CustomLogic_CustomLogicMapObjectBuiltin__set_Position
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (value->fields).Value.fields.z;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      UnityEngine_Transform__set_position(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74c90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b0 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_localPosition
                         ((UnityEngine_Vector3_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f75940

void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalPosition
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (value->fields).Value.fields.z;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      UnityEngine_Transform__set_localPosition(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75260

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_GameObject_o *__this_00;
  float fVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b1 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if ((__this->fields)._needSetRotation != false) {
    pMVar5 = (__this->fields).Value;
    if ((pMVar5 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar5->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__get_rotation(&local_38,__this_01,(MethodInfo *)0x0);
        local_28[0].x = (pUVar7->fields).x;
        local_28[0].y = (pUVar7->fields).y;
        local_28[0].z = (pUVar7->fields).z;
        local_28[0].w = (pUVar7->fields).w;
        pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                            (MethodInfo *)0x0);
        uVar1 = (pUVar8->fields).x;
        uVar3 = (pUVar8->fields).y;
        local_48.y = (float)uVar3 * 57.29578;
        local_48.x = (float)uVar1 * 57.29578;
        local_48.z = (pUVar8->fields).z * 57.29578;
        pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                            (MethodInfo *)0x0);
        fVar6 = (pUVar8->fields).y;
        fVar4 = (pUVar8->fields).z;
        (__this->fields)._internalRotation.fields.x = (pUVar8->fields).x;
        (__this->fields)._internalRotation.fields.y = fVar6;
        (__this->fields)._internalRotation.fields.z = fVar4;
        (__this->fields)._needSetRotation = false;
        goto label_181f75334;
      }
    }
    ThrowNullReferenceException();
  }
label_181f75334:
  uVar2._0_4_ = (__this->fields)._internalRotation.fields.x;
  uVar2._4_4_ = (__this->fields)._internalRotation.fields.y;
  fVar4 = (__this->fields)._internalRotation.fields.z;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_48._0_8_ = uVar2;
  local_48.z = fVar4;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_02,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f75db0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Rotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  float fVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalRotation.fields.y = fVar5;
    (__this->fields)._internalRotation.fields.z = fVar3;
    pMVar4 = (__this->fields).Value;
    (__this->fields)._needSetRotation = false;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalRotation.fields.x;
      uVar2 = (__this->fields)._internalRotation.fields.y;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
      pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar6->fields).x;
        local_28.y = (pUVar6->fields).y;
        local_28.z = (pUVar6->fields).z;
        local_28.w = (pUVar6->fields).w;
        UnityEngine_Transform__set_rotation(__this_01,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74d40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_GameObject_o *__this_00;
  float fVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b2 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if ((__this->fields)._needSetLocalRotation != false) {
    pMVar5 = (__this->fields).Value;
    if ((pMVar5 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar5->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__get_localRotation(&local_38,__this_01,(MethodInfo *)0x0);
        local_28[0].x = (pUVar7->fields).x;
        local_28[0].y = (pUVar7->fields).y;
        local_28[0].z = (pUVar7->fields).z;
        local_28[0].w = (pUVar7->fields).w;
        pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                            (MethodInfo *)0x0);
        uVar1 = (pUVar8->fields).x;
        uVar3 = (pUVar8->fields).y;
        local_48.y = (float)uVar3 * 57.29578;
        local_48.x = (float)uVar1 * 57.29578;
        local_48.z = (pUVar8->fields).z * 57.29578;
        pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                           ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                            (MethodInfo *)0x0);
        fVar6 = (pUVar8->fields).y;
        fVar4 = (pUVar8->fields).z;
        (__this->fields)._internalLocalRotation.fields.x = (pUVar8->fields).x;
        (__this->fields)._internalLocalRotation.fields.y = fVar6;
        (__this->fields)._internalLocalRotation.fields.z = fVar4;
        (__this->fields)._needSetLocalRotation = false;
        goto label_181f74e14;
      }
    }
    ThrowNullReferenceException();
  }
label_181f74e14:
  uVar2._0_4_ = (__this->fields)._internalLocalRotation.fields.x;
  uVar2._4_4_ = (__this->fields)._internalLocalRotation.fields.y;
  fVar4 = (__this->fields)._internalLocalRotation.fields.z;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_48._0_8_ = uVar2;
  local_48.z = fVar4;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_02,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f759a0

void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  float fVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalLocalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalLocalRotation.fields.y = fVar5;
    (__this->fields)._internalLocalRotation.fields.z = fVar3;
    pMVar4 = (__this->fields).Value;
    (__this->fields)._needSetLocalRotation = false;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalLocalRotation.fields.x;
      uVar2 = (__this->fields)._internalLocalRotation.fields.y;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
      pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar6->fields).x;
        local_28.y = (pUVar6->fields).y;
        local_28.z = (pUVar6->fields).z;
        local_28.w = (pUVar6->fields).w;
        UnityEngine_Transform__set_localRotation
                  (__this_01,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f750e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843456b3 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar2._0_4_ = (pUVar4->fields).x;
      uVar2._4_4_ = (pUVar4->fields).y;
      uVar3._0_4_ = (pUVar4->fields).z;
      uVar3._4_4_ = (pUVar4->fields).w;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      local_28[0]._0_8_ = uVar2;
      local_28[0]._8_8_ = uVar3;
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                (__this_02,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181f75cf0

void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      local_18.w = (value->fields).Value.fields.w;
      UnityEngine_Transform__set_rotation(__this_01,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75040

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843456b4 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_localRotation
                         ((UnityEngine_Quaternion_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar2._0_4_ = (pUVar4->fields).x;
      uVar2._4_4_ = (pUVar4->fields).y;
      uVar3._0_4_ = (pUVar4->fields).z;
      uVar3._4_4_ = (pUVar4->fields).w;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      local_28[0]._0_8_ = uVar2;
      local_28[0]._8_8_ = uVar3;
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                (__this_02,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181f75c90

void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionLocalRotation
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      local_18.w = (value->fields).Value.fields.w;
      UnityEngine_Transform__set_localRotation
                (__this_01,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74b50

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Forward
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b5 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_forward(local_28,__this_01,(MethodInfo *)0x0);
      local_38.x = (pUVar4->fields).x;
      local_38.y = (pUVar4->fields).y;
      local_38.z = (pUVar4->fields).z;
      pUVar4 = UnityEngine_Vector3__get_normalized
                         (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_38._0_8_ = uVar1;
      local_38.z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f758b0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Forward
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (value->fields).Value.fields.z;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      UnityEngine_Transform__set_forward(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75700

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Up
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b6 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_up(local_28,__this_01,(MethodInfo *)0x0);
      local_38.x = (pUVar4->fields).x;
      local_38.y = (pUVar4->fields).y;
      local_38.z = (pUVar4->fields).z;
      pUVar4 = UnityEngine_Vector3__get_normalized
                         (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_38._0_8_ = uVar1;
      local_38.z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f762a0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Up
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (value->fields).Value.fields.z;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      UnityEngine_Transform__set_up(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75180

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Right
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843456b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b7 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_right(local_28,__this_01,(MethodInfo *)0x0);
      local_38.x = (pUVar4->fields).x;
      local_38.y = (pUVar4->fields).y;
      local_38.z = (pUVar4->fields).z;
      pUVar4 = UnityEngine_Vector3__get_normalized
                         (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_38._0_8_ = uVar1;
      local_38.z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f75d50

void CustomLogic_CustomLogicMapObjectBuiltin__set_Right
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_01 != (UnityEngine_Transform_o *)0x0)) {
      local_18.z = (value->fields).Value.fields.z;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      UnityEngine_Transform__set_right(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75390

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Scale
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_1843456b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456b8 = '\x01';
  }
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__get_localScale(local_48,__this_01,(MethodInfo *)0x0);
      pMVar7 = (__this->fields).Value;
      if (pMVar7 != (Map_MapObject_o *)0x0) {
        fVar1 = (pUVar8->fields).z;
        fVar2 = (pMVar7->fields).BaseScale.fields.z;
        fVar3 = (pUVar8->fields).y;
        fVar4 = (pMVar7->fields).BaseScale.fields.y;
        fVar5 = (pUVar8->fields).x;
        fVar6 = (pMVar7->fields).BaseScale.fields.x;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_48[0].fields.x = fVar5 / fVar6;
        local_48[0].fields.y = fVar3 / fVar4;
        local_48[0].fields.z = fVar1 / fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this_02,local_48,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f75e60

void CustomLogic_CustomLogicMapObjectBuiltin__set_Scale
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o local_78 [10];
  
  if (((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (pMVar7 = (__this->fields).Value, pMVar7 != (Map_MapObject_o *)0x0)) &&
     (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    fVar1 = (pMVar7->fields).BaseScale.fields.x;
    fVar2 = (pMVar7->fields).BaseScale.fields.y;
    fVar3 = (pMVar7->fields).BaseScale.fields.z;
    fVar4 = (value->fields).Value.fields.x;
    fVar5 = (value->fields).Value.fields.y;
    fVar6 = (value->fields).Value.fields.z;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    local_78[0].fields.x = fVar1 * fVar4;
    local_78[0].fields.y = fVar2 * fVar5;
    local_78[0].fields.z = fVar3 * fVar6;
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale(__this_01,local_78,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Name (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74e70

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Name
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar2->fields).Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Parent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__get_Parent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74ea0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__get_Parent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int32_t key;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_1843456b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456b9 = '\x01';
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
    __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_01 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      pMVar1 = (Map_MapObject_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (__this_01,key,
                          (MethodInfo_14156F0 *)
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
// 0x181f75a50
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f75b13: mov rdx, rbx
// asm:   0x181f75b16: mov rcx, rsi
// asm:   0x181f75b19: jmp 0x181f75bf0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Parent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Map_MapObject_o *pMVar2;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_1843456ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456ba = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    pMVar2 = (__this->fields).Value;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pIVar3 = (Il2CppClass *)0x0;
  }
  else {
    pIVar3 = value->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->_2).typeHierarchyDepth) &&
         ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
        pMVar2 = (__this->fields).Value;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParent(pMVar2,(Map_MapObject_o *)0x0,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        pMVar2 = (__this->fields).Value;
        if (((pMVar2 == (Map_MapObject_o *)0x0) ||
            (__this_00 = (pMVar2->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
           (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Transform_o *)0x0)) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)value[3].klass,(MethodInfo *)0x0);
      }
      goto label_181f75bf8;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    pMVar2 = (__this->fields).Value;
    pIVar3 = value[3].klass;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
  }
  Map_MapLoader__SetParent(pMVar2,(Map_MapObject_o *)pIVar3,(MethodInfo *)0x0);
label_181f75bf8:
  (__this->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f749f0

bool CustomLogic_CustomLogicMapObjectBuiltin__get_Active
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f757e0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Active
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ActiveInHierarchy
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_ActiveInHierarchy (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f749c0

bool CustomLogic_CustomLogicMapObjectBuiltin__get_ActiveInHierarchy
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Transform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f75680

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Transform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843456bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_1843456bb = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_HasRenderer
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74c30

bool CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    return (int)pUVar2->max_length != 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74a50

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Color
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Color_o *pUVar5;
  Utility_Color255_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *__this_02;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_1843456bc = '\x01';
  }
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,(MethodInfo *)0x0);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        pUVar5 = UnityEngine_Material__get_color((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
        uVar3._0_4_ = (pUVar5->fields).r;
        uVar3._4_4_ = (pUVar5->fields).g;
        uVar4._0_4_ = (pUVar5->fields).b;
        uVar4._4_4_ = (pUVar5->fields).a;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        local_28[0]._0_8_ = uVar3;
        local_28[0]._8_8_ = uVar4;
        Utility_Color255___ctor_23327a0(__this_01,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_02,__this_01,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x181f75810

void CustomLogic_CustomLogicMapObjectBuiltin__set_Color
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_Fields local_28 [2];
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)0x0);
  if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    pUVar5 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
      if ((int)pUVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
        uVar3._0_4_ = (pUVar5->fields).r;
        uVar3._4_4_ = (pUVar5->fields).g;
        uVar4._0_4_ = (pUVar5->fields).b;
        uVar4._4_4_ = (pUVar5->fields).a;
        __this_01 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Material_o *)0x0) {
          local_28[0]._0_8_ = uVar3;
          local_28[0]._8_8_ = uVar4;
          UnityEngine_Material__set_color(__this_01,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingX
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f755b0

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,(MethodInfo *)0x0);
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
// 0x181f76120

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fStackX_c;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)0x0);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_181f761d8:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar3,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_181f761d8;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            fStackX_c = UVar4.fields.y;
            pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UVar4.fields.y = fStackX_c;
              UVar4.fields.x = value;
              UnityEngine_Material__set_mainTextureScale(pUVar3,UVar4,(MethodInfo *)0x0);
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
// 0x181f75610

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  float fStackX_c;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,(MethodInfo *)0x0);
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
        fStackX_c = UVar3.fields.y;
        return fStackX_c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f761e0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)0x0);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_181f76292:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UVar4 = UnityEngine_Material__get_mainTextureScale(pUVar3,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_181f76292;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UVar4.fields.y = value;
              UnityEngine_Material__set_mainTextureScale(pUVar3,UVar4,(MethodInfo *)0x0);
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
// 0x181f754e0

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,(MethodInfo *)0x0);
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
// 0x181f75fa0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  float fStackX_c;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)0x0);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_181f76058:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UVar4 = UnityEngine_Material__get_mainTextureOffset(pUVar3,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_181f76058;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            fStackX_c = UVar4.fields.y;
            pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UVar4.fields.y = fStackX_c;
              UVar4.fields.x = value;
              UnityEngine_Material__set_mainTextureOffset(pUVar3,UVar4,(MethodInfo *)0x0);
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
// 0x181f75540

float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY
                (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  float fStackX_c;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,(MethodInfo *)0x0);
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
        fStackX_c = UVar3.fields.y;
        return fStackX_c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f76060

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,(MethodInfo *)0x0);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
label_181f76112:
      ThrowIndexOutOfRangeException();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
        UVar4 = UnityEngine_Material__get_mainTextureOffset(pUVar3,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto label_181f76112;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar3 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UVar4.fields.y = value;
              UnityEngine_Material__set_mainTextureOffset(pUVar3,UVar4,(MethodInfo *)0x0);
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
// 0x181f73b70

int32_t
CustomLogic_CustomLogicMapObjectBuiltin__get_ID(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar2->fields).Id;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Tag
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f754b0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Tag
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar2 = UnityEngine_GameObject__get_tag(__this_00,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Tag
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f75f40

void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapObject_o *obj;
  
  if (Il2CppMethodInitialized_1843456bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456bd = '\x01';
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
// 0x181f74c60

int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_Layer
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    iVar2 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Layer
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Layer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f75910

void CustomLogic_CustomLogicMapObjectBuiltin__set_Layer
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__AddComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f71730

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843456be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843456be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
                       (__this_00,(__this->fields).Value,name,(MethodInfo *)0x0);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f73f80

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  
  if (Il2CppMethodInitialized_1843456bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843456bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
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
// 0x181f73470

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    pCVar1 = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetUnityComponent
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f73c70

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843456c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    Il2CppMethodInitialized_1843456c0 = '\x01';
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
// 0x181f74430

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
  System_String_o *pSVar6;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  CustomLogic_BuiltinComponentInstance_o *local_res8;
  
  if (Il2CppMethodInitialized_1843456c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_TryGetValue);
    Il2CppMethodInitialized_1843456c1 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  local_res8 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
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
                        (__this_00,(Il2CppObject *)name,(Il2CppObject **)&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_TryGetValue
                        );
      if (!bVar2) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        values = (System_String_array *)SZArrayNew(pIVar4,5);
        NullCheck(values);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"Component '");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar5);
        NullCheck(values);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)name);
        NullCheck(values);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"' not found on MapObject '");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar5);
        pMVar1 = (__this->fields).Value;
        NullCheck(pMVar1);
        p = (pMVar1->fields).ScriptObject;
        NullCheck(p);
        pSVar6 = (p->fields).Name;
        NullCheck(values);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar6);
        NullCheck(values);
        pIVar5 = il2cpp_codegen_get_runtime_metadata(&"'.");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar5);
        pSVar6 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
        System_Exception___ctor_1b6abf0(__this_01,pSVar6,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetComponentEnabled);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      if (local_res8 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__set_Enabled(local_res8,enabled,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentsEnabled
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x181f74620
// eh: try 0x181f74730..0x181f74890 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7472d: nop dword ptr [rax]
// asm:   0x181f7477a: mov rdx, qword ptr [rip + 0x210618f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f74781: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f74786: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f7478b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f74790: test rcx, rcx
// asm:   0x181f74793: jne 0x181f74884
// asm:   0x181f74799: movzx edi, byte ptr [rsp + 0x98]
// asm:   0x181f747a1: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x181f7484e: mov rdx, qword ptr [rip + 0x2144b8b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance
// asm:   0x181f74855: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f7485a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f7485f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f74864: test rcx, rcx
// asm:   0x181f74867: jne 0x181f74890
// asm:   0x181f74884: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f74890: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_01;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  undefined1 local_58 [16];
  CustomLogic_BuiltinComponentInstance_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  CustomLogic_BuiltinComponentInstance_o *local_30;
  undefined1 local_28 [8];
  uint64_t uStack_20;
  CustomLogic_BuiltinComponentInstance_o *local_18;
  
  if (Il2CppMethodInitialized_1843456c2 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_40b94c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_40b95a0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BuiltinComponentInstance_GetEnumera
              );
    Il2CppMethodInitialized_1843456c2 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  uStack_20 = 0;
  local_18 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).ComponentInstances,
     __this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_40 = (undefined1  [8])local_58._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
    local_30 = local_48;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar2) break;
      if (local_30 == (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_30->klass->vtable)._5_set_Enabled.methodPtr)
                (local_30,enabled,(local_30->klass->vtable)._5_set_Enabled.method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    __this_01 = (__this->fields)._builtinCache;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Values
                            );
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_58,__this_02,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BuiltinComponentInstance_GetEnumera
                  );
        local_28 = (undefined1  [8])local_58._0_8_;
        uStack_20 = local_58._8_8_;
        local_18 = local_48;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_28,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance_40b94c0
                            );
          if (!bVar2) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BuiltinComponentInstance
                      );
            return;
          }
          if (local_18 == (CustomLogic_BuiltinComponentInstance_o *)0x0) break;
          CustomLogic_BuiltinComponentInstance__set_Enabled(local_18,enabled,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereCollider
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, System_String_o* collideWith, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x181f71970
// eh: try 0x181f71d60..0x181f71e01 -> pad 0x183315ba0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f71db6: mov rdx, qword ptr [rip + 0x2108b53]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f71dbd: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181f71dc2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f71dc7: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181f71dcc: test rcx, rcx
// asm:   0x181f71dcf: jne 0x181f71e01
// asm:   0x181f71e01: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,float radius,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  Il2CppObject *classInstance;
  bool bVar7;
  Unity_Mathematics_float3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  float fVar11;
  Unity_Mathematics_float3_Fields local_c8;
  Unity_Mathematics_float3_Fields local_b8;
  undefined1 local_a8 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_98;
  System_Collections_Generic_List_Enumerator_object__o local_88 [3];
  
  if (Il2CppMethodInitialized_1843456c3 == '\0') {
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
    Il2CppMethodInitialized_1843456c3 = '\x01';
  }
  local_88[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88[0].fields._index = 0;
  local_88[0].fields._version = 0;
  local_88[0].fields._current = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (pMVar4->fields).BaseScale.fields.x;
    uVar1._4_4_ = (pMVar4->fields).BaseScale.fields.y;
    fVar11 = (pMVar4->fields).BaseScale.fields.z;
    uVar2._0_4_ = (center->fields).Value.fields.x;
    uVar2._4_4_ = (center->fields).Value.fields.y;
    fVar3 = (center->fields).Value.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_c8._0_8_ = uVar1;
    local_c8.z = fVar11;
    local_b8._0_8_ = uVar2;
    local_b8.z = fVar3;
    pUVar8 = Unity_Mathematics_float3__op_Division
                       ((Unity_Mathematics_float3_o *)local_a8,(Unity_Mathematics_float3_o *)&local_b8,
                        (Unity_Mathematics_float3_o *)&local_c8,(MethodInfo *)0x0);
    local_b8.x = (pUVar8->fields).x;
    local_b8.y = (pUVar8->fields).y;
    local_b8.z = (pUVar8->fields).z;
    pCVar9 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_b8._0_8_ = uVar1;
    local_b8.z = fVar11;
    fVar11 = MiscExtensions__MaxComponent((UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1ad20(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      pMVar4 = (__this->fields).Value;
      if ((pMVar4 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar10,p,(MethodInfo *)0x0);
          pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_b8.x = (pUVar5->zeroVector).fields.x;
            local_b8.y = (pUVar5->zeroVector).fields.y;
            local_b8.z = (pUVar5->zeroVector).fields.z;
            UnityEngine_Transform__set_localPosition
                      (pUVar10,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433de5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_18433de5b = '\x01';
            }
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
              local_a8._0_8_ = *(undefined8 *)&(pUVar6->identityQuaternion).fields;
              local_a8._8_4_ = (pUVar6->identityQuaternion).fields.z;
              local_a8._12_4_ = (pUVar6->identityQuaternion).fields.w;
              UnityEngine_Transform__set_localRotation
                        (pUVar10,(UnityEngine_Quaternion_o *)local_a8,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433dbeb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbeb = '\x01';
              }
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_b8.x = (pUVar5->oneVector).fields.x;
                local_b8.y = (pUVar5->oneVector).fields.y;
                local_b8.z = (pUVar5->oneVector).fields.z;
                UnityEngine_Transform__set_localScale
                          (pUVar10,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                c = UnityEngine_GameObject__AddComponent_object_
                              (__this_02,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                Map_MapLoader__SetCollider
                          ((UnityEngine_Collider_o *)c,collideMode,collideWith,(MethodInfo *)0x0);
                if (c != (UnityEngine_SphereCollider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius(c,radius / fVar11,(MethodInfo *)0x0);
                  if (pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    local_b8.x = (pCVar9->fields).Value.fields.x;
                    local_b8.y = (pCVar9->fields).Value.fields.y;
                    local_b8.z = (pCVar9->fields).Value.fields.z;
                    UnityEngine_SphereCollider__set_center
                              (c,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                    __this_03 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_02,
                                           (MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                          );
                    pMVar4 = (__this->fields).Value;
                    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
                       (__this_01 = (pMVar4->fields).ComponentInstances,
                       __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                                 (System_Collections_Generic_List_T__o *)__this_01,
                                 (MethodInfo_91F180 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                );
                      local_88[0].fields._list = (System_Collections_Generic_List_T__o *)local_a8._0_8_;
                      local_88[0].fields._index = local_a8._8_4_;
                      local_88[0].fields._version = local_a8._12_4_;
                      local_88[0].fields._current = (Il2CppObject *)local_98;
                      local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                      local_a8._8_8_ = local_88;
                      while( true ) {
                        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                          (local_88,(MethodInfo_153A2A0 *)
                                                    MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                          );
                        classInstance = local_88[0].fields._current;
                        if (!bVar7) {
                          System_Collections_Generic_List_Enumerator_object___Dispose
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                    );
                          return;
                        }
                        if ((CustomLogic_CustomLogicComponentInstance_o *)local_88[0].fields._current ==
                            (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
                        bVar7 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                          ((CustomLogic_CustomLogicComponentInstance_o *)
                                           local_88[0].fields._current,(MethodInfo *)0x0);
                        if (bVar7) {
                          if (__this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                    (__this_03,(CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                     (MethodInfo *)0x0);
                        }
                      }
                      ThrowNullReferenceException();
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
// 0x181f703b0
// eh: try 0x181f70b40..0x181f70c23 -> pad 0x18333dbb0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7067d: nop dword ptr [rax]
// asm:   0x181f70ba1: mov rdx, qword ptr [rip + 0x2109d68]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f70ba8: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181f70bad: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f70bb2: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181f70bb7: test rcx, rcx
// asm:   0x181f70bba: jne 0x181f70c23
// asm:   0x181f70c23: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333dbb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333dbb5: push rbp
// asm:   0x18333dbb6: sub rsp, 0x20
// asm:   0x18333dbba: mov rbp, rdx
// asm:   0x18333dbbd: mov rax, qword ptr [rbp + 0x98]
// asm:   0x18333dbc4: mov rcx, qword ptr [rax]
// asm:   0x18333dbc7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333dbcb: movabs rax, 0
// asm:   0x18333dbd5: add rsp, 0x20
// asm:   0x18333dbd9: pop rbp
// asm:   0x18333dbda: ret 

void CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,
               CustomLogic_CustomLogicVector3Builtin_o *size,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Renderer_array *pUVar5;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Il2CppObject *classInstance;
  bool bVar11;
  bool bVar12;
  Unity_Mathematics_float3_o *pUVar13;
  UnityEngine_Bounds_o *pUVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Transform_o *p;
  UnityEngine_BoxCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Bounds_o local_148;
  undefined1 local_128 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_118;
  UnityEngine_Bounds_o local_108;
  System_Collections_Generic_List_Enumerator_object__o local_e8 [8];
  
  if (Il2CppMethodInitialized_1843456c4 == '\0') {
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
    Il2CppMethodInitialized_1843456c4 = '\x01';
  }
  local_148.fields.m_Center.fields.x = 0.0;
  local_148.fields.m_Center.fields.y = 0.0;
  local_148.fields.m_Center.fields.z = 0.0;
  local_148.fields.m_Extents.fields.x = 0.0;
  local_148.fields.m_Extents.fields.y = 0.0;
  local_148.fields.m_Extents.fields.z = 0.0;
  local_e8[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8[0].fields._index = 0;
  local_e8[0].fields._version = 0;
  local_e8[0].fields._current = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields).Value;
  if (pMVar4 == (Map_MapObject_o *)0x0) goto label_181f70c29;
  if ((center == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (size == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar10._0_4_ = (pUVar6->zeroVector).fields.x;
    uVar10._4_4_ = (pUVar6->zeroVector).fields.y;
    fVar22 = (pUVar6->zeroVector).fields.z;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_148.fields.m_Extents.fields.x = (pUVar6->zeroVector).fields.x * 0.5;
    local_148.fields.m_Center.fields.z = fVar22;
    local_148.fields.m_Extents.fields.z = (pUVar6->zeroVector).fields.z * 0.5;
    local_148.fields.m_Extents.fields.y = (pUVar6->zeroVector).fields.y * 0.5;
    pMVar4 = (__this->fields).Value;
    local_148.fields.m_Center.fields._0_8_ = uVar10;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (pUVar5 = (pMVar4->fields).renderCache, pUVar5 != (UnityEngine_Renderer_array *)0x0)) {
      bVar12 = false;
      uVar18 = 0;
label_181f70680:
      do {
        if ((int)pUVar5->max_length <= (int)uVar18) goto label_181f70758;
        if ((uint)pUVar5->max_length <= uVar18) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pUVar5->m_Items[(int)uVar18];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          if (!bVar12) {
            if (x == (UnityEngine_Object_o *)0x0) break;
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)local_128,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            pUVar14 = UnityEngine_Renderer__get_bounds
                                ((UnityEngine_Bounds_o *)local_128,(UnityEngine_Renderer_o *)x,
                                 (MethodInfo *)0x0);
            local_148.fields.m_Center.fields.x = (pUVar14->fields).m_Center.fields.x;
            local_148.fields.m_Center.fields.y = (pUVar14->fields).m_Center.fields.y;
            local_148.fields._8_8_ = *(undefined8 *)&(pUVar14->fields).m_Center.fields.z;
            local_148.fields.m_Extents.fields.y = (pUVar14->fields).m_Extents.fields.y;
            local_148.fields.m_Extents.fields.z = (pUVar14->fields).m_Extents.fields.z;
            bVar12 = true;
            uVar18 = uVar18 + 1;
            goto label_181f70680;
          }
          if (x == (UnityEngine_Object_o *)0x0) break;
          pUVar14 = UnityEngine_Renderer__get_bounds(&local_108,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0)
          ;
          local_128._0_8_ = *(undefined8 *)&(pUVar14->fields).m_Center.fields;
          local_128._8_8_ = *(undefined8 *)&(pUVar14->fields).m_Center.fields.z;
          local_118 = *(CustomLogic_CustomLogicComponentInstance_o **)&(pUVar14->fields).m_Extents.fields.y;
          UnityEngine_Bounds__Encapsulate_1e7c200
                    (&local_148,(UnityEngine_Bounds_o *)local_128,(MethodInfo *)0x0);
        }
        uVar18 = uVar18 + 1;
      } while( true );
    }
    goto label_181f70c29;
  }
  uVar2._0_4_ = (pMVar4->fields).BaseScale.fields.x;
  uVar2._4_4_ = (pMVar4->fields).BaseScale.fields.y;
  fVar3 = (pMVar4->fields).BaseScale.fields.z;
  uVar9._0_4_ = (size->fields).Value.fields.x;
  uVar9._4_4_ = (size->fields).Value.fields.y;
  fVar21 = (size->fields).Value.fields.z;
  uVar8._0_4_ = (center->fields).Value.fields.x;
  uVar8._4_4_ = (center->fields).Value.fields.y;
  fVar22 = (center->fields).Value.fields.z;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  local_148.fields.m_Center.fields._0_8_ = uVar8;
  local_108.fields.m_Center.fields._0_8_ = uVar2;
  local_108.fields.m_Center.fields.z = fVar3;
  local_148.fields.m_Center.fields.z = fVar22;
  pUVar13 = Unity_Mathematics_float3__op_Division
                      ((Unity_Mathematics_float3_o *)local_128,(Unity_Mathematics_float3_o *)&local_148,
                       (Unity_Mathematics_float3_o *)&local_108,(MethodInfo *)0x0);
  fVar22 = (pUVar13->fields).x;
  fVar23 = (pUVar13->fields).y;
  fVar24 = (pUVar13->fields).z;
  local_148.fields.m_Center.fields.z = fVar3;
  local_148.fields.m_Center.fields._0_8_ = uVar2;
  local_108.fields.m_Center.fields._0_8_ = uVar9;
  local_108.fields.m_Center.fields.z = fVar21;
  pUVar13 = Unity_Mathematics_float3__op_Division
                      ((Unity_Mathematics_float3_o *)local_128,(Unity_Mathematics_float3_o *)&local_108,
                       (Unity_Mathematics_float3_o *)&local_148,(MethodInfo *)0x0);
  fVar19 = (pUVar13->fields).x;
  fVar20 = (pUVar13->fields).y;
  fVar21 = (pUVar13->fields).z;
label_181f708bd:
  pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(pUVar16,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
    pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
    pMVar4 = (__this->fields).Value;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar17,p,(MethodInfo *)0x0);
        pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_148.fields.m_Center.fields.x = (pUVar6->zeroVector).fields.x;
          local_148.fields.m_Center.fields.y = (pUVar6->zeroVector).fields.y;
          local_148.fields.m_Center.fields.z = (pUVar6->zeroVector).fields.z;
          UnityEngine_Transform__set_localPosition
                    (pUVar17,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
          pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433de5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_18433de5b = '\x01';
          }
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
            local_128._0_8_ = *(undefined8 *)&(pUVar7->identityQuaternion).fields;
            local_128._8_4_ = (pUVar7->identityQuaternion).fields.z;
            local_128._12_4_ = (pUVar7->identityQuaternion).fields.w;
            UnityEngine_Transform__set_localRotation
                      (pUVar17,(UnityEngine_Quaternion_o *)local_128,(MethodInfo *)0x0);
            pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_148.fields.m_Center.fields.x = (pUVar6->oneVector).fields.x;
              local_148.fields.m_Center.fields.y = (pUVar6->oneVector).fields.y;
              local_148.fields.m_Center.fields.z = (pUVar6->oneVector).fields.z;
              UnityEngine_Transform__set_localScale
                        (pUVar17,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
              c = UnityEngine_GameObject__AddComponent_object_
                            (pUVar16,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              Map_MapLoader__SetCollider
                        ((UnityEngine_Collider_o *)c,collideMode,collideWith,(MethodInfo *)0x0);
              if (c != (UnityEngine_BoxCollider_o *)0x0) {
                local_108.fields.m_Center.fields.y = fVar20;
                local_108.fields.m_Center.fields.x = fVar19;
                local_108.fields.m_Center.fields.z = fVar21;
                UnityEngine_BoxCollider__set_size(c,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
                local_108.fields.m_Center.fields.y = fVar23;
                local_108.fields.m_Center.fields.x = fVar22;
                local_108.fields.m_Center.fields.z = fVar24;
                UnityEngine_BoxCollider__set_center(c,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar16,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                      );
                pMVar4 = (__this->fields).Value;
                if ((pMVar4 != (Map_MapObject_o *)0x0) &&
                   (__this_01 = (pMVar4->fields).ComponentInstances,
                   __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_128,
                             (System_Collections_Generic_List_T__o *)__this_01,
                             (MethodInfo_91F180 *)
                             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                            );
                  local_e8[0].fields._list = (System_Collections_Generic_List_T__o *)local_128._0_8_;
                  local_e8[0].fields._index = local_128._8_4_;
                  local_e8[0].fields._version = local_128._12_4_;
                  local_e8[0].fields._current = (Il2CppObject *)local_118;
                  local_128._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                  local_128._8_8_ = local_e8;
                  while( true ) {
                    bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (local_e8,(MethodInfo_153A2A0 *)
                                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                       );
                    classInstance = local_e8[0].fields._current;
                    if (!bVar12) {
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e8,
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                );
                      return;
                    }
                    if ((CustomLogic_CustomLogicComponentInstance_o *)local_e8[0].fields._current ==
                        (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
                    bVar12 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                       ((CustomLogic_CustomLogicComponentInstance_o *)
                                        local_e8[0].fields._current,(MethodInfo *)0x0);
                    if (bVar12) {
                      if (__this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                (__this_02,(CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                 (MethodInfo *)0x0);
                    }
                  }
                  ThrowNullReferenceException();
                }
              }
            }
          }
        }
      }
    }
  }
label_181f70c29:
  ThrowNullReferenceException();
label_181f70758:
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 == (Map_MapObject_o *)0x0) ||
     (pUVar16 = (pMVar4->fields).GameObject, pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto label_181f70c29;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181f70c29;
  fVar22 = local_148.fields.m_Center.fields.x;
  fVar23 = local_148.fields.m_Center.fields.y;
  fVar24 = local_148.fields.m_Center.fields.z;
  pUVar15 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_128,pUVar17,(MethodInfo *)0x0);
  fVar21 = (pUVar15->fields).x;
  fVar3 = (pUVar15->fields).y;
  fVar1 = (pUVar15->fields).z;
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 == (Map_MapObject_o *)0x0) ||
     (pUVar16 = (pMVar4->fields).GameObject, pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto label_181f70c29;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181f70c29;
  pUVar15 = UnityEngine_Transform__get_localScale
                      ((UnityEngine_Vector3_o *)local_128,pUVar17,(MethodInfo *)0x0);
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 == (Map_MapObject_o *)0x0) ||
     (pUVar16 = (pMVar4->fields).GameObject, pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto label_181f70c29;
  fVar19 = (pUVar15->fields).x;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181f70c29;
  pUVar15 = UnityEngine_Transform__get_localScale
                      ((UnityEngine_Vector3_o *)local_128,pUVar17,(MethodInfo *)0x0);
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 == (Map_MapObject_o *)0x0) ||
     (pUVar16 = (pMVar4->fields).GameObject, pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto label_181f70c29;
  fVar20 = (pUVar15->fields).y;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181f70c29;
  fVar22 = fVar22 - fVar21;
  fVar23 = fVar23 - fVar3;
  fVar24 = fVar24 - fVar1;
  fVar19 = (local_148.fields.m_Extents.fields.x + local_148.fields.m_Extents.fields.x) / fVar19;
  fVar20 = (local_148.fields.m_Extents.fields.y + local_148.fields.m_Extents.fields.y) / fVar20;
  fVar21 = local_148.fields.m_Extents.fields.z + local_148.fields.m_Extents.fields.z;
  pUVar15 = UnityEngine_Transform__get_localScale
                      ((UnityEngine_Vector3_o *)local_128,pUVar17,(MethodInfo *)0x0);
  fVar21 = fVar21 / (pUVar15->fields).z;
  goto label_181f708bd;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideWith
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideWith, const MethodInfo* method);
// 0x181f74140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f741cc: nop dword ptr [rax]

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideWith,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Collider_o *__this_00;
  bool bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Collider_array *value;
  System_String_o *collideMode;
  uint uVar5;
  
  if (Il2CppMethodInitialized_1843456c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_1843456c5 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (pUVar2,(MethodInfo_6F5810 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar4 != (System_Object_array *)0x0) {
      for (uVar5 = 0; (int)uVar5 < (int)pSVar4->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Collider_o *)pSVar4->m_Items[(int)uVar5];
        if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_181f74305;
        bVar3 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
          if (bVar3) {
            if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
            }
            collideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
          }
          else {
            if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
            }
            collideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
          }
        }
        else {
          if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
          }
          collideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetCollider(__this_00,collideMode,collideWith,(MethodInfo *)0x0);
      }
      pMVar1 = (__this->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        value = (UnityEngine_Collider_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          (pUVar2,(MethodInfo_6F5810 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        (pMVar1->fields).colliderCache = value;
        Il2CppCodeGenWriteBarrier(&(pMVar1->fields).colliderCache,value);
        return;
      }
    }
  }
label_181f74305:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideMode
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, const MethodInfo* method);
// 0x181f74010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7408e: nop 

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Collider_o *c;
  System_Object_array *pSVar3;
  System_String_o *collideWith;
  UnityEngine_Collider_array *value;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843456c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456c6 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (pUVar2,(MethodInfo_6F5810 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar3 != (System_Object_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar3->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        c = (UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4];
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        collideWith = Map_MapLoader__GetColliderCollideWith(c,(MethodInfo *)0x0);
        Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
      }
      pMVar1 = (__this->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (pUVar2 = (pMVar1->fields).GameObject, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        value = (UnityEngine_Collider_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          (pUVar2,(MethodInfo_6F5810 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        (pMVar1->fields).colliderCache = value;
        Il2CppCodeGenWriteBarrier(&(pMVar1->fields).colliderCache,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereTarget
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* team, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x181f71e10
// eh: try 0x181f72270..0x181f72454 -> pad 0x18331ab60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f722d1: mov rdx, qword ptr [rip + 0x2108638]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f722d8: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181f722dd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f722e2: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181f722e7: test rcx, rcx
// asm:   0x181f722ea: jne 0x181f72454
// asm:   0x181f722f0: mov r15, qword ptr [rsp + 0x110]
// asm:   0x181f722f8: mov r14, qword ptr [rsp + 0x30]
// asm:   0x181f72454: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331ab60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331ab65: push rbp
// asm:   0x18331ab66: sub rsp, 0x30
// asm:   0x18331ab6a: mov rbp, rdx
// asm:   0x18331ab6d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x18331ab71: mov rcx, qword ptr [rax]
// asm:   0x18331ab74: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18331ab78: movabs rax, 0
// asm:   0x18331ab82: add rsp, 0x30
// asm:   0x18331ab86: pop rbp
// asm:   0x18331ab87: ret 

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,float radius,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_MapTargetable__o *__this_02;
  Map_MapTargetable_array *pMVar9;
  System_String_o *collideWith;
  MethodInfo *pMVar10;
  System_String_o *collideMode;
  CustomLogic_CustomLogicComponentInstance_o *classInstance;
  bool bVar11;
  Unity_Mathematics_float3_o *pUVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_04;
  UnityEngine_Vector3_o *pUVar15;
  Map_MapTargetable_o *__this_05;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_06;
  float fVar16;
  UnityEngine_GameObject_o *local_d8;
  float local_d0;
  Unity_Mathematics_float3_Fields local_b8;
  undefined1 local_a8 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_98;
  undefined1 local_88 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_80;
  CustomLogic_CustomLogicComponentInstance_o *local_78;
  
  if (Il2CppMethodInitialized_1843456c7 == '\0') {
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
    Il2CppMethodInitialized_1843456c7 = '\x01';
  }
  collideMode = "Region";
  collideWith = "Hitboxes";
  local_88 = (undefined1  [8])0x0;
  pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_78 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2._0_4_ = (pMVar7->fields).BaseScale.fields.x;
    uVar2._4_4_ = (pMVar7->fields).BaseScale.fields.y;
    fVar16 = (pMVar7->fields).BaseScale.fields.z;
    uVar3._0_4_ = (center->fields).Value.fields.x;
    uVar3._4_4_ = (center->fields).Value.fields.y;
    fVar5 = (center->fields).Value.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_d8 = (UnityEngine_GameObject_o *)uVar2;
    local_d0 = fVar16;
    local_b8._0_8_ = uVar3;
    local_b8.z = fVar5;
    pUVar12 = Unity_Mathematics_float3__op_Division
                        ((Unity_Mathematics_float3_o *)local_a8,(Unity_Mathematics_float3_o *)&local_b8,
                         (Unity_Mathematics_float3_o *)&local_d8,(MethodInfo *)0x0);
    local_b8.x = (pUVar12->fields).x;
    local_b8.y = (pUVar12->fields).y;
    local_b8.z = (pUVar12->fields).z;
    pCVar13 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                        ((UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_b8._0_8_ = uVar2;
    local_b8.z = fVar16;
    fVar16 = MiscExtensions__MaxComponent((UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    local_d8 = __this_03;
    UnityEngine_GameObject___ctor_2f1ad20(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
      pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
      pMVar7 = (__this->fields).Value;
      if ((pMVar7 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar14,p,(MethodInfo *)0x0);
          pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_b8.x = (pUVar8->zeroVector).fields.x;
            local_b8.y = (pUVar8->zeroVector).fields.y;
            local_b8.z = (pUVar8->zeroVector).fields.z;
            UnityEngine_Transform__set_localPosition
                      (pUVar14,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
            pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433de5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_18433de5b = '\x01';
            }
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              local_a8._0_8_ =
                   *(undefined8 *)&(TypeInfo_UnityEngine_Quaternion->static_fields->identityQuaternion).fields
              ;
              local_a8._8_8_ =
                   *(undefined8 *)
                    &(TypeInfo_UnityEngine_Quaternion->static_fields->identityQuaternion).fields.z;
              UnityEngine_Transform__set_localRotation
                        (pUVar14,(UnityEngine_Quaternion_o *)local_a8,(MethodInfo *)0x0);
              pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433dbeb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbeb = '\x01';
              }
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_b8.x = (pUVar8->oneVector).fields.x;
                local_b8.y = (pUVar8->oneVector).fields.y;
                local_b8.z = (pUVar8->oneVector).fields.z;
                UnityEngine_Transform__set_localScale
                          (pUVar14,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                c = UnityEngine_GameObject__AddComponent_object_
                              (__this_03,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                Map_MapLoader__SetCollider
                          ((UnityEngine_Collider_o *)c,collideMode,collideWith,(MethodInfo *)0x0);
                if (c != (UnityEngine_SphereCollider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius(c,radius / fVar16,(MethodInfo *)0x0);
                  if (pCVar13 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    local_b8.x = (pCVar13->fields).Value.fields.x;
                    local_b8.y = (pCVar13->fields).Value.fields.y;
                    local_b8.z = (pCVar13->fields).Value.fields.z;
                    UnityEngine_SphereCollider__set_center
                              (c,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                    __this_04 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_03,
                                           (MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                          );
                    pMVar7 = (__this->fields).Value;
                    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
                       (__this_01 = (pMVar7->fields).ComponentInstances,
                       __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                                 (System_Collections_Generic_List_T__o *)__this_01,
                                 (MethodInfo_91F180 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                );
                      local_88 = (undefined1  [8])local_a8._0_8_;
                      pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                   local_a8._8_8_;
                      local_78 = local_98;
                      local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                      local_a8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
                      while( true ) {
                        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                            (MethodInfo_153A2A0 *)
                                            MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                           );
                        classInstance = local_78;
                        if (!bVar11) break;
                        if (local_78 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        bVar11 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                           (local_78,(MethodInfo *)0x0);
                        if (bVar11) {
                          if (__this_04 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                    (__this_04,classInstance,(MethodInfo *)0x0);
                        }
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                );
                      pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                      pUVar15 = UnityEngine_SphereCollider__get_center
                                          ((UnityEngine_Vector3_o *)local_a8,c,(MethodInfo *)0x0);
                      uVar4._0_4_ = (pUVar15->fields).x;
                      uVar4._4_4_ = (pUVar15->fields).y;
                      fVar16 = (pUVar15->fields).z;
                      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTargetable);
                      local_b8._0_8_ = uVar4;
                      local_b8.z = fVar16;
                      Map_MapTargetable___ctor
                                (__this_05,pUVar14,(UnityEngine_Vector3_o *)&local_b8,team,(MethodInfo *)0x0);
                      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                      }
                      pMVar10 = MethodInfo_System_Collections_Generic_List_MapTargetable_Add;
                      __this_02 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
                      if (__this_02 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                        piVar1 = &(__this_02->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pMVar9 = (__this_02->fields)._items;
                        if (pMVar9 != (Map_MapTargetable_array *)0x0) {
                          uVar6 = (__this_02->fields)._size;
                          if (uVar6 < (uint)pMVar9->max_length) {
                            (__this_02->fields)._size = uVar6 + 1;
                            if ((uint)pMVar9->max_length <= uVar6) {
                              ThrowIndexOutOfRangeException();
                            }
                            pMVar9->m_Items[(int)uVar6] = __this_05;
                            Il2CppCodeGenWriteBarrier(pMVar9->m_Items + (int)uVar6,__this_05);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (Il2CppObject *)__this_05,
                                       (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
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
// 0x181f70c30
// eh: try 0x181f710d0..0x181f712a5 -> pad 0x18333dbf0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7112e: mov rdx, qword ptr [rip + 0x21097db]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181f71135: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181f7113a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f7113f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181f71144: test rcx, rcx
// asm:   0x181f71147: jne 0x181f712a5
// asm:   0x181f7114d: mov r15, qword ptr [rsp + 0x30]
// asm:   0x181f71152: mov r14, qword ptr [rsp + 0x40]
// asm:   0x181f712a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333dbf0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333dbf5: push rbp
// asm:   0x18333dbf6: sub rsp, 0x30
// asm:   0x18333dbfa: mov rbp, rdx
// asm:   0x18333dbfd: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18333dc04: mov rcx, qword ptr [rax]
// asm:   0x18333dc07: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333dc0b: movabs rax, 0
// asm:   0x18333dc15: add rsp, 0x30
// asm:   0x18333dc19: pop rbp
// asm:   0x18333dc1a: ret 

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,CustomLogic_CustomLogicVector3Builtin_o *size,
          MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_MapTargetable__o *__this_02;
  Map_MapTargetable_array *pMVar10;
  System_String_o *collideWith;
  MethodInfo *pMVar11;
  System_String_o *collideMode;
  Il2CppObject *classInstance;
  bool bVar12;
  Unity_Mathematics_float3_o *pUVar13;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar14;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar15;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Transform_o *p;
  UnityEngine_BoxCollider_o *pUVar17;
  CustomLogic_CustomLogicCollisionHandler_o *__this_04;
  UnityEngine_Vector3_o *pUVar18;
  Map_MapTargetable_o *__this_05;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_06;
  UnityEngine_BoxCollider_o *local_b8;
  float local_b0;
  UnityEngine_GameObject_o *local_a8;
  float local_a0;
  undefined1 local_98 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_88;
  System_Collections_Generic_List_Enumerator_object__o local_78 [3];
  
  if (Il2CppMethodInitialized_1843456c8 == '\0') {
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
    Il2CppMethodInitialized_1843456c8 = '\x01';
  }
  collideMode = "Region";
  collideWith = "Hitboxes";
  local_78[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78[0].fields._index = 0;
  local_78[0].fields._version = 0;
  local_78[0].fields._current = (Il2CppObject *)0x0;
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) && (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2._0_4_ = (pMVar7->fields).BaseScale.fields.x;
    uVar2._4_4_ = (pMVar7->fields).BaseScale.fields.y;
    fVar4 = (pMVar7->fields).BaseScale.fields.z;
    pUVar17 = *(UnityEngine_BoxCollider_o **)&(center->fields).Value.fields;
    fVar5 = (center->fields).Value.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_b8 = pUVar17;
    local_b0 = fVar5;
    local_a8 = (UnityEngine_GameObject_o *)uVar2;
    local_a0 = fVar4;
    pUVar13 = Unity_Mathematics_float3__op_Division
                        ((Unity_Mathematics_float3_o *)local_98,(Unity_Mathematics_float3_o *)&local_b8,
                         (Unity_Mathematics_float3_o *)&local_a8,(MethodInfo *)0x0);
    local_a8 = *(UnityEngine_GameObject_o **)&pUVar13->fields;
    local_a0 = (pUVar13->fields).z;
    pCVar14 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                        ((UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    if (size != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_b8 = *(UnityEngine_BoxCollider_o **)&(size->fields).Value.fields;
      local_b0 = (size->fields).Value.fields.z;
      local_a8 = (UnityEngine_GameObject_o *)uVar2;
      local_a0 = fVar4;
      pUVar13 = Unity_Mathematics_float3__op_Division
                          ((Unity_Mathematics_float3_o *)local_98,(Unity_Mathematics_float3_o *)&local_b8,
                           (Unity_Mathematics_float3_o *)&local_a8,(MethodInfo *)0x0);
      local_a8._0_4_ = (pUVar13->fields).x;
      local_a8._4_4_ = (pUVar13->fields).y;
      local_a0 = (pUVar13->fields).z;
      pCVar15 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                          ((UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      local_a8 = __this_03;
      UnityEngine_GameObject___ctor_2f1ad20(__this_03,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
        pUVar16 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        pMVar7 = (__this->fields).Value;
        if ((pMVar7 != (Map_MapObject_o *)0x0) &&
           (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar16,p,(MethodInfo *)0x0);
            pUVar16 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
              local_b8 = *(UnityEngine_BoxCollider_o **)
                          &(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
              local_b0 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
              UnityEngine_Transform__set_localPosition
                        (pUVar16,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
              pUVar16 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433de5b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_18433de5b = '\x01';
              }
              if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = TypeInfo_UnityEngine_Quaternion->static_fields;
                local_98._0_8_ = *(undefined8 *)&(pUVar8->identityQuaternion).fields;
                local_98._8_4_ = (pUVar8->identityQuaternion).fields.z;
                local_98._12_4_ = (pUVar8->identityQuaternion).fields.w;
                UnityEngine_Transform__set_localRotation
                          (pUVar16,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
                pUVar16 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433dbeb == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbeb = '\x01';
                }
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
                  local_b8._0_4_ = (pUVar9->oneVector).fields.x;
                  local_b8._4_4_ = (pUVar9->oneVector).fields.y;
                  local_b0 = (pUVar9->oneVector).fields.z;
                  UnityEngine_Transform__set_localScale
                            (pUVar16,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                  pUVar17 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_03,
                                       (MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
                  local_b8 = pUVar17;
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  Map_MapLoader__SetCollider
                            ((UnityEngine_Collider_o *)pUVar17,collideMode,collideWith,(MethodInfo *)0x0);
                  if ((pCVar15 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
                     (pUVar17 != (UnityEngine_BoxCollider_o *)0x0)) {
                    local_98._0_8_ = *(undefined8 *)&(pCVar15->fields).Value.fields;
                    local_98._8_4_ = (pCVar15->fields).Value.fields.z;
                    UnityEngine_BoxCollider__set_size
                              (pUVar17,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                    if (pCVar14 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                      local_98._0_8_ = *(undefined8 *)&(pCVar14->fields).Value.fields;
                      local_98._8_4_ = (pCVar14->fields).Value.fields.z;
                      UnityEngine_BoxCollider__set_center
                                (pUVar17,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                      __this_04 = UnityEngine_GameObject__AddComponent_object_
                                            (__this_03,
                                             (MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                            );
                      pMVar7 = (__this->fields).Value;
                      if ((pMVar7 != (Map_MapObject_o *)0x0) &&
                         (__this_01 = (pMVar7->fields).ComponentInstances,
                         __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0))
                      {
                        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                  ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                                   (System_Collections_Generic_List_T__o *)__this_01,
                                   (MethodInfo_91F180 *)
                                   MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator
                                  );
                        local_78[0].fields._list = (System_Collections_Generic_List_T__o *)local_98._0_8_;
                        local_78[0].fields._index = local_98._8_4_;
                        local_78[0].fields._version = local_98._12_4_;
                        local_78[0].fields._current = (Il2CppObject *)local_88;
                        local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                        local_98._8_8_ = local_78;
                        while( true ) {
                          bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (local_78,(MethodInfo_153A2A0 *)
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                             );
                          classInstance = local_78[0].fields._current;
                          if (!bVar12) break;
                          if ((CustomLogic_CustomLogicComponentInstance_o *)local_78[0].fields._current ==
                              (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          bVar12 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                             ((CustomLogic_CustomLogicComponentInstance_o *)
                                              local_78[0].fields._current,(MethodInfo *)0x0);
                          if (bVar12) {
                            if (__this_04 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                      (__this_04,(CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                       (MethodInfo *)0x0);
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                                  );
                        pUVar16 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
                        pUVar18 = UnityEngine_BoxCollider__get_center
                                            ((UnityEngine_Vector3_o *)local_98,pUVar17,(MethodInfo *)0x0);
                        pSVar3 = *(System_Collections_Generic_List_T__o **)&pUVar18->fields;
                        fVar4 = (pUVar18->fields).z;
                        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTargetable);
                        local_98._8_4_ = fVar4;
                        local_98._0_8_ = pSVar3;
                        Map_MapTargetable___ctor
                                  (__this_05,pUVar16,(UnityEngine_Vector3_o *)local_98,team,(MethodInfo *)0x0)
                        ;
                        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        }
                        pMVar11 = MethodInfo_System_Collections_Generic_List_MapTargetable_Add;
                        __this_02 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
                        if (__this_02 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                          piVar1 = &(__this_02->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pMVar10 = (__this_02->fields)._items;
                          if (pMVar10 != (Map_MapTargetable_array *)0x0) {
                            uVar6 = (__this_02->fields)._size;
                            if (uVar6 < (uint)pMVar10->max_length) {
                              (__this_02->fields)._size = uVar6 + 1;
                              if ((uint)pMVar10->max_length <= uVar6) {
                                ThrowIndexOutOfRangeException();
                              }
                              pMVar10->m_Items[(int)uVar6] = __this_05;
                              Il2CppCodeGenWriteBarrier(pMVar10->m_Items + (int)uVar6,__this_05);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_02,
                                         (Il2CppObject *)__this_05,
                                         (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
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
// 0x181f72dc0
// eh: try 0x181f72f72..0x181f73101 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f730b3: mov rdx, qword ptr [rip + 0x2114f8e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181f730ba: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f730bf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f730c4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f730c9: test rcx, rcx
// asm:   0x181f730cc: jne 0x181f73101
// asm:   0x181f73101: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetChild
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  int32_t key;
  bool bVar3;
  System_Collections_Generic_HashSet_uint__o *__this_01;
  Map_MapObject_o *pMVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_1843456c9 == '\0') {
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
    Il2CppMethodInitialized_1843456c9 = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar2,(pMVar1->fields).Id,
                       (MethodInfo_1407110 *)
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
       ((pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren,
        pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0 &&
        (__this_01 = (System_Collections_Generic_HashSet_uint__o *)
                     System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar2,(pMVar1->fields).Id,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
        __this_01 != (System_Collections_Generic_HashSet_uint__o *)0x0)))) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_01,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                            (&local_28,
                             (MethodInfo_1537E90 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
          }
          key = (int32_t)local_28.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar2,key,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar3);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar4 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar2,key,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (pMVar4 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar1 = (pMVar4->fields).ScriptObject;
        if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) break;
        bVar3 = System_String__op_Equality((pMVar1->fields).Name,name,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_00,pMVar4,(MethodInfo *)0x0);
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          return pCVar5;
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetChildren
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetChildren (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f73110
// eh: try 0x181f73300..0x181f73469 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f73418: mov rdx, qword ptr [rip + 0x2114c29]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181f7341f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f73424: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f73429: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f7342e: test rcx, rcx
// asm:   0x181f73431: jne 0x181f73469
// asm:   0x181f73433: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x181f73469: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetChildren
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  int32_t key;
  bool bVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_Generic_HashSet_uint__o *__this_02;
  Map_MapObject_o *pMVar5;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar6;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_1843456ca == '\0') {
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
    Il2CppMethodInitialized_1843456ca = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar5 = (__this->fields).Value;
  if (((pMVar5 != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (pMVar5->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar2,(pMVar1->fields).Id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar4) {
      return __this_01;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar5 = (__this->fields).Value;
    if (((pMVar5 != (Map_MapObject_o *)0x0) &&
        (pMVar1 = (pMVar5->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren,
        pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0 &&
        (__this_02 = (System_Collections_Generic_HashSet_uint__o *)
                     System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar2,(pMVar1->fields).Id,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
        __this_02 != (System_Collections_Generic_HashSet_uint__o *)0x0)))) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_02,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                            (&local_48,
                             (MethodInfo_1537E90 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar4) {
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            return __this_01;
          }
          key = (int32_t)local_48.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar2,key,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        } while (!bVar4);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar5 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar2,key,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = (__this_01->fields).List;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
        pCVar6 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,pMVar5,(MethodInfo *)0x0);
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar3,pCVar6,MethodInfo_System_Collections_Generic_List_object_Add);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetTransform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f73ba0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetTransform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843456cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843456cb = '\x01';
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
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,pUVar3,(MethodInfo *)0x0);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetColorAll
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x181f74320

void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color
               ,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Utility_Color255_o *__this_00;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_o *pUVar4;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  uint uVar5;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Static != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"SetColorAll cannot be called on a static MapObject.");
      System_Exception___ctor_1b6abf0(__this_02,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_SetColorAll);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    pUVar3 = (((__this->fields).Value)->fields).renderCache;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar5 = 0;
      while( true ) {
        if ((int)pUVar3->max_length <= (int)uVar5) {
          return;
        }
        if ((uint)pUVar3->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if (pUVar3->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0) break;
        __this_01 = UnityEngine_Renderer__get_material(pUVar3->m_Items[(int)uVar5],(MethodInfo *)0x0);
        if ((color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) ||
           (__this_00 = (color->fields).Value, __this_00 == (Utility_Color255_o *)0x0)) break;
        pUVar4 = Utility_Color255__ToColor(&local_38,__this_00,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Material_o *)0x0) break;
        local_48.r = (pUVar4->fields).r;
        local_48.g = (pUVar4->fields).g;
        local_48.b = (pUVar4->fields).b;
        local_48.a = (pUVar4->fields).a;
        UnityEngine_Material__set_color(__this_01,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$InBounds
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__InBounds (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f73d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f73d6d: nop dword ptr [rax]

bool CustomLogic_CustomLogicMapObjectBuiltin__InBounds
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  bool bVar3;
  UnityEngine_Bounds_o *pUVar4;
  uint uVar5;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Bounds_o local_38;
  UnityEngine_Bounds_o local_20;
  
  pMVar1 = (__this->fields).Value;
  local_38.fields.m_Extents.fields.y = 0.0;
  local_38.fields.m_Extents.fields.z = 0.0;
  local_38.fields.m_Center.fields.x = 0.0;
  local_38.fields.m_Center.fields.y = 0.0;
  local_38.fields.m_Center.fields.z = 0.0;
  local_38.fields.m_Extents.fields.x = 0.0;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    uVar5 = 0;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)uVar5) {
        return false;
      }
      if ((uint)pUVar2->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar2->m_Items[(int)uVar5] == (UnityEngine_Collider_o *)0x0) break;
      pUVar4 = UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[(int)uVar5],(MethodInfo *)0x0);
      local_38.fields.m_Center.fields.x = (pUVar4->fields).m_Center.fields.x;
      local_38.fields.m_Center.fields.y = (pUVar4->fields).m_Center.fields.y;
      local_38.fields._8_8_ = *(undefined8 *)&(pUVar4->fields).m_Center.fields.z;
      local_38.fields.m_Extents.fields.y = (pUVar4->fields).m_Extents.fields.y;
      local_38.fields.m_Extents.fields.z = (pUVar4->fields).m_Extents.fields.z;
      if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_48.x = (position->fields).Value.fields.x;
      local_48.y = (position->fields).Value.fields.y;
      local_48.z = (position->fields).Value.fields.z;
      bVar3 = UnityEngine_Bounds__Internal_Contains
                        (&local_38,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      if (bVar3) {
        return true;
      }
      uVar5 = uVar5 + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsAverageCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f726c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  int iVar5;
  UnityEngine_Bounds_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Bounds_o local_68 [4];
  
  if (Il2CppMethodInitialized_1843456cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456cc = '\x01';
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar4->zeroVector).fields.x;
    fVar12 = (pUVar4->zeroVector).fields.y;
    fVar13 = (pUVar4->zeroVector).fields.z;
    iVar5 = 0;
    uVar9 = 0;
    while (iVar5 < (int)pUVar3->max_length) {
      if ((uint)pUVar3->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      if (pUVar3->m_Items[(int)uVar9] == (UnityEngine_Collider_o *)0x0) goto label_181f72896;
      pUVar6 = UnityEngine_Collider__get_bounds(local_68,pUVar3->m_Items[(int)uVar9],(MethodInfo *)0x0);
      fVar11 = fVar11 + (pUVar6->fields).m_Center.fields.x;
      fVar12 = fVar12 + (pUVar6->fields).m_Center.fields.y;
      fVar13 = fVar13 + (pUVar6->fields).m_Center.fields.z;
      iVar5 = uVar9 + 1;
      uVar9 = uVar9 + 1;
    }
    if (0 < (int)uVar9) {
      fVar10 = (float)(int)uVar9;
      pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_68[0].fields.m_Center.fields.z = fVar13 / fVar10;
      local_68[0].fields.m_Center.fields.y = fVar12 / fVar10;
      local_68[0].fields.m_Center.fields.x = fVar11 / fVar10;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (pCVar8,(UnityEngine_Vector3_o *)local_68,(MethodInfo *)0x0);
      return pCVar8;
    }
    pMVar2 = (__this->fields).Value;
    if (((pMVar2 != (Map_MapObject_o *)0x0) &&
        (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      pUVar7 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_68,__this_01,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar7->fields).x;
      uVar1._4_4_ = (pUVar7->fields).y;
      fVar11 = (pUVar7->fields).z;
      pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_68[0].fields.m_Center.fields._0_8_ = uVar1;
      local_68[0].fields.m_Center.fields.z = fVar11;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (pCVar8,(UnityEngine_Vector3_o *)local_68,(MethodInfo *)0x0);
      return pCVar8;
    }
  }
label_181f72896:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f728b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_1843456cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456cd = '\x01';
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
      pUVar6 = UnityEngine_Collider__get_bounds(local_38,pUVar2->m_Items[0],(MethodInfo *)0x0);
      fVar3 = (pUVar6->fields).m_Center.fields.x;
      fVar4 = (pUVar6->fields).m_Center.fields.y;
      fVar5 = (pUVar6->fields).m_Center.fields.z;
      local_38[0].fields.m_Extents.fields.y = (pUVar6->fields).m_Extents.fields.y;
      local_38[0].fields.m_Extents.fields.z = (pUVar6->fields).m_Extents.fields.z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_38[0].fields.m_Center.fields.x = fVar3;
      local_38[0].fields.m_Center.fields.y = fVar4;
      local_38[0].fields.m_Center.fields.z = fVar5;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsSize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f72c60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Collider_array *pUVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_48 [2];
  
  if (Il2CppMethodInitialized_1843456ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456ce = '\x01';
  }
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 != (Map_MapObject_o *)0x0) &&
     (pUVar5 = (pMVar4->fields).colliderCache, pUVar5 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar5->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar5->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar5->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      pUVar6 = UnityEngine_Collider__get_bounds(local_48,pUVar5->m_Items[0],(MethodInfo *)0x0);
      uVar2 = (pUVar6->fields).m_Extents.fields.x;
      uVar3 = (pUVar6->fields).m_Extents.fields.y;
      fVar1 = (pUVar6->fields).m_Extents.fields.z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_48[0].fields.m_Center.fields.z = fVar1 + fVar1;
      local_48[0].fields.m_Center.fields.y = (float)uVar3 + (float)uVar3;
      local_48[0].fields.m_Center.fields.x = (float)uVar2 + (float)uVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMin
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f72b70

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_Collider_array *pUVar8;
  UnityEngine_Bounds_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_58 [3];
  
  if (Il2CppMethodInitialized_1843456cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456cf = '\x01';
  }
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) &&
     (pUVar8 = (pMVar7->fields).colliderCache, pUVar8 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar8->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar8->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar8->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      pUVar9 = UnityEngine_Collider__get_bounds(local_58,pUVar8->m_Items[0],(MethodInfo *)0x0);
      fVar1 = (pUVar9->fields).m_Center.fields.z;
      fVar2 = (pUVar9->fields).m_Extents.fields.z;
      uVar3 = (pUVar9->fields).m_Center.fields.x;
      uVar5 = (pUVar9->fields).m_Center.fields.y;
      uVar4 = (pUVar9->fields).m_Extents.fields.x;
      uVar6 = (pUVar9->fields).m_Extents.fields.y;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_58[0].fields.m_Center.fields.y = (float)uVar5 - (float)uVar6;
      local_58[0].fields.m_Center.fields.x = (float)uVar3 - (float)uVar4;
      local_58[0].fields.m_Center.fields.z = fVar1 - fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMax
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f72a80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_Collider_array *pUVar8;
  UnityEngine_Bounds_o *pUVar9;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_58 [3];
  
  if (Il2CppMethodInitialized_1843456d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456d0 = '\x01';
  }
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) &&
     (pUVar8 = (pMVar7->fields).colliderCache, pUVar8 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar8->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar8->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar8->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      pUVar9 = UnityEngine_Collider__get_bounds(local_58,pUVar8->m_Items[0],(MethodInfo *)0x0);
      fVar1 = (pUVar9->fields).m_Extents.fields.z;
      fVar2 = (pUVar9->fields).m_Center.fields.z;
      uVar3 = (pUVar9->fields).m_Center.fields.x;
      uVar5 = (pUVar9->fields).m_Center.fields.y;
      uVar4 = (pUVar9->fields).m_Extents.fields.x;
      uVar6 = (pUVar9->fields).m_Extents.fields.y;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_58[0].fields.m_Center.fields.y = (float)uVar6 + (float)uVar5;
      local_58[0].fields.m_Center.fields.x = (float)uVar4 + (float)uVar3;
      local_58[0].fields.m_Center.fields.z = fVar1 + fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsExtents
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f72990

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_Collider_array *pUVar4;
  undefined8 uVar5;
  UnityEngine_Bounds_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_1843456d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843456d1 = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if ((pMVar3 != (Map_MapObject_o *)0x0) &&
     (pUVar4 = (pMVar3->fields).colliderCache, pUVar4 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar4->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar4->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar4->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      pUVar6 = UnityEngine_Collider__get_bounds(local_38,pUVar4->m_Items[0],(MethodInfo *)0x0);
      local_58.x = (pUVar6->fields).m_Center.fields.x;
      local_58.y = (pUVar6->fields).m_Center.fields.y;
      uVar5 = *(undefined8 *)&(pUVar6->fields).m_Center.fields.z;
      uVar1 = (pUVar6->fields).m_Extents.fields.y;
      uVar2 = (pUVar6->fields).m_Extents.fields.z;
      local_58.z = (float)uVar5;
      fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
      uVar5._4_4_ = (float)uVar1;
      uVar5._0_4_ = fStack_4c;
      fStack_48 = (float)uVar1;
      fStack_44 = (float)uVar2;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_58.z = (float)uVar2;
      local_58._0_8_ = uVar5;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetCorners
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetCorners (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f73490
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f73b25: mov r8, qword ptr [rip + 0x215135c]  ; MethodInfo_System_Collections_Generic_List_object_AddRange
// asm:   0x181f73b2c: mov rdx, rax
// asm:   0x181f73b2f: mov rcx, r14
// asm:   0x181f73b32: call 0x18093da30  ; System_Collections_Generic_List_object___AddRange()
// asm:   0x181f73b37: mov rax, rbp
// asm:   0x181f73b3a: jmp 0x181f7385b
// asm:   0x181f73b3f: xor eax, eax
// asm:   0x181f73b41: jmp 0x181f7385b

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetCorners
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  float fVar8;
  uint uVar9;
  Map_MapObject_o *pMVar10;
  UnityEngine_Collider_array *pUVar11;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Collider_c *pUVar12;
  UnityEngine_BoxCollider_o *__this_01;
  System_UInt32_array *pSVar13;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *object;
  MethodInfo *pMVar14;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *object_00;
  UnityEngine_Vector3_o *pUVar15;
  CustomLogic_CustomLogicListBuiltin_o *pCVar16;
  System_Collections_Generic_List_Vector3__o *__this_04;
  System_Collections_Generic_List_uint__o *__this_05;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_06;
  UnityEngine_Bounds_o *pUVar17;
  Il2CppObject *source;
  System_Func_Vector3__CustomLogicVector3Builtin__o *__this_07;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_1843456d2 == '\0') {
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
    Il2CppMethodInitialized_1843456d2 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  pMVar10 = (__this->fields).Value;
  if ((pMVar10 != (Map_MapObject_o *)0x0) &&
     (pUVar11 = (pMVar10->fields).colliderCache, pUVar11 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar11->max_length == 0) {
      return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
    }
    pUVar11 = (((__this->fields).Value)->fields).colliderCache;
    if ((int)pUVar11->max_length == 0) {
label_181f73b5e:
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pUVar11->m_Items[0];
    if (__this_00 != (UnityEngine_Collider_o *)0x0) {
      pUVar12 = __this_00->klass;
      bVar7 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
      if (((pUVar12->_2).typeHierarchyDepth < bVar7) ||
         ((pUVar12->_2).typeHierarchy[(ulonglong)bVar7 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider
         )) {
        pUVar17 = UnityEngine_Collider__get_bounds(local_88,__this_00,(MethodInfo *)0x0);
        uVar3 = (pUVar17->fields).m_Center.fields.x;
        uVar5 = (pUVar17->fields).m_Center.fields.y;
        uVar4 = (pUVar17->fields).m_Extents.fields.x;
        uVar6 = (pUVar17->fields).m_Extents.fields.y;
        fVar8 = (pUVar17->fields).m_Center.fields.z;
        fVar2 = (pUVar17->fields).m_Extents.fields.z;
        source = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
        if (source != (Il2CppObject *)0x0) {
          if (*(int *)&source[1].monitor != 0) {
            *(float *)&source[2].monitor = fVar8 - fVar2;
            source[2].klass = (Il2CppClass *)CONCAT44((float)uVar5 - (float)uVar6,(float)uVar3 - (float)uVar4)
            ;
            if (1 < *(uint *)&source[1].monitor) {
              *(float *)((longlong)&source[3].klass + 4) = fVar8 + fVar2;
              *(ulonglong *)((longlong)&source[2].monitor + 4) =
                   CONCAT44((float)uVar5 - (float)uVar6,(float)uVar3 - (float)uVar4);
              if (2 < *(uint *)&source[1].monitor) {
                *(float *)&source[3].monitor = (float)uVar3 - (float)uVar4;
                *(float *)((longlong)&source[3].monitor + 4) = (float)uVar5 + (float)uVar6;
                *(float *)&source[4].klass = fVar8 - fVar2;
                if (3 < *(uint *)&source[1].monitor) {
                  *(float *)((longlong)&source[4].klass + 4) = (float)uVar3 - (float)uVar4;
                  *(float *)&source[4].monitor = (float)uVar5 + (float)uVar6;
                  *(float *)((longlong)&source[4].monitor + 4) = fVar8 + fVar2;
                  if (4 < *(uint *)&source[1].monitor) {
                    *(float *)&source[5].klass = (float)uVar3 + (float)uVar4;
                    *(float *)((longlong)&source[5].klass + 4) = (float)uVar5 - (float)uVar6;
                    *(float *)&source[5].monitor = fVar8 - fVar2;
                    if (5 < *(uint *)&source[1].monitor) {
                      *(float *)((longlong)&source[6].klass + 4) = fVar8 + fVar2;
                      *(float *)((longlong)&source[5].monitor + 4) = (float)uVar3 + (float)uVar4;
                      *(float *)&source[6].klass = (float)uVar5 - (float)uVar6;
                      if (6 < *(uint *)&source[1].monitor) {
                        source[6].monitor =
                             (void *)CONCAT44((float)uVar5 + (float)uVar6,(float)uVar3 + (float)uVar4);
                        *(float *)&source[7].klass = fVar8 - fVar2;
                        if (7 < *(uint *)&source[1].monitor) {
                          *(ulonglong *)((longlong)&source[7].klass + 4) =
                               CONCAT44((float)uVar5 + (float)uVar6,(float)uVar3 + (float)uVar4);
                          *(float *)((longlong)&source[7].monitor + 4) = fVar8 + fVar2;
                          pCVar16 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
                          CustomLogic_CustomLogicListBuiltin___ctor(pCVar16,(MethodInfo *)0x0);
                          if (pCVar16 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                            __this_03 = (pCVar16->fields).List;
                            if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
                            }
                            __this_07 = TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->
                                        __9__100_1;
                            if (__this_07 == (System_Func_Vector3__CustomLogicVector3Builtin__o *)0x0) {
                              if ((TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c);
                              }
                              object = (Il2CppObject *)
                                       TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9;
                              __this_07 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)
                                                     TypeInfo_System_Func_Vector3_CustomLogicVector3Builtin);
                              System_Func_Vector3__object____ctor
                                        ((System_Func_Vector3Int__int__o *)__this_07,object,
                                         (intptr_t)
                                         MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c_GetCorners_b__100_1
                                         ,(MethodInfo_1728FB0 *)0x0);
                              TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->__9__100_1 =
                                   __this_07;
                              Il2CppCodeGenWriteBarrier
                                        (&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin_c->static_fields->
                                          __9__100_1,__this_07);
                            }
                            collection = System_Linq_Enumerable__Select_Vector3__object_
                                                   ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                    source,(System_Func_TSource__TResult__o *)__this_07,
                                                    (MethodInfo_6C2170 *)
                                                    MethodInfo_System_Linq_Enumerable_Select_Vector3_CustomLogicVector3Builtin
                                                   );
                            if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
                              System_Collections_Generic_List_object___AddRange
                                        (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
                                         (MethodInfo_93DA30 *)
                                         MethodInfo_System_Collections_Generic_List_object_AddRange);
                              return pCVar16;
                            }
                          }
                          goto label_181f73b46;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_181f73b5e;
        }
      }
      else if (object_00 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass100_0_o *)0x0) {
        bVar7 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
        if (((pUVar12->_2).typeHierarchyDepth < bVar7) ||
           ((pUVar12->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        (object_00->fields).boxCollider = (UnityEngine_BoxCollider_o *)__this_00;
        bVar7 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar7) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        Il2CppCodeGenWriteBarrier(&(object_00->fields).boxCollider,__this_00);
        __this_01 = (object_00->fields).boxCollider;
        if (__this_01 != (UnityEngine_BoxCollider_o *)0x0) {
          pUVar15 = UnityEngine_BoxCollider__get_size
                              ((UnityEngine_Vector3_o *)local_88,__this_01,(MethodInfo *)0x0);
          fVar8 = (pUVar15->fields).z;
          fVar2 = (pUVar15->fields).y;
          (object_00->fields).size.fields.x = (pUVar15->fields).x;
          (object_00->fields).size.fields.y = fVar2;
          (object_00->fields).size.fields.z = fVar8;
          pCVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
          CustomLogic_CustomLogicListBuiltin___ctor(pCVar16,(MethodInfo *)0x0);
          (object_00->fields).result = pCVar16;
          Il2CppCodeGenWriteBarrier(&(object_00->fields).result,pCVar16);
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
          System_Collections_Generic_List_Vector3____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
          __this_05 = (System_Collections_Generic_List_uint__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
          pMVar14 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (__this_05 != (System_Collections_Generic_List_uint__o *)0x0) {
            piVar1 = &(__this_05->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar13 = (__this_05->fields)._items;
            if (pSVar13 != (System_UInt32_array *)0x0) {
              uVar9 = (__this_05->fields)._size;
              if (uVar9 < (uint)pSVar13->max_length) {
                (__this_05->fields)._size = uVar9 + 1;
                if ((uint)pSVar13->max_length <= uVar9) goto label_181f73b5e;
                pSVar13->m_Items[(int)uVar9] = 0xffffffff;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (__this_05,0xffffffff,(MethodInfo_91A500 *)pMVar14->klass->rgctx_data[0xe].method);
              }
              pMVar14 = MethodInfo_System_Collections_Generic_List_int_Add;
              piVar1 = &(__this_05->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar13 = (__this_05->fields)._items;
              if (pSVar13 != (System_UInt32_array *)0x0) {
                uVar9 = (__this_05->fields)._size;
                if (uVar9 < (uint)pSVar13->max_length) {
                  (__this_05->fields)._size = uVar9 + 1;
                  if ((uint)pSVar13->max_length <= uVar9) goto label_181f73b5e;
                  pSVar13->m_Items[(int)uVar9] = 1;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (__this_05,1,(MethodInfo_91A500 *)pMVar14->klass->rgctx_data[0xe].method);
                }
                (object_00->fields).signs = (System_Collections_Generic_List_int__o *)__this_05;
                Il2CppCodeGenWriteBarrier(&(object_00->fields).signs,__this_05);
                __this_02 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                            (object_00->fields).signs;
                __this_06 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
                System_Action_int____ctor
                          (__this_06,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_c__DisplayClass100_0_GetCorners_b__0
                           ,(MethodInfo *)0x0);
                if (__this_02 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
                  System_Collections_Generic_List_RegexCharClass_SingleRange___ForEach
                            (__this_02,(System_Action_T__o *)__this_06,
                             (MethodInfo_91ED60 *)MethodInfo_System_Collections_Generic_List_int_ForEach);
                  return (object_00->fields).result;
                }
              }
            }
          }
        }
      }
    }
  }
label_181f73b46:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$HasTag
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__HasTag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* tag, const MethodInfo* method);
// 0x181f73cd0

bool CustomLogic_CustomLogicMapObjectBuiltin__HasTag
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *tag,MethodInfo *method)

{
  Map_MapObject_o *obj;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843456d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843456d3 = '\x01';
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
// 0x181f712c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f715d3: mov r8, rbp
// asm:   0x181f715d6: mov rcx, rbx

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *pCVar4;
  CustomLogic_BuiltinComponentInstance_o *pCVar5;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *pSVar8;
  MethodInfo *pMVar9;
  System_String_o *str0;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *pSVar10;
  int32_t type;
  System_Nullable_Vector3__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456d4 == '\0') {
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
    Il2CppMethodInitialized_1843456d4 = '\x01';
  }
  pSVar10 = (__this->fields)._builtinCache;
  if (pSVar10 == (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
  goto label_181f71617;
  bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,(Il2CppObject *)name,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                    );
  if (bVar3) {
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&" component.");
    str0 = il2cpp_codegen_get_runtime_metadata(&"MapObject already has a ");
    pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
    pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
    System_Exception___ctor_1b6abf0(pSVar8,pSVar6,(MethodInfo *)0x0);
    pMVar9 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddBuiltinComponent);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
  }
  bVar3 = System_String__op_Equality(name,"DayLight",(MethodInfo *)0x0);
  if (bVar3) {
    pSVar10 = (__this->fields)._builtinCache;
    pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
    type = 1;
label_181f715bd:
    CustomLogic_CustomLogicLightBuiltin___ctor_1f035e0
              ((CustomLogic_CustomLogicLightBuiltin_o *)pCVar4,__this,type,(MethodInfo *)0x0);
label_181f715ce:
    if (pSVar10 == (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
    goto label_181f71617;
  }
  else {
    bVar3 = System_String__op_Equality(name,"PointLight",(MethodInfo *)0x0);
    if (bVar3) {
      pSVar10 = (__this->fields)._builtinCache;
      pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
      type = 2;
      goto label_181f715bd;
    }
    bVar3 = System_String__op_Equality(name,"SpotLight",(MethodInfo *)0x0);
    if (bVar3) {
      pSVar10 = (__this->fields)._builtinCache;
      pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
      type = 0;
      goto label_181f715bd;
    }
    bVar3 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
    if (!bVar3) {
      bVar3 = System_String__op_Equality(name,"CustomPhysicsMaterial",(MethodInfo *)0x0);
      if (bVar3) {
        pSVar10 = (__this->fields)._builtinCache;
        pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
        CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor_1f07400
                  ((CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)pCVar4,__this,(MethodInfo *)0x0);
      }
      else {
        bVar3 = System_String__op_Equality(name,"NavMeshObstacle",(MethodInfo *)0x0);
        if (bVar3) {
          pSVar10 = (__this->fields)._builtinCache;
          pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
          CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor_1f07020
                    ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)pCVar4,__this,(MethodInfo *)0x0);
        }
        else {
          bVar3 = System_String__op_Equality(name,"Lod",(MethodInfo *)0x0);
          if (!bVar3) {
            pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Unknown builtin component: ");
            pSVar6 = System_String__Concat_1969e50(pSVar6,name,(MethodInfo *)0x0);
            pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
            System_Exception___ctor_1b6abf0(pSVar8,pSVar6,(MethodInfo *)0x0);
            pMVar9 = il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddBuiltinComponent);
            il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
          }
          pSVar10 = (__this->fields)._builtinCache;
          pCVar4 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin);
          CustomLogic_CustomLogicLodBuiltin___ctor_1f060b0
                    ((CustomLogic_CustomLogicLodBuiltin_o *)pCVar4,__this,(MethodInfo *)0x0);
        }
      }
      goto label_181f715ce;
    }
    pMVar1 = (__this->fields).Value;
    if ((pMVar1 == (Map_MapObject_o *)0x0) ||
       (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0))
    goto label_181f71617;
    if ((pMVar2->fields).Static != false) {
      pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar8 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"AddRigidbody cannot be called on a static MapObject.");
      System_Exception___ctor_1b6abf0(pSVar8,pSVar6,(MethodInfo *)0x0);
      pMVar9 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddBuiltinComponent);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
    }
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    local_28[0].hasValue = false;
    local_28[0]._1_3_ = 0;
    local_28[0].value.fields.x = 0.0;
    local_28[0].value.fields.y = 0.0;
    local_28[0].value.fields.z = 0.0;
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor_1f55530
              (pCVar4,__this,1.0,(System_Nullable_Vector3__o *)local_28,false,false,(MethodInfo *)0x0);
    (__this->fields)._rigidBody = pCVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidBody,pCVar4);
    pSVar10 = (__this->fields)._builtinCache;
    if (pSVar10 == (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
    goto label_181f71617;
    pCVar4 = (__this->fields)._rigidBody;
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar10,(Il2CppObject *)name,
             (Il2CppObject *)pCVar4,
             (MethodInfo_147A7F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)name,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                       );
    return (Il2CppObject *)pCVar5;
  }
label_181f71617:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddRigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f717b0

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_02;
  Il2CppClass *pIVar4;
  System_Exception_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  System_Nullable_Vector3__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843456d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_1843456d5 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Static != false) {
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"AddRigidbody cannot be called on a static MapObject.");
      System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
    }
    __this_00 = (__this->fields)._builtinCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)"Rigidbody",
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                        );
      if (bVar3) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"MapObject already has a Rigidbody component.");
        System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AddRigidbody);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
      }
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      local_28[0].hasValue = false;
      local_28[0]._1_3_ = 0;
      local_28[0].value.fields.x = 0.0;
      local_28[0].value.fields.y = 0.0;
      local_28[0].value.fields.z = 0.0;
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor_1f55530
                (__this_02,__this,1.0,(System_Nullable_Vector3__o *)local_28,false,false,(MethodInfo *)0x0);
      (__this->fields)._rigidBody = __this_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidBody,__this_02);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_01,(Il2CppObject *)"Rigidbody",(Il2CppObject *)(__this->fields)._rigidBody
                   ,(MethodInfo_147A7F0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_set_Item)
        ;
        return (__this->fields)._rigidBody;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBuiltinComponent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f72d30

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  CustomLogic_BuiltinComponentInstance_o *pCVar2;
  
  if (Il2CppMethodInitialized_1843456d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item);
    Il2CppMethodInitialized_1843456d6 = '\x01';
  }
  __this_00 = (__this->fields)._builtinCache;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                      );
    if (!bVar1) {
      return (Il2CppObject *)0x0;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                         );
      return (Il2CppObject *)pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveBuiltinComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f73e20

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  CustomLogic_BuiltinComponentInstance_o *__this_01;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843456d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_1843456d7 = '\x01';
  }
  __this_00 = (__this->fields)._builtinCache;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_ContainsKey
                      );
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&" component.");
      str0 = il2cpp_codegen_get_runtime_metadata(&"MapObject does not have a ");
      pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_RemoveBuiltinComponent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar1,(Il2CppObject *)name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_get_Item
                            );
      if (__this_01 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__Unload(__this_01,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar1,(Il2CppObject *)name,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BuiltinComponentInstance_Remove);
          bVar2 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields)._rigidBody = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidBody,(void *)0x0);
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
// 0x181f725c0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ConvertToCSV
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    pSVar3 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x180c8eec0

CustomLogic_CustomLogicRigidbodyBuiltin_o*
CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._rigidBody;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x18058a6f0

CustomLogic_CustomLogicNetworkViewBuiltin_o*
CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._NetworkView_k__BackingField.fields.Value;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x180b48790

void
CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields.m_Properties.fields._index = value;
  Il2CppCodeGenWriteBarrier((void **)&__this[1].fields.m_Properties.fields._index,value);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererGet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f72460

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
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if (pUVar2->max_length != 0) {
      return;
    }
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"MapObject has no renderer.");
    System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererGet);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererSet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f724e0

void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Il2CppClass *pIVar4;
  System_Exception_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Static != false) {
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Property cannot be set on a static MapObject.");
      System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererSet);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
    }
    pUVar3 = (((__this->fields).Value)->fields).renderCache;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      if (pUVar3->max_length != 0) {
        return;
      }
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar5 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"MapObject has no renderer.");
      System_Exception___ctor_1b6abf0(pSVar5,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapObjectBuiltin_AssertRendererSet);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__Equals (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181f72600

bool CustomLogic_CustomLogicMapObjectBuiltin__Equals
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_1843456d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_1843456d8 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    return (__this->fields).Value == (Map_MapObject_o *)0x0;
  }
  pIVar2 = obj->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
  if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
    return false;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
  if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
    return (Il2CppClass *)(__this->fields).Value == obj[3].klass;
  }
  il2cpp_codegen_raise_invalid_cast_exception(obj);
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__GetHashCode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f73b70

int32_t CustomLogic_CustomLogicMapObjectBuiltin__GetHashCode
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar2->fields).Id;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__ToString (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f748a0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ToString
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843456d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" (MapObject)");
    Il2CppMethodInitialized_1843456d9 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (UnityEngine_Object_o *)(pMVar1->fields).GameObject,
     __this_00 != (UnityEngine_Object_o *)0x0)) {
    pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50(pSVar2," (MapObject)",(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x181f74a20

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843456da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    Il2CppMethodInitialized_1843456da = '\x01';
  }
  return "MapObject";
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicMapObjectBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


