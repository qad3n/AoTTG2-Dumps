// Type: CustomLogic.CustomLogicHumanBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicHumanBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicHumanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f56d40

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f80820

void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345698 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicHumanBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Refill>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Refill_b__55_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7eb10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Refill_b__55_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res10 [24];
  
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    local_res10[0] = CustomLogic_CustomLogicHumanBuiltin__Refill(__c,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res10);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__RefillImmediate>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__RefillImmediate_b__56_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7eae0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__RefillImmediate_b__56_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__RefillImmediate(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearHooks>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearHooks_b__57_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cb90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearHooks_b__57_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ClearHooks(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearLeftHook>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearLeftHook_b__58_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cbf0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearLeftHook_b__58_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearRightHook>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearRightHook_b__59_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cc20

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearRightHook_b__59_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ClearRightHook(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountMapObject>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountMapObject_b__60_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e0c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountMapObject_b__60_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool canMountedAttack;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  
  if (Il2CppMethodInitialized_184345699 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345699 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      mapObject = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                            );
      if (1 < (uint)__a->max_length) {
        positionOffset =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          rotationOffset =
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
          canMountedAttack = false;
          uVar1 = (uint)__a->max_length;
          if (3 < (int)uVar1) {
            if (uVar1 < 4) goto label_181f7e20e;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            canMountedAttack =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                           (pIVar2,(MethodInfo_66E400 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
          }
          if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
            CustomLogic_CustomLogicHumanBuiltin__MountMapObject
                      (__c,mapObject,positionOffset,rotationOffset,canMountedAttack,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_181f7e208;
        }
      }
    }
label_181f7e20e:
    ThrowIndexOutOfRangeException();
  }
label_181f7e208:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountTransform>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountTransform_b__61_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e220

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountTransform_b__61_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool canMountedAttack;
  CustomLogic_CustomLogicTransformBuiltin_o *transform;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  
  if (Il2CppMethodInitialized_18434569a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      transform = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_66EB70 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin
                            );
      if (1 < (uint)__a->max_length) {
        positionOffset =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          rotationOffset =
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
          canMountedAttack = false;
          uVar1 = (uint)__a->max_length;
          if (3 < (int)uVar1) {
            if (uVar1 < 4) goto label_181f7e36e;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            canMountedAttack =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                           (pIVar2,(MethodInfo_66E400 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
          }
          if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
            CustomLogic_CustomLogicHumanBuiltin__MountTransform
                      (__c,transform,positionOffset,rotationOffset,canMountedAttack,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_181f7e368;
        }
      }
    }
label_181f7e36e:
    ThrowIndexOutOfRangeException();
  }
label_181f7e368:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unmount>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Unmount_b__62_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f80020

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Unmount_b__62_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool immediate;
  
  if (Il2CppMethodInitialized_18434569b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    immediate = true;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      immediate = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (obj,(MethodInfo_66E400 *)
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
// 0x181f7fb60

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetSpecial_b__63_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *special;
  
  if (Il2CppMethodInitialized_18434569c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569c = '\x01';
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
                        (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetSpecial(__c,special,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ActivateSpecial>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ActivateSpecial_b__64_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c070

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ActivateSpecial_b__64_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeapon>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetWeapon_b__65_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7fc00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetWeapon_b__65_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *weapon;
  
  if (Il2CppMethodInitialized_18434569d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569d = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__c,weapon,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__DisablePerks>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__DisablePerks_b__66_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ce10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__DisablePerks_b__66_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__DisablePerks(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasAIState>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HasAIState_b__67_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7dae0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HasAIState_b__67_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434569e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569e = '\x01';
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
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      local_res18[0] = CustomLogic_CustomLogicHumanBuiltin__HasAIState(__c,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAIState>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetAIState_b__68_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f240

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetAIState_b__68_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *name;
  CustomLogic_UserClassInstance_o *classInstance;
  
  if (Il2CppMethodInitialized_18434569f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434569f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f7f326:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    classInstance = (CustomLogic_UserClassInstance_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f7f326;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      classInstance =
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)
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
// 0x181f7cea0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__GetAIState_b__69_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicHumanBuiltin__GetAIState(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SwitchAIState>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SwitchAIState_b__70_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7fe10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SwitchAIState_b__70_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_1843456a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a0 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SwitchAIState(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCallback>b__71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ResetCallback_b__71_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7eef0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ResetCallback_b__71_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_o *callback;
  CustomLogic_UserMethod_o *method_00;
  
  if (Il2CppMethodInitialized_1843456a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f7efd6:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    callback = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    method_00 = (CustomLogic_UserMethod_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f7efd6;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar2,(MethodInfo_66EB70 *)
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
// 0x181f7e7a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Move_b__72_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  
  if (Il2CppMethodInitialized_1843456a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a2 = '\x01';
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
                          (obj,(MethodInfo_66EB70 *)
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
// 0x181f7c8c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__AimAt_b__73_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (Il2CppMethodInitialized_1843456a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a3 = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
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
// 0x181f7df50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Jump_b__74_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__Jump(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseMount>b__75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseMount_b__75_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7dc90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseMount_b__75_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool mount;
  
  if (Il2CppMethodInitialized_1843456a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    mount = true;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      mount = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
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
// 0x181f7ce40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dodge_b__76_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__Dodge(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reload>b__77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reload_b__77_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ebe0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reload_b__77_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__Reload(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__UseGas>b__78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__UseGas_b__78_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f800c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__UseGas_b__78_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool useGas;
  
  if (Il2CppMethodInitialized_1843456a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a5 = '\x01';
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
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__UseGas(__c,useGas,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseWalk>b__79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseWalk_b__79_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7dd30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseWalk_b__79_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool isWalk;
  
  if (Il2CppMethodInitialized_1843456a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a6 = '\x01';
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
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__HorseWalk(__c,isWalk,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dash>b__80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dash_b__80_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cd70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dash_b__80_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  
  if (Il2CppMethodInitialized_1843456a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a7 = '\x01';
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
                          (obj,(MethodInfo_66EB70 *)
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
// 0x181f7ea40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reel_b__81_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t reelAxis;
  
  if (Il2CppMethodInitialized_1843456a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a8 = '\x01';
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
                         (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Reel(__c,reelAxis,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookLeft>b__82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookLeft_b__82_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7df80

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookLeft_b__82_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  
  if (Il2CppMethodInitialized_1843456a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456a9 = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
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
// 0x181f7e020

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookRight_b__83_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  
  if (Il2CppMethodInitialized_1843456aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456aa = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
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
// 0x181f7eb80

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookLeft_b__84_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookRight>b__85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookRight_b__85_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ebb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookRight_b__85_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookAll>b__86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookAll_b__86_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7eb50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookAll_b__86_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__87_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ca60

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__87_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool attackOn;
  
  if (Il2CppMethodInitialized_1843456ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456ab = '\x01';
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
                         (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
    ;
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Attack(__c,attackOn,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindNearestEnemy>b__88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__FindNearestEnemy_b__88_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7ce70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__FindNearestEnemy_b__88_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Navigation>b__89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Navigation_b__89_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e840

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Navigation_b__89_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__Navigation(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetParticleEffect>b__90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetParticleEffect_b__90_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7fa90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetParticleEffect_b__90_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *effectName;
  
  if (Il2CppMethodInitialized_1843456ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843456ac = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f7fb4e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    effectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (obj,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect(__c,effectName,enabled,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f7fb4e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f34090

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicHumanBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434561b == '\0') {
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
    Il2CppMethodInitialized_18434561b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x664a747d) {
    if (uVar3 < 0x30777bfc) {
      if (uVar3 < 0x1a43a2ad) {
        if (uVar3 < 0xfa61b95) {
          if (uVar3 < 0xbecd2a0) {
            if (uVar3 == 0xa6b8020) {
              bVar2 = System_String__op_Equality(name,"Speed",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345626 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345626 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____getter_12_0
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____setter_12_1
              ;
              goto label_181f34c1d;
            }
            if (uVar3 != 0xbecd29f) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"ClearRightHook",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345655 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345655 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0
            ;
          }
          else if (uVar3 == 0xd469333) {
            bVar2 = System_String__op_Equality(name,"MountMapObject",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345656 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345656 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0
            ;
          }
          else if (uVar3 == 0xe1ef32d) {
            bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345664 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345664 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0
            ;
          }
          else {
            if (uVar3 != 0xfa61b94) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"ReleaseHookLeft",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434566e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434566e = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0
            ;
          }
        }
        else if (uVar3 < 0x155683ff) {
          if (uVar3 == 0xfedf86f) {
            bVar2 = System_String__op_Equality(name,"ShifterLiveTime",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345621 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345621 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____gette
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____sette
            ;
            goto label_181f34c1d;
          }
          if (uVar3 == 0x1366e8ca) {
            bVar2 = System_String__op_Equality(name,"ClearHooks",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345653 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345653 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0
            ;
          }
          else {
            if (uVar3 != 0x155683fe) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"RefillImmediate",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345652 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345652 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0
            ;
          }
        }
        else {
          if (uVar3 == 0x16b793c7) {
            bVar2 = System_String__op_Equality(name,"AllowSkin",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345650 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345650 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____getter_54_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____setter_54_1
            ;
            goto label_181f34c1d;
          }
          if (uVar3 == 0x182eb08c) {
            bVar2 = System_String__op_Equality(name,"SetParticleEffect",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345674 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345674 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0
            ;
          }
          else {
            if (uVar3 != 0x1a43a2ac) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345667 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345667 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0
            ;
          }
        }
      }
      else {
        if (uVar3 < 0x25127d63) {
          if (uVar3 < 0x1af78072) {
            if (uVar3 == 0x1aa86c38) {
              bVar2 = System_String__op_Equality(name,"SpecialCooldownTime",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434561f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434561f = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____g
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____s
              ;
              goto label_181f34c1d;
            }
            if (uVar3 != 0x1af78071) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"RightHookReady",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345647 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345647 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
            ;
          }
          else if (uVar3 == 0x1d66a535) {
            bVar2 = System_String__op_Equality(name,"RightHookPosition",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345649 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345649 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
            ;
          }
          else {
            if (uVar3 != 0x214f33c4) {
              if (uVar3 != 0x25127d62) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"GetAIState",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434565f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
                Il2CppMethodInitialized_18434565f = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0;
              if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_01,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0 =
                   (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0;
              goto label_181f395a1;
            }
            bVar2 = System_String__op_Equality(name,"PivotPosition",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434563f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434563f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
            ;
          }
          goto label_181f345bd;
        }
        if (uVar3 < 0x27bbaff1) {
          if (uVar3 == 0x251ec0b8) {
            bVar2 = System_String__op_Equality(name,"ClearLeftHook",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345654 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345654 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0
            ;
          }
          else {
            if (uVar3 != 0x26f20788) {
              if (uVar3 != 0x27bbaff0) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"MountedMapObject",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345637 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345637 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
              ;
              goto label_181f345bd;
            }
            bVar2 = System_String__op_Equality(name,"DisablePerks",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434565c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434565c = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0
            ;
          }
        }
        else {
          if (uVar3 != 0x29089400) {
            if (uVar3 == 0x2dd6aa84) {
              bVar2 = System_String__op_Equality(name,"CurrentBlade",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434562d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434562d = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____getter_1
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____setter_1
              ;
            }
            else {
              if (uVar3 != 0x30777bfb) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"TargetPosition",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434564d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434564d = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____getter
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____setter
              ;
            }
            goto label_181f34c1d;
          }
          bVar2 = System_String__op_Equality(name,"ReleaseHookAll",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345670 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345670 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0;
        }
      }
    }
    else {
      if (uVar3 < 0x41919632) {
        if (uVar3 < 0x3dd202bc) {
          if (uVar3 < 0x38adb9d5) {
            if (uVar3 == 0x3862ca21) {
              bVar2 = System_String__op_Equality(name,"SpecialCooldown",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345620 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345620 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____gette
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____sette
              ;
            }
            else {
              if (uVar3 != 0x38adb9d4) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"LeftHookEnabled",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345633 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345633 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____gette
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____sette
              ;
            }
          }
          else if (uVar3 == 0x3b3e09bf) {
            bVar2 = System_String__op_Equality(name,"AllowHorse",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434564f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434564f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____getter_53
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____setter_53
            ;
          }
          else if (uVar3 == 0x3d775299) {
            bVar2 = System_String__op_Equality(name,"HorseSpeed",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434562a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434562a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____getter_16
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____setter_16
            ;
          }
          else {
            if (uVar3 != 0x3dd202bb) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"CurrentBladeDurability",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434562b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_40a6478
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434562b = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_40a6478
            ;
          }
        }
        else {
          if (uVar3 < 0x3f43a877) {
            if (uVar3 == 0x3ea939be) {
              bVar2 = System_String__op_Equality(name,"LeftHookReady",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345646 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345646 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
              ;
            }
            else if (uVar3 == 0x3f04971b) {
              bVar2 = System_String__op_Equality(name,"TargetVelocity",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434564e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434564e = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
              ;
            }
            else {
              if (uVar3 != 0x3f43a876) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"HasHookRight",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345645 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345645 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
              ;
            }
            goto label_181f345bd;
          }
          if (uVar3 == 0x3f66c333) {
            bVar2 = System_String__op_Equality(name,"CurrentGas",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345623 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345623 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____getter_9_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____setter_9_1
            ;
          }
          else {
            if (uVar3 == 0x41465646) {
              bVar2 = System_String__op_Equality(name,"Horse",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345627 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345627 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
              ;
              goto label_181f345bd;
            }
            if (uVar3 != 0x41919631) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"MaxAmmoRound",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345630 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345630 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____getter_2
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____setter_2
            ;
          }
        }
        goto label_181f34c1d;
      }
      if (uVar3 < 0x4fc3dee1) {
        if (uVar3 < 0x43399e7b) {
          if (uVar3 == 0x420a2bbb) {
            bVar2 = System_String__op_Equality(name,"IsMounted",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345635 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345635 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
            ;
            goto label_181f345bd;
          }
          if (uVar3 != 0x43399e7a) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"SetSpecial",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345659 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345659 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0;
        }
        else {
          if (uVar3 == 0x46b92be8) {
            bVar2 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434564a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434564a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_48
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_48
            ;
            goto label_181f34c1d;
          }
          if (uVar3 == 0x481546b1) {
            bVar2 = System_String__op_Equality(name,"UseGas",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345668 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345668 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0
            ;
          }
          else {
            if (uVar3 != 0x4fc3dee0) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"FindNearestEnemy",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345672 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345672 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0
            ;
          }
        }
      }
      else if (uVar3 < 0x571689da) {
        if (uVar3 == 0x533f8aab) {
          bVar2 = System_String__op_Equality(name,"ActivateSpecial",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434565a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434565a = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0;
        }
        else if (uVar3 == 0x540059ef) {
          bVar2 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345669 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345669 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0;
        }
        else {
          if (uVar3 != 0x571689d9) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"Reel",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434566b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434566b = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0;
        }
      }
      else if (uVar3 == 0x5aae131e) {
        bVar2 = System_String__op_Equality(name,"SetAIState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434565e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434565e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object
                              );
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0 =
             (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0;
      }
      else if (uVar3 == 0x6250ccf3) {
        bVar2 = System_String__op_Equality(name,"SetWeapon",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434565b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434565b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object
                              );
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0 =
             (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0;
      }
      else {
        if (uVar3 != 0x664a747c) goto label_181f395dd;
        bVar2 = System_String__op_Equality(name,"SwitchAIState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345660 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184345660 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object
                              );
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0 =
             (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0;
      }
    }
  }
  else {
    if (uVar3 < 0xb7c10362) {
      if (uVar3 < 0x8b67f169) {
        if (uVar3 < 0x72ec0423) {
          if (uVar3 < 0x693e9e8d) {
            if (uVar3 != 0x68597615) {
              if (uVar3 != 0x693e9e8c) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"CurrentAmmoRound",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434562f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434562f = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              System_Func_object__object____ctor
                        (__this,(Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____gett
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____sett
              ;
              goto label_181f34c1d;
            }
            bVar2 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434566a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434566a = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0
            ;
          }
          else if (uVar3 == 0x694fcf3e) {
            bVar2 = System_String__op_Equality(name,"HasAIState",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434565d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434565d = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0
            ;
          }
          else if (uVar3 == 0x6c198db1) {
            bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345651 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345651 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0
            ;
          }
          else {
            if (uVar3 != 0x72ec0422) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"MountTransform",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345657 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345657 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0
            ;
          }
          goto label_181f395a1;
        }
        if (uVar3 < 0x7f2c2a35) {
          if (uVar3 == 0x78fba3bd) {
            bVar2 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345625 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345625 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____getter_1
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____setter_1
            ;
          }
          else {
            if (uVar3 != 0x79a5e667) {
              if (uVar3 != 0x7f2c2a34) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345662 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345662 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0;
              if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_01,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0 =
                   (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0;
              goto label_181f395a1;
            }
            bVar2 = System_String__op_Equality(name,"RightHookEnabled",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345634 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345634 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____gett
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____sett
            ;
          }
        }
        else if (uVar3 == 0x80804535) {
          bVar2 = System_String__op_Equality(name,"MaxBlade",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434562e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_18434562e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____getter_20_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____setter_20_1
          ;
        }
        else {
          if (uVar3 == 0x8af5b772) {
            bVar2 = System_String__op_Equality(name,"IsHookedLeft",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345640 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345640 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
            ;
            goto label_181f345bd;
          }
          if (uVar3 != 0x8b67f168) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434564c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_18434564c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____getter_50_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____setter_50_1
          ;
        }
      }
      else {
        if (0x9a811656 < uVar3) {
          if (uVar3 < 0xb3178ff2) {
            if (uVar3 == 0x9f9bfd43) {
              bVar2 = System_String__op_Equality(name,"IsHookingLeft",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345642 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_184345642 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
              ;
            }
            else {
              if (uVar3 == 0xa2ea93f6) {
                bVar2 = System_String__op_Equality(name,"MaxBladeDurability",(MethodInfo *)0x0);
                if (!bVar2) goto label_181f395dd;
                if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
                }
                if (Il2CppMethodInitialized_18434562c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                  Il2CppMethodInitialized_18434562c = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                System_Func_object__object____ctor
                          (__this,(Il2CppObject *)0x0,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____ge
                           ,(MethodInfo_16E67D0 *)0x0);
                __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
                pMVar5 = 
                MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____se
                ;
                goto label_181f34c1d;
              }
              if (uVar3 != 0xb3178ff1) goto label_181f395dd;
              bVar2 = System_String__op_Equality(name,"IsCarried",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434563d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                Il2CppMethodInitialized_18434563d = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
              ;
            }
          }
          else {
            if (uVar3 != 0xb49e22b7) {
              if (uVar3 == 0xb51217d1) {
                bVar2 = System_String__op_Equality(name,"CurrentSpecial",(MethodInfo *)0x0);
                if (!bVar2) goto label_181f395dd;
                if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
                }
                if (Il2CppMethodInitialized_18434561e == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                  Il2CppMethodInitialized_18434561e = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                System_Func_object__object____ctor
                          (__this,(Il2CppObject *)0x0,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____getter
                           ,(MethodInfo_16E67D0 *)0x0);
                __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
                pMVar5 = 
                MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____setter
                ;
              }
              else {
                if (uVar3 != 0xb7c10361) goto label_181f395dd;
                bVar2 = System_String__op_Equality(name,"Weapon",(MethodInfo *)0x0);
                if (!bVar2) goto label_181f395dd;
                if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
                }
                if (Il2CppMethodInitialized_18434561d == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                  Il2CppMethodInitialized_18434561d = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
                System_Func_object__object____ctor
                          (__this,(Il2CppObject *)0x0,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____getter_3_0
                           ,(MethodInfo_16E67D0 *)0x0);
                __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
                pMVar5 = 
                MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____setter_3_1
                ;
              }
              goto label_181f34c1d;
            }
            bVar2 = System_String__op_Equality(name,"Pivot",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434563e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434563e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
            ;
          }
label_181f345bd:
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin
                                );
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
          goto label_181f34c3f;
        }
        if (uVar3 < 0x8da10a04) {
          if (uVar3 == 0x8ba9331d) {
            bVar2 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345671 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345671 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0 =
                 (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0
            ;
            goto label_181f395a1;
          }
          if (uVar3 != 0x8da10a03) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"AutoRefillGas",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345639 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_184345639 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____setter
          ;
        }
        else {
          if (uVar3 == 0x8f898d1d) {
            bVar2 = System_String__op_Equality(name,"MountedTransform",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345638 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345638 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
            ;
            goto label_181f345bd;
          }
          if (uVar3 == 0x90cf188a) {
            bVar2 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434564b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434564b = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_49_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_49_1
            ;
          }
          else {
            if (uVar3 != 0x9a811656) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"MaxGas",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345624 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345624 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____getter_10_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____setter_10_1
            ;
          }
        }
      }
label_181f34c1d:
      System_Action_object__object____ctor
                (__this_02,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
label_181f34c3f:
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)__this_02,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
    if (uVar3 < 0xd0b62b1f) {
      if (uVar3 < 0xc52547e8) {
        if (uVar3 < 0xbad517ad) {
          if (uVar3 == 0xb90ee63d) {
            bVar2 = System_String__op_Equality(name,"CurrentAmmoLeft",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345631 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345631 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____gette
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____sette
            ;
            goto label_181f34c1d;
          }
          if (uVar3 != 0xbad517ac) {
label_181f395dd:
            pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanBuiltin not found");
            str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
            pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
            pMVar5 = il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_CreateMemberBinding);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
          }
          bVar2 = System_String__op_Equality(name,"LaunchHookLeft",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434566c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434566c = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0;
        }
        else {
          if (uVar3 == 0xbe425288) {
            bVar2 = System_String__op_Equality(name,"SpecialCooldownRatio",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345622 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345622 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
            ;
            goto label_181f345bd;
          }
          if (uVar3 == 0xc3879128) {
            bVar2 = System_String__op_Equality(name,"HorseFollowEnabled",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345628 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345628 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____ge
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____se
            ;
            goto label_181f34c1d;
          }
          if (uVar3 != 0xc52547e7) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345665 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345665 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0;
        }
      }
      else {
        if (0xcff18f3b < uVar3) {
          if (uVar3 == 0xcff57e4c) {
            bVar2 = System_String__op_Equality(name,"IsHookingRight",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345643 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345643 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
            ;
          }
          else {
            if (uVar3 == 0xd08919c3) {
              bVar2 = System_String__op_Equality(name,"Navigation",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f395dd;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345673 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345673 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0;
              if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
              if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_01,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0 =
                   (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0;
              goto label_181f395a1;
            }
            if (uVar3 != 0xd0b62b1e) goto label_181f395dd;
            bVar2 = System_String__op_Equality(name,"HorseTransform",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345629 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345629 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
            ;
          }
          goto label_181f345bd;
        }
        if (uVar3 == 0xc899a893) {
          bVar2 = System_String__op_Equality(name,"AimAt",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345663 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345663 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0;
        }
        else {
          if (uVar3 == 0xcad1beb0) {
            bVar2 = System_String__op_Equality(name,"CanDodge",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f395dd;
            if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434563a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434563a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____getter_32_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____setter_32_1
            ;
            goto label_181f34c1d;
          }
          if (uVar3 != 0xcff18f3b) goto label_181f395dd;
          bVar2 = System_String__op_Equality(name,"ResetCallback",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345661 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345661 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0;
        }
      }
      goto label_181f395a1;
    }
    if (uVar3 < 0xe2a0bd4c) {
      if (uVar3 < 0xdc120449) {
        if (uVar3 == 0xd66e6cc1) {
          bVar2 = System_String__op_Equality(name,"ReleaseHookRight",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434566f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434566f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0;
          goto label_181f395a1;
        }
        if (uVar3 == 0xd8e7f61f) {
          bVar2 = System_String__op_Equality(name,"IsHookedRight",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345641 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
            Il2CppMethodInitialized_184345641 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
          ;
          goto label_181f345bd;
        }
        if (uVar3 != 0xdc120448) goto label_181f395dd;
        bVar2 = System_String__op_Equality(name,"InvincibleTimeLeft",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434563c == '\0') {
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
          Il2CppMethodInitialized_18434563c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____ge
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____se
        ;
      }
      else if (uVar3 == 0xdca94c5c) {
        bVar2 = System_String__op_Equality(name,"IsInvincible",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434563b == '\0') {
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
          Il2CppMethodInitialized_18434563b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____getter_3
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____setter_3
        ;
      }
      else if (uVar3 == 0xe27f342a) {
        bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434561c == '\0') {
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
          Il2CppMethodInitialized_18434561c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2_1
        ;
      }
      else {
        if (uVar3 != 0xe2a0bd4b) goto label_181f395dd;
        bVar2 = System_String__op_Equality(name,"MaxAmmoTotal",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345632 == '\0') {
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
          Il2CppMethodInitialized_184345632 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____getter_2
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____setter_2
        ;
      }
      goto label_181f34c1d;
    }
    if (0xf526d670 < uVar3) {
      if (uVar3 == 0xf8b1e70c) {
        bVar2 = System_String__op_Equality(name,"LeftHookPosition",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345648 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          Il2CppMethodInitialized_184345648 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
        ;
      }
      else {
        if (uVar3 == 0xfa055a2b) {
          bVar2 = System_String__op_Equality(name,"Unmount",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f395dd;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345658 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345658 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
          if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9
          ;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0 =
               (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0;
          goto label_181f395a1;
        }
        if (uVar3 != 0xfc93affd) goto label_181f395dd;
        bVar2 = System_String__op_Equality(name,"HasHookLeft",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345644 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          Il2CppMethodInitialized_184345644 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
        ;
      }
      goto label_181f345bd;
    }
    if (uVar3 == 0xf29eaab9) {
      bVar2 = System_String__op_Equality(name,"LaunchHookRight",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f395dd;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434566d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434566d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0 =
           (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0;
    }
    else {
      if (uVar3 == 0xf41dd7ef) {
        bVar2 = System_String__op_Equality(name,"MountState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f395dd;
        if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345636 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
          Il2CppMethodInitialized_184345636 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object)
        ;
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
        ;
        goto label_181f345bd;
      }
      if (uVar3 != 0xf526d670) goto label_181f395dd;
      bVar2 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f395dd;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345666 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345666 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f395a9;
      if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0 =
           (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0;
    }
  }
label_181f395a1:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181f395a9:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f4ac20

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434561c == '\0') {
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
    Il2CppMethodInitialized_18434561c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Weapon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon (const MethodInfo* method);
// 0x181f4c4d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434561d == '\0') {
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
    Il2CppMethodInitialized_18434561d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Weapon_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial (const MethodInfo* method);
// 0x181f472a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434561e == '\0') {
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
    Il2CppMethodInitialized_18434561e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentSpecial_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime (const MethodInfo* method);
// 0x181f4b620

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434561f == '\0') {
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
    Il2CppMethodInitialized_18434561f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownTime_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown (const MethodInfo* method);
// 0x181f4b710

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345620 == '\0') {
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
    Il2CppMethodInitialized_184345620 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldown_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__ShifterLiveTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime (const MethodInfo* method);
// 0x181f4b490

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345621 == '\0') {
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
    Il2CppMethodInitialized_184345621 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__ShifterLiveTime_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownRatio
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio (const MethodInfo* method);
// 0x181f4b580

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345622 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__SpecialCooldownRatio_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas (const MethodInfo* method);
// 0x181f471b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345623 == '\0') {
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
    Il2CppMethodInitialized_184345623 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentGas_g____setter_9_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas (const MethodInfo* method);
// 0x181f4a220

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345624 == '\0') {
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
    Il2CppMethodInitialized_184345624 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxGas_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x181f464e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345625 == '\0') {
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
    Il2CppMethodInitialized_184345625 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Acceleration_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Speed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed (const MethodInfo* method);
// 0x181f4b800

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345626 == '\0') {
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
    Il2CppMethodInitialized_184345626 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Speed_g____setter_12_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Horse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Horse (const MethodInfo* method);
// 0x181f48c40

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Horse(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345627 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Horse_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseFollowEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled (const MethodInfo* method);
// 0x181f489c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345628 == '\0') {
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
    Il2CppMethodInitialized_184345628 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseFollowEnabled_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform (const MethodInfo* method);
// 0x181f48ba0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345629 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseTransform_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed (const MethodInfo* method);
// 0x181f48ab0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562a == '\0') {
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
    Il2CppMethodInitialized_18434562a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____getter_16
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HorseSpeed_g____setter_16
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability (const MethodInfo* method);
// 0x181f46fd0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_40a6478
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_18434562b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBladeDurability_g_40a6478
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability (const MethodInfo* method);
// 0x181f4a040

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562c == '\0') {
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
    Il2CppMethodInitialized_18434562c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBladeDurability_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade (const MethodInfo* method);
// 0x181f470c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562d == '\0') {
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
    Il2CppMethodInitialized_18434562d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentBlade_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade (const MethodInfo* method);
// 0x181f4a130

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562e == '\0') {
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
    Il2CppMethodInitialized_18434562e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxBlade_g____setter_20_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound (const MethodInfo* method);
// 0x181f46e40

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434562f == '\0') {
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
    Il2CppMethodInitialized_18434562f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoRound_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound (const MethodInfo* method);
// 0x181f49e60

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345630 == '\0') {
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
    Il2CppMethodInitialized_184345630 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoRound_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft (const MethodInfo* method);
// 0x181f46d50

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345631 == '\0') {
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
    Il2CppMethodInitialized_184345631 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CurrentAmmoLeft_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoTotal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal (const MethodInfo* method);
// 0x181f49f50

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345632 == '\0') {
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
    Il2CppMethodInitialized_184345632 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MaxAmmoTotal_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled (const MethodInfo* method);
// 0x181f49aa0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345633 == '\0') {
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
    Il2CppMethodInitialized_184345633 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookEnabled_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled (const MethodInfo* method);
// 0x181f4ae00

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345634 == '\0') {
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
    Il2CppMethodInitialized_184345634 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookEnabled_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsMounted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted (const MethodInfo* method);
// 0x181f49730

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345635 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsMounted_g____getter_27_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState (const MethodInfo* method);
// 0x181f4a400

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345636 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountState_g____getter_28
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject (const MethodInfo* method);
// 0x181f4a4a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345637 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedMapObject_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform (const MethodInfo* method);
// 0x181f4a540

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345638 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__MountedTransform_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AutoRefillGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas (const MethodInfo* method);
// 0x181f46990

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345639 == '\0') {
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
    Il2CppMethodInitialized_184345639 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AutoRefillGas_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CanDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge (const MethodInfo* method);
// 0x181f46a80

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434563a == '\0') {
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
    Il2CppMethodInitialized_18434563a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____getter_32_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__CanDodge_g____setter_32_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsInvincible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible (const MethodInfo* method);
// 0x181f49320

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434563b == '\0') {
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
    Il2CppMethodInitialized_18434563b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsInvincible_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__InvincibleTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft (const MethodInfo* method);
// 0x181f48dd0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434563c == '\0') {
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
    Il2CppMethodInitialized_18434563c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__InvincibleTimeLeft_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsCarried
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried (const MethodInfo* method);
// 0x181f49000

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434563d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_18434563d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsCarried_g____getter_35_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Pivot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot (const MethodInfo* method);
// 0x181f4a810

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434563e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_18434563e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Pivot_g____getter_36_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__PivotPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition (const MethodInfo* method);
// 0x181f4a770

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434563f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_18434563f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__PivotPosition_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft (const MethodInfo* method);
// 0x181f490a0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345640 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedLeft_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight (const MethodInfo* method);
// 0x181f49140

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345641 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookedRight_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft (const MethodInfo* method);
// 0x181f491e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345642 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345642 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingLeft_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight (const MethodInfo* method);
// 0x181f49280

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345643 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345643 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__IsHookingRight_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft (const MethodInfo* method);
// 0x181f486f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345644 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345644 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookLeft_g____getter_42
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight (const MethodInfo* method);
// 0x181f48790

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345645 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__HasHookRight_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady (const MethodInfo* method);
// 0x181f49c30

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345646 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345646 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookReady_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady (const MethodInfo* method);
// 0x181f4af90

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345647 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookReady_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition (const MethodInfo* method);
// 0x181f49b90

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345648 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__LeftHookPosition_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition (const MethodInfo* method);
// 0x181f4aef0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_184345649 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__RightHookPosition_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x181f477f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434564a == '\0') {
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
    Il2CppMethodInitialized_18434564a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_48
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_48
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x181f478e0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434564b == '\0') {
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
    Il2CppMethodInitialized_18434564b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_49_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_49_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Target
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target (const MethodInfo* method);
// 0x181f4bc10

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434564c == '\0') {
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
    Il2CppMethodInitialized_18434564c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____getter_50_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__Target_g____setter_50_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition (const MethodInfo* method);
// 0x181f4ba80

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434564d == '\0') {
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
    Il2CppMethodInitialized_18434564d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetPosition_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity (const MethodInfo* method);
// 0x181f4bb70

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434564e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
    Il2CppMethodInitialized_18434564e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__TargetVelocity_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse (const MethodInfo* method);
// 0x181f465d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434564f == '\0') {
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
    Il2CppMethodInitialized_18434564f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____getter_53
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowHorse_g____setter_53
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowSkin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin (const MethodInfo* method);
// 0x181f466c0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin(MethodInfo *method)

{
  System_Func_CustomLogicHumanBuiltin__object__o *__this;
  System_Action_CustomLogicHumanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345650 == '\0') {
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
    Il2CppMethodInitialized_184345650 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____getter_54_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicHumanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings___CreatePropertyBinding__AllowSkin_g____setter_54_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Refill
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill (const MethodInfo* method);
// 0x181f444b0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345651 == '\0') {
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
    Il2CppMethodInitialized_184345651 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Refill_b__55_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__55_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__RefillImmediate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate (const MethodInfo* method);
// 0x181f44390

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345652 == '\0') {
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
    Il2CppMethodInitialized_184345652 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__RefillImmediate_b__56_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__56_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearHooks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks (const MethodInfo* method);
// 0x181f40b40

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345653 == '\0') {
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
    Il2CppMethodInitialized_184345653 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearHooks_b__57_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__57_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearLeftHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook (const MethodInfo* method);
// 0x181f40c60

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345654 == '\0') {
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
    Il2CppMethodInitialized_184345654 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearLeftHook_b__58_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__58_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearRightHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook (const MethodInfo* method);
// 0x181f40d80

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345655 == '\0') {
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
    Il2CppMethodInitialized_184345655 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ClearRightHook_b__59_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__59_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject (const MethodInfo* method);
// 0x181f42f10

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345656 == '\0') {
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
    Il2CppMethodInitialized_184345656 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountMapObject_b__60_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__60_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform (const MethodInfo* method);
// 0x181f43030

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345657 == '\0') {
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
    Il2CppMethodInitialized_184345657 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__MountTransform_b__61_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__61_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Unmount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount (const MethodInfo* method);
// 0x181f45f40

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345658 == '\0') {
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
    Il2CppMethodInitialized_184345658 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Unmount_b__62_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__62_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial (const MethodInfo* method);
// 0x181f453e0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345659 == '\0') {
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
    Il2CppMethodInitialized_184345659 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetSpecial_b__63_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__63_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ActivateSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial (const MethodInfo* method);
// 0x181f40200

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565a == '\0') {
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
    Il2CppMethodInitialized_18434565a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ActivateSpecial_b__64_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__64_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetWeapon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon (const MethodInfo* method);
// 0x181f45620

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565b == '\0') {
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
    Il2CppMethodInitialized_18434565b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetWeapon_b__65_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__65_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__DisablePerks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks (const MethodInfo* method);
// 0x181f41210

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565c == '\0') {
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
    Il2CppMethodInitialized_18434565c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__DisablePerks_b__66_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__66_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HasAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState (const MethodInfo* method);
// 0x181f42350

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565d == '\0') {
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
    Il2CppMethodInitialized_18434565d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HasAIState_b__67_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__67_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState (const MethodInfo* method);
// 0x181f44f40

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565e == '\0') {
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
    Il2CppMethodInitialized_18434565e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetAIState_b__68_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__68_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__GetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState (const MethodInfo* method);
// 0x181f41a30

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434565f == '\0') {
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
    Il2CppMethodInitialized_18434565f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__GetAIState_b__69_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__69_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SwitchAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState (const MethodInfo* method);
// 0x181f45cf0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345660 == '\0') {
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
    Il2CppMethodInitialized_184345660 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SwitchAIState_b__70_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__70_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ResetCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback (const MethodInfo* method);
// 0x181f44bc0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345661 == '\0') {
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
    Il2CppMethodInitialized_184345661 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ResetCallback_b__71_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__71_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x181f436f0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345662 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Move_b__72_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__72_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__AimAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt (const MethodInfo* method);
// 0x181f408e0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345663 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__AimAt_b__73_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__73_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Jump
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump (const MethodInfo* method);
// 0x181f42a50

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345664 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Jump_b__74_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__74_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseMount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount (const MethodInfo* method);
// 0x181f42470

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345665 == '\0') {
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
    Il2CppMethodInitialized_184345665 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseMount_b__75_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__75_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dodge
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge (const MethodInfo* method);
// 0x181f41330

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345666 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dodge_b__76_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__76_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reload
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload (const MethodInfo* method);
// 0x181f44960

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345667 == '\0') {
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
    Il2CppMethodInitialized_184345667 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reload_b__77_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__77_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__UseGas
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas (const MethodInfo* method);
// 0x181f46060

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345668 == '\0') {
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
    Il2CppMethodInitialized_184345668 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__UseGas_b__78_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__78_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseWalk
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk (const MethodInfo* method);
// 0x181f425a0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345669 == '\0') {
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
    Il2CppMethodInitialized_184345669 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__HorseWalk_b__79_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__79_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dash
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash (const MethodInfo* method);
// 0x181f410e0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434566a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Dash_b__80_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__80_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel (const MethodInfo* method);
// 0x181f44260

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434566b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Reel_b__81_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__81_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft (const MethodInfo* method);
// 0x181f42b80

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566c == '\0') {
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
    Il2CppMethodInitialized_18434566c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookLeft_b__82_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__82_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight (const MethodInfo* method);
// 0x181f42cb0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566d == '\0') {
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
    Il2CppMethodInitialized_18434566d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__LaunchHookRight_b__83_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__83_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft (const MethodInfo* method);
// 0x181f44700

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566e == '\0') {
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
    Il2CppMethodInitialized_18434566e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookLeft_b__84_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__84_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight (const MethodInfo* method);
// 0x181f44830

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434566f == '\0') {
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
    Il2CppMethodInitialized_18434566f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookRight_b__85_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__85_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll (const MethodInfo* method);
// 0x181f445d0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345670 == '\0') {
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
    Il2CppMethodInitialized_184345670 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__ReleaseHookAll_b__86_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__86_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x181f40a10

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345671 == '\0') {
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
    Il2CppMethodInitialized_184345671 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Attack_b__87_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__87_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__FindNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy (const MethodInfo* method);
// 0x181f416b0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345672 == '\0') {
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
    Il2CppMethodInitialized_184345672 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__FindNearestEnemy_b__88_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__88_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Navigation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation (const MethodInfo* method);
// 0x181f43940

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345673 == '\0') {
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
    Il2CppMethodInitialized_184345673 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__Navigation_b__89_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__89_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetParticleEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect (const MethodInfo* method);
// 0x181f452b0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345674 == '\0') {
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
    Il2CppMethodInitialized_184345674 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c___CreateMethodBinding__SetParticleEffect_b__90_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0 =
         (System_Func_CustomLogicHumanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings_c->static_fields->__9__90_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f4c870

void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345675 == '\0') {
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
    Il2CppMethodInitialized_184345675 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Weapon",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentSpecial",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldownTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterLiveTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialCooldownRatio",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentGas",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxGas",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acceleration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Speed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseFollowEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentBladeDurability",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxBladeDurability",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentBlade",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxBlade",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAmmoRound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxAmmoRound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAmmoLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxAmmoTotal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMounted",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountedMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountedTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AutoRefillGas",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsInvincible",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InvincibleTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCarried",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pivot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PivotPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookedLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookedRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookingLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHookingRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasHookLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasHookRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookReady",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookReady",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHookPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHookPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusRange",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Target",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetVelocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AllowHorse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AllowSkin",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RefillImmediate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearHooks",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearLeftHook",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearRightHook",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unmount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSpecial",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActivateSpecial",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetWeapon",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DisablePerks",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasAIState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAIState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAIState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SwitchAIState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCallback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Move",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AimAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseGas",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseWalk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reel",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LaunchHookLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LaunchHookRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReleaseHookAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindNearestEnemy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Navigation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetParticleEffect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3df90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = (*(__i->klass->vtable)._13_get_Position.methodPtr)
                       (__i,(__i->klass->vtable)._13_get_Position.method);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e0f0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345676 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    (*(__i->klass->vtable)._14_set_Position.methodPtr)
              (__i,pCVar1,(__i->klass->vtable)._14_set_Position.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____getter_3_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f40100

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____getter_3_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_o *pSVar3;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanWeapon);
    Il2CppMethodInitialized_1843455ee = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Setup, pCVar2 != (Characters_HumanSetup_o *)0x0)) {
    local_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanWeapon;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = (pCVar2->fields).Weapon;
    pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____setter_3_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f40180

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____setter_3_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *weapon;
  
  if (Il2CppMethodInitialized_184345677 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345677 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  weapon = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__i,weapon,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____getter_4_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3aa10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____getter_4_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    return (Il2CppObject *)(pCVar1->fields).CurrentSpecial;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____setter_4_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3aa40

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____setter_4_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  System_String_o *special;
  
  if (Il2CppMethodInitialized_184345678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345678 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  special = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3aae1;
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3aae1:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3eed0

Il2CppObject*
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0(CustomLogic_CustomLogicHumanBuiltin_o* __i, MethodInfo* method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
      local_res8[0] = 0.0;
    }
    else {
      local_res8[0] = Characters_BaseUseable__GetCooldownRatio((pCVar1->fields).Special,(MethodInfo *)0x0);
    }
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ef30

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  float ratio;
  
  if (Il2CppMethodInitialized_184345679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345679 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    if ((pCVar1->fields).Special != (Characters_BaseUseable_o *)0x0) {
      ratio = 0.0;
      if (0.0 <= fVar2) {
        ratio = fVar2;
      }
      Characters_BaseUseable__SetCooldownRatio((pCVar1->fields).Special,ratio,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____getter_6_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3efd0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____getter_6_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
      local_res8[0] = 0.0;
    }
    else {
      local_res8[0] = (((pCVar1->fields).Special)->fields).Cooldown;
    }
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____setter_6_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f020

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____setter_6_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434567a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    if ((pCVar1->fields).Special != (Characters_BaseUseable_o *)0x0) {
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      (((pCVar1->fields).Special)->fields).Cooldown = fVar3;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ed30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  Il2CppObject *pIVar5;
  float local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3edcb:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    Il2CppMethodInitialized_1843455ef = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3edcb;
  if ((pCVar2->fields).Special != (Characters_BaseUseable_o *)0x0) {
    pCVar3 = (pCVar2->fields).Special;
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
       ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
      local_res8[0] = (*(uint32_t *)((char *)pCVar3 + 0x48));
      goto label_181f3edae;
    }
  }
  local_res8[0] = 0.0;
label_181f3edae:
  pIVar5 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar5;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ede0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434567b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
      Il2CppMethodInitialized_1843455f0 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      if ((pCVar2->fields).Special != (Characters_BaseUseable_o *)0x0) {
        pCVar3 = (pCVar2->fields).Special;
        pCVar4 = pCVar3->klass;
        bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
           ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
          (*(uint32_t *)((char *)pCVar3 + 0x48)) = fVar5;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownRatio>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3eed0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
      local_res8[0] = 0.0;
    }
    else {
      local_res8[0] = Characters_BaseUseable__GetCooldownRatio((pCVar1->fields).Special,(MethodInfo *)0x0);
    }
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____getter_9_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a920

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____getter_9_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Il2CppObject *pIVar3;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).CurrentGas;
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____setter_9_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a970

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____setter_9_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18434567c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    fVar4 = (pCVar2->fields).MaxGas;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    (pCVar2->fields).CurrentGas = fVar4;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____getter_10_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d8e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____getter_10_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Il2CppObject *pIVar3;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).MaxGas;
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____setter_10_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d930

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____setter_10_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *__this;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434567d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
      (__this = (pCVar1->fields).Stats, __this != (Characters_HumanStats_o *)0x0)) &&
     (((__this->fields).MaxGas = fVar2, pCVar1 != (Characters_Human_o *)0x0 &&
      (__this != (Characters_HumanStats_o *)0x0)))) {
    Characters_HumanStats__UpdateStats(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____getter_11_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f39770

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____getter_11_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Il2CppObject *pIVar3;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).Acceleration;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____setter_11_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f397c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____setter_11_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_18434567e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    (pCVar2->fields).Acceleration = iVar3;
    pCVar1 = (__i->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__UpdateStats(pCVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____getter_12_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f0c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____getter_12_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Il2CppObject *pIVar3;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).Speed;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____setter_12_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f110

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____setter_12_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_18434567f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434567f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    (pCVar2->fields).Speed = iVar3;
    pCVar1 = (__i->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__UpdateStats(pCVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Horse>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Horse_g____getter_13_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c560

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Horse_g____getter_13_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicHorseBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f1 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pCVar2 = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return (Il2CppObject *)0x0;
      }
      pCVar1 = (__i->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        pCVar2 = (pCVar1->fields).Horse;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
        CustomLogic_CustomLogicCharacterBuiltin___ctor
                  ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)pCVar2,
                   (MethodInfo *)0x0);
        (__this->fields).Horse = pCVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Horse,pCVar2);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____getter_14_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c0e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____getter_14_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this;
  bool bVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f2 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      __this = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (Characters_Horse_o *)0x0) goto label_181f3c16c;
        local_res8[0] = Characters_Horse__get_FollowingEnabled(__this,(MethodInfo *)0x0);
      }
      else {
        local_res8[0] = false;
      }
      pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
      return pIVar3;
    }
  }
label_181f3c16c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____setter_14_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3c180

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____setter_14_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this;
  bool value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345680 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f3 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      __this = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (Characters_Horse_o *)0x0) goto label_181f3c255;
        Characters_Horse__set_FollowingEnabled(__this,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_181f3c255:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseTransform>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseTransform_g____getter_15_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c480

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseTransform_g____getter_15_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f4 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pCVar2 = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return (Il2CppObject *)0x0;
      }
      pCVar1 = (__i->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,(MethodInfo *)0x0);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____getter_16_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c260

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____getter_16_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  float local_res8 [2];
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f5 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pCVar2 = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pCVar1 = (__i->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        if (bVar4) {
          pCVar2 = (pCVar1->fields).Horse;
          if (pCVar2 == (Characters_Horse_o *)0x0) goto label_181f3c321;
          local_res8[0] = Characters_Horse__get_RunSpeed(pCVar2,(MethodInfo *)0x0);
        }
        else {
          pCVar3 = (pCVar1->fields).Stats;
          if (pCVar3 == (Characters_HumanStats_o *)0x0) goto label_181f3c321;
          local_res8[0] = (pCVar3->fields).HorseSpeed;
        }
        pIVar5 = il2cpp_value_box(g_data_184354e38,local_res8);
        return pIVar5;
      }
    }
  }
label_181f3c321:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____setter_16_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3c330

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____setter_16_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  float value;
  
  if (Il2CppMethodInitialized_184345681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345681 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843455f6 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        bVar4 = Controllers_HorseController__IsFinite(value,(MethodInfo *)0x0);
        if ((bVar4) && (0.0 < value)) {
          pCVar1 = (__i->fields).Human;
          if ((pCVar1 == (Characters_Human_o *)0x0) ||
             ((pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0 ||
              ((pCVar2->fields).HorseSpeed = value, pCVar1 == (Characters_Human_o *)0x0))))
          goto label_181f3c470;
          pCVar3 = (pCVar1->fields).Horse;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            pCVar1 = (__i->fields).Human;
            if ((pCVar1 == (Characters_Human_o *)0x0) ||
               (pCVar3 = (pCVar1->fields).Horse, pCVar3 == (Characters_Horse_o *)0x0)) goto label_181f3c470;
            Characters_Horse__set_RunSpeed(pCVar3,value,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
label_181f3c470:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____getter_17_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a520

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____getter_17_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined4 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3a5b6:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455f7 = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3a5b6;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      local_res8[0] = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
      goto label_181f3a599;
    }
  }
  local_res8[0] = 0;
label_181f3a599:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____setter_17_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a5c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____setter_17_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseUseable_o *pCVar3;
  System_String_o *sound;
  Characters_Human_o *pCVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184345682 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345682 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455f8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
      Il2CppMethodInitialized_1843455f8 = '\x01';
    }
    pCVar4 = (__i->fields).Human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar4->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
        if ((bVar2 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
          fVar1 = *(float *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
          if (fVar5 < 0.0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
            if (fVar5 <= *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40))) {
              fVar6 = fVar5;
            }
          }
          *(float *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) = fVar6;
          if (fVar1 <= 0.0) {
            if (fVar6 <= 0.0) {
              return;
            }
            pCVar4 = (__i->fields).Human;
            if (pCVar4 == (Characters_Human_o *)0x0) goto label_181f3a78d;
            Characters_Human__ToggleBlades(pCVar4,true,(MethodInfo *)0x0);
            pCVar4 = (__i->fields).Human;
            if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
            }
            if (pCVar4 == (Characters_Human_o *)0x0) goto label_181f3a78d;
            sound = TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
          }
          else {
            if (0.0 < fVar6) {
              return;
            }
            pCVar4 = (__i->fields).Human;
            if (pCVar4 == (Characters_Human_o *)0x0) goto label_181f3a78d;
            Characters_Human__ToggleBlades(pCVar4,false,(MethodInfo *)0x0);
            pCVar4 = (__i->fields).Human;
            if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
            }
            if (pCVar4 == (Characters_Human_o *)0x0) goto label_181f3a78d;
            sound = TypeInfo_Characters_HumanSounds->static_fields->BladeBreak;
          }
          Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar4,sound,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
label_181f3a78d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____getter_18_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d5d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____getter_18_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined4 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3d666:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455f9 = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3d666;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      local_res8[0] = *(undefined4 *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
      goto label_181f3d649;
    }
  }
  local_res8[0] = 0;
label_181f3d649:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____setter_18_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d670

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____setter_18_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345683 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345683 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455fa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
      Il2CppMethodInitialized_1843455fa = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
          *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = fVar4;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____getter_19_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a7a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____getter_19_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3a82d:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fb = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3a82d;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      local_res8[0] = (*(uint32_t *)((char *)pCVar3 + 0x4c));
      goto label_181f3a812;
    }
  }
  local_res8[0] = 0;
label_181f3a812:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____setter_19_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a840

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____setter_19_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184345684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345684 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = (float)CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455fc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
      Il2CppMethodInitialized_1843455fc = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
          fVar5 = (*(uint32_t *)((char *)pCVar3 + 0x48));
          if ((int)fVar4 < (int)fVar5) {
            fVar5 = fVar4;
          }
          (*(uint32_t *)((char *)pCVar3 + 0x4c)) = (int32_t)fVar5;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____getter_20_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d760

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____getter_20_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3d7ed:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fd = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3d7ed;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      local_res8[0] = (*(uint32_t *)((char *)pCVar3 + 0x48));
      goto label_181f3d7d2;
    }
  }
  local_res8[0] = 0.0;
label_181f3d7d2:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____setter_20_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d800

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____setter_20_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345685 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = (float)CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843455fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
      Il2CppMethodInitialized_1843455fe = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
          (*(uint32_t *)((char *)pCVar3 + 0x48)) = fVar4;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____getter_21_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a370

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____getter_21_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3a3fd:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843455ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_1843455ff = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3a3fd;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      local_res8[0] = (*(uint32_t *)((char *)pCVar3 + 0x4c));
      goto label_181f3a3e2;
    }
  }
  local_res8[0] = 0;
label_181f3a3e2:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____setter_21_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a410

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____setter_21_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184345686 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345686 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar5 = (float)CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345600 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
      Il2CppMethodInitialized_184345600 = '\x01';
    }
    pCVar3 = (__i->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      pCVar4 = (pCVar3->fields).Weapon;
      if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
           ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
          fVar2 = (*(uint32_t *)((char *)pCVar4 + 0x48));
          if ((int)fVar2 < (int)fVar5) {
            fVar5 = fVar2;
          }
          (*(uint32_t *)((char *)pCVar4 + 0x4c)) = (int32_t)fVar5;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____getter_22_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d2d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____getter_22_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3d35d:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345601 = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3d35d;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      local_res8[0] = (*(uint32_t *)((char *)pCVar3 + 0x48));
      goto label_181f3d342;
    }
  }
  local_res8[0] = 0.0;
label_181f3d342:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____setter_22_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d370

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____setter_22_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345687 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345687 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = (float)CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345602 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
      Il2CppMethodInitialized_184345602 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
          (*(uint32_t *)((char *)pCVar3 + 0x48)) = fVar4;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____getter_23_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a1f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____getter_23_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined4 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3a27d:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345603 = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3a27d;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      local_res8[0] = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
      goto label_181f3a262;
    }
  }
  local_res8[0] = 0;
label_181f3a262:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____setter_23_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a290

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____setter_23_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184345688 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345688 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345604 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
      Il2CppMethodInitialized_184345604 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
          if (*(int *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) < iVar4) {
            iVar4 = *(int *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
          }
          *(int32_t *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) = iVar4;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____getter_24_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d450

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____getter_24_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined4 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3d4dd:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345605 = '\x01';
  }
  pCVar2 = (__i->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f3d4dd;
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      local_res8[0] = *(undefined4 *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
      goto label_181f3d4c2;
    }
  }
  local_res8[0] = 0;
label_181f3d4c2:
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____setter_24_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d4f0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____setter_24_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184345689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345689 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345606 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
      Il2CppMethodInitialized_184345606 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar3 = (pCVar2->fields).Weapon;
      if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
        bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
          *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = iVar4;
        }
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____getter_25_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cfd0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____getter_25_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).Enabled;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____setter_25_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d020

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____setter_25_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434568a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    (pCVar2->fields).Enabled = bVar3;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____getter_26_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e390

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____getter_26_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = (pCVar2->fields).Enabled;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____setter_26_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e3e0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____setter_26_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434568b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    (pCVar2->fields).Enabled = bVar3;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsMounted>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsMounted_g____getter_27_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cd40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsMounted_g____getter_27_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).MountState == 2;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountState>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountState_g____getter_28_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3dad0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountState_g____getter_28_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).MountState;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedMapObject>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedMapObject_g____getter_29_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3db10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedMapObject_g____getter_29_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345607 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_184345607 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).MountedMapObject == (Map_MapObject_o *)0x0) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = (__i->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (__this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,
         __this != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,(pCVar1->fields).MountedMapObject,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedTransform>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedTransform_g____getter_30_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3dbb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedTransform_g____getter_30_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345608 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345608 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pUVar2 = (pCVar1->fields).MountedTransform;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return (Il2CppObject *)0x0;
      }
      pCVar1 = (__i->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        pUVar2 = (pCVar1->fields).MountedTransform;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this,pUVar2,(MethodInfo *)0x0);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____getter_31_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f39c20

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____getter_31_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  Il2CppObject *pIVar6;
  undefined1 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f39d06:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184345609 = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pCVar1 = (__i->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f39d06;
    bVar5 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar5) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanInputSettings_o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).AutoRefillGas, pSVar4 == (Settings_BoolSetting_o *)0x0))
      goto label_181f39d06;
      local_res8[0] = (pSVar4->fields)._value;
      goto label_181f39ceb;
    }
  }
  local_res8[0] = 0;
label_181f39ceb:
  pIVar6 = il2cpp_value_box(g_data_184354de8,local_res8);
  return pIVar6;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____setter|31_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____setter_31_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39d10

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____setter_31_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *__this;
  bool value;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434568c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434560a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
      Il2CppMethodInitialized_18434560a = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pCVar1 = (__i->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f39e44;
      bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
            (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanInputSettings_o *)0x0)) ||
           (__this = (pSVar3->fields).AutoRefillGas, __this == (Settings_BoolSetting_o *)0x0))
        goto label_181f39e44;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this,value,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      }
    }
    return;
  }
label_181f39e44:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____getter_32_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f39e50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____getter_32_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CanDodge;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____setter|32_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____setter_32_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39e90

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____setter_32_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434568d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields).CanDodge = bVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____getter_33_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ca40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____getter_33_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).IsInvincible;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____setter|33_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____setter_33_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ca80

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____setter_33_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434568e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields).IsInvincible = bVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c710

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).InvincibleTimeLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____setter|34_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3c750

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434568f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434568f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields).InvincibleTimeLeft = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsCarried>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsCarried_g____getter_35_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c8c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsCarried_g____getter_35_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CarryState == 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Pivot>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Pivot_g____getter_36_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ddf0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Pivot_g____getter_36_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields)._pivot;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__PivotPosition>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__PivotPosition_g____getter_37_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3dd40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__PivotPosition_g____getter_37_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *__this;
  System_Nullable_Vector3__o *pSVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434560b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
      Il2CppMethodInitialized_18434560b = '\x01';
    }
    __this = (__i->fields).Human;
    if (__this != (Characters_Human_o *)0x0) {
      pSVar3 = Characters_Human__PivotPosition
                         ((System_Nullable_Vector3__o *)&local_28,__this,(MethodInfo *)0x0);
      uVar2 = *(undefined4 *)((longlong)&(pSVar3->fields).value.fields.y + 1);
      uVar1 = *(undefined8 *)&(pSVar3->fields).field_0x1;
      local_b = *(undefined2 *)((longlong)&(pSVar3->fields).value.fields.z + 1);
      local_9 = *(undefined1 *)((longlong)&(pSVar3->fields).value.fields.z + 3);
      local_17 = (undefined3)uVar1;
      uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
      if ((pSVar3->fields).hasValue != false) {
        local_f._0_3_ = (undefined3)uVar2;
        local_28.value.fields.x._1_3_ = (undefined3)local_f;
        local_28._0_5_ = uStack_14;
        local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
        local_f = uVar2;
        pCVar4 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                           ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar4;
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedLeft>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedLeft_g____getter_38_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c900

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedLeft_g____getter_38_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookLeft, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsHooked(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedRight>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedRight_g____getter_39_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c950

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedRight_g____getter_39_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookRight, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsHooked(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingLeft>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingLeft_g____getter_40_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c9a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingLeft_g____getter_40_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookLeft, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsHooking(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingRight>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingRight_g____getter_41_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c9f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingRight_g____getter_41_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookRight, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsHooking(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookLeft>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookLeft_g____getter_42_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bf00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookLeft_g____getter_42_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookLeft, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__HasHook(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookRight>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookRight_g____getter_43_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bf50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookRight_g____getter_43_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookRight, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__HasHook(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookReady>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookReady_g____getter_44_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d170

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookReady_g____getter_44_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookLeft, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsReady(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookReady>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookReady_g____getter_45_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e530

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookReady_g____getter_45_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HookRight, __this != (Characters_HookUseable_o *)0x0)) {
    local_res8[0] = Characters_HookUseable__IsReady(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookPosition>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookPosition_g____getter_46_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d0b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookPosition_g____getter_46_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *__this;
  System_Nullable_Vector3__o *pSVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434560c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
      Il2CppMethodInitialized_18434560c = '\x01';
    }
    pCVar3 = (__i->fields).Human;
    if ((pCVar3 != (Characters_Human_o *)0x0) &&
       (__this = (pCVar3->fields).HookLeft, __this != (Characters_HookUseable_o *)0x0)) {
      pSVar4 = Characters_HookUseable__GetCLHookPosition
                         ((System_Nullable_Vector3__o *)&local_28,__this,(MethodInfo *)0x0);
      uVar2 = *(undefined4 *)((longlong)&(pSVar4->fields).value.fields.y + 1);
      uVar1 = *(undefined8 *)&(pSVar4->fields).field_0x1;
      local_b = *(undefined2 *)((longlong)&(pSVar4->fields).value.fields.z + 1);
      local_9 = *(undefined1 *)((longlong)&(pSVar4->fields).value.fields.z + 3);
      local_17 = (undefined3)uVar1;
      uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
      if ((pSVar4->fields).hasValue != false) {
        local_f._0_3_ = (undefined3)uVar2;
        local_28.value.fields.x._1_3_ = (undefined3)local_f;
        local_28._0_5_ = uStack_14;
        local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
        local_f = uVar2;
        pCVar5 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                           ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookPosition>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookPosition_g____getter_47_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e470

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookPosition_g____getter_47_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *__this;
  System_Nullable_Vector3__o *pSVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434560d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
      Il2CppMethodInitialized_18434560d = '\x01';
    }
    pCVar3 = (__i->fields).Human;
    if ((pCVar3 != (Characters_Human_o *)0x0) &&
       (__this = (pCVar3->fields).HookRight, __this != (Characters_HookUseable_o *)0x0)) {
      pSVar4 = Characters_HookUseable__GetCLHookPosition
                         ((System_Nullable_Vector3__o *)&local_28,__this,(MethodInfo *)0x0);
      uVar2 = *(undefined4 *)((longlong)&(pSVar4->fields).value.fields.y + 1);
      uVar1 = *(undefined8 *)&(pSVar4->fields).field_0x1;
      local_b = *(undefined2 *)((longlong)&(pSVar4->fields).value.fields.z + 1);
      local_9 = *(undefined1 *)((longlong)&(pSVar4->fields).value.fields.z + 3);
      local_17 = (undefined3)uVar1;
      uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
      if ((pSVar4->fields).hasValue != false) {
        local_f._0_3_ = (undefined3)uVar2;
        local_28.value.fields.x._1_3_ = (undefined3)local_f;
        local_28._0_5_ = uStack_14;
        local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
        local_f = uVar2;
        pCVar5 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                           ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_48_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3aec0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_48_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [2];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3af85:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_18434560e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434560e = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3af85;
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3af85;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f3af85;
        local_res8[0] = (pCVar2->fields).FocusRange;
        goto label_181f3af68;
      }
    }
  }
  local_res8[0] = 0.0;
label_181f3af68:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|48_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_48_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3af90

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_48_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345690 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434560f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434560f = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar3) {
        pCVar1 = (__i->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3b090;
        if ((pCVar1->fields).AI != false) {
          pCVar2 = (__i->fields).Controller;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pCVar2 = (__i->fields).Controller;
            if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f3b090;
            (pCVar2->fields).FocusRange = fVar4;
          }
        }
      }
      return;
    }
  }
label_181f3b090:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_49_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b0a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_49_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [2];
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
label_181f3b165:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345610 = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3b165;
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3b165;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f3b165;
        local_res8[0] = (pCVar2->fields).FocusTime;
        goto label_181f3b148;
      }
    }
  }
  local_res8[0] = 0.0;
label_181f3b148:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|49_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_49_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b170

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_49_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345691 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345611 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345611 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar3) {
        pCVar1 = (__i->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3b270;
        if ((pCVar1->fields).AI != false) {
          pCVar2 = (__i->fields).Controller;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pCVar2 = (__i->fields).Controller;
            if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f3b270;
            (pCVar2->fields).FocusTime = fVar4;
          }
        }
      }
      return;
    }
  }
label_181f3b270:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____getter_50_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f640

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____getter_50_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_o *shifter;
  Controllers_HumanAIController_o *__this;
  Characters_ITargetable_o *target;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345612 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
      Il2CppMethodInitialized_184345612 = '\x01';
    }
    __this = (Controllers_HumanAIController_o *)
             CustomLogic_CustomLogicCharacterBuiltin__get_AIController
                       ((CustomLogic_CustomLogicCharacterBuiltin_o *)__i,(MethodInfo *)0x0);
    target = (Characters_ITargetable_o *)0x0;
    if (__this != (Controllers_HumanAIController_o *)0x0) {
      target = Controllers_HumanAIController__get_Target(__this,(MethodInfo *)0x0);
    }
    __this_00 = (CustomLogic_CustomLogicShifterBuiltin_o *)
                CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (((Il2CppClass *)__this_00->klass)->_2).typeHierarchyDepth) &&
         ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin)) {
        shifter = (Characters_BaseShifter_o *)(*(uint64_t *)((char *)__this_00 + 0x48));
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
        CustomLogic_CustomLogicShifterBuiltin___ctor(__this_00,shifter,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)__this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____setter|50_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____setter_50_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f710

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____setter_50_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this;
  bool bVar2;
  Il2CppObject *target;
  Characters_ITargetable_o *value;
  
  if (Il2CppMethodInitialized_184345692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345692 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f3f7d6;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        __this = (__i->fields).Controller;
        value = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,(MethodInfo *)0x0);
        if (__this == (Controllers_HumanAIController_o *)0x0) goto label_181f3f7d6;
        Controllers_HumanAIController__set_Target(__this,value,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f3f7d6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____getter_51_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f550

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____getter_51_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_HumanAIController_o *)0x0)) {
    local_18[0].x = (pCVar1->fields)._targetPosition.fields.x;
    local_18[0].y = (pCVar1->fields)._targetPosition.fields.y;
    local_18[0].z = (pCVar1->fields)._targetPosition.fields.z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____setter|51_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____setter_51_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f5a0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____setter_51_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_HumanAIController_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345693 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Controller, __this != (Controllers_HumanAIController_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    Controllers_HumanAIController__set_TargetPosition
              (__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetVelocity>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetVelocity_g____getter_52_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f7e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetVelocity_g____getter_52_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_HumanAIController_o *)0x0)) {
    local_18[0].x = (pCVar1->fields).TargetVelocity.fields.x;
    local_18[0].y = (pCVar1->fields).TargetVelocity.fields.y;
    local_18[0].z = (pCVar1->fields).TargetVelocity.fields.z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____getter_53_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f39870

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____getter_53_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).AllowHorse;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____setter|53_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____setter_53_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f398b0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____setter_53_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345694 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields).AllowHorse = bVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____getter_54_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x181f39940

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____getter_54_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).AllowSkin;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____setter|54_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____setter_54_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39980

void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____setter_54_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345695 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields).AllowSkin = bVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor(CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass157_0$$<ResetCallback>b__0
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ResetCallback_b__0 (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o* __this, const MethodInfo* method);
// 0x181f805b0

void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ResetCallback_b__0
               (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *__this,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  
  if (Il2CppMethodInitialized_1843456ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843456ad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___ctor (CustomLogic_CustomLogicHumanBuiltin_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x181f52cf0

void CustomLogic_CustomLogicHumanBuiltin___ctor
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Controllers_HumanAIController_o *value;
  
  if (Il2CppMethodInitialized_1843455ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_1843455ed = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)human,
             (MethodInfo *)0x0);
  (__this->fields).Human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human,human);
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar2->fields).AI != false) {
    value = (Controllers_HumanAIController_o *)(pCVar2->fields).Controller;
    if (value == (Controllers_HumanAIController_o *)0x0) {
      (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
      if (((((Controllers_IHumanController_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Controllers_IHumanController_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      (__this->fields).Controller = value;
      bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
      if (((((Controllers_IHumanController_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Controllers_IHumanController_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller,value);
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f50010

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_Position
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434555f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434555f = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f54c40

void CustomLogic_CustomLogicHumanBuiltin__set_Position
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  bool bVar4;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar4) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__IsChangingPosition(pCVar1,(MethodInfo *)0x0);
      pCVar2 = (__this->fields).Character;
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
        if (!bVar4) {
          return;
        }
        pCVar2 = (__this->fields).Character;
        if ((((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
             (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
            (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
           (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
          local_18.x = (value->fields).Value.fields.x;
          local_18.y = (value->fields).Value.fields.y;
          local_18.z = (value->fields).Value.fields.z;
          UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).Character;
          if (((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
              (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
             (__this_01 = (pUVar3->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
            local_18.x = (value->fields).Value.fields.x;
            local_18.y = (value->fields).Value.fields.y;
            local_18.z = (value->fields).Value.fields.z;
            UnityEngine_Rigidbody__set_position
                      (__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Weapon
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f540f0

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_Weapon
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_o *pSVar3;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_1843455ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanWeapon);
    Il2CppMethodInitialized_1843455ee = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Setup, pCVar2 != (Characters_HumanSetup_o *)0x0)) {
    local_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanWeapon;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = (pCVar2->fields).Weapon;
    pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Weapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f54f90

void CustomLogic_CustomLogicHumanBuiltin__set_Weapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f531c0

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).CurrentSpecial;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f52650

void
CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial(CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f5269c;
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
    }
    return;
  }
label_181f5269c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53f00

float
CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime(CustomLogic_CustomLogicHumanBuiltin_o* __this, MethodInfo* method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  fVar2 = Characters_BaseUseable__GetCooldownRatio((pCVar1->fields).Special,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldownTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54e00

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float ratio;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).Special != (Characters_BaseUseable_o *)0x0) {
    ratio = 0.0;
    if (0.0 <= value) {
      ratio = value;
    }
    Characters_BaseUseable__SetCooldownRatio((pCVar1->fields).Special,ratio,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldown
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53f40

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  return (((pCVar1->fields).Special)->fields).Cooldown;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldown
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54e40

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).Special != (Characters_BaseUseable_o *)0x0) {
      fVar2 = 0.0;
      if (0.0 <= value) {
        fVar2 = value;
      }
      (((pCVar1->fields).Special)->fields).Cooldown = fVar2;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_ShifterLiveTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53e70

float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  
  if (Il2CppMethodInitialized_1843455ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    Il2CppMethodInitialized_1843455ef = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).Special != (Characters_BaseUseable_o *)0x0) {
      pCVar3 = (pCVar2->fields).Special;
      pCVar4 = pCVar3->klass;
      bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
         ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
        return (*(uint32_t *)((char *)pCVar3 + 0x48));
      }
    }
    return 0.0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_ShifterLiveTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54d70

void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  
  if (Il2CppMethodInitialized_1843455f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    Il2CppMethodInitialized_1843455f0 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).Special != (Characters_BaseUseable_o *)0x0) {
      pCVar3 = (pCVar2->fields).Special;
      pCVar4 = pCVar3->klass;
      bVar1 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
         ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) {
        (*(uint32_t *)((char *)pCVar3 + 0x48)) = value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownRatio
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53f00

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
    return 0.0;
  }
  fVar2 = Characters_BaseUseable__GetCooldownRatio((pCVar1->fields).Special,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53190

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    return (pCVar2->fields).CurrentGas;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54650

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    fVar3 = (pCVar2->fields).MaxGas;
    if (value <= fVar3) {
      fVar3 = value;
    }
    (pCVar2->fields).CurrentGas = fVar3;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53ae0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    return (pCVar2->fields).MaxGas;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54bf0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    pCVar1 = (__this->fields).Human;
    (pCVar2->fields).MaxGas = value;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__UpdateStats(pCVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52df0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    return (pCVar2->fields).Acceleration;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Acceleration
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f54170

void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    (pCVar2->fields).Acceleration = value;
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__UpdateStats(pCVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Speed
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53f80

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    return (pCVar2->fields).Speed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Speed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f54e80

void CustomLogic_CustomLogicHumanBuiltin__set_Speed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    (pCVar2->fields).Speed = value;
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      Characters_HumanStats__UpdateStats(pCVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Horse
// il2cpp: CustomLogic_CustomLogicHorseBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_Horse (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f535a0

CustomLogic_CustomLogicHorseBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_Horse
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  CustomLogic_CustomLogicHorseBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f1 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pCVar2 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return (CustomLogic_CustomLogicHorseBuiltin_o *)0x0;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pCVar2 = (pCVar1->fields).Horse;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
      CustomLogic_CustomLogicCharacterBuiltin___ctor
                ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this_00,(Characters_BaseCharacter_o *)pCVar2,
                 (MethodInfo *)0x0);
      (__this_00->fields).Horse = pCVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Horse,pCVar2);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseFollowEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f533a0

bool CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843455f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f2 = '\x01';
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
// 0x181f547f0

void CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843455f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f3 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this_00 == (Characters_Horse_o *)0x0) goto label_181f54871;
      Characters_Horse__set_FollowingEnabled(__this_00,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f54871:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f534d0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  bool bVar3;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f4 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pCVar2 = (pCVar1->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseSpeed
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53420

float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843455f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f5 = '\x01';
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
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if (bVar4) {
        pCVar2 = (pCVar1->fields).Horse;
        if (pCVar2 != (Characters_Horse_o *)0x0) {
          fVar5 = Characters_Horse__get_RunSpeed(pCVar2,(MethodInfo *)0x0);
          return fVar5;
        }
      }
      else {
        pCVar3 = (pCVar1->fields).Stats;
        if (pCVar3 != (Characters_HumanStats_o *)0x0) {
          return (pCVar3->fields).HorseSpeed;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_HorseSpeed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54880

void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Characters_Horse_o *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843455f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843455f6 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f54969;
  bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    bVar4 = Controllers_HorseController__IsFinite(value,(MethodInfo *)0x0);
    if ((bVar4) && (0.0 < value)) {
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         ((pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0 ||
          ((pCVar2->fields).HorseSpeed = value, pCVar1 == (Characters_Human_o *)0x0)))) {
label_181f54969:
        ThrowNullReferenceException();
      }
      pCVar3 = (pCVar1->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar1 = (__this->fields).Human;
        if ((pCVar1 == (Characters_Human_o *)0x0) ||
           (pCVar3 = (pCVar1->fields).Horse, pCVar3 == (Characters_Horse_o *)0x0)) goto label_181f54969;
        Characters_Horse__set_RunSpeed(pCVar3,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53090

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455f7 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        return *(float *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
      }
    }
    return 0.0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54430

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843455f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_1843455f8 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_181f545b0;
  pCVar4 = (pCVar3->fields).Weapon;
  if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
    bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      fVar1 = *(float *)((longlong)&(*(uint64_t *)((char *)pCVar4 + 0x40)) + 4);
      if (value < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)&(*(uint64_t *)((char *)pCVar4 + 0x40));
        if (value <= *(float *)&(*(uint64_t *)((char *)pCVar4 + 0x40))) {
          fVar5 = value;
        }
      }
      *(float *)((longlong)&(*(uint64_t *)((char *)pCVar4 + 0x40)) + 4) = fVar5;
      if (fVar1 <= 0.0) {
        if (0.0 < fVar5) {
          pCVar3 = (__this->fields).Human;
          if (pCVar3 != (Characters_Human_o *)0x0) {
            Characters_Human__ToggleBlades(pCVar3,true,(MethodInfo *)0x0);
            pCVar3 = (__this->fields).Human;
            if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
            }
            if (pCVar3 != (Characters_Human_o *)0x0) {
              Characters_BaseCharacter__PlaySound
                        ((Characters_BaseCharacter_o *)pCVar3,
                         TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_181f545b0;
        }
      }
      else if (fVar5 <= 0.0) {
        pCVar3 = (__this->fields).Human;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          Characters_Human__ToggleBlades(pCVar3,false,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).Human;
          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          if (pCVar3 != (Characters_Human_o *)0x0) {
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)pCVar3,
                       TypeInfo_Characters_HumanSounds->static_fields->BladeBreak,(MethodInfo *)0x0);
            return;
          }
        }
label_181f545b0:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f539e0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455f9 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        return *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
      }
    }
    return 0.0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54ae0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fa = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        *(float *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53110

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fb = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        return (*(uint32_t *)((char *)pCVar3 + 0x4c));
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f545c0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843455fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fc = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        fVar4 = (*(uint32_t *)((char *)pCVar3 + 0x48));
        if (value < (int)fVar4) {
          fVar4 = (float)value;
        }
        (*(uint32_t *)((char *)pCVar3 + 0x4c)) = (int32_t)fVar4;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53a60

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fd = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        return (int32_t)(*(uint32_t *)((char *)pCVar3 + 0x48));
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f54b70

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    Il2CppMethodInitialized_1843455fe = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        (*(uint32_t *)((char *)pCVar3 + 0x48)) = (float)value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53010

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843455ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_1843455ff = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        return (*(uint32_t *)((char *)pCVar3 + 0x4c));
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f543a0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  
  if (Il2CppMethodInitialized_184345600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345600 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    pCVar4 = (pCVar3->fields).Weapon;
    if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
         ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        fVar2 = (*(uint32_t *)((char *)pCVar4 + 0x48));
        if ((int)fVar2 < value) {
          value = (int32_t)fVar2;
        }
        (*(uint32_t *)((char *)pCVar4 + 0x4c)) = value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f538e0

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345601 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        return (int32_t)(*(uint32_t *)((char *)pCVar3 + 0x48));
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f549e0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345602 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        (*(uint32_t *)((char *)pCVar3 + 0x48)) = (float)value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoLeft
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52f90

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345603 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        return *(int32_t *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4);
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f54310

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345604 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        if (*(int *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) < value) {
          value = *(int *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
        }
        *(int32_t *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) = value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoTotal
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53960

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345605 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        return *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x40));
      }
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoTotal
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f54a60

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345606 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184345606 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x40)) = value;
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f537d0

bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    return (pCVar2->fields).Enabled;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_LeftHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f549b0

void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    (pCVar2->fields).Enabled = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53d60

bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    return (pCVar2->fields).Enabled;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_RightHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f54d40

void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HookRight, pCVar2 != (Characters_HookUseable_o *)0x0)) {
    (pCVar2->fields).Enabled = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsMounted
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsMounted (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f537a0

bool CustomLogic_CustomLogicHumanBuiltin__get_IsMounted
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).MountState == 2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountState
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53b10

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).MountState;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53b30

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_184345607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184345607 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).MountedMapObject == (Map_MapObject_o *)0x0) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,
       __this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,(pCVar1->fields).MountedMapObject,(MethodInfo *)0x0);
      return pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53bd0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345608 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pUVar2 = (pCVar1->fields).MountedTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pUVar2 = (pCVar1->fields).MountedTransform;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AutoRefillGas
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52e60

bool CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184345609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184345609 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return false;
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar5 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar5) {
      return false;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanInputSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).AutoRefillGas, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      return (pSVar4->fields)._value;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AutoRefillGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f54200

void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_BoolSetting_o *__this_00;
  bool bVar4;
  
  if (Il2CppMethodInitialized_18434560a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_18434560a = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
label_181f542dc:
      ThrowNullReferenceException();
    }
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar4) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanInputSettings_o *)0x0)) ||
         (__this_00 = (pSVar3->fields).AutoRefillGas, __this_00 == (Settings_BoolSetting_o *)0x0))
      goto label_181f542dc;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,value,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CanDodge
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52f40

bool CustomLogic_CustomLogicHumanBuiltin__get_CanDodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).CanDodge;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CanDodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f542f0

void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).CanDodge = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsInvincible
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53780

bool CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).IsInvincible;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_IsInvincible
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f54990

void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).IsInvincible = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InvincibleTimeLeft
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53670

float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).InvincibleTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_InvincibleTimeLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54970

void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).InvincibleTimeLeft = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsCarried
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsCarried (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53690

bool CustomLogic_CustomLogicHumanBuiltin__get_IsCarried
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).CarryState == 1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Pivot
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_Pivot (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53d40

bool CustomLogic_CustomLogicHumanBuiltin__get_Pivot
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields)._pivot;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_PivotPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53c90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *__this_00;
  System_Nullable_Vector3__o *pSVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_18434560b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_18434560b = '\x01';
  }
  __this_00 = (__this->fields).Human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    pSVar3 = Characters_Human__PivotPosition
                       ((System_Nullable_Vector3__o *)&local_28,__this_00,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((longlong)&(pSVar3->fields).value.fields.y + 1);
    uVar1 = *(undefined8 *)&(pSVar3->fields).field_0x1;
    local_b = *(undefined2 *)((longlong)&(pSVar3->fields).value.fields.z + 1);
    local_9 = *(undefined1 *)((longlong)&(pSVar3->fields).value.fields.z + 3);
    local_17 = (undefined3)uVar1;
    uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
    if ((pSVar3->fields).hasValue != false) {
      local_f._0_3_ = (undefined3)uVar2;
      local_28.value.fields.x._1_3_ = (undefined3)local_f;
      local_28._0_5_ = uStack_14;
      local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
      local_f = uVar2;
      pCVar4 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return pCVar4;
    }
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f536c0

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f536f0

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53720

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooking(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53750

bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooking(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53340

bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53370

bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f538b0

bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsReady(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53e40

bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsReady(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53800

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *__this_00;
  System_Nullable_Vector3__o *pSVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_18434560c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_18434560c = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar3->fields).HookLeft, __this_00 != (Characters_HookUseable_o *)0x0)) {
    pSVar4 = Characters_HookUseable__GetCLHookPosition
                       ((System_Nullable_Vector3__o *)&local_28,__this_00,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((longlong)&(pSVar4->fields).value.fields.y + 1);
    uVar1 = *(undefined8 *)&(pSVar4->fields).field_0x1;
    local_b = *(undefined2 *)((longlong)&(pSVar4->fields).value.fields.z + 1);
    local_9 = *(undefined1 *)((longlong)&(pSVar4->fields).value.fields.z + 3);
    local_17 = (undefined3)uVar1;
    uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
    if ((pSVar4->fields).hasValue != false) {
      local_f._0_3_ = (undefined3)uVar2;
      local_28.value.fields.x._1_3_ = (undefined3)local_f;
      local_28._0_5_ = uStack_14;
      local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
      local_f = uVar2;
      pCVar5 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return pCVar5;
    }
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53d90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Characters_HookUseable_o *__this_00;
  System_Nullable_Vector3__o *pSVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  System_Nullable_Vector3__Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_18434560d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_18434560d = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar3->fields).HookRight, __this_00 != (Characters_HookUseable_o *)0x0)) {
    pSVar4 = Characters_HookUseable__GetCLHookPosition
                       ((System_Nullable_Vector3__o *)&local_28,__this_00,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((longlong)&(pSVar4->fields).value.fields.y + 1);
    uVar1 = *(undefined8 *)&(pSVar4->fields).field_0x1;
    local_b = *(undefined2 *)((longlong)&(pSVar4->fields).value.fields.z + 1);
    local_9 = *(undefined1 *)((longlong)&(pSVar4->fields).value.fields.z + 3);
    local_17 = (undefined3)uVar1;
    uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
    if ((pSVar4->fields).hasValue != false) {
      local_f._0_3_ = (undefined3)uVar2;
      local_28.value.fields.x._1_3_ = (undefined3)local_f;
      local_28._0_5_ = uStack_14;
      local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      local_28.value.fields.y = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
      local_f = uVar2;
      pCVar5 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return pCVar5;
    }
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_FocusRange (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f531e0

float CustomLogic_CustomLogicHumanBuiltin__get_FocusRange
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434560e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434560e = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f53285;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
            return (pCVar2->fields).FocusRange;
          }
          goto label_181f53285;
        }
      }
    }
    return 0.0;
  }
label_181f53285:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_FocusRange (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54690

void CustomLogic_CustomLogicHumanBuiltin__set_FocusRange
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434560f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434560f = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f54739;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f54739;
          (pCVar2->fields).FocusRange = value;
        }
      }
    }
    return;
  }
label_181f54739:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_FocusTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53290

float CustomLogic_CustomLogicHumanBuiltin__get_FocusTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184345610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345610 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f53335;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
            return (pCVar2->fields).FocusTime;
          }
          goto label_181f53335;
        }
      }
    }
    return 0.0;
  }
label_181f53335:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_FocusTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f54740

void CustomLogic_CustomLogicHumanBuiltin__set_FocusTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184345611 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345611 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f547e9;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pCVar2 = (__this->fields).Controller;
          if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f547e9;
          (pCVar2->fields).FocusTime = value;
        }
      }
    }
    return;
  }
label_181f547e9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Target
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin__get_Target (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f54030

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin__get_Target
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_o *shifter;
  Controllers_HumanAIController_o *__this_00;
  Characters_ITargetable_o *target;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184345612 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    Il2CppMethodInitialized_184345612 = '\x01';
  }
  __this_00 = (Controllers_HumanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController
                        ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(MethodInfo *)0x0);
  target = (Characters_ITargetable_o *)0x0;
  if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
    target = Controllers_HumanAIController__get_Target(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (CustomLogic_CustomLogicShifterBuiltin_o *)
              CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (((Il2CppClass *)__this_01->klass)->_2).typeHierarchyDepth) &&
       ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
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
// 0x181f54f10

void CustomLogic_CustomLogicHumanBuiltin__set_Target
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  Characters_ITargetable_o *value_00;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f54f81;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        __this_00 = (__this->fields).Controller;
        value_00 = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(value,(MethodInfo *)0x0);
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f54f81;
        Controllers_HumanAIController__set_Target(__this_00,value_00,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f54f81:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53fb0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_18 [2];
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
    local_18[0].x = (pCVar1->fields)._targetPosition.fields.x;
    local_18[0].y = (pCVar1->fields)._targetPosition.fields.y;
    local_18[0].z = (pCVar1->fields)._targetPosition.fields.z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_TargetPosition
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f54ed0

void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Controllers_HumanAIController_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Controller, __this_00 != (Controllers_HumanAIController_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    Controllers_HumanAIController__set_TargetPosition
              (__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f53ff0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_18 [2];
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
    local_18[0].x = (pCVar1->fields).TargetVelocity.fields.x;
    local_18[0].y = (pCVar1->fields).TargetVelocity.fields.y;
    local_18[0].z = (pCVar1->fields).TargetVelocity.fields.z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowHorse
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52e20

bool CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).AllowHorse;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowHorse
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f541c0

void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).AllowHorse = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowSkin
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52e40

bool CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields).AllowSkin;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowSkin
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f541e0

void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields).AllowSkin = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Refill
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__Refill (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52080

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
// 0x181f52030

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
// 0x181f51720

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
// 0x181f51790

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
// 0x181f517f0

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
// 0x181f51d30

void CustomLogic_CustomLogicHumanBuiltin__MountMapObject
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,bool canMountedAttack,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [2];
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      if ((((mapObject == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
           (positionOffset == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
          (rotationOffset == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (pCVar1 = (__this->fields).Human, pCVar1 == (Characters_Human_o *)0x0)) goto label_181f51dd3;
      local_48.z = (rotationOffset->fields).Value.fields.z;
      local_48.x = (rotationOffset->fields).Value.fields.x;
      local_48.y = (rotationOffset->fields).Value.fields.y;
      local_38[0].z = (positionOffset->fields).Value.fields.z;
      local_38[0].x = (positionOffset->fields).Value.fields.x;
      local_38[0].y = (positionOffset->fields).Value.fields.y;
      Characters_Human__Mount_21351e0
                (pCVar1,(mapObject->fields).Value,(UnityEngine_Vector3_o *)local_38,
                 (UnityEngine_Vector3_o *)&local_48,canMountedAttack,(MethodInfo *)0x0);
    }
    return;
  }
label_181f51dd3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$MountTransform
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MountTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* transform, CustomLogic_CustomLogicVector3Builtin_o* positionOffset, CustomLogic_CustomLogicVector3Builtin_o* rotationOffset, bool canMountedAttack, const MethodInfo* method);
// 0x181f51de0

void CustomLogic_CustomLogicHumanBuiltin__MountTransform
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *transform,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,bool canMountedAttack,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [2];
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      if ((((transform == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
           (positionOffset == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
          (rotationOffset == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (pCVar1 = (__this->fields).Human, pCVar1 == (Characters_Human_o *)0x0)) goto label_181f51e83;
      local_48.z = (rotationOffset->fields).Value.fields.z;
      local_48.x = (rotationOffset->fields).Value.fields.x;
      local_48.y = (rotationOffset->fields).Value.fields.y;
      local_38[0].z = (positionOffset->fields).Value.fields.z;
      local_38[0].x = (positionOffset->fields).Value.fields.x;
      local_38[0].y = (positionOffset->fields).Value.fields.y;
      Characters_Human__Mount
                (pCVar1,(transform->fields).Value,(UnityEngine_Vector3_o *)local_38,
                 (UnityEngine_Vector3_o *)&local_48,canMountedAttack,(MethodInfo *)0x0);
    }
    return;
  }
label_181f51e83:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Unmount
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Unmount (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool immediate, const MethodInfo* method);
// 0x181f52c30

void CustomLogic_CustomLogicHumanBuiltin__Unmount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool immediate,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f52c7d;
      Characters_Human__Unmount(pCVar1,immediate,(MethodInfo *)0x0);
    }
    return;
  }
label_181f52c7d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* special, const MethodInfo* method);
// 0x181f52650

void CustomLogic_CustomLogicHumanBuiltin__SetSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *special,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f5269c;
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
    }
    return;
  }
label_181f5269c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ActivateSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f51550

void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  Characters_BaseUseable_c *pCVar3;
  bool bVar4;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar4) {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
        return;
      }
      pCVar2 = (pCVar1->fields).Special;
      pCVar3 = pCVar2->klass;
      (*(pCVar3->vtable)._12_SetInput.methodPtr)
                (pCVar2,(System_Type_o *)0x1,(pCVar3->vtable)._12_SetInput.method);
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).Special, pCVar2 != (Characters_BaseUseable_o *)0x0)) {
        (*(pCVar2->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar2,(System_Type_o *)0x0,(pCVar2->klass->vtable)._12_SetInput.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetWeapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetWeapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x181f526b0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f528f8: mov rcx, qword ptr [rip + 0x213c291]  ; TypeInfo_GameManagers_HumanLoadout
// asm:   0x181f528ff: jmp 0x181f52943
// asm:   0x181f52aef: xor r8d, r8d
// asm:   0x181f52af2: mov rdx, rax
// asm:   0x181f52af5: mov rcx, rbx
// asm:   0x181f52b3f: xor r8d, r8d
// asm:   0x181f52b42: mov rdx, rdi
// asm:   0x181f52b45: jmp 0x181f52af8

void CustomLogic_CustomLogicHumanBuiltin__SetWeapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *weapon,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  GameManagers_BaseGameManager_c *pGVar4;
  void *pvVar5;
  Settings_StringSetting_o *pSVar6;
  GameManagers_InGameManager_o *__this_00;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_01;
  Settings_InGameCharacterSettings_o *pSVar8;
  
  if (Il2CppMethodInitialized_184345613 == '\0') {
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
    Il2CppMethodInitialized_184345613 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    bVar7 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
    if (!bVar7) {
      return;
    }
    pCVar2 = (__this->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      if ((pCVar2->fields).AI == false) {
        pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) goto label_181f52b47;
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
        }
        pGVar4 = (*(uint64_t *)((char *)pGVar3 + 0x78));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((*(uint64_t *)((char *)pGVar3 + 0x78)) == (GameManagers_BaseGameManager_c *)0x0) {
          return;
        }
        pvVar5 = (((*(Il2CppClass **)((char *)pGVar3 + 0x78)))->_1).image;
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (*(byte *)((longlong)pvVar5 + 0x130) < bVar1) {
          return;
        }
        if (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar5 + 200) + -8 + (ulonglong)bVar1 * 8) !=
            TypeInfo_Characters_Human) {
          return;
        }
        pCVar2 = (__this->fields).Human;
        if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f52b47;
        bVar7 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
        if (!bVar7) {
          return;
        }
        bVar7 = System_String__op_Equality(weapon,"Blades",(MethodInfo *)0x0);
        if (bVar7) {
          if (Il2CppMethodInitialized_184345696 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
            Il2CppMethodInitialized_184345696 = '\x01';
          }
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          weapon = TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
        }
        else {
          bVar7 = System_String__op_Equality(weapon,"Thunderspears",(MethodInfo *)0x0);
          if (bVar7) {
            if (Il2CppMethodInitialized_184345697 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
              Il2CppMethodInitialized_184345697 = '\x01';
            }
            if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
            }
            weapon = TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
          }
        }
        pCVar2 = (__this->fields).Human;
        if (pCVar2 == (Characters_Human_o *)0x0) goto label_181f52b47;
        if ((pCVar2->fields).Dead != false) {
          return;
        }
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        __this_01 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_181f52b47;
        bVar7 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)weapon,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (!bVar7) {
          return;
        }
        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        if ((pSVar8 == (Settings_InGameCharacterSettings_o *)0x0) ||
           (pSVar6 = (pSVar8->fields).Loadout, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_181f52b47;
        bVar7 = System_String__op_Inequality(weapon,(pSVar6->fields)._value,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        if ((pSVar8 == (Settings_InGameCharacterSettings_o *)0x0) ||
           (pSVar6 = (pSVar8->fields).Loadout, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_181f52b47;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)weapon,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_00 = (GameManagers_InGameManager_o *)
                    TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00);
          }
        }
        pGVar4 = (*(uint64_t *)((char *)pGVar3 + 0x78));
        if (pGVar4 == (GameManagers_BaseGameManager_c *)0x0) {
          (__this->fields).Human = (Characters_Human_o *)0x0;
        }
        else {
          pvVar5 = (pGVar4->_1).image;
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((*(byte *)((longlong)pvVar5 + 0x130) < bVar1) ||
             (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar5 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo_Characters_Human)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
          }
          (__this->fields).Human = (Characters_Human_o *)pGVar4;
          pvVar5 = (pGVar4->_1).image;
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((*(byte *)((longlong)pvVar5 + 0x130) < bVar1) ||
             (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar5 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo_Characters_Human)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields).Human,pGVar4);
        if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_181f52b47;
        pCVar2 = (__this->fields).Human;
        pSVar8 = GameManagers_InGameManager__GetSetHumanSettings(__this_00,(MethodInfo *)0x0);
      }
      else {
        if (((pCVar2 == (Characters_Human_o *)0x0) ||
            (pSVar8 = (pCVar2->fields).Settings, pSVar8 == (Settings_InGameCharacterSettings_o *)0x0)) ||
           (pSVar6 = (pSVar8->fields).Loadout, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_181f52b47;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)weapon,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pCVar2 = (__this->fields).Human;
      }
      if (pCVar2 != (Characters_Human_o *)0x0) {
        Characters_Human__ReloadHuman(pCVar2,pSVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181f52b47:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$DisablePerks
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__DisablePerks (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f518d0

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
// 0x181f51a80

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
// 0x181f52410
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f52502: xor r9d, r9d
// asm:   0x181f52505: mov r8, rdi
// asm:   0x181f52508: mov rdx, rsi
// asm:   0x181f5250b: call 0x182100aa0  ; Controllers_HumanAIController__SetAIState()
// asm:   0x181f52510: jmp 0x181f524b5

void CustomLogic_CustomLogicHumanBuiltin__SetAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *classInstance,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar3;
  Controllers_HumanAIStates_Custom_o *__this_01;
  
  if (Il2CppMethodInitialized_184345614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIStates_Custom);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_Remove);
    Il2CppMethodInitialized_184345614 = '\x01';
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
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_Remove);
          return;
        }
      }
      else {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Controllers_HumanAIStates_Custom);
        Controllers_HumanAIStates_Custom___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
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
// 0x181f51a00

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
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar4) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51a6b;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f51a6b;
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
label_181f51a6b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$SwitchAIState
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f52b80

void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar2;
  Controllers_HumanAIState_o *aiState;
  
  if (Il2CppMethodInitialized_184345615 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
    Il2CppMethodInitialized_184345615 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f52c1b;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        if ((__this_00 == (Controllers_HumanAIController_o *)0x0) ||
           (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_00->fields).AIStates,
           __this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_181f52c1b;
        aiState = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_HumanAIState_get_Item);
        Controllers_HumanAIController__SwitchAIState(__this_00,aiState,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f52c1b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ResetCallback
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ResetCallback (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* callback, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x181f52260

void CustomLogic_CustomLogicHumanBuiltin__ResetCallback
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *callback,
               CustomLogic_UserMethod_o *method,MethodInfo *methodInfo)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  Controllers_HumanAICallback_o *pCVar3;
  bool bVar4;
  CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *object;
  System_Type_o *pSVar5;
  System_Reflection_FieldInfo_o *pSVar6;
  System_Action_o *__this_00;
  
  if (Il2CppMethodInitialized_184345616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0_ResetCallback_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0);
    Il2CppMethodInitialized_184345616 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0);
  CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass157_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar4) {
        return;
      }
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        if ((pCVar1->fields).AI == false) {
          return;
        }
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
          pCVar3 = (pCVar2->fields).Callbacks;
          if ((object->fields).method == (CustomLogic_UserMethod_o *)0x0) {
            if ((pCVar3 != (Controllers_HumanAICallback_o *)0x0) &&
               (pSVar5 = System_Object__GetType((Il2CppObject *)pCVar3,(MethodInfo *)0x0),
               pSVar5 != (System_Type_o *)0x0)) {
              pSVar6 = System_Type__GetField(pSVar5,callback,(MethodInfo *)0x0);
              pCVar2 = (__this->fields).Controller;
              if ((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
                 (pSVar6 != (System_Reflection_FieldInfo_o *)0x0)) {
                System_Reflection_FieldInfo__SetValue
                          (pSVar6,(Il2CppObject *)(pCVar2->fields).Callbacks,(Il2CppObject *)0x0,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else if ((pCVar3 != (Controllers_HumanAICallback_o *)0x0) &&
                  (pSVar5 = System_Object__GetType((Il2CppObject *)pCVar3,(MethodInfo *)0x0),
                  pSVar5 != (System_Type_o *)0x0)) {
            pSVar6 = System_Type__GetField(pSVar5,callback,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).Controller;
            if (pCVar2 != (Controllers_HumanAIController_o *)0x0) {
              pCVar3 = (pCVar2->fields).Callbacks;
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              System_Action___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicHumanBuiltin_c__DisplayClass157_0_ResetCallback_b__0
                         ,(MethodInfo *)0x0);
              if (pSVar6 != (System_Reflection_FieldInfo_o *)0x0) {
                System_Reflection_FieldInfo__SetValue
                          (pSVar6,(Il2CppObject *)pCVar3,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
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


// CustomLogic.CustomLogicHumanBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Move (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x181f51e90

void CustomLogic_CustomLogicHumanBuiltin__Move
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184345617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184345617 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51f53;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        uVar3._0_1_ = false;
        uVar3._1_3_ = 0;
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        if (direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          local_28.x = (direction->fields).Value.fields.x;
          local_28.y = (direction->fields).Value.fields.y;
          local_28.z = (direction->fields).Value.fields.z;
          local_18.hasValue = false;
          local_18._1_3_ = 0;
          local_18.value.fields.x = 0.0;
          local_18.value.fields.y = 0.0;
          local_18.value.fields.z = 0.0;
          System_Nullable_Vector3____ctor
                    ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
                     (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
          uVar3 = local_18._0_4_;
          fVar4 = local_18.value.fields.x;
          fVar5 = local_18.value.fields.y;
          fVar6 = local_18.value.fields.z;
        }
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f51f53;
        local_18.value.fields.x = fVar4;
        local_18.hasValue = SUB41(uVar3,0);
        local_18._1_3_ = SUB43(uVar3,1);
        local_18.value.fields.z = fVar6;
        local_18.value.fields.y = fVar5;
        Controllers_HumanAIController__Move
                  (__this_00,(System_Nullable_Vector3__o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f51f53:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$AimAt
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__AimAt (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f515e0

void CustomLogic_CustomLogicHumanBuiltin__AimAt
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184345618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184345618 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f516a3;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        uVar3._0_1_ = false;
        uVar3._1_3_ = 0;
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          local_28.x = (position->fields).Value.fields.x;
          local_28.y = (position->fields).Value.fields.y;
          local_28.z = (position->fields).Value.fields.z;
          local_18.hasValue = false;
          local_18._1_3_ = 0;
          local_18.value.fields.x = 0.0;
          local_18.value.fields.y = 0.0;
          local_18.value.fields.z = 0.0;
          System_Nullable_Vector3____ctor
                    ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
                     (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
          uVar3 = local_18._0_4_;
          fVar4 = local_18.value.fields.x;
          fVar5 = local_18.value.fields.y;
          fVar6 = local_18.value.fields.z;
        }
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f516a3;
        local_18.value.fields.x = fVar4;
        local_18.hasValue = SUB41(uVar3,0);
        local_18._1_3_ = SUB43(uVar3,1);
        local_18.value.fields.z = fVar6;
        local_18.value.fields.y = fVar5;
        Controllers_HumanAIController__AimAt
                  (__this_00,(System_Nullable_Vector3__o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f516a3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Jump
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Jump (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f51bd0

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
// 0x181f51af0

void CustomLogic_CustomLogicHumanBuiltin__HorseMount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool mount,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51b4f;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f51b4f;
        Controllers_HumanAIController__HorseMount(__this_00,mount,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f51b4f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f51930

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
// 0x181f52200

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
// 0x181f52c90

void CustomLogic_CustomLogicHumanBuiltin__UseGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool useGas,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f52cea;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto label_181f52cea;
        (pCVar2->fields)._usingGas = useGas;
      }
    }
    return;
  }
label_181f52cea:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$HorseWalk
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__HorseWalk (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool isWalk, const MethodInfo* method);
// 0x181f51b60

void CustomLogic_CustomLogicHumanBuiltin__HorseWalk
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool isWalk,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51bbf;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f51bbf;
        Controllers_HumanAIController__HorseWalk(__this_00,isWalk,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f51bbf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dash
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dash (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x181f51850

void CustomLogic_CustomLogicHumanBuiltin__Dash
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f518c7;
      if ((pCVar1->fields).AI != false) {
        if ((direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
           (__this_00 = (__this->fields).Controller, __this_00 == (Controllers_HumanAIController_o *)0x0))
        goto label_181f518c7;
        local_18.x = (direction->fields).Value.fields.x;
        local_18.y = (direction->fields).Value.fields.y;
        local_18.z = (direction->fields).Value.fields.z;
        Controllers_HumanAIController__Dash(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f518c7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$Reel
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Reel (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x181f51fc0

void CustomLogic_CustomLogicHumanBuiltin__Reel
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f5201c;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f5201c;
        Controllers_HumanAIController__Reel(__this_00,reelAxis,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f5201c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x181f51c30

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51ca7;
      if ((pCVar1->fields).AI != false) {
        if ((aimPoint == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
           (__this_00 = (__this->fields).Controller, __this_00 == (Controllers_HumanAIController_o *)0x0))
        goto label_181f51ca7;
        local_18.x = (aimPoint->fields).Value.fields.x;
        local_18.y = (aimPoint->fields).Value.fields.y;
        local_18.z = (aimPoint->fields).Value.fields.z;
        Controllers_HumanAIController__LaunchHookLeft
                  (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f51ca7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookRight
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x181f51cb0

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f51d27;
      if ((pCVar1->fields).AI != false) {
        if ((aimPoint == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
           (__this_00 = (__this->fields).Controller, __this_00 == (Controllers_HumanAIController_o *)0x0))
        goto label_181f51d27;
        local_18.x = (aimPoint->fields).Value.fields.x;
        local_18.y = (aimPoint->fields).Value.fields.y;
        local_18.z = (aimPoint->fields).Value.fields.z;
        Controllers_HumanAIController__LaunchHookRight
                  (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f51d27:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f52140

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
// 0x181f521a0

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
// 0x181f520e0

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
// 0x181f516b0

void CustomLogic_CustomLogicHumanBuiltin__Attack
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool attackOn,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_181f5170f;
      if ((pCVar1->fields).AI != false) {
        __this_00 = (__this->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto label_181f5170f;
        Controllers_HumanAIController__Attack(__this_00,attackOn,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f5170f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanBuiltin$$FindNearestEnemy
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x181f51990

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
// 0x181f51f60

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
// 0x181f52520

void CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *effectName,bool enabled,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_184345619 = '\x01';
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
// 0x181f52f60

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_ClassName
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434561a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_18434561a = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract(CustomLogic_CustomLogicHumanBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsStatic (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicHumanBuiltin__get_IsStatic(CustomLogic_CustomLogicHumanBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicHumanBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


