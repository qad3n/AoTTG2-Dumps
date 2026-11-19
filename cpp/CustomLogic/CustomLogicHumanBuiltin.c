// Type: CustomLogic.CustomLogicHumanBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicHumanBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicHumanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a1ba40

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a25680

void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546050 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a256f0

void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Refill>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Refill_b__55_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25700

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Refill_b__55_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__Refill(__c,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__RefillImmediate>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__RefillImmediate_b__56_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25730

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__RefillImmediate_b__56_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__RefillImmediate(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearHooks>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearHooks_b__57_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25750

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearHooks_b__57_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ClearHooks(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearLeftHook>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearLeftHook_b__58_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25770

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearLeftHook_b__58_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearRightHook>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearRightHook_b__59_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25790

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearRightHook_b__59_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ClearRightHook(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountMapObject>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountMapObject_b__60_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a257b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountMapObject_b__60_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool canMountedAttack;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  
  if (Il2CppMethodInitialized_07546051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546051 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a258ea:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    mapObject = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      positionOffset =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_34BDE00 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotationOffset =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[2],
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if ((int)__a->max_length < 4) {
          canMountedAttack = false;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          canMountedAttack =
               CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (pIVar1,(MethodInfo_34BD860 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        }
        if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
          CustomLogic_CustomLogicHumanBuiltin__MountMapObject
                    (__c,mapObject,positionOffset,rotationOffset,canMountedAttack,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
        goto label_05a258ea;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountTransform>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountTransform_b__61_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a258f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountTransform_b__61_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool canMountedAttack;
  CustomLogic_CustomLogicTransformBuiltin_o *transform;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  
  if (Il2CppMethodInitialized_07546052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546052 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a25a2a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    transform = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      positionOffset =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_34BDE00 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotationOffset =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[2],
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if ((int)__a->max_length < 4) {
          canMountedAttack = false;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          canMountedAttack =
               CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (pIVar1,(MethodInfo_34BD860 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        }
        if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
          CustomLogic_CustomLogicHumanBuiltin__MountTransform
                    (__c,transform,positionOffset,rotationOffset,canMountedAttack,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
        goto label_05a25a2a;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unmount>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Unmount_b__62_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25a30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Unmount_b__62_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool immediate;
  
  if (Il2CppMethodInitialized_07546053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546053 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      immediate = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      immediate = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (obj,(MethodInfo_34BD860 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Unmount(__c,immediate,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpecial>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetSpecial_b__63_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25ad0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetSpecial_b__63_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *special;
  
  if (Il2CppMethodInitialized_07546054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546054 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    special = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetSpecial(__c,special,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ActivateSpecial>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ActivateSpecial_b__64_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25b70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ActivateSpecial_b__64_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeapon>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetWeapon_b__65_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25b90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetWeapon_b__65_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *weapon;
  
  if (Il2CppMethodInitialized_07546055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546055 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__c,weapon,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__DisablePerks>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__DisablePerks_b__66_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25c30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__DisablePerks_b__66_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__DisablePerks(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasAIState>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HasAIState_b__67_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25c50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HasAIState_b__67_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07546056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546056 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicHumanBuiltin__HasAIState(__c,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAIState>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetAIState_b__68_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25d00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetAIState_b__68_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *name;
  CustomLogic_UserClassInstance_o *classInstance;
  
  if (Il2CppMethodInitialized_07546057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546057 = '\x01';
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
    if ((int)__a->max_length < 2) {
      classInstance = (CustomLogic_UserClassInstance_o *)0x0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      classInstance =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserClassInstance);
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetAIState(__c,name,classInstance,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAIState>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__GetAIState_b__69_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25df0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__GetAIState_b__69_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = CustomLogic_CustomLogicHumanBuiltin__GetAIState(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SwitchAIState>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SwitchAIState_b__70_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25e10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SwitchAIState_b__70_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07546058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546058 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SwitchAIState(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCallback>b__71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ResetCallback_b__71_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25eb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ResetCallback_b__71_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *callback;
  CustomLogic_UserMethod_o *method_00;
  
  if (Il2CppMethodInitialized_07546059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546059 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)__a->max_length < 2) {
      method_00 = (CustomLogic_UserMethod_o *)0x0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__ResetCallback(__c,callback,method_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Move_b__72_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a25fa0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Move_b__72_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  
  if (Il2CppMethodInitialized_0754605a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    direction = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Move(__c,direction,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__AimAt>b__73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__AimAt_b__73_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26040

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__AimAt_b__73_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (Il2CppMethodInitialized_0754605b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__AimAt(__c,position,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Jump>b__74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Jump_b__74_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a260e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Jump_b__74_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__Jump(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseMount>b__75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseMount_b__75_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26100

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseMount_b__75_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool mount;
  
  if (Il2CppMethodInitialized_0754605c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      mount = true;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      mount = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__HorseMount(__c,mount,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dodge>b__76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dodge_b__76_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a261a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dodge_b__76_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__Dodge(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reload>b__77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reload_b__77_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a261c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reload_b__77_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__Reload(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__UseGas>b__78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__UseGas_b__78_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a261e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__UseGas_b__78_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool useGas;
  
  if (Il2CppMethodInitialized_0754605d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    useGas = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__UseGas(__c,useGas,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseWalk>b__79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseWalk_b__79_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26280

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseWalk_b__79_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool isWalk;
  
  if (Il2CppMethodInitialized_0754605e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    isWalk = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__HorseWalk(__c,isWalk,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dash>b__80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dash_b__80_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26320

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dash_b__80_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  
  if (Il2CppMethodInitialized_0754605f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754605f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    direction = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Dash(__c,direction,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reel>b__81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reel_b__81_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a263c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reel_b__81_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t reelAxis;
  
  if (Il2CppMethodInitialized_07546060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546060 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    reelAxis = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Reel(__c,reelAxis,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookLeft>b__82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookLeft_b__82_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26450

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookLeft_b__82_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  
  if (Il2CppMethodInitialized_07546061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546061 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    aimPoint = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft(__c,aimPoint,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookRight>b__83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookRight_b__83_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a264f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookRight_b__83_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  
  if (Il2CppMethodInitialized_07546062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546062 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    aimPoint = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight(__c,aimPoint,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookLeft>b__84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookLeft_b__84_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26590

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookLeft_b__84_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookRight>b__85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookRight_b__85_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a265b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookRight_b__85_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookAll>b__86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookAll_b__86_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a265d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookAll_b__86_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__87_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a265f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__87_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool attackOn;
  
  if (Il2CppMethodInitialized_07546063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546063 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    attackOn = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                         (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                         );
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Attack(__c,attackOn,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindNearestEnemy>b__88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__FindNearestEnemy_b__88_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a26690

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__FindNearestEnemy_b__88_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Navigation>b__89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Navigation_b__89_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a266b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Navigation_b__89_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__Navigation(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetParticleEffect>b__90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetParticleEffect_b__90_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a266d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetParticleEffect_b__90_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *effectName;
  
  if (Il2CppMethodInitialized_07546064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546064 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a26784:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (obj,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect(__c,effectName,enabled,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a26784;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a1bad0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHumanBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCarried");
    il2cpp_codegen_initialize_runtime_metadata(&"AimAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SwitchAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"IsInvincible");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAmmoLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookReady");
    il2cpp_codegen_initialize_runtime_metadata(&"FindNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"HasHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseFollowEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentBladeDurability");
    il2cpp_codegen_initialize_runtime_metadata(&"DisablePerks");
    il2cpp_codegen_initialize_runtime_metadata(&"Move");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentGas");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterLiveTime");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxAmmoRound");
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldownTime");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookingRight");
    il2cpp_codegen_initialize_runtime_metadata(&"UseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"LaunchHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookingLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"HasHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillImmediate");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearHooks");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookReady");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxAmmoTotal");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookedLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxBladeDurability");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearLeftHook");
    il2cpp_codegen_initialize_runtime_metadata(&"MountTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRightHook");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxGas");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldownRatio");
    il2cpp_codegen_initialize_runtime_metadata(&"InvincibleTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"MountedMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"MountState");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Unmount");
    il2cpp_codegen_initialize_runtime_metadata(&"ActivateSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Navigation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"SetParticleEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAmmoRound");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"LaunchHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"MountMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookedRight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeapon");
    il2cpp_codegen_initialize_runtime_metadata(&"Pivot");
    il2cpp_codegen_initialize_runtime_metadata(&"HasAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"PivotPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMounted");
    il2cpp_codegen_initialize_runtime_metadata(&"MountedTransform");
    Il2CppMethodInitialized_07545fd5 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x664a747d) {
    if (uVar2 < 0x30777bfc) {
      if (uVar2 < 0x1a43a2ad) {
        if (uVar2 < 0xfa61b95) {
          if (uVar2 < 0xbecd2a0) {
            if (uVar2 == 0xa6b8020) {
              bVar1 = System_String__op_Equality(name,"Speed",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
                }
                pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar4;
              }
            }
            else if (uVar2 == 0xbecd29f) {
              bVar1 = System_String__op_Equality(name,"ClearRightHook",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook
                                   ((MethodInfo *)pCVar6);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0xd469333) {
            bVar1 = System_String__op_Equality(name,"MountMapObject",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xe1ef32d) {
            bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xfa61b94) {
            bVar1 = System_String__op_Equality(name,"ReleaseHookLeft",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0x155683ff) {
          if (uVar2 == 0xfedf86f) {
            bVar1 = System_String__op_Equality(name,"ShifterLiveTime",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x1366e8ca) {
            bVar1 = System_String__op_Equality(name,"ClearHooks",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x155683fe) {
            bVar1 = System_String__op_Equality(name,"RefillImmediate",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x16b793c7) {
          bVar1 = System_String__op_Equality(name,"AllowSkin",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x182eb08c) {
          bVar1 = System_String__op_Equality(name,"SetParticleEffect",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1a43a2ac) {
          bVar1 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x25127d63) {
        if (uVar2 < 0x1af78072) {
          if (uVar2 == 0x1aa86c38) {
            bVar1 = System_String__op_Equality(name,"SpecialCooldownTime",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x1af78071) {
            bVar1 = System_String__op_Equality(name,"RightHookReady",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x1d66a535) {
          bVar1 = System_String__op_Equality(name,"RightHookPosition",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x214f33c4) {
          bVar1 = System_String__op_Equality(name,"PivotPosition",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x25127d62) {
          bVar1 = System_String__op_Equality(name,"GetAIState",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x27bbaff1) {
        if (uVar2 == 0x251ec0b8) {
          bVar1 = System_String__op_Equality(name,"ClearLeftHook",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x26f20788) {
          bVar1 = System_String__op_Equality(name,"DisablePerks",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x27bbaff0) {
          bVar1 = System_String__op_Equality(name,"MountedMapObject",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x29089400) {
        bVar1 = System_String__op_Equality(name,"ReleaseHookAll",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2dd6aa84) {
        bVar1 = System_String__op_Equality(name,"CurrentBlade",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x30777bfb) {
        bVar1 = System_String__op_Equality(name,"TargetPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x41919632) {
      if (uVar2 < 0x3dd202bc) {
        if (uVar2 < 0x38adb9d5) {
          if (uVar2 == 0x3862ca21) {
            bVar1 = System_String__op_Equality(name,"SpecialCooldown",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x38adb9d4) {
            bVar1 = System_String__op_Equality(name,"LeftHookEnabled",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x3b3e09bf) {
          bVar1 = System_String__op_Equality(name,"AllowHorse",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x3d775299) {
          bVar1 = System_String__op_Equality(name,"HorseSpeed",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x3dd202bb) {
          bVar1 = System_String__op_Equality(name,"CurrentBladeDurability",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x3f43a877) {
        if (uVar2 == 0x3ea939be) {
          bVar1 = System_String__op_Equality(name,"LeftHookReady",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x3f04971b) {
          bVar1 = System_String__op_Equality(name,"TargetVelocity",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x3f43a876) {
          bVar1 = System_String__op_Equality(name,"HasHookRight",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x3f66c333) {
        bVar1 = System_String__op_Equality(name,"CurrentGas",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x41465646) {
        bVar1 = System_String__op_Equality(name,"Horse",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Horse
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x41919631) {
        bVar1 = System_String__op_Equality(name,"MaxAmmoRound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x4fc3dee1) {
      if (uVar2 < 0x43399e7b) {
        if (uVar2 == 0x420a2bbb) {
          bVar1 = System_String__op_Equality(name,"IsMounted",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x43399e7a) {
          bVar1 = System_String__op_Equality(name,"SetSpecial",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x46b92be8) {
        bVar1 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusRange
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x481546b1) {
        bVar1 = System_String__op_Equality(name,"UseGas",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x4fc3dee0) {
        bVar1 = System_String__op_Equality(name,"FindNearestEnemy",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x571689da) {
      if (uVar2 == 0x533f8aab) {
        bVar1 = System_String__op_Equality(name,"ActivateSpecial",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x540059ef) {
        bVar1 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x571689d9) {
        bVar1 = System_String__op_Equality(name,"Reel",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x5aae131e) {
      bVar1 = System_String__op_Equality(name,"SetAIState",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6250ccf3) {
      bVar1 = System_String__op_Equality(name,"SetWeapon",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x664a747c) {
      bVar1 = System_String__op_Equality(name,"SwitchAIState",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb7c10362) {
    if (uVar2 < 0x8b67f169) {
      if (uVar2 < 0x72ec0423) {
        if (uVar2 < 0x693e9e8d) {
          if (uVar2 == 0x68597615) {
            bVar1 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x693e9e8c) {
            bVar1 = System_String__op_Equality(name,"CurrentAmmoRound",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x694fcf3e) {
          bVar1 = System_String__op_Equality(name,"HasAIState",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x6c198db1) {
          bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x72ec0422) {
          bVar1 = System_String__op_Equality(name,"MountTransform",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x7f2c2a35) {
        if (uVar2 == 0x78fba3bd) {
          bVar1 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x79a5e667) {
          bVar1 = System_String__op_Equality(name,"RightHookEnabled",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x7f2c2a34) {
          bVar1 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x80804535) {
        bVar1 = System_String__op_Equality(name,"MaxBlade",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x8af5b772) {
        bVar1 = System_String__op_Equality(name,"IsHookedLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x8b67f168) {
        bVar1 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x9a811657) {
      if (uVar2 < 0x8da10a04) {
        if (uVar2 == 0x8ba9331d) {
          bVar1 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x8da10a03) {
          bVar1 = System_String__op_Equality(name,"AutoRefillGas",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x8f898d1d) {
        bVar1 = System_String__op_Equality(name,"MountedTransform",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x90cf188a) {
        bVar1 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x9a811656) {
        bVar1 = System_String__op_Equality(name,"MaxGas",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xb3178ff2) {
      if (uVar2 == 0x9f9bfd43) {
        bVar1 = System_String__op_Equality(name,"IsHookingLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xa2ea93f6) {
        bVar1 = System_String__op_Equality(name,"MaxBladeDurability",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xb3178ff1) {
        bVar1 = System_String__op_Equality(name,"IsCarried",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xb49e22b7) {
      bVar1 = System_String__op_Equality(name,"Pivot",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xb51217d1) {
      bVar1 = System_String__op_Equality(name,"CurrentSpecial",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xb7c10361) {
      bVar1 = System_String__op_Equality(name,"Weapon",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd0b62b1f) {
    if (uVar2 < 0xc52547e8) {
      if (uVar2 < 0xbad517ad) {
        if (uVar2 == 0xb90ee63d) {
          bVar1 = System_String__op_Equality(name,"CurrentAmmoLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0xbad517ac) {
          bVar1 = System_String__op_Equality(name,"LaunchHookLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xbe425288) {
        bVar1 = System_String__op_Equality(name,"SpecialCooldownRatio",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xc3879128) {
        bVar1 = System_String__op_Equality(name,"HorseFollowEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xc52547e7) {
        bVar1 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xcff18f3c) {
      if (uVar2 == 0xc899a893) {
        bVar1 = System_String__op_Equality(name,"AimAt",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xcad1beb0) {
        bVar1 = System_String__op_Equality(name,"CanDodge",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xcff18f3b) {
        bVar1 = System_String__op_Equality(name,"ResetCallback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xcff57e4c) {
      bVar1 = System_String__op_Equality(name,"IsHookingRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd08919c3) {
      bVar1 = System_String__op_Equality(name,"Navigation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd0b62b1e) {
      bVar1 = System_String__op_Equality(name,"HorseTransform",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe2a0bd4c) {
    if (uVar2 < 0xdc120449) {
      if (uVar2 == 0xd66e6cc1) {
        bVar1 = System_String__op_Equality(name,"ReleaseHookRight",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd8e7f61f) {
        bVar1 = System_String__op_Equality(name,"IsHookedRight",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xdc120448) {
        bVar1 = System_String__op_Equality(name,"InvincibleTimeLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xdca94c5c) {
      bVar1 = System_String__op_Equality(name,"IsInvincible",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe27f342a) {
      bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe2a0bd4b) {
      bVar1 = System_String__op_Equality(name,"MaxAmmoTotal",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xf526d671) {
    if (uVar2 == 0xf29eaab9) {
      bVar1 = System_String__op_Equality(name,"LaunchHookRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf41dd7ef) {
      bVar1 = System_String__op_Equality(name,"MountState",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf526d670) {
      bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf8b1e70c) {
    bVar1 = System_String__op_Equality(name,"LeftHookPosition",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfa055a2b) {
    bVar1 = System_String__op_Equality(name,"Unmount",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfc93affd) {
    bVar1 = System_String__op_Equality(name,"HasHookLeft",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a1db00

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fd6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Weapon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon (const MethodInfo* method);
// 0x5a1dbe0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fd7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial (const MethodInfo* method);
// 0x5a1dcc0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fd8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime (const MethodInfo* method);
// 0x5a1dda0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fd9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown (const MethodInfo* method);
// 0x5a1de80

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__ShifterLiveTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime (const MethodInfo* method);
// 0x5a1df60

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fdb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownRatio
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio (const MethodInfo* method);
// 0x5a1e040

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fdc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas (const MethodInfo* method);
// 0x5a1e0e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fdd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____setter_9_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas (const MethodInfo* method);
// 0x5a1e1c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fde = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x5a1e2a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fdf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Speed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed (const MethodInfo* method);
// 0x5a1e380

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____setter_12_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____setter_12_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Horse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Horse (const MethodInfo* method);
// 0x5a1e460

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Horse(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseFollowEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled (const MethodInfo* method);
// 0x5a1e500

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform (const MethodInfo* method);
// 0x5a1e5e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed (const MethodInfo* method);
// 0x5a1e680

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____getter_16
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____setter_16
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____getter_16
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____setter_16
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability (const MethodInfo* method);
// 0x5a1e760

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_71bf8d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_71bf8d0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability (const MethodInfo* method);
// 0x5a1e840

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade (const MethodInfo* method);
// 0x5a1e920

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade (const MethodInfo* method);
// 0x5a1ea00

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____setter_20_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____getter_20_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____setter_20_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound (const MethodInfo* method);
// 0x5a1eae0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fe9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound (const MethodInfo* method);
// 0x5a1ebc0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft (const MethodInfo* method);
// 0x5a1eca0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545feb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoTotal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal (const MethodInfo* method);
// 0x5a1ed80

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled (const MethodInfo* method);
// 0x5a1ee60

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled (const MethodInfo* method);
// 0x5a1ef40

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsMounted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted (const MethodInfo* method);
// 0x5a1f020

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState (const MethodInfo* method);
// 0x5a1f0c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject (const MethodInfo* method);
// 0x5a1f160

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform (const MethodInfo* method);
// 0x5a1f200

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AutoRefillGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas (const MethodInfo* method);
// 0x5a1f2a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CanDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge (const MethodInfo* method);
// 0x5a1f380

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____getter_32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____setter_32_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____getter_32_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____setter_32_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsInvincible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible (const MethodInfo* method);
// 0x5a1f460

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__InvincibleTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft (const MethodInfo* method);
// 0x5a1f540

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsCarried
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried (const MethodInfo* method);
// 0x5a1f620

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Pivot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot (const MethodInfo* method);
// 0x5a1f6c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__PivotPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition (const MethodInfo* method);
// 0x5a1f760

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ff9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft (const MethodInfo* method);
// 0x5a1f800

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ffa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight (const MethodInfo* method);
// 0x5a1f8a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ffb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft (const MethodInfo* method);
// 0x5a1f940

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ffc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight (const MethodInfo* method);
// 0x5a1f9e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ffd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft (const MethodInfo* method);
// 0x5a1fa80

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545ffe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight (const MethodInfo* method);
// 0x5a1fb20

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07545fff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady (const MethodInfo* method);
// 0x5a1fbc0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546000 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady (const MethodInfo* method);
// 0x5a1fc60

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546001 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition (const MethodInfo* method);
// 0x5a1fd00

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546002 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition (const MethodInfo* method);
// 0x5a1fda0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546003 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x5a1fe40

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_48
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_48
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546004 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_48
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_48
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x5a1ff20

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_49_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_49_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546005 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_49_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_49_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Target
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target (const MethodInfo* method);
// 0x5a20000

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____getter_50_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____setter_50_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546006 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____getter_50_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____setter_50_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition (const MethodInfo* method);
// 0x5a200e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546007 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity (const MethodInfo* method);
// 0x5a201c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546008 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse (const MethodInfo* method);
// 0x5a20260

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____getter_53
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____setter_53
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_07546009 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____getter_53
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____setter_53
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowSkin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin (const MethodInfo* method);
// 0x5a20340

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754600a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____getter_54_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____setter_54_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_0754600a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____getter_54_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____setter_54_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Refill
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill (const MethodInfo* method);
// 0x5a20420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20455: jmp 0x5a204c5

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754600b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754600b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__55_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__55_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__55_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__55_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__RefillImmediate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate (const MethodInfo* method);
// 0x5a20560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20595: jmp 0x5a20605

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754600c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754600c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__56_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__56_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__56_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__56_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearHooks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks (const MethodInfo* method);
// 0x5a206a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a206d5: jmp 0x5a20745

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754600d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754600d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__57_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__57_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__57_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__57_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearLeftHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook (const MethodInfo* method);
// 0x5a207e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20815: jmp 0x5a20885

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754600e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754600e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__58_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__58_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__58_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__58_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearRightHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook (const MethodInfo* method);
// 0x5a20920
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20955: jmp 0x5a209c5

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754600f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754600f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__59_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__59_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__59_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__59_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject (const MethodInfo* method);
// 0x5a20a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20a95: jmp 0x5a20b05

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546010 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__60_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__60_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__60_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__60_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform (const MethodInfo* method);
// 0x5a20ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20bd5: jmp 0x5a20c45

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546011 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__61_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__61_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__61_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__61_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Unmount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount (const MethodInfo* method);
// 0x5a20ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20d15: jmp 0x5a20d85

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546012 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__62_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__62_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__62_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__62_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial (const MethodInfo* method);
// 0x5a20e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20e55: jmp 0x5a20ec5

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546013 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__63_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__63_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__63_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__63_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ActivateSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial (const MethodInfo* method);
// 0x5a20f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a20f95: jmp 0x5a21005

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546014 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__64_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__64_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__64_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__64_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetWeapon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon (const MethodInfo* method);
// 0x5a210a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a210d5: jmp 0x5a21145

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546015 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__65_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__65_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__65_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__65_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__DisablePerks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks (const MethodInfo* method);
// 0x5a211e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21215: jmp 0x5a21285

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546016 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__66_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__66_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__66_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__66_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HasAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState (const MethodInfo* method);
// 0x5a21320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21355: jmp 0x5a213c5

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546017 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__67_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__67_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__67_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__67_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState (const MethodInfo* method);
// 0x5a21460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21495: jmp 0x5a21505

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546018 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__68_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__68_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__68_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__68_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__GetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState (const MethodInfo* method);
// 0x5a215a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a215d5: jmp 0x5a21645

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546019 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__69_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__69_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__69_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__69_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SwitchAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState (const MethodInfo* method);
// 0x5a216e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21718: jmp 0x5a2178b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__70_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__70_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__70_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__70_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ResetCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback (const MethodInfo* method);
// 0x5a21820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21858: jmp 0x5a218cb

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__71_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__71_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__71_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__71_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x5a21960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21998: jmp 0x5a21a0b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__72_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__72_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__72_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__72_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__AimAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt (const MethodInfo* method);
// 0x5a21aa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21ad8: jmp 0x5a21b4b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__73_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__73_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__73_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__73_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Jump
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump (const MethodInfo* method);
// 0x5a21be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21c18: jmp 0x5a21c8b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__74_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__74_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__74_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__74_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseMount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount (const MethodInfo* method);
// 0x5a21d20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21d58: jmp 0x5a21dcb

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754601f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754601f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__75_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__75_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__75_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__75_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dodge
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge (const MethodInfo* method);
// 0x5a21e60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21e98: jmp 0x5a21f0b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546020 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__76_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__76_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__76_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__76_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reload
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload (const MethodInfo* method);
// 0x5a21fa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a21fd8: jmp 0x5a2204b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546021 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__77_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__77_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__77_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__77_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__UseGas
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas (const MethodInfo* method);
// 0x5a220e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22118: jmp 0x5a2218b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546022 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__78_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__78_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__78_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__78_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseWalk
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk (const MethodInfo* method);
// 0x5a22220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22258: jmp 0x5a222cb

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546023 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__79_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__79_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__79_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__79_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dash
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash (const MethodInfo* method);
// 0x5a22360
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22398: jmp 0x5a2240b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546024 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__80_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__80_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__80_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__80_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel (const MethodInfo* method);
// 0x5a224a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a224d8: jmp 0x5a2254b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546025 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__81_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__81_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__81_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__81_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft (const MethodInfo* method);
// 0x5a225e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22618: jmp 0x5a2268b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546026 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__82_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__82_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__82_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__82_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight (const MethodInfo* method);
// 0x5a22720
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22758: jmp 0x5a227cb

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546027 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__83_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__83_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__83_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__83_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft (const MethodInfo* method);
// 0x5a22860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22898: jmp 0x5a2290b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546028 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__84_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__84_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__84_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__84_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight (const MethodInfo* method);
// 0x5a229a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a229d8: jmp 0x5a22a4b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546029 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__85_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__85_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__85_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__85_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll (const MethodInfo* method);
// 0x5a22ae0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22b18: jmp 0x5a22b8b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754602a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754602a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__86_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__86_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__86_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__86_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x5a22c20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22c58: jmp 0x5a22ccb

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754602b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754602b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__87_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__87_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__87_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__87_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__FindNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy (const MethodInfo* method);
// 0x5a22d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22d98: jmp 0x5a22e0b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754602c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754602c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__88_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__88_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__88_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__88_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Navigation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation (const MethodInfo* method);
// 0x5a22ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a22ed8: jmp 0x5a22f4b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754602d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754602d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__89_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__89_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__89_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__89_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetParticleEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect (const MethodInfo* method);
// 0x5a22fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a23018: jmp 0x5a2308b

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicHumanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754602e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754602e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__90_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__90_0;
  }
  if (__this == (System_Func_CustomLogicHumanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__90_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__90_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a23120

void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754602f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCarried");
    il2cpp_codegen_initialize_runtime_metadata(&"AimAt");
    il2cpp_codegen_initialize_runtime_metadata(&"SwitchAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"IsInvincible");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAmmoLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookReady");
    il2cpp_codegen_initialize_runtime_metadata(&"FindNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"HasHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseFollowEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentBladeDurability");
    il2cpp_codegen_initialize_runtime_metadata(&"DisablePerks");
    il2cpp_codegen_initialize_runtime_metadata(&"Move");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentGas");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterLiveTime");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxAmmoRound");
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldownTime");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookingRight");
    il2cpp_codegen_initialize_runtime_metadata(&"UseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"LaunchHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookingLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"HasHookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillImmediate");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHookPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearHooks");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"Reel");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookReady");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxAmmoTotal");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookedLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxBladeDurability");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearLeftHook");
    il2cpp_codegen_initialize_runtime_metadata(&"MountTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRightHook");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxGas");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldownRatio");
    il2cpp_codegen_initialize_runtime_metadata(&"InvincibleTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"MountedMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"MountState");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHookPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Unmount");
    il2cpp_codegen_initialize_runtime_metadata(&"ActivateSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"ReleaseHookAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Navigation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"SetParticleEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAmmoRound");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"LaunchHookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"MountMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHookedRight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeapon");
    il2cpp_codegen_initialize_runtime_metadata(&"Pivot");
    il2cpp_codegen_initialize_runtime_metadata(&"HasAIState");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"PivotPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMounted");
    il2cpp_codegen_initialize_runtime_metadata(&"MountedTransform");
    Il2CppMethodInitialized_0754602f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Weapon",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentSpecial",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldownTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterLiveTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldownRatio",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentGas",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxGas",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acceleration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Speed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseFollowEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentBladeDurability",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxBladeDurability",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentBlade",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxBlade",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAmmoRound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxAmmoRound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAmmoLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxAmmoTotal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMounted",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountedMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountedTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AutoRefillGas",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsInvincible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InvincibleTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCarried",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pivot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PivotPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookedLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookedRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookingLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookingRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasHookLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasHookRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookReady",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookReady",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusRange",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Target",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetVelocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AllowHorse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AllowSkin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RefillImmediate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearHooks",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearLeftHook",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearRightHook",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unmount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSpecial",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActivateSpecial",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetWeapon",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DisablePerks",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasAIState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAIState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAIState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SwitchAIState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Move",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AimAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseGas",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseWalk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reel",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LaunchHookLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LaunchHookRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindNearestEnemy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Navigation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetParticleEffect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a23d50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = (*(__i->klass->vtable)._13_get_Position.methodPtr)
                     (__i,(__i->klass->vtable)._13_get_Position.method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a23d70

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546030 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__i->klass->vtable)._14_set_Position.methodPtr)(__i,pCVar1,(__i->klass->vtable)._14_set_Position.method);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____getter_3_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a23e00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____getter_3_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = CustomLogic_CustomLogicHumanBuiltin__get_Weapon(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____setter_3_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a23e20

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____setter_3_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546031 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_Weapon(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____getter_4_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a23ea0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____getter_4_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____setter_4_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a23ec0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____setter_4_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546032 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a23f40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a23f70

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546033 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____getter_6_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a23ff0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____getter_6_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____setter_6_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24020

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____setter_6_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546034 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a240a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a240d0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546035 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownRatio>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24150

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____getter_9_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24180

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____getter_9_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____setter_9_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a241b0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____setter_9_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546036 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____getter_10_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24230

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____getter_10_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MaxGas(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____setter_10_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24260

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____setter_10_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546037 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546037 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_MaxGas(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____getter_11_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a242e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____getter_11_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_Acceleration(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____setter_11_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24310

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____setter_11_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546038 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546038 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_Acceleration(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____getter_12_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24390

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____getter_12_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_Speed(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____setter_12_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a243c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____setter_12_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546039 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_Speed(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Horse>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Horse_g____getter_13_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24440

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Horse_g____getter_13_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicHorseBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_Horse(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____getter_14_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24460

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____getter_14_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____setter_14_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24490

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____setter_14_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_0754603a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseTransform>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseTransform_g____getter_15_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24510

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseTransform_g____getter_15_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____getter_16_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24530

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____getter_16_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____setter_16_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24560

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____setter_16_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_0754603b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____getter_17_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a245e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____getter_17_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____setter_17_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24610

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____setter_17_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_0754603c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____getter_18_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24690

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____getter_18_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____setter_18_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a246c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____setter_18_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_0754603d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____getter_19_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24740

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____getter_19_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____setter_19_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24770

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____setter_19_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_0754603e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____getter_20_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a247f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____getter_20_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____setter_20_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24820

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____setter_20_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_0754603f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754603f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____getter_21_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a248a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____getter_21_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____setter_21_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a248d0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____setter_21_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546040 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____getter_22_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24950

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____getter_22_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____setter_22_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24980

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____setter_22_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546041 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____getter_23_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24a00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____getter_23_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____setter_23_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24a30

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____setter_23_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546042 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____getter_24_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24ab0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____getter_24_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____setter_24_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24ae0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____setter_24_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_07546043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546043 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____getter_25_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24b60

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____getter_25_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____setter_25_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24b90

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____setter_25_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07546044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546044 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____getter_26_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24c10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____getter_26_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____setter_26_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24c40

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____setter_26_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07546045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546045 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsMounted>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsMounted_g____getter_27_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24cc0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsMounted_g____getter_27_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsMounted(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountState>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountState_g____getter_28_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24cf0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountState_g____getter_28_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_MountState(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedMapObject>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedMapObject_g____getter_29_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24d20

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedMapObject_g____getter_29_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedTransform>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedTransform_g____getter_30_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24d40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedTransform_g____getter_30_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____getter_31_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24d60

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____getter_31_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____setter|31_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____setter_31_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24d90

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____setter_31_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07546046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546046 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____getter_32_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24e10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____getter_32_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_CanDodge(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____setter|32_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____setter_32_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24e40

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____setter_32_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07546047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546047 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_CanDodge(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____getter_33_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24ec0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____getter_33_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____setter|33_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____setter_33_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24ef0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____setter_33_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_07546048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546048 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a24f70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____setter|34_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a24fa0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546049 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsCarried>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsCarried_g____getter_35_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25020

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsCarried_g____getter_35_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsCarried(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Pivot>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Pivot_g____getter_36_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25050

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Pivot_g____getter_36_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_Pivot(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__PivotPosition>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__PivotPosition_g____getter_37_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25080

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__PivotPosition_g____getter_37_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedLeft>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedLeft_g____getter_38_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a250a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedLeft_g____getter_38_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedRight>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedRight_g____getter_39_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a250d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedRight_g____getter_39_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingLeft>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingLeft_g____getter_40_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25100

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingLeft_g____getter_40_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingRight>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingRight_g____getter_41_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25130

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingRight_g____getter_41_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookLeft>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookLeft_g____getter_42_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25160

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookLeft_g____getter_42_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookRight>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookRight_g____getter_43_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25190

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookRight_g____getter_43_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookReady>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookReady_g____getter_44_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a251c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookReady_g____getter_44_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookReady>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookReady_g____getter_45_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a251f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookReady_g____getter_45_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookPosition>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookPosition_g____getter_46_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25220

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookPosition_g____getter_46_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookPosition>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookPosition_g____getter_47_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25240

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookPosition_g____getter_47_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_48_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25260

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_48_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_FocusRange(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|48_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_48_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a25290

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_48_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_0754604a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_FocusRange(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_49_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25310

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_49_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__get_FocusTime(__i,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|49_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_49_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a25340

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_49_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_0754604b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_FocusTime(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____getter_50_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a253c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____getter_50_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicHumanBuiltin__get_Target(__i,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____setter|50_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____setter_50_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a253e0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____setter_50_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_0754604c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_Target(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____getter_51_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25460

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____getter_51_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____setter|51_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____setter_51_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a25480

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____setter_51_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  
  if (Il2CppMethodInitialized_0754604d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetVelocity>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetVelocity_g____getter_52_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25500

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetVelocity_g____getter_52_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity(__i,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____getter_53_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a25520

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____getter_53_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____setter|53_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____setter_53_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a25550

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____setter_53_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_0754604e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____getter_54_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x5a255d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____getter_54_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin(__i,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____setter|54_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____setter_54_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a25600

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____setter_54_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_0754604f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754604f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin(__i,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o* __this, const MethodInfo* method);
// 0x5a26790

void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor
               (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$<ResetCallback>b__0
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ResetCallback_b__0 (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o* __this, const MethodInfo* method);
// 0x5a267a0

void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ResetCallback_b__0
               (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_07546065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546065 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___ctor (CustomLogic_CustomLogicHumanBuiltin_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5a184e0

void CustomLogic_CustomLogicHumanBuiltin___ctor
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Controllers_HumanAIController_o *pCVar3;
  Controllers_HumanAIController_c *pCVar4;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_07545fa5 = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)human,method);
  (__this->fields).Human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human);
  pCVar4 = TypeInfo_Controllers_HumanAIController;
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar2->fields).AI == false) {
    return;
  }
  pCVar3 = (Controllers_HumanAIController_o *)(pCVar2->fields).Controller;
  if (pCVar3 == (Controllers_HumanAIController_o *)0x0) {
    (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
label_05a185a5:
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller);
    return;
  }
  bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (((Controllers_IHumanController_c *)pCVar3->klass)->_2).typeHierarchyDepth) &&
     ((((Controllers_IHumanController_c *)pCVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
    (__this->fields).Controller = pCVar3;
    if ((bVar1 <= (((Controllers_IHumanController_c *)pCVar3->klass)->_2).typeHierarchyDepth) &&
       ((((Controllers_IHumanController_c *)pCVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)pCVar4)) goto label_05a185a5;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pCVar3,pCVar4);
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a185c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_Position
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Position(__this,method);
  return pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a185d0

void CustomLogic_CustomLogicHumanBuiltin__set_Position
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__IsChangingPosition(pCVar1,(MethodInfo *)0x0);
      CustomLogic_CustomLogicCharacterBuiltin__set_Position
                ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,value,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Weapon
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18630

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_Weapon
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_o *pSVar3;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07545fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanWeapon);
    Il2CppMethodInitialized_07545fa6 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Setup, pCVar2 == (Characters_HumanSetup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_20.klass = (System_Enum_c *)TypeInfo_Characters_HumanWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = (pCVar2->fields).Weapon;
  pSVar3 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar3;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Weapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a186b0

void CustomLogic_CustomLogicHumanBuiltin__set_Weapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__this,value,method);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18a90

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentSpecial;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a18ab0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__SetSpecial(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18b50

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pCVar1->fields).Special;
  if (__this_00 == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  fVar2 = Characters_BaseUseable__GetCooldownRatio(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldownTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a18b80

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *__this_00;
  float ratio;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pCVar1->fields).Special;
  if (__this_00 == (Characters_BaseUseable_o *)0x0) {
    return;
  }
  ratio = 0.0;
  if (0.0 <= value) {
    ratio = value;
  }
  Characters_BaseUseable__SetCooldownRatio(__this_00,ratio,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldown
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18bb0

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = (pCVar1->fields).Special;
  if (pCVar2 == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  return (pCVar2->fields).Cooldown;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldown
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a18be0

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = (pCVar1->fields).Special;
  if (pCVar2 != (Characters_BaseUseable_o *)0x0) {
    fVar3 = 0.0;
    if (0.0 <= value) {
      fVar3 = value;
    }
    (pCVar2->fields).Cooldown = fVar3;
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_ShifterLiveTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18c10

float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    Il2CppMethodInitialized_07545fa7 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Special;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
      return *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_ShifterLiveTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a18c90

void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    Il2CppMethodInitialized_07545fa8 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Special;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
      *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownRatio
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18d20

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pCVar1->fields).Special;
  if (__this_00 == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  fVar2 = Characters_BaseUseable__GetCooldownRatio(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18d50

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).CurrentGas;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a18d80

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar3 = (pCVar2->fields).MaxGas;
  if (value <= fVar3) {
    fVar3 = value;
  }
  (pCVar2->fields).CurrentGas = fVar3;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18db0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).MaxGas;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a18de0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Stats, __this_00 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).MaxGas = value;
  Characters_HumanStats__UpdateStats(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18e10

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).Acceleration;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Acceleration
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a18e30

void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Stats, __this_00 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Acceleration = value;
  Characters_HumanStats__UpdateStats(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Speed
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18e60

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).Speed;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Speed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a18e80

void CustomLogic_CustomLogicHumanBuiltin__set_Speed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Stats, __this_00 == (Characters_HumanStats_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Speed = value;
  Characters_HumanStats__UpdateStats(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Horse
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_Horse (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18eb0

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_Horse
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fa9 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a18f63:
    ThrowNullReferenceException();
  }
  pCVar2 = (pCVar1->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a18f63;
    pCVar2 = (pCVar1->fields).Horse;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    CustomLogic_CustomLogicCharacterBuiltin___ctor
              ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this_00,(Characters_BaseCharacter_o *)pCVar2,
               method_00);
    (__this_00->fields).Horse = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Horse);
  }
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseFollowEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a18f70

bool CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545faa = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    if (__this_00 != (Characters_Horse_o *)0x0) {
      bVar2 = Characters_Horse__get_FollowingEnabled(__this_00,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_HorseFollowEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a18ff0

void CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fab = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (__this_00 != (Characters_Horse_o *)0x0) {
      Characters_Horse__set_FollowingEnabled(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19080

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fac = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a19131:
    ThrowNullReferenceException();
  }
  pCVar2 = (pCVar1->fields).Horse;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0)) goto label_05a19131;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
  }
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseSpeed
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19140

float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fad = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pCVar2 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).Human;
    if (bVar4) {
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
        fVar5 = Characters_Horse__get_RunSpeed(pCVar2,(MethodInfo *)0x0);
        return fVar5;
      }
    }
    else if ((pCVar1 != (Characters_Human_o *)0x0) &&
            (pCVar3 = (pCVar1->fields).Stats, pCVar3 != (Characters_HumanStats_o *)0x0)) {
      return (pCVar3->fields).HorseSpeed;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_HorseSpeed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a191f0

void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07545fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fae = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (((!bVar4) || (bVar4 = Controllers_HorseController__IsFinite(value,(MethodInfo *)0x0), value <= 0.0))
       || (!bVar4)) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      (pCVar2->fields).HorseSpeed = value;
      pCVar3 = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar3 = (pCVar1->fields).Horse, pCVar3 != (Characters_Horse_o *)0x0)) {
        Characters_Horse__set_RunSpeed(pCVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a192e0

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545faf = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      return *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a19360

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_HumanSounds_StaticFields *pCVar4;
  Characters_Human_o *pCVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07545fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07545fb0 = '\x01';
  }
  pCVar5 = (__this->fields).Human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05a194a0;
  pCVar3 = (pCVar5->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      fVar6 = *(float *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x38)) + 4);
      fVar1 = *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
      if (value <= fVar6) {
        fVar6 = value;
      }
      fVar6 = (float)(-(uint)(0.0 <= value) & (uint)fVar6);
      *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = fVar6;
      if ((fVar1 <= 0.0) || (0.0 < fVar6)) {
        if (0.0 < fVar1) {
          return;
        }
        if (fVar6 <= 0.0) {
          return;
        }
        Characters_Human__ToggleBlades(pCVar5,true,(MethodInfo *)0x0);
        pCVar5 = (__this->fields).Human;
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar5 == (Characters_Human_o *)0x0) goto label_05a194a0;
        pCVar4 = (Characters_HumanSounds_StaticFields *)
                 &TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
      }
      else {
        Characters_Human__ToggleBlades(pCVar5,false,(MethodInfo *)0x0);
        pCVar5 = (__this->fields).Human;
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        if (pCVar5 == (Characters_Human_o *)0x0) {
label_05a194a0:
          ThrowNullReferenceException();
        }
        pCVar4 = TypeInfo_Characters_HumanSounds->static_fields;
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar5,pCVar4->BladeBreak,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a194b0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb1 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      return *(float *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x38)) + 4);
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a19530

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb2 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      *(float *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x38)) + 4) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a195c0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb3 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      return (int32_t)(*(uint32_t *)((char *)pCVar3 + 0x48));
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19630

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb4 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      fVar4 = *(float *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
      if (value < (int)fVar4) {
        fVar4 = (float)value;
      }
      (*(uint32_t *)((char *)pCVar3 + 0x48)) = fVar4;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a196c0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb5 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      return *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19730

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_07545fb6 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon)
       ) {
      *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a197b0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fb7 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      return (int32_t)(*(uint32_t *)((char *)pCVar3 + 0x48));
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19820

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  
  if (Il2CppMethodInitialized_07545fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fb8 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar4 = (pCVar3->fields).Weapon;
  if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      fVar2 = *(float *)((long)&(*(uint64_t *)((char *)pCVar4 + 0x40)) + 4);
      if ((int)fVar2 < value) {
        value = (int32_t)fVar2;
      }
      (*(uint32_t *)((char *)pCVar4 + 0x48)) = (float)value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a198b0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fb9 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      return *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19920

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fba = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoLeft
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a199a0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fbb = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      return *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19a10

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  
  if (Il2CppMethodInitialized_07545fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fbc = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar4 = (pCVar3->fields).Weapon;
  if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      iVar2 = *(int *)((long)&(*(uint64_t *)((char *)pCVar4 + 0x38)) + 4);
      if (iVar2 < value) {
        value = iVar2;
      }
      *(int32_t *)&(*(uint64_t *)((char *)pCVar4 + 0x40)) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoTotal
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19aa0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fbd = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      return *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x38)) + 4);
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoTotal
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a19b10

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07545fbe = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      *(int32_t *)((long)&(*(uint64_t *)((char *)pCVar3 + 0x38)) + 4) = value;
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19b90

bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).Enabled;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_LeftHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a19bc0

void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).Enabled = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19bf0

bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).Enabled;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_RightHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a19c20

void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).Enabled = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsMounted
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsMounted (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19c50

bool CustomLogic_CustomLogicHumanBuiltin__get_IsMounted
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).MountState == 2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountState
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19c70

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).MountState;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19c90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a19ce7: mov rdi, qword ptr [r14]

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Characters_Human_o *pCVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07545fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07545fbf = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).MountedMapObject == (Map_MapObject_o *)0x0) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a19d19;
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,(pCVar1->fields).MountedMapObject,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
label_05a19d19:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19d20

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fc0 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a19dc2:
    ThrowNullReferenceException();
  }
  pUVar2 = (pCVar1->fields).MountedTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a19dc2;
    pUVar2 = (pCVar1->fields).MountedTransform;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
  }
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AutoRefillGas
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19dd0

bool CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_07545fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07545fc1 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = false;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a19e99:
      ThrowNullReferenceException();
    }
    bVar5 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar5) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanInputSettings_o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).AutoRefillGas, pSVar4 == (Settings_BoolSetting_o *)0x0))
      goto label_05a19e99;
      bVar6 = (pSVar4->fields)._value != false;
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AutoRefillGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a19ea0

void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *__this_00;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07545fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_07545fc2 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar4) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanInputSettings_o *)0x0)) &&
       (__this_00 = (pSVar3->fields).AutoRefillGas, __this_00 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,value,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CanDodge
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19f80

bool CustomLogic_CustomLogicHumanBuiltin__get_CanDodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CanDodge;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CanDodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a19fa0

void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).CanDodge = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsInvincible
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a19fc0

bool CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).IsInvincible;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_IsInvincible
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a19fe0

void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).IsInvincible = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InvincibleTimeLeft
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a000

float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).InvincibleTimeLeft;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_InvincibleTimeLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a1a020

void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).InvincibleTimeLeft = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsCarried
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsCarried (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a040

bool CustomLogic_CustomLogicHumanBuiltin__get_IsCarried
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CarryState == 1;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Pivot
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_Pivot (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a060

bool CustomLogic_CustomLogicHumanBuiltin__get_Pivot
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._pivot;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_PivotPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a080

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Nullable_Vector3__o SVar2;
  
  if (Il2CppMethodInitialized_07545fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07545fc3 = '\x01';
  }
  __this_00 = (__this->fields).Human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  SVar2 = Characters_Human__PivotPosition(__this_00,(MethodInfo *)0x0);
  if (SVar2.fields.hasValue == false) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     (SVar2.fields.value.fields,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a100

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a130

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookRight, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a160

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsHooking(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a190

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookRight, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsHooking(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a1c0

bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a1f0

bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookRight, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a220

bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsReady(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a250

bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookRight, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_HookUseable__IsReady(__this_00,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a280

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_Nullable_Vector3__o SVar3;
  
  if (Il2CppMethodInitialized_07545fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07545fc4 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  SVar3 = Characters_HookUseable__GetCLHookPosition(__this_00,(MethodInfo *)0x0);
  if (SVar3.fields.hasValue == false) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     (SVar3.fields.value.fields,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a300

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_Nullable_Vector3__o SVar3;
  
  if (Il2CppMethodInitialized_07545fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07545fc5 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).HookRight, __this_00 == (Characters_HookUseable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  SVar3 = Characters_HookUseable__GetCLHookPosition(__this_00,(MethodInfo *)0x0);
  if (SVar3.fields.hasValue == false) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     (SVar3.fields.value.fields,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_FocusRange (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a380

float CustomLogic_CustomLogicHumanBuiltin__get_FocusRange
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fc6 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1a41a:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1a41a;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar4 = 0.0;
      if (bVar3) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1a41a;
        fVar4 = (pCVar2->fields).FocusRange;
      }
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_FocusRange (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a1a420

void CustomLogic_CustomLogicHumanBuiltin__set_FocusRange
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fc7 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1a4c0:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1a4c0;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1a4c0;
        (pCVar2->fields).FocusRange = value;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_FocusTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a4d0

float CustomLogic_CustomLogicHumanBuiltin__get_FocusTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fc8 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1a56a:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1a56a;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar4 = 0.0;
      if (bVar3) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1a56a;
        fVar4 = (pCVar2->fields).FocusTime;
      }
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_FocusTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a1a570

void CustomLogic_CustomLogicHumanBuiltin__set_FocusTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545fc9 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1a610:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1a610;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1a610;
        (pCVar2->fields).FocusTime = value;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Target
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin__get_Target (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a620

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin__get_Target
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_o *shifter;
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    Il2CppMethodInitialized_07545fca = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController
                        ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    __this_01 = (CustomLogic_CustomLogicShifterBuiltin_o *)
                CustomLogic_CustomLogicCharacterBuiltin__WrapTarget((Characters_ITargetable_o *)0x0,method);
  }
  else {
    method_00 = (MethodInfo *)0x0;
    target = Controllers_BaseAIController__GetTarget(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicShifterBuiltin_o *)
                CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  }
  if (__this_01 == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    __this_01 = (CustomLogic_CustomLogicShifterBuiltin_o *)0x0;
  }
  else {
    bVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin)->_2).typeHierarchyDepth;
    if ((bVar1 <= (((Il2CppClass *)__this_01->klass)->_2).typeHierarchyDepth) &&
       ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin)) {
      shifter = (Characters_BaseShifter_o *)(*(uint64_t *)((char *)__this_01 + 0x48));
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
      CustomLogic_CustomLogicShifterBuiltin___ctor(__this_01,shifter,(MethodInfo *)0x0);
    }
  }
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Target
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Target (CustomLogic_CustomLogicHumanBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5a1a6e0

void CustomLogic_CustomLogicHumanBuiltin__set_Target
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  Characters_ITargetable_o *value_00;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    method_00 = (pCVar1->klass->vtable)._74_IsMine.method;
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,method_00);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      value_00 = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(value,method_00);
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__set_Target(__this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a760

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_HumanAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(pCVar1->fields)._targetPosition.fields,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_TargetPosition
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a1a790

void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Controllers_HumanAIController_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Controller, __this_00 == (Controllers_HumanAIController_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Controllers_HumanAIController__set_TargetPosition
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a7c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_HumanAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(pCVar1->fields).TargetVelocity.fields,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowHorse
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a7f0

bool CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AllowHorse;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowHorse
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a1a810

void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).AllowHorse = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowSkin
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a830

bool CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AllowSkin;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowSkin
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a1a850

void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).AllowSkin = value;
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$Refill
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__Refill (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a870

bool CustomLogic_CustomLogicHumanBuiltin__Refill
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return false;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar2 = Characters_Human__NeedRefill(pCVar1,true,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        bVar2 = Characters_Human__Refill(pCVar1,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$RefillImmediate
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__RefillImmediate (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a8d0

void CustomLogic_CustomLogicHumanBuiltin__RefillImmediate
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__FinishRefill(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearHooks
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearHooks (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a910

void CustomLogic_CustomLogicHumanBuiltin__ClearHooks
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(pCVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearLeftHook
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a980

void CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearRightHook
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearRightHook (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1a9d0

void CustomLogic_CustomLogicHumanBuiltin__ClearRightHook
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$MountMapObject
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MountMapObject (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, CustomLogic_CustomLogicVector3Builtin_o* positionOffset, CustomLogic_CustomLogicVector3Builtin_o* rotationOffset, bool canMountedAttack, const MethodInfo* method);
// 0x5a1aa20

void CustomLogic_CustomLogicHumanBuiltin__MountMapObject
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,bool canMountedAttack,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    if ((((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
         (positionOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
        (rotationOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (pCVar1 = (__this->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      Characters_Human__Mount_5ac0d10
                (pCVar1,(mapObject->fields).Value,(UnityEngine_Vector3_o)(positionOffset->fields).Value.fields
                 ,(UnityEngine_Vector3_o)(rotationOffset->fields).Value.fields,canMountedAttack,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$MountTransform
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MountTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* transform, CustomLogic_CustomLogicVector3Builtin_o* positionOffset, CustomLogic_CustomLogicVector3Builtin_o* rotationOffset, bool canMountedAttack, const MethodInfo* method);
// 0x5a1aab0

void CustomLogic_CustomLogicHumanBuiltin__MountTransform
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *transform,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,bool canMountedAttack,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    if ((((transform != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
         (positionOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
        (rotationOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (pCVar1 = (__this->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      Characters_Human__Mount
                (pCVar1,(transform->fields).Value,(UnityEngine_Vector3_o)(positionOffset->fields).Value.fields
                 ,(UnityEngine_Vector3_o)(rotationOffset->fields).Value.fields,canMountedAttack,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Unmount
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Unmount (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool immediate, const MethodInfo* method);
// 0x5a1ab40

void CustomLogic_CustomLogicHumanBuiltin__Unmount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool immediate,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__Unmount(pCVar1,immediate,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* special, const MethodInfo* method);
// 0x5a18b00

void CustomLogic_CustomLogicHumanBuiltin__SetSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *special,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ActivateSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1ab90

void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pCVar2 = (pCVar1->fields).Special;
      if (pCVar2 == (Characters_BaseUseable_o *)0x0) {
        return;
      }
      (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                (pCVar2,true,(pCVar2->klass->vtable)._12_SetInput.method);
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).Special, pCVar2 != (Characters_BaseUseable_o *)0x0)) {
        (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar2,false,(pCVar2->klass->vtable)._12_SetInput.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetWeapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetWeapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x5a186c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a187e5: mov rsi, rbx
// asm:   0x5a18929: mov r14, rax
// asm:   0x5a18a65: mov rdi, rbx
// asm:   0x5a18a68: mov rsi, rax
// asm:   0x5a18a6b: jmp 0x5a187e8

void CustomLogic_CustomLogicHumanBuiltin__SetWeapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *weapon,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  UnityEngine_Object_o *x;
  long lVar4;
  Il2CppObject *obj;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  GameManagers_InGameManager_o *__this_01;
  Characters_Human_o *pCVar6;
  Settings_InGameCharacterSettings_o *pSVar7;
  Characters_Human_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"Blades");
    Il2CppMethodInitialized_07545fcb = '\x01';
  }
  pCVar6 = (__this->fields).Human;
  if (pCVar6 != (Characters_Human_o *)0x0) {
    bVar5 = (*(pCVar6->klass->vtable)._74_IsMine.methodPtr)(pCVar6,(pCVar6->klass->vtable)._74_IsMine.method);
    if (!bVar5) {
      return;
    }
    targetAddress = &(__this->fields).Human;
    pCVar6 = *targetAddress;
    if (pCVar6 != (Characters_Human_o *)0x0) {
      if ((pCVar6->fields).AI == false) {
        pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
          }
          x = (*(uint64_t *)((char *)pGVar3 + 0x80));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          if ((*(uint64_t *)((char *)pGVar3 + 0x80)) == (long *)0x0) {
            return;
          }
          lVar4 = *(long *)(*(uint64_t *)((char *)pGVar3 + 0x80));
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if (*(byte *)(lVar4 + 0x130) < bVar1) {
            return;
          }
          if (*(Characters_Human_c **)(*(long *)(lVar4 + 200) + -8 + (ulong)bVar1 * 8) !=
              TypeInfo_Characters_Human) {
            return;
          }
          pCVar6 = *targetAddress;
          if (pCVar6 != (Characters_Human_o *)0x0) {
            bVar5 = (*(pCVar6->klass->vtable)._74_IsMine.methodPtr)
                              (pCVar6,(pCVar6->klass->vtable)._74_IsMine.method);
            if (!bVar5) {
              return;
            }
            bVar5 = System_String__op_Equality(weapon,"Blades",(MethodInfo *)0x0);
            if (bVar5) {
              weapon = (System_String_o *)il2cpp_runtime_helper_05a1b960(0);
            }
            else {
              bVar5 = System_String__op_Equality(weapon,"Thunderspears",(MethodInfo *)0x0);
              if (bVar5) {
                weapon = (System_String_o *)il2cpp_runtime_helper_05a1b9d0(0);
              }
            }
            if (*targetAddress != (Characters_Human_o *)0x0) {
              if (((*targetAddress)->fields).Dead != false) {
                return;
              }
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              __this_00 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
              if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                bVar5 = System_Collections_Generic_List_object___Contains
                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                   (Il2CppObject *)weapon,
                                   (MethodInfo_395D6D0 *)
                                   MethodInfo_System_Collections_Generic_List_string_Contains);
                if (!bVar5) {
                  return;
                }
                pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
                if ((pSVar7 != (Settings_InGameCharacterSettings_o *)0x0) &&
                   (pSVar2 = (pSVar7->fields).Loadout, pSVar2 != (Settings_StringSetting_o *)0x0)) {
                  bVar5 = System_String__op_Inequality(weapon,(pSVar2->fields)._value,(MethodInfo *)0x0);
                  if (!bVar5) {
                    return;
                  }
                  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
                  if ((pSVar7 != (Settings_InGameCharacterSettings_o *)0x0) &&
                     (pSVar2 = (pSVar7->fields).Loadout, pSVar2 != (Settings_StringSetting_o *)0x0)) {
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)weapon,
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    __this_01 = (GameManagers_InGameManager_o *)
                                il2cpp_codegen_is_inst_class
                                          ((Il2CppObject *)
                                           TypeInfo_ApplicationManagers_SceneLoader->static_fields->
                                           CurrentGameManager,
                                           (Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                    obj = (*(uint64_t *)((char *)pGVar3 + 0x80));
                    pCVar6 = (Characters_Human_o *)
                             il2cpp_codegen_is_inst_class(obj,(Il2CppClass *)TypeInfo_Characters_Human);
                    *targetAddress = pCVar6;
                    il2cpp_codegen_is_inst_class(obj,(Il2CppClass *)TypeInfo_Characters_Human);
                    Il2CppCodeGenWriteBarrier(targetAddress);
                    if (__this_01 != (GameManagers_InGameManager_o *)0x0) {
                      pCVar6 = *targetAddress;
                      pSVar7 = GameManagers_InGameManager__GetSetHumanSettings(__this_01,(MethodInfo *)0x0);
                      if (pCVar6 != (Characters_Human_o *)0x0) goto label_05a187e8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pSVar7 = (pCVar6->fields).Settings;
        if ((pSVar7 != (Settings_InGameCharacterSettings_o *)0x0) &&
           (pSVar2 = (pSVar7->fields).Loadout, pSVar2 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)weapon,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pCVar6 = *targetAddress;
          if (pCVar6 != (Characters_Human_o *)0x0) {
label_05a187e8:
            Characters_Human__ReloadHuman(pCVar6,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$DisablePerks
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__DisablePerks (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1ac10

void CustomLogic_CustomLogicHumanBuiltin__DisablePerks
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).Stats, __this_00 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__DisablePerks(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$HasAIState
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__HasAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a1ac60

bool CustomLogic_CustomLogicHumanBuiltin__HasAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return false;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return false;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        bVar2 = Controllers_HumanAIController__HasAIState(__this_00,name,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetAIState
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* classInstance, const MethodInfo* method);
// 0x5a1acd0

void CustomLogic_CustomLogicHumanBuiltin__SetAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *classInstance,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Controllers_HumanAIStates_Custom_o *__this_01;
  
  if (Il2CppMethodInitialized_07545fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_Custom);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_Remove);
    Il2CppMethodInitialized_07545fcc = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      if (classInstance == (CustomLogic_UserClassInstance_o *)0x0) {
        pCVar2 = (__this->fields).Controller;
        if ((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
           (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).AIStates,
           __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_00,(Il2CppObject *)name,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_Remove);
          return;
        }
      }
      else {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_Custom);
        Controllers_HumanAIStates_Custom___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Controllers_HumanAIStates_Custom_o *)0x0) {
          Controllers_HumanAIStates_Custom__Init(__this_01,name,classInstance,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
            Controllers_HumanAIController__SetAIState
                      (pCVar2,name,(Controllers_HumanAIState_o *)__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$GetAIState
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__GetAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1ade0

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__GetAIState
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  Controllers_HumanAIState_o *pCVar3;
  bool bVar4;
  System_String_o *pSVar5;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1ae40:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1ae40;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1ae40;
      pCVar3 = (pCVar2->fields).AIState;
      if (pCVar3 != (Controllers_HumanAIState_o *)0x0) {
        pSVar5 = (*(pCVar3->klass->vtable)._4_get_Name.methodPtr)
                           (pCVar3,(pCVar3->klass->vtable)._4_get_Name.method);
        return pSVar5;
      }
    }
  }
  return (System_String_o *)0x0;
}


// CustomLogic.CustomLogicHumanBuiltin$$SwitchAIState
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a1ae50

void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar2;
  Controllers_HumanAIState_o *aiState;
  
  if (Il2CppMethodInitialized_07545fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    Il2CppMethodInitialized_07545fcd = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if ((__this_00 != (Controllers_HumanAIController_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).AIStates,
         __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        aiState = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
        Controllers_HumanAIController__SwitchAIState(__this_00,aiState,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ResetCallback
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ResetCallback (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* callback, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x5a1aef0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a1b03a: mov rdi, r13
// asm:   0x5a1b03d: mov rsi, r14
// asm:   0x5a1b040: mov rdx, rbx
// asm:   0x5a1b043: jmp 0x5a1b093

void CustomLogic_CustomLogicHumanBuiltin__ResetCallback
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *callback,
               CustomLogic_UserMethod_o *method,MethodInfo *methodInfo)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *__this_00;
  System_Type_o *pSVar4;
  System_Reflection_FieldInfo_o *__this_01;
  System_Action_o *__this_02;
  Controllers_HumanAICallback_o *pCVar5;
  
  if (Il2CppMethodInitialized_07545fce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0_ResetCallback_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0);
    Il2CppMethodInitialized_07545fce = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0);
  CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *)0x0) {
    (__this_00->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar3) {
        return;
      }
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        if ((pCVar1->fields).AI == false) {
          return;
        }
        pCVar2 = (__this->fields).Controller;
        if ((__this_00->fields).method == (CustomLogic_UserMethod_o *)0x0) {
          if (((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
              (pCVar5 = (pCVar2->fields).Callbacks, pCVar5 != (Controllers_HumanAICallback_o *)0x0)) &&
             (pSVar4 = System_Object__GetType((Il2CppObject *)pCVar5,(MethodInfo *)0x0),
             pSVar4 != (System_Type_o *)0x0)) {
            __this_01 = System_Type__GetField(pSVar4,callback,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).Controller;
            if ((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
               (__this_01 != (System_Reflection_FieldInfo_o *)0x0)) {
              pCVar5 = (pCVar2->fields).Callbacks;
              __this_02 = (System_Action_o *)0x0;
label_05a1b093:
              System_Reflection_FieldInfo__SetValue
                        (__this_01,(Il2CppObject *)pCVar5,(Il2CppObject *)__this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
                 (pCVar5 = (pCVar2->fields).Callbacks, pCVar5 != (Controllers_HumanAICallback_o *)0x0)) &&
                (pSVar4 = System_Object__GetType((Il2CppObject *)pCVar5,(MethodInfo *)0x0),
                pSVar4 != (System_Type_o *)0x0)) {
          __this_01 = System_Type__GetField(pSVar4,callback,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
            pCVar5 = (pCVar2->fields).Callbacks;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      (__this_02,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0_ResetCallback_b__0,
                       (MethodInfo *)0x0);
            if (__this_01 != (System_Reflection_FieldInfo_o *)0x0) goto label_05a1b093;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Move (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x5a1b0b0

void CustomLogic_CustomLogicHumanBuiltin__Move
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Nullable_Vector3__o direction_00;
  System_Nullable_Vector3__Fields local_28;
  
  if (Il2CppMethodInitialized_07545fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_07545fcf = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1b169:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1b169;
    if ((pCVar1->fields).AI != false) {
      __this_00 = (__this->fields).Controller;
      if (direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        uVar4._0_4_ = 0.0;
        uVar4._4_4_ = 0.0;
        uVar3._0_1_ = false;
        uVar3._1_3_ = 0;
        uVar3._4_4_ = 0.0;
      }
      else {
        local_28.hasValue = false;
        local_28._1_3_ = 0;
        local_28.value.fields.x = 0.0;
        local_28.value.fields.y = 0.0;
        local_28.value.fields.z = 0.0;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)&local_28,
                   (UnityEngine_Vector3_o)(direction->fields).Value.fields,
                   (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
        uVar3 = local_28._0_8_;
        uVar4 = local_28.value.fields._4_8_;
      }
      if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_05a1b169;
      direction_00.fields.value.fields.y = (float)uVar4;
      direction_00.fields.value.fields.z = SUB84(uVar4,4);
      direction_00.fields.hasValue = SUB81(uVar3,0);
      direction_00.fields._1_3_ = SUB83(uVar3,1);
      direction_00.fields.value.fields.x = SUB84(uVar3,4);
      Controllers_HumanAIController__Move(__this_00,direction_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$AimAt
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__AimAt (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5a1b170

void CustomLogic_CustomLogicHumanBuiltin__AimAt
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Nullable_Vector3__o position_00;
  System_Nullable_Vector3__Fields local_28;
  
  if (Il2CppMethodInitialized_07545fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_07545fd0 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1b229:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1b229;
    if ((pCVar1->fields).AI != false) {
      __this_00 = (__this->fields).Controller;
      if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        uVar4._0_4_ = 0.0;
        uVar4._4_4_ = 0.0;
        uVar3._0_1_ = false;
        uVar3._1_3_ = 0;
        uVar3._4_4_ = 0.0;
      }
      else {
        local_28.hasValue = false;
        local_28._1_3_ = 0;
        local_28.value.fields.x = 0.0;
        local_28.value.fields.y = 0.0;
        local_28.value.fields.z = 0.0;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)&local_28,
                   (UnityEngine_Vector3_o)(position->fields).Value.fields,
                   (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
        uVar3 = local_28._0_8_;
        uVar4 = local_28.value.fields._4_8_;
      }
      if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_05a1b229;
      position_00.fields.value.fields.y = (float)uVar4;
      position_00.fields.value.fields.z = SUB84(uVar4,4);
      position_00.fields.hasValue = SUB81(uVar3,0);
      position_00.fields._1_3_ = SUB83(uVar3,1);
      position_00.fields.value.fields.x = SUB84(uVar3,4);
      Controllers_HumanAIController__AimAt(__this_00,position_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$Jump
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Jump (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b230

void CustomLogic_CustomLogicHumanBuiltin__Jump
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$HorseMount
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__HorseMount (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool mount, const MethodInfo* method);
// 0x5a1b280

void CustomLogic_CustomLogicHumanBuiltin__HorseMount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool mount,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__HorseMount(__this_00,mount,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b2e0

void CustomLogic_CustomLogicHumanBuiltin__Dodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Dodge(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Reload
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Reload (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b330

void CustomLogic_CustomLogicHumanBuiltin__Reload
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Reload(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$UseGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__UseGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool useGas, const MethodInfo* method);
// 0x5a1b380

void CustomLogic_CustomLogicHumanBuiltin__UseGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool useGas,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
label_05a1b3ce:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_05a1b3ce;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_05a1b3ce;
      (pCVar2->fields)._usingGas = useGas;
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$HorseWalk
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__HorseWalk (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool isWalk, const MethodInfo* method);
// 0x5a1b3e0

void CustomLogic_CustomLogicHumanBuiltin__HorseWalk
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool isWalk,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__HorseWalk(__this_00,isWalk,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dash
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dash (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x5a1b440

void CustomLogic_CustomLogicHumanBuiltin__Dash
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller, __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__Dash
                  (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Reel
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Reel (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x5a1b4b0

void CustomLogic_CustomLogicHumanBuiltin__Reel
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Reel(__this_00,reelAxis,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x5a1b510

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      if ((aimPoint != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller, __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__LaunchHookLeft
                  (__this_00,(UnityEngine_Vector3_o)(aimPoint->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookRight
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x5a1b580

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      if ((aimPoint != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller, __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__LaunchHookRight
                  (__this_00,(UnityEngine_Vector3_o)(aimPoint->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b5f0

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookLeft(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookRight
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b640

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookRight(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookAll
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b690

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookAll(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Attack
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Attack (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool attackOn, const MethodInfo* method);
// 0x5a1b6e0

void CustomLogic_CustomLogicHumanBuiltin__Attack
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool attackOn,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Attack(__this_00,attackOn,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$FindNearestEnemy
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b740

void CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  Characters_ITargetable_o *value;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        value = Controllers_BaseAIController__GetNearestEnemy
                          ((Controllers_BaseAIController_o *)__this_00,(MethodInfo *)0x0);
        Controllers_HumanAIController__set_Target(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Navigation
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Navigation (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b7b0

void CustomLogic_CustomLogicHumanBuiltin__Navigation
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__MoveToPosition(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetParticleEffect
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* effectName, bool enabled, const MethodInfo* method);
// 0x5a1b800

void CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *effectName,bool enabled,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07545fd1 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    bVar2 = System_String__op_Equality(effectName,"Buff1",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        Characters_Human__ToggleBuff1(pCVar1,enabled,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar2 = System_String__op_Equality(effectName,"Buff2",(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).Human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__ToggleBuff2(pCVar1,enabled,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar2 = System_String__op_Equality(effectName,"Fire1",(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pCVar1 = (__this->fields).Human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__ToggleFire1(pCVar1,enabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_ClassName (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b900

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_ClassName
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_07545fd2 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b930

bool CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsStatic (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b940

bool CustomLogic_CustomLogicHumanBuiltin__get_IsStatic
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x5a1b950

bool CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


