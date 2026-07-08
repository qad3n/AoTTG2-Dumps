// Type: CustomLogic.CustomLogicHumanBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicHumanBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicHumanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanBuiltin_o* CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e048b0

CustomLogic_CustomLogicHumanBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHumanBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHumanBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e0f930

void CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702c2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c2b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e0f9a0

void CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Refill>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Refill_b__55_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0f9b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Refill>b__55_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined1 uVar4;
  undefined8 uStack_18;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human,
     __this = (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (Characters_Human_o *)0x0)) {
    uVar4 = 0;
    uStack_18 = in_RAX;
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      __this = (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0fa24;
      uVar4 = 0;
      bVar2 = Characters_Human__NeedRefill(pCVar1,1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        __this = (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)0x0;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0fa24;
        bVar2 = Characters_Human__Refill(pCVar1,(MethodInfo *)0x0);
        uVar4 = (undefined1)bVar2;
      }
    }
    uStack_18 = CONCAT17(uVar4,(undefined7)uStack_18);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
    return pIVar3;
  }
LAB_03e0fa24:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__RefillImmediate>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__RefillImmediate_b__56_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fa30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__RefillImmediate>b__56_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human,
     __this = (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      __this = (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0fa61;
      Characters_Human__FinishRefill(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e0fa61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearHooks>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearHooks_b__57_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fa70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearHooks>b__57_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ClearHooks(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearLeftHook>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearLeftHook_b__58_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fa90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearLeftHook>b__58_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (__this_00 = (pCVar1->fields).HumanCache,
         __this_00 == (Characters_HumanComponentCache_o *)0x0)) goto LAB_03e0facd;
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e0facd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearRightHook>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ClearRightHook_b__59_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fae0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearRightHook>b__59_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
         __this_00 == (Characters_HookUseable_o *)0x0)) goto LAB_03e0fb1d;
      Characters_HookUseable__DisableAnyHook(__this_00,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e0fb1d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountMapObject>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountMapObject_b__60_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fb30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__MountMapObject>b__60_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  MethodInfo *in_R9;
  
  if (DAT_05702c2c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c2c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e0fc69:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    mapObject = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    if ((1 < (uint)__a->max_length) &&
       (positionOffset =
             (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV),
       2 < (uint)__a->max_length)) {
      rotationOffset =
           (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((int)__a->max_length < 4) {
        uVar2 = 0;
      }
      else {
        pIVar1 = __a->m_Items[3];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__MountMapObject
                  (__c,mapObject,positionOffset,rotationOffset,uVar2 & 0xff,in_R9);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e0fc69;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MountTransform>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MountTransform_b__61_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fc70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__MountTransform>b__61_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *transform;
  CustomLogic_CustomLogicVector3Builtin_o *positionOffset;
  CustomLogic_CustomLogicVector3Builtin_o *rotationOffset;
  MethodInfo *in_R9;
  
  if (DAT_05702c2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicTransformBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c2d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e0fda9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    transform = (CustomLogic_CustomLogicTransformBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicTransformBuiltin_ConvertTo_CustomLogi);
    if ((1 < (uint)__a->max_length) &&
       (positionOffset =
             (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV),
       2 < (uint)__a->max_length)) {
      rotationOffset =
           (CustomLogic_CustomLogicVector3Builtin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((int)__a->max_length < 4) {
        uVar2 = 0;
      }
      else {
        pIVar1 = __a->m_Items[3];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__MountTransform
                  (__c,transform,positionOffset,rotationOffset,uVar2 & 0xff,in_R9);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e0fda9;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unmount>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Unmount_b__62_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fdb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Unmount>b__62_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  byte bVar3;
  
  if (DAT_05702c2e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c2e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar3 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar3 = (byte)bVar2;
    }
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0fe61;
        Characters_Human__Unmount(pCVar1,(uint)bVar3,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e0fe61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpecial>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetSpecial_b__63_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0fe70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__SetSpecial>b__63_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  System_String_o *special;
  
  if (DAT_05702c2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c2f = '\x01';
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
    special = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0ff13;
        Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e0ff13:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ActivateSpecial>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ActivateSpecial_b__64_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0ff20

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ActivateSpecial>b__64_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeapon>b__65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetWeapon_b__65_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0ff40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__SetWeapon>b__65_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *weapon;
  MethodInfo *method_00;
  
  if (DAT_05702c30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c30 = '\x01';
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
    weapon = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__c,weapon,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__DisablePerks>b__66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__DisablePerks_b__66_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e0ffd0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__DisablePerks>b__66_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (__this_00 = (pCVar1->fields).Horse, __this_00 == (Characters_Horse_o *)0x0))
      goto LAB_03e1000d;
      Characters_HumanStats__DisablePerks((Characters_HumanStats_o *)__this_00,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e1000d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__67_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10020

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveTo>b__67_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *method_00;
  float range;
  
  if (DAT_05702c31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c31 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e100d1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      range = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__MoveTo(__c,position,range,method_00);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e100d1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToTarget>b__68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__MoveToTarget_b__68_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e100e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveToTarget>b__68_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  MethodInfo *method_00;
  float range;
  
  if (DAT_05702c32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c32 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    target = __a->m_Items[0];
    obj = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    range = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__MoveToTarget(__c,target,range,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__69_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10180

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Idle>b__69_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e101c0;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e101c0;
        Controllers_HumanAIController__Idle(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e101c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasAIState>b__70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HasAIState_b__70_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e101d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__HasAIState>b__70_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  System_String_o *name;
  Il2CppObject *pIVar3;
  undefined1 local_19;
  
  if (DAT_05702c33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c33 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar3 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      local_19 = 0;
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e102b1;
        if ((char)(pCVar1->fields).CustomDamage == '\0') {
          local_19 = 0;
        }
        else {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e102b1;
          bVar2 = Controllers_HumanAIController__HasAIState(__this_00,name,(MethodInfo *)0x0);
          local_19 = (undefined1)bVar2;
        }
      }
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
      return pIVar3;
    }
  }
LAB_03e102b1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAIState>b__71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetAIState_b__71_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e102c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__SetAIState>b__71_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *name;
  CustomLogic_UserClassInstance_o *classInstance;
  
  if (DAT_05702c34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserClassInstance_ConvertTo_UserClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c34 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((int)__a->max_length < 2) {
      classInstance = (CustomLogic_UserClassInstance_o *)0x0;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      classInstance =
           (CustomLogic_UserClassInstance_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_UserClassInstance_ConvertTo_UserClassInstance);
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SetAIState(__c,name,classInstance,method);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAIState>b__72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__GetAIState_b__72_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e103b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAIState>b__72_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  long *plVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10409;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__c->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10409;
        plVar3 = *(long **)&(pCVar2->fields).TargetVelocity.fields.z;
        if (plVar3 != (long *)0x0) {
          pIVar5 = (Il2CppObject *)
                   (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
          return pIVar5;
        }
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10409:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SwitchAIState>b__73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SwitchAIState_b__73_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10410

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__SwitchAIState>b__73_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (DAT_05702c35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c35 = '\x01';
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
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__SwitchAIState(__c,name,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCallback>b__74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ResetCallback_b__74_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e104a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ResetCallback>b__74_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05702c36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c36 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (1 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_UserMethod_ConvertTo_UserMethod);
    }
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__ResetCallback();
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Move_b__75_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10590

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Move>b__75_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  MethodInfo *method_00;
  
  if (DAT_05702c37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c37 = '\x01';
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
    direction = (CustomLogic_CustomLogicVector3Builtin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Move(__c,direction,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__AimAt>b__76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__AimAt_b__76_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10620

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__AimAt>b__76_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *method_00;
  
  if (DAT_05702c38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c38 = '\x01';
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
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__AimAt(__c,position,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Jump>b__77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Jump_b__77_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e106b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Jump>b__77_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e106f0;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e106f0;
        Controllers_HumanAIController__Jump(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e106f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseMount>b__78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseMount_b__78_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10700

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__HorseMount>b__78_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  byte bVar3;
  
  if (DAT_05702c39 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c39 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      bVar3 = 1;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar3 = (byte)bVar2;
    }
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e107c8;
        if ((char)(pCVar1->fields).CustomDamage != '\0') {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e107c8;
          Controllers_HumanAIController__HorseMount(__this_00,(uint)bVar3,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e107c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dodge>b__79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dodge_b__79_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e107e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Dodge>b__79_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10820;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10820;
        Controllers_HumanAIController__Dodge(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10820:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reload>b__80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reload_b__80_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10830

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Reload>b__80_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10870;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10870;
        Controllers_HumanAIController__Reload(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10870:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__UseGas>b__81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__UseGas_b__81_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10880

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__UseGas>b__81_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  
  if (DAT_05702c3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3a = '\x01';
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
    bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar4 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e1092a;
        if ((char)(pCVar1->fields).CustomDamage != '\0') {
          pCVar2 = (__c->fields).Controller;
          if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e1092a;
          *(char *)&(pCVar2->fields)._usingGas = (char)bVar3;
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e1092a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__HorseWalk>b__82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__HorseWalk_b__82_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10940

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__HorseWalk>b__82_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3b = '\x01';
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
    uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar3 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e109f1;
        if ((char)(pCVar1->fields).CustomDamage != '\0') {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e109f1;
          Controllers_HumanAIController__HorseWalk(__this_00,uVar2 & 0xff,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e109f1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Dash>b__83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Dash_b__83_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10a00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Dash>b__83_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  MethodInfo *method_00;
  
  if (DAT_05702c3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3c = '\x01';
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
    direction = (CustomLogic_CustomLogicVector3Builtin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__Dash(__c,direction,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reel>b__84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Reel_b__84_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10a90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Reel>b__84_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  int32_t reelAxis;
  bool_conflict bVar2;
  
  if (DAT_05702c3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3d = '\x01';
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
    reelAxis = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10b3f;
        if ((char)(pCVar1->fields).CustomDamage != '\0') {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10b3f;
          Controllers_HumanAIController__Reel(__this_00,reelAxis,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e10b3f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookLeft>b__85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookLeft_b__85_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10b50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__LaunchHookLeft>b__85_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  MethodInfo *method_00;
  
  if (DAT_05702c3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3e = '\x01';
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
    aimPoint = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft(__c,aimPoint,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__LaunchHookRight>b__86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__LaunchHookRight_b__86_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10be0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__LaunchHookRight>b__86_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *aimPoint;
  MethodInfo *method_00;
  
  if (DAT_05702c3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c3f = '\x01';
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
    aimPoint = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight(__c,aimPoint,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookLeft>b__87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookLeft_b__87_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10c70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ReleaseHookLeft>b__87_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10cb0;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10cb0;
        Controllers_HumanAIController__ReleaseHookLeft(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10cb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookRight>b__88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookRight_b__88_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10cc0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ReleaseHookRight>b__88_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10d00;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10d00;
        Controllers_HumanAIController__ReleaseHookRight(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10d00:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReleaseHookAll>b__89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__ReleaseHookAll_b__89_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10d10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__ReleaseHookAll>b__89_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10d50;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10d50;
        Controllers_HumanAIController__ReleaseHookAll(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10d50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__90_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10d60

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Attack>b__90_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  uint uVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c40 = '\x01';
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
    uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      bVar3 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pCVar1 = (__c->fields).Human;
        if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10e11;
        if ((char)(pCVar1->fields).CustomDamage != '\0') {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10e11;
          Controllers_HumanAIController__Attack(__this_00,uVar2 & 0xff,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e10e11:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindNearestEnemy>b__91_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__FindNearestEnemy_b__91_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10e20

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__FindNearestEnemy>b__91_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  Characters_ITargetable_o *value;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10e70;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10e70;
        value = Controllers_HumanAIController__FindNearestEnemy(__this_00,(MethodInfo *)0x0);
        Controllers_HumanAIController__set_Target(__this_00,value,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10e70:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Navigation>b__92_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__Navigation_b__92_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10e80

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__Navigation>b__92_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e10ec0;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e10ec0;
        Controllers_HumanAIController__MoveToPosition(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e10ec0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetParticleEffect>b__93_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings___c_____CreateMethodBinding__SetParticleEffect_b__93_0 (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e10ed0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings_<>c__<__CreateMethodBinding__SetParticleEffect>b__93_0
          (CustomLogic_CustomLogicHumanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicHumanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *effectName;
  
  if (DAT_05702c41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c41 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e10f84:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    effectName = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      if (__c != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
        CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect(__c,effectName,uVar1 & 0xff,method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e10f84;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e04940

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702bae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"CurrentSpecial");
    il2cpp_init_method_metadata(&"Weapon");
    il2cpp_init_method_metadata(&"IsCarried");
    il2cpp_init_method_metadata(&"AimAt");
    il2cpp_init_method_metadata(&"SwitchAIState");
    il2cpp_init_method_metadata(&"TargetVelocity");
    il2cpp_init_method_metadata(&"IsInvincible");
    il2cpp_init_method_metadata(&"HorseWalk");
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"LeftHookEnabled");
    il2cpp_init_method_metadata(&"ReleaseHookRight");
    il2cpp_init_method_metadata(&"CurrentAmmoLeft");
    il2cpp_init_method_metadata(&"RightHookReady");
    il2cpp_init_method_metadata(&"FindNearestEnemy");
    il2cpp_init_method_metadata(&"HasHookLeft");
    il2cpp_init_method_metadata(&"HorseFollowEnabled");
    il2cpp_init_method_metadata(&"CurrentBladeDurability");
    il2cpp_init_method_metadata(&"DisablePerks");
    il2cpp_init_method_metadata(&"Move");
    il2cpp_init_method_metadata(&"CurrentGas");
    il2cpp_init_method_metadata(&"ShifterLiveTime");
    il2cpp_init_method_metadata(&"MaxAmmoRound");
    il2cpp_init_method_metadata(&"RightHookEnabled");
    il2cpp_init_method_metadata(&"SpecialCooldownTime");
    il2cpp_init_method_metadata(&"IsHookingRight");
    il2cpp_init_method_metadata(&"UseGas");
    il2cpp_init_method_metadata(&"MoveToTarget");
    il2cpp_init_method_metadata(&"LaunchHookRight");
    il2cpp_init_method_metadata(&"ReleaseHookLeft");
    il2cpp_init_method_metadata(&"IsHookingLeft");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"HasHookRight");
    il2cpp_init_method_metadata(&"MaxBlade");
    il2cpp_init_method_metadata(&"RefillImmediate");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"RightHookPosition");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"ClearHooks");
    il2cpp_init_method_metadata(&"CurrentBlade");
    il2cpp_init_method_metadata(&"Reel");
    il2cpp_init_method_metadata(&"Target");
    il2cpp_init_method_metadata(&"LeftHookReady");
    il2cpp_init_method_metadata(&"TargetPosition");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"ResetCallback");
    il2cpp_init_method_metadata(&"MaxAmmoTotal");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"MoveTo");
    il2cpp_init_method_metadata(&"AllowSkin");
    il2cpp_init_method_metadata(&"IsHookedLeft");
    il2cpp_init_method_metadata(&"MaxBladeDurability");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"ClearLeftHook");
    il2cpp_init_method_metadata(&"State");
    il2cpp_init_method_metadata(&"IsWalking");
    il2cpp_init_method_metadata(&"MountTransform");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"ClearRightHook");
    il2cpp_init_method_metadata(&"MaxGas");
    il2cpp_init_method_metadata(&"GetAIState");
    il2cpp_init_method_metadata(&"SpecialCooldownRatio");
    il2cpp_init_method_metadata(&"InvincibleTimeLeft");
    il2cpp_init_method_metadata(&"SpecialCooldown");
    il2cpp_init_method_metadata(&"MountedMapObject");
    il2cpp_init_method_metadata(&"HorseTransform");
    il2cpp_init_method_metadata(&"MountState");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"LeftHookPosition");
    il2cpp_init_method_metadata(&"Unmount");
    il2cpp_init_method_metadata(&"ActivateSpecial");
    il2cpp_init_method_metadata(&"ReleaseHookAll");
    il2cpp_init_method_metadata(&"Navigation");
    il2cpp_init_method_metadata(&"SetSpecial");
    il2cpp_init_method_metadata(&"SetParticleEffect");
    il2cpp_init_method_metadata(&"CurrentAmmoRound");
    il2cpp_init_method_metadata(&"AllowHorse");
    il2cpp_init_method_metadata(&"LaunchHookLeft");
    il2cpp_init_method_metadata(&"AutoRefillGas");
    il2cpp_init_method_metadata(&"Grounded");
    il2cpp_init_method_metadata(&"CanDodge");
    il2cpp_init_method_metadata(&"MountMapObject");
    il2cpp_init_method_metadata(&"IsHookedRight");
    il2cpp_init_method_metadata(&"SetAIState");
    il2cpp_init_method_metadata(&"SetWeapon");
    il2cpp_init_method_metadata(&"Pivot");
    il2cpp_init_method_metadata(&"HasAIState");
    il2cpp_init_method_metadata(&"HorseMount");
    il2cpp_init_method_metadata(&"HorseSpeed");
    il2cpp_init_method_metadata(&"PivotPosition");
    il2cpp_init_method_metadata(&"IsMounted");
    il2cpp_init_method_metadata(&"MountedTransform");
    DAT_05702bae = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x68597616) {
    if (uVar3 < 0x30777bfc) {
      if (uVar3 < 0x1a43a2ad) {
        if (uVar3 < 0xfa61b95) {
          if (uVar3 < 0xbecd2a0) {
            if (uVar3 == 0xa6b8020) {
              bVar4 = System_String__op_Equality(name,"Speed",(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_05702bb9 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Speed_g____gett);
                  il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Speed_g____setter);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                  DAT_05702bb9 = '\x01';
                }
                pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
                System_Func<object__object>___ctor();
                pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
                System_Action<object__object>___ctor();
                pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                return (CustomLogic_ICLMemberBinding_o *)pCVar9;
              }
            }
            else if ((uVar3 == 0xbecd29f) &&
                    (bVar4 = System_String__op_Equality(name,"ClearRightHook",(MethodInfo *)0x0),
                    (char)bVar4 != '\0')) {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702be8 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearRightHook_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702be8 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x28);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x28);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if (uVar3 == 0xd469333) {
            bVar4 = System_String__op_Equality(name,"MountMapObject",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702be9 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MountMapObject_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702be9 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x30);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x30);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if (uVar3 == 0xe1ef32d) {
            bVar4 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bfa == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Jump_b__77_0);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702bfa = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0xb8,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if ((uVar3 == 0xfa61b94) &&
                  (bVar4 = System_String__op_Equality(name,"ReleaseHookLeft",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c04 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookLeft_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c04 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x108);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x108);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x108) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x108,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 < 0x155683ff) {
          if (uVar3 == 0xfedf86f) {
            bVar4 = System_String__op_Equality(name,"ShifterLiveTime",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bb4 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShifterLiveTime);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShifterLiveTime_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                DAT_05702bb4 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if (uVar3 == 0x1366e8ca) {
            bVar4 = System_String__op_Equality(name,"ClearHooks",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702be6 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearHooks_b__57);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702be6 = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x18);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0x18);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if ((uVar3 == 0x155683fe) &&
                  (bVar4 = System_String__op_Equality(name,"RefillImmediate",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RefillImmediate_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702be5 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x16b793c7) {
          bVar4 = System_String__op_Equality(name,"AllowSkin",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be3 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AllowSkin_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AllowSkin_g____se);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702be3 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x182eb08c) {
          bVar4 = System_String__op_Equality(name,"SetParticleEffect",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c0a == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetParticleEffect);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c0a = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x138);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x138);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x138) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x138,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x1a43a2ac) &&
                (bVar4 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bfd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reload_b__80_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bfd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xd0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x25127d63) {
        if (uVar3 < 0x1d66a536) {
          if (uVar3 == 0x1aa86c38) {
            bVar4 = System_String__op_Equality(name,"SpecialCooldownTime",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bb2 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpecialCooldownTi);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                DAT_05702bb2 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if (uVar3 == 0x1af78071) {
            bVar4 = System_String__op_Equality(name,"RightHookReady",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bdb == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookReady);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                DAT_05702bdb = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
              System_Func<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x1d66a535) &&
                  (bVar4 = System_String__op_Equality(name,"RightHookPosition",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bdd == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookPositi);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bdd = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x1deca496) {
          bVar4 = System_String__op_Equality(name,"State",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bcc == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__State_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bcc = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x214f33c4) {
          bVar4 = System_String__op_Equality(name,"PivotPosition",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bd3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PivotPosition_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bd3 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x25127d62) &&
                (bVar4 = System_String__op_Equality(name,"GetAIState",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bf5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAIState_b__72);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bf5 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x27bbaff1) {
        if (uVar3 == 0x251ec0b8) {
          bVar4 = System_String__op_Equality(name,"ClearLeftHook",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearLeftHook_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702be7 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x26f20788) {
          bVar4 = System_String__op_Equality(name,"DisablePerks",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bef == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DisablePerks_b__6);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702bef = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x60);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x60);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x27bbaff0) &&
                (bVar4 = System_String__op_Equality(name,"MountedMapObject",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bc9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountedMapObjec);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bc9 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x29089400) {
        bVar4 = System_String__op_Equality(name,"ReleaseHookAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c06 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookAll_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c06 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x118);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x118);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x118) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x118,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2dd6aa84) {
        bVar4 = System_String__op_Equality(name,"CurrentBlade",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bbf == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentBlade_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentBlade_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bbf = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x30777bfb) &&
              (bVar4 = System_String__op_Equality(name,"TargetPosition",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bdf == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetPosition);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TargetPosition_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bdf = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x420a2bbc) {
      if (uVar3 < 0x3dd202bc) {
        if (uVar3 < 0x38adb9d5) {
          if (uVar3 == 0x3862ca21) {
            bVar4 = System_String__op_Equality(name,"SpecialCooldown",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bb3 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpecialCooldown_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                DAT_05702bb3 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x38adb9d4) &&
                  (bVar4 = System_String__op_Equality(name,"LeftHookEnabled",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bc5 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookEnabled);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHookEnabled_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bc5 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x3b3e09bf) {
          bVar4 = System_String__op_Equality(name,"AllowHorse",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be2 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AllowHorse_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AllowHorse_g____s);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702be2 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x3d775299) {
          bVar4 = System_String__op_Equality(name,"HorseSpeed",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bbc == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseSpeed_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorseSpeed_g____s);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bbc = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x3dd202bb) &&
                (bVar4 = System_String__op_Equality(name,"CurrentBladeDurability",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bbd == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentBladeDur);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentBladeDurab);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bbd = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x3f43a877) {
        if (uVar3 == 0x3ea939be) {
          bVar4 = System_String__op_Equality(name,"LeftHookReady",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bda == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookReady_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bda = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x3f04971b) {
          bVar4 = System_String__op_Equality(name,"TargetVelocity",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetVelocity);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702be0 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x3f43a876) &&
                (bVar4 = System_String__op_Equality(name,"HasHookRight",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bd9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasHookRight_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bd9 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x3f66c333) {
        bVar4 = System_String__op_Equality(name,"CurrentGas",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bb6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentGas_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentGas_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bb6 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x41919631) {
        bVar4 = System_String__op_Equality(name,"MaxAmmoRound",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bc2 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxAmmoRound_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxAmmoRound_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bc2 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x420a2bbb) &&
              (bVar4 = System_String__op_Equality(name,"IsMounted",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bc7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMounted_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bc7 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x533f8aac) {
      if (uVar3 < 0x47bfe6a0) {
        if (uVar3 == 0x43399e7a) {
          bVar4 = System_String__op_Equality(name,"SetSpecial",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bec == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSpecial_b__63);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702bec = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x48);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x48);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x45aa17b3) {
          bVar4 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bf2 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__69_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702bf2 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x78);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x78);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x47bfe69f) &&
                (bVar4 = System_String__op_Equality(name,"Grounded",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bd1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grounded_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bd1 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x481546b1) {
        bVar4 = System_String__op_Equality(name,"UseGas",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bfe == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UseGas_b__81_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bfe = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xd8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xd8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x4fc3dee0) {
        bVar4 = System_String__op_Equality(name,"FindNearestEnemy",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c08 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindNearestEnemy);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c08 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x128);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x128) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x128,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x533f8aab) &&
              (bVar4 = System_String__op_Equality(name,"ActivateSpecial",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bed == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ActivateSpecial_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bed = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x5aae131f) {
      if (uVar3 == 0x540059ef) {
        bVar4 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bff == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HorseWalk_b__82_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bff = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xe0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xe0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x571689d9) {
        bVar4 = System_String__op_Equality(name,"Reel",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c01 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reel_b__84_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c01 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xf0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xf0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x5aae131e) &&
              (bVar4 = System_String__op_Equality(name,"SetAIState",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bf4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAIState_b__71);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bf4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x6250ccf3) {
      bVar4 = System_String__op_Equality(name,"SetWeapon",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bee == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetWeapon_b__65_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bee = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x664a747c) {
      bVar4 = System_String__op_Equality(name,"SwitchAIState",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bf6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SwitchAIState_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bf6 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x68597615) &&
            (bVar4 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c00 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dash_b__83_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c00 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xe8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xb90ee63e) {
    if (uVar3 < 0x8af5b773) {
      if (uVar3 < 0x72ec0423) {
        if (uVar3 < 0x694fcf3f) {
          if (uVar3 == 0x693e9e8c) {
            bVar4 = System_String__op_Equality(name,"CurrentAmmoRound",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702bc1 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAmmoRoun);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentAmmoRound);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
                DAT_05702bc1 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x694fcf3e) &&
                  (bVar4 = System_String__op_Equality(name,"HasAIState",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bf3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasAIState_b__70);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702bf3 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x6c198db1) {
          bVar4 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be4 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Refill_b__55_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702be4 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8)
              ;
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x6ca8ed48) {
          bVar4 = System_String__op_Equality(name,"IsWalking",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702be1 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsWalking_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsWalking_g____se);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702be1 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x72ec0422) &&
                (bVar4 = System_String__op_Equality(name,"MountTransform",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bea == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MountTransform_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bea = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x38);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x7f2c2a35) {
        if (uVar3 == 0x78fba3bd) {
          bVar4 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bb8 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Acceleration_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Acceleration_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bb8 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x79a5e667) {
          bVar4 = System_String__op_Equality(name,"RightHookEnabled",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bc6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookEnable);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHookEnabled);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bc6 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x7f2c2a34) &&
                (bVar4 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bf8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Move_b__75_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bf8 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x80804535) {
        bVar4 = System_String__op_Equality(name,"MaxBlade",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bc0 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxBlade_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxBlade_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bc0 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x89bbe0e0) {
        bVar4 = System_String__op_Equality(name,"MoveToTarget",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bf1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToTarget_b__6);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bf1 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x8af5b772) &&
              (bVar4 = System_String__op_Equality(name,"IsHookedLeft",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bd4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookedLeft_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bd4 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x9f9bfd44) {
      if (uVar3 < 0x8da10a04) {
        if (uVar3 == 0x8b67f168) {
          bVar4 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702bde == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Target_g____get);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Target_g____sette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
              DAT_05702bde = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x8ba9331d) {
          bVar4 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c07 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Attack_b__90_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c07 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x120);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x120) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x120,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x8da10a03) &&
                (bVar4 = System_String__op_Equality(name,"AutoRefillGas",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bcb == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AutoRefillGas_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AutoRefillGas_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bcb = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x8f898d1d) {
        bVar4 = System_String__op_Equality(name,"MountedTransform",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bca == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountedTransfor);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bca = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x9a811656) {
        bVar4 = System_String__op_Equality(name,"MaxGas",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bb7 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxGas_g____get);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxGas_g____sette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bb7 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x9f9bfd43) &&
              (bVar4 = System_String__op_Equality(name,"IsHookingLeft",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bd6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookingLeft_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bd6 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xb49e22b8) {
      if (uVar3 == 0xa2ea93f6) {
        bVar4 = System_String__op_Equality(name,"MaxBladeDurability",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bbe == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxBladeDurabil);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxBladeDurabilit);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bbe = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xb3178ff1) {
        bVar4 = System_String__op_Equality(name,"IsCarried",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bd0 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCarried_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bd0 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xb49e22b7) &&
              (bVar4 = System_String__op_Equality(name,"Pivot",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bd2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pivot_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bd2 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xb51217d1) {
      bVar4 = System_String__op_Equality(name,"CurrentSpecial",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bb1 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentSpecial);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentSpecial_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bb1 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xb7c10361) {
      bVar4 = System_String__op_Equality(name,"Weapon",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bb0 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Weapon_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Weapon_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bb0 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xb90ee63d) &&
            (bVar4 = System_String__op_Equality(name,"CurrentAmmoLeft",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702bc3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAmmoLeft);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentAmmoLeft_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
        DAT_05702bc3 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd66e6cc2) {
    if (uVar3 < 0xc899a894) {
      if (uVar3 < 0xbe425289) {
        if (uVar3 == 0xbad517ac) {
          bVar4 = System_String__op_Equality(name,"LaunchHookLeft",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c02 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LaunchHookLeft_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c02 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xf8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xf8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0xbe425288) &&
                (bVar4 = System_String__op_Equality(name,"SpecialCooldownRatio",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bb5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bb5 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xc3879128) {
        bVar4 = System_String__op_Equality(name,"HorseFollowEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bba == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseFollowEnab);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorseFollowEnable);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bba = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xc52547e7) {
        bVar4 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bfb == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HorseMount_b__78);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bfb = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xc0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xc0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xc0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xc899a893) &&
              (bVar4 = System_String__op_Equality(name,"AimAt",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bf9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AimAt_b__76_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bf9 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xb0,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xcff57e4d) {
      if (uVar3 == 0xcad1beb0) {
        bVar4 = System_String__op_Equality(name,"CanDodge",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bcd == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDodge_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDodge_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bcd = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xcff18f3b) {
        bVar4 = System_String__op_Equality(name,"ResetCallback",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bf7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCallback_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702bf7 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xa0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xcff57e4c) &&
              (bVar4 = System_String__op_Equality(name,"IsHookingRight",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bd7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookingRight);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bd7 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd08919c3) {
      bVar4 = System_String__op_Equality(name,"Navigation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c09 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Navigation_b__92);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c09 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130)
          ;
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130)
          ;
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x130) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x130,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xd0b62b1e) {
      bVar4 = System_String__op_Equality(name,"HorseTransform",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bbb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseTransform);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bbb = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd66e6cc1) &&
            (bVar4 = System_String__op_Equality(name,"ReleaseHookRight",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c05 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookRight);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c05 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x110) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x110,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xf29eaaba) {
    if (uVar3 < 0xdca94c5d) {
      if (uVar3 == 0xd8e7f61f) {
        bVar4 = System_String__op_Equality(name,"IsHookedRight",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bd5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookedRight_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bd5 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xdc120448) {
        bVar4 = System_String__op_Equality(name,"InvincibleTimeLeft",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702bcf == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__InvincibleTimeL);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__InvincibleTimeLef);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
            DAT_05702bcf = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xdca94c5c) &&
              (bVar4 = System_String__op_Equality(name,"IsInvincible",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bce == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsInvincible_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsInvincible_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bce = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xe27f342a) {
      bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702baf == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702baf = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xe2a0bd4b) {
      bVar4 = System_String__op_Equality(name,"MaxAmmoTotal",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bc4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxAmmoTotal_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxAmmoTotal_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bc4 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xf29eaab9) &&
            (bVar4 = System_String__op_Equality(name,"LaunchHookRight",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c03 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LaunchHookRight_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c03 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x100) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x100,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xf8b1e70d) {
    if (uVar3 == 0xf41dd7ef) {
      bVar4 = System_String__op_Equality(name,"MountState",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bc8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountState_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
          DAT_05702bc8 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xf526d670) {
      bVar4 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702bfc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dodge_b__79_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702bfc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 200,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xf8b1e70c) &&
            (bVar4 = System_String__op_Equality(name,"LeftHookPosition",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702bdc == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookPositio);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
        DAT_05702bdc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf90f6b5d) {
    bVar4 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702bf0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__67_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702bf0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xfa055a2b) {
    bVar4 = System_String__op_Equality(name,"Unmount",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702beb == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Unmount_b__62_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702beb = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xfc93affd) &&
          (bVar4 = System_String__op_Equality(name,"HasHookLeft",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702bd8 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasHookLeft_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
      DAT_05702bd8 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHumanBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3e06a70

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702baf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702baf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Weapon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon (const MethodInfo* method);
// 0x3e06b50

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Weapon(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Weapon_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Weapon_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial (const MethodInfo* method);
// 0x3e06c30

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentSpecial
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentSpecial);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentSpecial_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime (const MethodInfo* method);
// 0x3e06d10

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownTime
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpecialCooldownTi);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown (const MethodInfo* method);
// 0x3e06df0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldown
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpecialCooldown_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__ShifterLiveTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime (const MethodInfo* method);
// 0x3e06ed0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__ShifterLiveTime
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShifterLiveTime);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShifterLiveTime_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__SpecialCooldownRatio
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio (const MethodInfo* method);
// 0x3e06fb0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__SpecialCooldownRatio
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpecialCooldown);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas (const MethodInfo* method);
// 0x3e07050

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentGas
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentGas_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentGas_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas (const MethodInfo* method);
// 0x3e07130

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxGas(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxGas_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxGas_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x3e07210

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Acceleration
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Acceleration_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Acceleration_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Speed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed (const MethodInfo* method);
// 0x3e072f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Speed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Speed_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Speed_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bb9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseFollowEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled (const MethodInfo* method);
// 0x3e073d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseFollowEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseFollowEnab);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorseFollowEnable);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform (const MethodInfo* method);
// 0x3e074b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseTransform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bbb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseTransform);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bbb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HorseSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed (const MethodInfo* method);
// 0x3e07550

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HorseSpeed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bbc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HorseSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HorseSpeed_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bbc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability (const MethodInfo* method);
// 0x3e07630

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBladeDurability
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentBladeDur);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentBladeDurab);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bbd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBladeDurability
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability (const MethodInfo* method);
// 0x3e07710

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBladeDurability
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxBladeDurabil);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxBladeDurabilit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bbe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade (const MethodInfo* method);
// 0x3e077f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentBlade
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentBlade_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentBlade_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bbf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade (const MethodInfo* method);
// 0x3e078d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxBlade(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxBlade_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxBlade_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound (const MethodInfo* method);
// 0x3e079b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoRound
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAmmoRoun);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentAmmoRound);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoRound
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound (const MethodInfo* method);
// 0x3e07a90

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoRound
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxAmmoRound_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxAmmoRound_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CurrentAmmoLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft (const MethodInfo* method);
// 0x3e07b70

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CurrentAmmoLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAmmoLeft);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CurrentAmmoLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MaxAmmoTotal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal (const MethodInfo* method);
// 0x3e07c50

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MaxAmmoTotal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxAmmoTotal_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxAmmoTotal_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled (const MethodInfo* method);
// 0x3e07d30

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookEnabled);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHookEnabled_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled (const MethodInfo* method);
// 0x3e07e10

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookEnable);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHookEnabled);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsMounted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted (const MethodInfo* method);
// 0x3e07ef0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsMounted(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMounted_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState (const MethodInfo* method);
// 0x3e07f90

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountState
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountState_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject (const MethodInfo* method);
// 0x3e08030

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedMapObject
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bc9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountedMapObjec);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bc9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__MountedTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform (const MethodInfo* method);
// 0x3e080d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__MountedTransform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MountedTransfor);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AutoRefillGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas (const MethodInfo* method);
// 0x3e08170

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AutoRefillGas
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bcb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AutoRefillGas_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AutoRefillGas_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bcb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__State
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__State (const MethodInfo* method);
// 0x3e08250

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__State(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bcc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__State_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bcc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__CanDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge (const MethodInfo* method);
// 0x3e082f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__CanDodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDodge_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDodge_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bcd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsInvincible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible (const MethodInfo* method);
// 0x3e083d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsInvincible
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsInvincible_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsInvincible_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__InvincibleTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft (const MethodInfo* method);
// 0x3e084b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__InvincibleTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bcf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__InvincibleTimeL);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__InvincibleTimeLef);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bcf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsCarried
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried (const MethodInfo* method);
// 0x3e08590

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsCarried(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCarried_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Grounded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Grounded (const MethodInfo* method);
// 0x3e08630

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Grounded(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grounded_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Pivot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot (const MethodInfo* method);
// 0x3e086d0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Pivot(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pivot_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__PivotPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition (const MethodInfo* method);
// 0x3e08770

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__PivotPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PivotPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft (const MethodInfo* method);
// 0x3e08810

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookedLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookedRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight (const MethodInfo* method);
// 0x3e088b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookedRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookedRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft (const MethodInfo* method);
// 0x3e08950

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookingLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsHookingRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight (const MethodInfo* method);
// 0x3e089f0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsHookingRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsHookingRight);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft (const MethodInfo* method);
// 0x3e08a90

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasHookLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__HasHookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight (const MethodInfo* method);
// 0x3e08b30

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__HasHookRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bd9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasHookRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bd9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady (const MethodInfo* method);
// 0x3e08bd0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookReady
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bda == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookReady_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bda = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookReady
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady (const MethodInfo* method);
// 0x3e08c70

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookReady
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bdb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookReady);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bdb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__LeftHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition (const MethodInfo* method);
// 0x3e08d10

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__LeftHookPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bdc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHookPositio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bdc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__RightHookPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition (const MethodInfo* method);
// 0x3e08db0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__RightHookPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bdd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHookPositi);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bdd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__Target
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target (const MethodInfo* method);
// 0x3e08e50

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__Target(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Target_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Target_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bde = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition (const MethodInfo* method);
// 0x3e08f30

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bdf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetPosition);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TargetPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702bdf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__TargetVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity (const MethodInfo* method);
// 0x3e09010

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__TargetVelocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetVelocity);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702be0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__IsWalking
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsWalking (const MethodInfo* method);
// 0x3e090b0

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__IsWalking(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsWalking_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsWalking_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702be1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse (const MethodInfo* method);
// 0x3e09190

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowHorse
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AllowHorse_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AllowHorse_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702be2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreatePropertyBinding__AllowSkin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin (const MethodInfo* method);
// 0x3e09270

CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreatePropertyBinding__AllowSkin(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicHumanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AllowSkin_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AllowSkin_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object);
    DAT_05702be3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicHumanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Refill
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill (const MethodInfo* method);
// 0x3e09350

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Refill(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Refill_b__55_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__RefillImmediate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate (const MethodInfo* method);
// 0x3e094a0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__RefillImmediate
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RefillImmediate_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearHooks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks (const MethodInfo* method);
// 0x3e095f0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearHooks(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearHooks_b__57);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearLeftHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook (const MethodInfo* method);
// 0x3e09740

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearLeftHook
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearLeftHook_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ClearRightHook
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook (const MethodInfo* method);
// 0x3e09890

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ClearRightHook
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearRightHook_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject (const MethodInfo* method);
// 0x3e099e0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountMapObject
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702be9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MountMapObject_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702be9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MountTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform (const MethodInfo* method);
// 0x3e09b30

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MountTransform
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MountTransform_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bea = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Unmount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount (const MethodInfo* method);
// 0x3e09c80

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Unmount(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702beb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Unmount_b__62_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702beb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial (const MethodInfo* method);
// 0x3e09dd0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetSpecial(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSpecial_b__63);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bec = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ActivateSpecial
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial (const MethodInfo* method);
// 0x3e09f20

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ActivateSpecial
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ActivateSpecial_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bed = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetWeapon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon (const MethodInfo* method);
// 0x3e0a070

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetWeapon(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetWeapon_b__65_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bee = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__DisablePerks
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks (const MethodInfo* method);
// 0x3e0a1c0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__DisablePerks
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DisablePerks_b__6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bef = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x3e0a310

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__67_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__MoveToTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MoveToTarget (const MethodInfo* method);
// 0x3e0a460

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__MoveToTarget
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToTarget_b__6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Idle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Idle (const MethodInfo* method);
// 0x3e0a5b0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Idle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__69_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HasAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState (const MethodInfo* method);
// 0x3e0a700

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HasAIState(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasAIState_b__70);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState (const MethodInfo* method);
// 0x3e0a850

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetAIState(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAIState_b__71);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__GetAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState (const MethodInfo* method);
// 0x3e0a9a0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__GetAIState(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAIState_b__72);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SwitchAIState
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState (const MethodInfo* method);
// 0x3e0aaf0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SwitchAIState
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SwitchAIState_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ResetCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback (const MethodInfo* method);
// 0x3e0ac40

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ResetCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCallback_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x3e0ad90

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Move_b__75_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__AimAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt (const MethodInfo* method);
// 0x3e0aee0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__AimAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bf9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AimAt_b__76_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bf9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Jump
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump (const MethodInfo* method);
// 0x3e0b030

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Jump(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Jump_b__77_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bfa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseMount
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount (const MethodInfo* method);
// 0x3e0b180

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseMount(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HorseMount_b__78);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bfb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xc0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dodge
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge (const MethodInfo* method);
// 0x3e0b2d0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dodge(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dodge_b__79_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bfc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 200);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reload
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload (const MethodInfo* method);
// 0x3e0b420

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reload(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reload_b__80_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bfd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__UseGas
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas (const MethodInfo* method);
// 0x3e0b570

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__UseGas(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bfe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UseGas_b__81_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bfe = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__HorseWalk
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk (const MethodInfo* method);
// 0x3e0b6c0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__HorseWalk(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702bff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HorseWalk_b__82_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702bff = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Dash
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash (const MethodInfo* method);
// 0x3e0b810

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Dash(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Dash_b__83_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c00 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xe8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Reel
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel (const MethodInfo* method);
// 0x3e0b960

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Reel(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reel_b__84_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c01 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft (const MethodInfo* method);
// 0x3e0bab0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LaunchHookLeft_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c02 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf8) = function;
    il2cpp_runtime_glue(lVar2 + 0xf8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__LaunchHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight (const MethodInfo* method);
// 0x3e0bc00

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__LaunchHookRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LaunchHookRight_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c03 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x100);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x100) = function;
    il2cpp_runtime_glue(lVar2 + 0x100,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookLeft
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft (const MethodInfo* method);
// 0x3e0bd50

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookLeft
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookLeft_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c04 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x108);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x108) = function;
    il2cpp_runtime_glue(lVar2 + 0x108,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookRight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight (const MethodInfo* method);
// 0x3e0bea0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookRight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookRight);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c05 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x110);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x110) = function;
    il2cpp_runtime_glue(lVar2 + 0x110,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__ReleaseHookAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll (const MethodInfo* method);
// 0x3e0bff0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__ReleaseHookAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReleaseHookAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c06 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x118);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x118) = function;
    il2cpp_runtime_glue(lVar2 + 0x118,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x3e0c140

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Attack_b__90_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c07 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x120);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x120) = function;
    il2cpp_runtime_glue(lVar2 + 0x120,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__FindNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy (const MethodInfo* method);
// 0x3e0c290

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__FindNearestEnemy
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindNearestEnemy);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c08 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x128);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x128) = function;
    il2cpp_runtime_glue(lVar2 + 0x128,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__Navigation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation (const MethodInfo* method);
// 0x3e0c3e0

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__Navigation(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Navigation_b__92);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c09 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x130);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x130) = function;
    il2cpp_runtime_glue(lVar2 + 0x130,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$__CreateMethodBinding__SetParticleEffect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o* CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect (const MethodInfo* method);
// 0x3e0c530

CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *
CustomLogic_CustomLogicHumanBuiltin_Bindings____CreateMethodBinding__SetParticleEffect
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *__this;
  
  if (DAT_05702c0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetParticleEffect);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c0a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x138);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x138) = function;
    il2cpp_runtime_glue(lVar2 + 0x138,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicHumanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicHumanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicHumanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e0c680

void CustomLogic_CustomLogicHumanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702c0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"CurrentSpecial");
    il2cpp_init_method_metadata(&"Weapon");
    il2cpp_init_method_metadata(&"IsCarried");
    il2cpp_init_method_metadata(&"AimAt");
    il2cpp_init_method_metadata(&"SwitchAIState");
    il2cpp_init_method_metadata(&"TargetVelocity");
    il2cpp_init_method_metadata(&"IsInvincible");
    il2cpp_init_method_metadata(&"HorseWalk");
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"LeftHookEnabled");
    il2cpp_init_method_metadata(&"ReleaseHookRight");
    il2cpp_init_method_metadata(&"CurrentAmmoLeft");
    il2cpp_init_method_metadata(&"RightHookReady");
    il2cpp_init_method_metadata(&"FindNearestEnemy");
    il2cpp_init_method_metadata(&"HasHookLeft");
    il2cpp_init_method_metadata(&"HorseFollowEnabled");
    il2cpp_init_method_metadata(&"CurrentBladeDurability");
    il2cpp_init_method_metadata(&"DisablePerks");
    il2cpp_init_method_metadata(&"Move");
    il2cpp_init_method_metadata(&"CurrentGas");
    il2cpp_init_method_metadata(&"ShifterLiveTime");
    il2cpp_init_method_metadata(&"MaxAmmoRound");
    il2cpp_init_method_metadata(&"RightHookEnabled");
    il2cpp_init_method_metadata(&"SpecialCooldownTime");
    il2cpp_init_method_metadata(&"IsHookingRight");
    il2cpp_init_method_metadata(&"UseGas");
    il2cpp_init_method_metadata(&"MoveToTarget");
    il2cpp_init_method_metadata(&"LaunchHookRight");
    il2cpp_init_method_metadata(&"ReleaseHookLeft");
    il2cpp_init_method_metadata(&"IsHookingLeft");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"HasHookRight");
    il2cpp_init_method_metadata(&"MaxBlade");
    il2cpp_init_method_metadata(&"RefillImmediate");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"RightHookPosition");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"ClearHooks");
    il2cpp_init_method_metadata(&"CurrentBlade");
    il2cpp_init_method_metadata(&"Reel");
    il2cpp_init_method_metadata(&"Target");
    il2cpp_init_method_metadata(&"LeftHookReady");
    il2cpp_init_method_metadata(&"TargetPosition");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"ResetCallback");
    il2cpp_init_method_metadata(&"MaxAmmoTotal");
    il2cpp_init_method_metadata(&"Dash");
    il2cpp_init_method_metadata(&"MoveTo");
    il2cpp_init_method_metadata(&"AllowSkin");
    il2cpp_init_method_metadata(&"IsHookedLeft");
    il2cpp_init_method_metadata(&"MaxBladeDurability");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"ClearLeftHook");
    il2cpp_init_method_metadata(&"State");
    il2cpp_init_method_metadata(&"IsWalking");
    il2cpp_init_method_metadata(&"MountTransform");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"ClearRightHook");
    il2cpp_init_method_metadata(&"MaxGas");
    il2cpp_init_method_metadata(&"GetAIState");
    il2cpp_init_method_metadata(&"SpecialCooldownRatio");
    il2cpp_init_method_metadata(&"InvincibleTimeLeft");
    il2cpp_init_method_metadata(&"SpecialCooldown");
    il2cpp_init_method_metadata(&"MountedMapObject");
    il2cpp_init_method_metadata(&"HorseTransform");
    il2cpp_init_method_metadata(&"MountState");
    il2cpp_init_method_metadata(&"Reload");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"LeftHookPosition");
    il2cpp_init_method_metadata(&"Unmount");
    il2cpp_init_method_metadata(&"ActivateSpecial");
    il2cpp_init_method_metadata(&"ReleaseHookAll");
    il2cpp_init_method_metadata(&"Navigation");
    il2cpp_init_method_metadata(&"SetSpecial");
    il2cpp_init_method_metadata(&"SetParticleEffect");
    il2cpp_init_method_metadata(&"CurrentAmmoRound");
    il2cpp_init_method_metadata(&"AllowHorse");
    il2cpp_init_method_metadata(&"LaunchHookLeft");
    il2cpp_init_method_metadata(&"AutoRefillGas");
    il2cpp_init_method_metadata(&"Grounded");
    il2cpp_init_method_metadata(&"CanDodge");
    il2cpp_init_method_metadata(&"MountMapObject");
    il2cpp_init_method_metadata(&"IsHookedRight");
    il2cpp_init_method_metadata(&"SetAIState");
    il2cpp_init_method_metadata(&"SetWeapon");
    il2cpp_init_method_metadata(&"Pivot");
    il2cpp_init_method_metadata(&"HasAIState");
    il2cpp_init_method_metadata(&"HorseMount");
    il2cpp_init_method_metadata(&"HorseSpeed");
    il2cpp_init_method_metadata(&"PivotPosition");
    il2cpp_init_method_metadata(&"IsMounted");
    il2cpp_init_method_metadata(&"MountedTransform");
    DAT_05702c0b = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Weapon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentSpecial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialCooldownTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialCooldown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterLiveTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpecialCooldownRatio",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Acceleration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Speed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseFollowEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentBladeDurability",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxBladeDurability",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentBlade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxBlade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentAmmoRound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxAmmoRound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentAmmoLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxAmmoTotal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHookEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHookEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsMounted",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountedMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountedTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AutoRefillGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"State",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CanDodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsInvincible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InvincibleTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsCarried",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grounded",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pivot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PivotPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsHookedLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsHookedRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsHookingLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsHookingRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasHookLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasHookRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHookReady",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHookReady",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHookPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHookPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Target",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TargetPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TargetVelocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsWalking",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AllowHorse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AllowSkin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RefillImmediate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearHooks",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearLeftHook",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearRightHook",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MountTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Unmount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetSpecial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ActivateSpecial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetWeapon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DisablePerks",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveToTarget",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasAIState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetAIState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAIState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SwitchAIState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ResetCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Move",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AimAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UseGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HorseWalk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reel",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LaunchHookLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LaunchHookRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReleaseHookLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReleaseHookRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReleaseHookAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindNearestEnemy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Navigation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetParticleEffect",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d310

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_2_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar1;
  undefined8 in_RDX;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    vtable_dispatch = (__i->klass->vtable)._11_get_Position.methodPtr;
    pIVar1 = (Il2CppObject *)
             (*vtable_dispatch)
                       (__i,(__i->klass->vtable)._11_get_Position.method,in_RDX,
                        vtable_dispatch);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d330

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_2_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicHumanBuiltin_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  
  if (DAT_05702c0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c0c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = __i->klass;
    vtable_dispatch = (pCVar1->vtable)._12_set_Position.methodPtr;
    (*vtable_dispatch)
              (__i,pIVar2,(pCVar1->vtable)._12_set_Position.method,pCVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____getter_3_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d3c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Weapon>g____getter_3_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b85 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HumanWeapon);
      DAT_05702b85 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (lVar2 = *(long *)&(pCVar1->fields).MountState, lVar2 != 0)) {
      local_20.klass = TypeInfo_HumanWeapon;
      local_20.monitor = (void *)0xffffffffffffffff;
      local_10 = *(undefined4 *)(lVar2 + 0x1d0);
      pSVar3 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Weapon>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Weapon_g____setter_3_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d440

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Weapon>g____setter_3_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *weapon;
  MethodInfo *method_00;
  
  if (DAT_05702c0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c0d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  weapon = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__i,weapon,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____getter_4_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d4c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentSpecial>g____getter_4_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    return (Il2CppObject *)(pCVar1->fields)._customSkinLoader;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentSpecial>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentSpecial_g____setter_4_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d4e0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentSpecial>g____setter_4_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  System_String_o *special;
  
  if (DAT_05702c0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c0e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  special = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String)
  ;
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____getter_5_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d580

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__SpecialCooldownTime>g____getter_5_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    __this = (pCVar1->fields).OnPlayerPropertiesChanged;
    if (__this != (System_Action_Hashtable__o *)0x0) {
      Characters_BaseUseable__GetCooldownRatio((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0)
      ;
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownTime>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownTime_g____setter_5_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d5d0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__SpecialCooldownTime>g____setter_5_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this;
  float fVar2;
  float ratio;
  
  if (DAT_05702c0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c0f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    __this = (pCVar1->fields).OnPlayerPropertiesChanged;
    if (__this != (System_Action_Hashtable__o *)0x0) {
      ratio = 0.0;
      if (0.0 <= fVar2) {
        ratio = fVar2;
      }
      Characters_BaseUseable__SetCooldownRatio
                ((Characters_BaseUseable_o *)__this,ratio,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____getter_6_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d670

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__SpecialCooldown>g____getter_6_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldown>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldown_g____setter_6_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d6c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__SpecialCooldown>g____setter_6_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05702c10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c10 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged;
    if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar3;
      }
      *(float *)&(pSVar2->fields).method_ptr = fVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____getter_7_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d750

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__ShifterLiveTime>g____getter_7_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  Il2CppObject *pIVar4;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b86 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
      DAT_05702b86 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged;
      local_c = 0;
      if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
        bVar1 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ShifterTransformSpecial)) {
          if (pSVar3 == (System_Action_Hashtable__o *)0x0) goto LAB_03e0d7f1;
          local_c = (undefined4)(pSVar3->fields).method_code;
        }
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
      return pIVar4;
    }
  }
LAB_03e0d7f1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__ShifterLiveTime>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__ShifterLiveTime_g____setter_7_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d800

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__ShifterLiveTime>g____setter_7_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  float fVar4;
  
  if (DAT_05702c11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c11 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b87 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
      DAT_05702b87 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged;
      if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
        bVar1 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ShifterTransformSpecial)) {
          if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
            *(float *)&(pSVar3->fields).method_code = fVar4;
            return;
          }
          goto LAB_03e0d8ed;
        }
      }
      return;
    }
  }
LAB_03e0d8ed:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__SpecialCooldownRatio>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__SpecialCooldownRatio_g____getter_8_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d900

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__SpecialCooldownRatio>g____getter_8_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    __this = (pCVar1->fields).OnPlayerPropertiesChanged;
    if (__this != (System_Action_Hashtable__o *)0x0) {
      Characters_BaseUseable__GetCooldownRatio((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0)
      ;
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____getter_9_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0d950

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentGas>g____getter_9_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Horse != (Characters_Horse_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentGas>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentGas_g____setter_9_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0d990

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentGas>g____setter_9_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05702c12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c12 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    fVar4 = (float)(pCVar2->fields).SoundsEnabled;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    (pCVar2->fields).FootstepsEnabled = (bool_conflict)fVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____getter_10_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0da30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxGas>g____getter_10_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Horse != (Characters_Horse_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxGas>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxGas_g____setter_10_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0da70

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxGas>g____setter_10_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this;
  float fVar2;
  
  if (DAT_05702c13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c13 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).Horse, __this != (Characters_Horse_o *)0x0)) {
    (__this->fields).SoundsEnabled = (bool_conflict)fVar2;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____getter_11_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0db00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Acceleration>g____getter_11_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Horse != (Characters_Horse_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Acceleration>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Acceleration_g____setter_11_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0db40

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Acceleration>g____setter_11_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this;
  int32_t iVar2;
  
  if (DAT_05702c14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c14 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).Horse, __this != (Characters_Horse_o *)0x0)) {
    *(int32_t *)((long)&(__this->fields).m_CancellationTokenSource + 4) = iVar2;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____getter_12_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0dbd0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Speed>g____getter_12_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Horse != (Characters_Horse_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Speed>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Speed_g____setter_12_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0dc10

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Speed>g____setter_12_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this;
  int32_t iVar2;
  
  if (DAT_05702c15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c15 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).Horse, __this != (Characters_Horse_o *)0x0)) {
    *(int32_t *)&(__this->fields).m_CachedPtr = iVar2;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____getter_13_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0dca0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HorseFollowEnabled>g____getter_13_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *x;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined1 uVar4;
  undefined8 uStack_18;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    uStack_18 = in_RAX;
    if (DAT_05702b88 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05702b88 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      x = (pCVar1->fields).HookLeft;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar4 = 0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (x == (Characters_HookUseable_o *)0x0) goto LAB_03e0dd33;
        uVar4 = *(undefined1 *)((long)&x[2].fields.Hooks + 4);
      }
      uStack_18 = CONCAT17(uVar4,(undefined7)uStack_18);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar3;
    }
  }
LAB_03e0dd33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseFollowEnabled>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseFollowEnabled_g____setter_13_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0dd40

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HorseFollowEnabled>g____setter_13_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *x;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c16 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c16 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b89 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05702b89 = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      x = (pCVar1->fields).HookLeft;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (x == (Characters_HookUseable_o *)0x0) goto LAB_03e0de09;
        *(char *)((long)&x[2].fields.Hooks + 4) = (char)bVar2;
      }
      return;
    }
  }
LAB_03e0de09:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseTransform>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseTransform_g____getter_14_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0de10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HorseTransform>g____getter_14_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____getter_15_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0de30

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HorseSpeed>g____getter_15_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Horse != (Characters_Horse_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HorseSpeed>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HorseSpeed_g____setter_15_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0de70

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HorseSpeed>g____setter_15_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  float fVar3;
  
  if (DAT_05702c17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c17 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    (pCVar2->fields).MaxSoundDistance = fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____getter_16_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0df00

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentBladeDurability>g____getter_16_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b8b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b8b = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0dfa1;
          local_c = *(undefined4 *)(pSVar3->m_Items + 4);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
      return pIVar5;
    }
  }
LAB_03e0dfa1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBladeDurability>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBladeDurability_g____setter_16_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0dfb0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentBladeDurability>g____setter_16_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702c18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c18 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____getter_17_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e030

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxBladeDurability>g____getter_17_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b8d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b8d = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e0d1;
          local_c = *(undefined4 *)((long)pSVar3->m_Items + 0x1c);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e0d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBladeDurability>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBladeDurability_g____setter_17_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e0e0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxBladeDurability>g____setter_17_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  float fVar5;
  
  if (DAT_05702c19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c19 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b8e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b8e = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 != (System_Object_array *)0x0) {
            *(float *)((long)pSVar3->m_Items + 0x1c) = fVar5;
            return;
          }
          goto LAB_03e0e1cd;
        }
      }
      return;
    }
  }
LAB_03e0e1cd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____getter_18_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e1e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentBlade>g____getter_18_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b8f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b8f = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e27c;
          local_c = *(undefined4 *)(pSVar3->m_Items + 5);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e27c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentBlade>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentBlade_g____setter_18_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e290

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentBlade>g____setter_18_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  int32_t iVar5;
  int iVar6;
  
  if (DAT_05702c1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b90 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b90 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 != (System_Object_array *)0x0) {
            iVar6 = *(int *)((long)pSVar3->m_Items + 0x24);
            if (iVar5 < iVar6) {
              iVar6 = iVar5;
            }
            *(int *)(pSVar3->m_Items + 5) = iVar6;
            return;
          }
          goto LAB_03e0e376;
        }
      }
      return;
    }
  }
LAB_03e0e376:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____getter_19_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e380

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxBlade>g____getter_19_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b91 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b91 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e41c;
          local_c = *(undefined4 *)((long)pSVar3->m_Items + 0x24);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e41c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxBlade>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxBlade_g____setter_19_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e430

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxBlade>g____setter_19_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  int32_t iVar5;
  
  if (DAT_05702c1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b92 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
      DAT_05702b92 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (pSVar3 != (System_Object_array *)0x0) {
            *(int32_t *)((long)pSVar3->m_Items + 0x24) = iVar5;
            return;
          }
          goto LAB_03e0e50a;
        }
      }
      return;
    }
  }
LAB_03e0e50a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____getter_20_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e510

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentAmmoRound>g____getter_20_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b93 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b93 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e5ac;
          local_c = *(undefined4 *)(pSVar3->m_Items + 5);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e5ac:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoRound>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoRound_g____setter_20_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e5c0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentAmmoRound>g____setter_20_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  int32_t iVar6;
  
  if (DAT_05702c1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b94 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b94 = '\x01';
    }
    pCVar3 = (__i->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      pSVar4 = (pCVar3->fields).crossfadeCache;
      if (pSVar4 != (System_Object_array *)0x0) {
        pIVar5 = (pSVar4->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
           ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar4 != (System_Object_array *)0x0) {
            iVar2 = *(int *)((long)pSVar4->m_Items + 0x24);
            if (iVar2 <= iVar6) {
              iVar6 = iVar2;
            }
            *(int32_t *)(pSVar4->m_Items + 5) = iVar6;
            return;
          }
          goto LAB_03e0e6a6;
        }
      }
      return;
    }
  }
LAB_03e0e6a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____getter_21_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e6b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxAmmoRound>g____getter_21_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b95 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e74c;
          local_c = *(undefined4 *)((long)pSVar3->m_Items + 0x24);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e74c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoRound>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoRound_g____setter_21_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e760

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxAmmoRound>g____setter_21_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  int32_t iVar5;
  
  if (DAT_05702c1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b96 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b96 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 != (System_Object_array *)0x0) {
            *(int32_t *)((long)pSVar3->m_Items + 0x24) = iVar5;
            return;
          }
          goto LAB_03e0e83a;
        }
      }
      return;
    }
  }
LAB_03e0e83a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____getter_22_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e840

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentAmmoLeft>g____getter_22_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b97 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b97 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0e8dc;
          local_c = *(undefined4 *)(pSVar3->m_Items + 4);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0e8dc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAmmoLeft>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CurrentAmmoLeft_g____setter_22_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0e8f0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CurrentAmmoLeft>g____setter_22_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  int32_t iVar6;
  
  if (DAT_05702c1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b98 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b98 = '\x01';
    }
    pCVar3 = (__i->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      pSVar4 = (pCVar3->fields).crossfadeCache;
      if (pSVar4 != (System_Object_array *)0x0) {
        pIVar5 = (pSVar4->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
           ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar4 != (System_Object_array *)0x0) {
            iVar2 = *(int *)((long)pSVar4->m_Items + 0x1c);
            if (iVar2 <= iVar6) {
              iVar6 = iVar2;
            }
            *(int32_t *)(pSVar4->m_Items + 4) = iVar6;
            return;
          }
          goto LAB_03e0e9d6;
        }
      }
      return;
    }
  }
LAB_03e0e9d6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____getter_23_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0e9e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxAmmoTotal>g____getter_23_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  undefined4 local_c;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b99 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b99 = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      local_c = 0;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           (local_c = 0, (pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e0ea7c;
          local_c = *(undefined4 *)((long)pSVar3->m_Items + 0x1c);
        }
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar5;
    }
  }
LAB_03e0ea7c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MaxAmmoTotal>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MaxAmmoTotal_g____setter_23_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0ea90

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MaxAmmoTotal>g____setter_23_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  int32_t iVar5;
  
  if (DAT_05702c1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c1f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b9a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
      DAT_05702b9a = '\x01';
    }
    pCVar2 = (__i->fields).Human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pSVar3 = (pCVar2->fields).crossfadeCache;
      if (pSVar3 != (System_Object_array *)0x0) {
        pIVar4 = (pSVar3->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
           ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          if (pSVar3 != (System_Object_array *)0x0) {
            *(int32_t *)((long)pSVar3->m_Items + 0x1c) = iVar5;
            return;
          }
          goto LAB_03e0eb6a;
        }
      }
      return;
    }
  }
LAB_03e0eb6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____getter_24_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0eb70

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__LeftHookEnabled>g____getter_24_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).HumanCache != (Characters_HumanComponentCache_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookEnabled>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookEnabled_g____setter_24_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0ebb0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__LeftHookEnabled>g____setter_24_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *pCVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c20 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).HumanCache, pCVar2 != (Characters_HumanComponentCache_o *)0x0)) {
    *(char *)((long)&(pCVar2->fields).HandL + 4) = (char)bVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____getter_25_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0ec40

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__RightHookEnabled>g____getter_25_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     ((pCVar1->fields).Special != (Characters_BaseUseable_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookEnabled>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookEnabled_g____setter_25_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0ec80

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__RightHookEnabled>g____setter_25_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c21 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).Special, pCVar2 != (Characters_BaseUseable_o *)0x0)) {
    *(char *)((long)&pCVar2[1].klass + 4) = (char)bVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsMounted>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsMounted_g____getter_26_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0ed10

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsMounted>g____getter_26_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountState>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountState_g____getter_27_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0ed50

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MountState>g____getter_27_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedMapObject>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedMapObject_g____getter_28_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0ed90

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MountedMapObject>g____getter_28_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  Characters_Human_o *pCVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702b9b = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).BackHuman == (Characters_Human_o *)0x0) {
      return (Il2CppObject *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      pCVar1 = (__i->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e02bd9;
    }
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this,(Map_MapObject_o *)(pCVar1->fields).BackHuman,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
LAB_03e02bd9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__MountedTransform>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__MountedTransform_g____getter_29_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0edb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__MountedTransform>g____getter_29_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *transform;
  bool_conflict bVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b9c = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    x = *(UnityEngine_Object_o **)&(pCVar1->fields).CarryVelocity.fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return (Il2CppObject *)0x0;
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      transform = *(UnityEngine_Transform_o **)&(pCVar1->fields).CarryVelocity.fields;
      __this = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____getter_30_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0edd0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AutoRefillGas>g____getter_30_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas(__i,method);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AutoRefillGas>g____setter|30_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AutoRefillGas_g____setter_30_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0ee00

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AutoRefillGas>g____setter_30_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  Settings_TypedSetting_bool__o *__this;
  bool_conflict bVar3;
  uint uVar4;
  
  if (DAT_05702c22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c22 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05702b9e = '\x01';
  }
  pCVar1 = (__i->fields).Human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pCVar1 = (__i->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
       (__this = *(Settings_TypedSetting_bool__o **)(lVar2 + 200),
       __this != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value(__this,uVar4 & 0xff,MethodInfo_Void_set_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__State>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_31_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0ee80

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__State>g____getter_31_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  bool_conflict local_10;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702b9f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HumanState);
      DAT_05702b9f = '\x01';
    }
    pCVar1 = (__i->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      local_10 = (pCVar1->fields).FinishSetup;
      local_20.klass = TypeInfo_HumanState;
      local_20.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____getter_32_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0eef0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CanDodge>g____getter_32_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__CanDodge>g____setter|32_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__CanDodge_g____setter_32_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0ef30

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__CanDodge>g____setter_32_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702c23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c23 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    *(char *)((long)&(pCVar1->fields)._lastMountedPosition.fields.x + 3) = (char)bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____getter_33_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0efb0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsInvincible>g____getter_33_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsInvincible>g____setter|33_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsInvincible_g____setter_33_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0eff0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsInvincible>g____setter_33_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702c24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c24 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    *(char *)&(pCVar1->fields)._lastMountedPosition.fields.y = (char)bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____getter_34_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f070

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__InvincibleTimeLeft>g____getter_34_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__InvincibleTimeLeft>g____setter|34_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__InvincibleTimeLeft_g____setter_34_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f0b0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__InvincibleTimeLeft>g____setter_34_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  float fVar2;
  
  if (DAT_05702c25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c25 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    (pCVar1->fields)._lastMountedPosition.fields.z = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsCarried>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsCarried_g____getter_35_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f130

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsCarried>g____getter_35_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Grounded>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_36_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f170

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Grounded>g____getter_36_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Pivot>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Pivot_g____getter_37_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f1b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Pivot>g____getter_37_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__PivotPosition>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__PivotPosition_g____getter_38_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f1f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__PivotPosition>g____getter_38_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Nullable_Vector3__o SVar2;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    if (DAT_05702ba0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
      il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
      DAT_05702ba0 = '\x01';
    }
    __this = (__i->fields).Human;
    if (__this != (Characters_Human_o *)0x0) {
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      SVar2 = Characters_Human__PivotPosition(__this,(MethodInfo *)0x0);
      if ((char)SVar2.fields.hasValue != '\0') {
        pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                           (SVar2.fields.value.fields,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedLeft>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedLeft_g____getter_39_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f270

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsHookedLeft>g____getter_39_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HumanCache, __this != (Characters_HumanComponentCache_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookedRight>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookedRight_g____getter_40_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f2c0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsHookedRight>g____getter_40_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this != (Characters_HookUseable_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsHooked(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingLeft>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingLeft_g____getter_41_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f310

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsHookingLeft>g____getter_41_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HumanCache, __this != (Characters_HumanComponentCache_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsHooking((Characters_HookUseable_o *)__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsHookingRight>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsHookingRight_g____getter_42_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f360

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsHookingRight>g____getter_42_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this != (Characters_HookUseable_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsHooking(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookLeft>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookLeft_g____getter_43_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f3b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HasHookLeft>g____getter_43_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HumanCache, __this != (Characters_HumanComponentCache_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__HasHookRight>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__HasHookRight_g____getter_44_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f400

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__HasHookRight>g____getter_44_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this != (Characters_HookUseable_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__HasHook(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookReady>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookReady_g____getter_45_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f450

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__LeftHookReady>g____getter_45_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (pCVar1->fields).HumanCache, __this != (Characters_HumanComponentCache_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsReady((Characters_HookUseable_o *)__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookReady>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookReady_g____getter_46_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f4a0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__RightHookReady>g____getter_46_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) &&
     (__this = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this != (Characters_HookUseable_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = Characters_HookUseable__IsReady(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__LeftHookPosition>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__LeftHookPosition_g____getter_47_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f4f0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__LeftHookPosition>g____getter_47_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__RightHookPosition>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__RightHookPosition_g____getter_48_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f510

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__RightHookPosition>g____getter_48_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____getter_49_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f530

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Target>g____getter_49_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicHumanBuiltin__get_Target(__i,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__Target>g____setter|49_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__Target_g____setter_49_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f550

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__Target>g____setter_49_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (DAT_05702c26 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_ConvertTo_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c26 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_Object_ConvertTo_Object);
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicHumanBuiltin__set_Target(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____getter_50_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f5d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__TargetPosition>g____getter_50_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_HumanAIController_o *)0x0)) {
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)&(pCVar1->fields)._target,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetPosition>g____setter|50_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetPosition_g____setter_50_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f600

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__TargetPosition>g____setter_50_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05702c27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c27 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) {
    pCVar1 = (__i->fields).Controller;
    pIVar2 = pIVar3[3].klass;
    if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
      (pCVar1->fields).TargetPosition.fields.x = *(float *)&pIVar3[3].monitor;
      (pCVar1->fields)._target = (Characters_ITargetable_o *)pIVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__TargetVelocity>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__TargetVelocity_g____getter_51_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f6a0

/* WARNING: Type propagation algorithm not settling */

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__TargetVelocity>g____getter_51_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_HumanAIController_o *)0x0)) {
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)
                         &(pCVar1->fields)._targetLastPosition.fields.value.fields.y,
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____getter_52_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f6d0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsWalking>g____getter_52_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____setter|52_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____setter_52_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f710

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__IsWalking>g____setter_52_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702c28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c28 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0f7a3;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        *(char *)&(pCVar1->fields).IsRefillable = (char)bVar2;
      }
    }
    return;
  }
LAB_03e0f7a3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____getter_53_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f7b0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AllowHorse>g____getter_53_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowHorse>g____setter|53_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowHorse_g____setter_53_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f7f0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AllowHorse>g____setter_53_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702c29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c29 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    *(char *)&(pCVar1->fields).HookRight = (char)bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____getter_54_0 (CustomLogic_CustomLogicHumanBuiltin_o* __i, const MethodInfo* method);
// 0x3e0f870

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AllowSkin>g____getter_54_0
          (CustomLogic_CustomLogicHumanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     ((__i->fields).Human != (Characters_Human_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.Bindings$$<__CreatePropertyBinding__AllowSkin>g____setter|54_1
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin_Bindings_____CreatePropertyBinding__AllowSkin_g____setter_54_1 (CustomLogic_CustomLogicHumanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e0f8b0

void CustomLogic_CustomLogicHumanBuiltin_Bindings__<__CreatePropertyBinding__AllowSkin>g____setter_54_1
               (CustomLogic_CustomLogicHumanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702c2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702c2a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
    *(char *)((long)&(pCVar1->fields).HookRight + 1) = (char)bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass159_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0___ctor (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0_o* __this, const MethodInfo* method);
// 0x3e040c0

void CustomLogic_CustomLogicHumanBuiltin_<>c__DisplayClass159_0___ctor
               (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin.<>c__DisplayClass159_0$$<ResetCallback>b__0
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0___ResetCallback_b__0 (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0_o* __this, const MethodInfo* method);
// 0x3e10f90

void CustomLogic_CustomLogicHumanBuiltin_<>c__DisplayClass159_0__<ResetCallback>b__0
               (CustomLogic_CustomLogicHumanBuiltin___c__DisplayClass159_0_o *__this,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  
  if (DAT_05702c42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702c42 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin___ctor (CustomLogic_CustomLogicHumanBuiltin_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x3e010a0

void CustomLogic_CustomLogicHumanBuiltin___ctor
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Characters_Human_o *human,
               MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Controllers_HumanAIController_o *pCVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAIController);
    DAT_05702b84 = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)human
             ,(MethodInfo *)0x0);
  (__this->fields).Human = human;
  il2cpp_runtime_glue(&(__this->fields).Human,human);
  pIVar4 = TypeInfo_HumanAIController;
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pCVar2->fields).CustomDamage == '\0') {
    return;
  }
  pCVar3 = (Controllers_HumanAIController_o *)(pCVar2->fields).WalkAnimation;
  if (pCVar3 != (Controllers_HumanAIController_o *)0x0) {
    bVar1 = (TypeInfo_HumanAIController->_2).naturalAligment;
    if ((bVar1 <= (((System_String_c *)pCVar3->klass)->_2).naturalAligment) &&
       ((((System_String_c *)pCVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanAIController)) {
      (__this->fields).Controller = pCVar3;
      if ((bVar1 <= (((System_String_c *)pCVar3->klass)->_2).naturalAligment) &&
         ((((System_String_c *)pCVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4))
      goto LAB_03e01164;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pCVar3,pIVar4);
  }
  (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
LAB_03e01164:
  il2cpp_runtime_glue(&(__this->fields).Controller);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01180

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_Position
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Position
                     ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Position (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e01190

void CustomLogic_CustomLogicHumanBuiltin__set_Position
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__IsChangingPosition(pCVar1,(MethodInfo *)0x0);
      CustomLogic_CustomLogicCharacterBuiltin__set_Position
                ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Weapon
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e011e0

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_Weapon
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (DAT_05702b85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanWeapon);
    DAT_05702b85 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields).MountState, lVar2 != 0)) {
    local_20.klass = TypeInfo_HumanWeapon;
    local_20.monitor = (void *)0xffffffffffffffff;
    local_10 = *(undefined4 *)(lVar2 + 0x1d0);
    pSVar3 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Weapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Weapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e01260

void CustomLogic_CustomLogicHumanBuiltin__set_Weapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *weapon,
               MethodInfo *method)

{
  CustomLogic_CustomLogicHumanBuiltin__SetWeapon(__this,weapon,method);
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01ab0

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_CurrentSpecial
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (System_String_o *)(pCVar1->fields)._customSkinLoader;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e01ad0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__SetSpecial(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01b70

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = (pCVar1->fields).OnPlayerPropertiesChanged;
  if (__this_00 != (System_Action_Hashtable__o *)0x0) {
    fVar2 = Characters_BaseUseable__GetCooldownRatio
                      ((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldownTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e01ba0

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldownTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this_00;
  float ratio;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = (pCVar1->fields).OnPlayerPropertiesChanged;
  if (__this_00 != (System_Action_Hashtable__o *)0x0) {
    ratio = 0.0;
    if (0.0 <= value) {
      ratio = value;
    }
    Characters_BaseUseable__SetCooldownRatio
              ((Characters_BaseUseable_o *)__this_00,ratio,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldown
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01bd0

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldown
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged;
  if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
    return *(float *)&(pSVar2->fields).method_ptr;
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_SpecialCooldown
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e01c00

void CustomLogic_CustomLogicHumanBuiltin__set_SpecialCooldown
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged;
    if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
      fVar3 = 0.0;
      if (0.0 <= value) {
        fVar3 = value;
      }
      *(float *)&(pSVar2->fields).method_ptr = fVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_ShifterLiveTime
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01c30

float CustomLogic_CustomLogicHumanBuiltin__get_ShifterLiveTime
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  
  if (DAT_05702b86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
    DAT_05702b86 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged;
    if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
      bVar1 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment;
      if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ShifterTransformSpecial)) {
        if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
          return *(float *)&(pSVar3->fields).method_code;
        }
        goto LAB_03e01ca7;
      }
    }
    return 0.0;
  }
LAB_03e01ca7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_ShifterLiveTime
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e01cb0

void CustomLogic_CustomLogicHumanBuiltin__set_ShifterLiveTime
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  
  if (DAT_05702b87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
    DAT_05702b87 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged;
    if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
      bVar1 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment;
      if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ShifterTransformSpecial)) {
        if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
          *(float *)&(pSVar3->fields).method_code = value;
          return;
        }
        goto LAB_03e01d3c;
      }
    }
    return;
  }
LAB_03e01d3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_SpecialCooldownRatio
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01d50

float CustomLogic_CustomLogicHumanBuiltin__get_SpecialCooldownRatio
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = (pCVar1->fields).OnPlayerPropertiesChanged;
  if (__this_00 != (System_Action_Hashtable__o *)0x0) {
    fVar2 = Characters_BaseUseable__GetCooldownRatio
                      ((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  return 0.0;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01d80

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    return (float)(pCVar2->fields).FootstepsEnabled;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e01db0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    fVar3 = (float)(pCVar2->fields).SoundsEnabled;
    if (value <= fVar3) {
      fVar3 = value;
    }
    (pCVar2->fields).FootstepsEnabled = (bool_conflict)fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxGas
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01de0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxGas
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    return (float)(pCVar2->fields).SoundsEnabled;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e01e10

void CustomLogic_CustomLogicHumanBuiltin__set_MaxGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Horse, __this_00 != (Characters_Horse_o *)0x0)) {
    (__this_00->fields).SoundsEnabled = (bool_conflict)value;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01e40

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Acceleration
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    return *(int32_t *)((long)&(pCVar2->fields).m_CancellationTokenSource + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Acceleration
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e01e60

void CustomLogic_CustomLogicHumanBuiltin__set_Acceleration
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Horse, __this_00 != (Characters_Horse_o *)0x0)) {
    *(int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4) = value;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Speed
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01e90

int32_t CustomLogic_CustomLogicHumanBuiltin__get_Speed
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    return (int32_t)(pCVar2->fields).m_CachedPtr;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Speed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Speed (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e01eb0

void CustomLogic_CustomLogicHumanBuiltin__set_Speed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Horse, __this_00 != (Characters_Horse_o *)0x0)) {
    *(int32_t *)&(__this_00->fields).m_CachedPtr = value;
    Characters_HumanStats__UpdateStats((Characters_HumanStats_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseFollowEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01ee0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_HorseFollowEnabled
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *x;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_05702b88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b88 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    x = (pCVar1->fields).HookLeft;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (Characters_HookUseable_o *)0x0) goto LAB_03e01f57;
      uVar3 = (uint)(*(char *)((long)&x[2].fields.Hooks + 4) != '\0');
    }
    return uVar3;
  }
LAB_03e01f57:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_HorseFollowEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e01f60

void CustomLogic_CustomLogicHumanBuiltin__set_HorseFollowEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *x;
  bool_conflict bVar2;
  
  if (DAT_05702b89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b89 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    x = (pCVar1->fields).HookLeft;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (Characters_HookUseable_o *)0x0) goto LAB_03e01fcf;
      *(char *)((long)&x[2].fields.Hooks + 4) = (char)value;
    }
    return;
  }
LAB_03e01fcf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e01fe0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_HorseTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *pCVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (DAT_05702b8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b8a = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    pCVar2 = (pCVar1->fields).HookLeft;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).HookLeft, pCVar2 != (Characters_HookUseable_o *)0x0)) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HorseSpeed
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e020b0

float CustomLogic_CustomLogicHumanBuiltin__get_HorseSpeed
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    return (pCVar2->fields).MaxSoundDistance;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_HorseSpeed
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e020e0

void CustomLogic_CustomLogicHumanBuiltin__set_HorseSpeed
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Horse, pCVar2 != (Characters_Horse_o *)0x0)) {
    (pCVar2->fields).MaxSoundDistance = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02110

float CustomLogic_CustomLogicHumanBuiltin__get_CurrentBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b8b = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          return *(float *)(pSVar3->m_Items + 4);
        }
        goto LAB_03e02187;
      }
    }
    return 0.0;
  }
LAB_03e02187:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e02190

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Characters_Human_o *pCVar5;
  System_String_o *sound;
  float fVar6;
  
  if (DAT_05702b8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05702b8c = '\x01';
  }
  pCVar5 = (__this->fields).Human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03e022df;
  pSVar3 = (pCVar5->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar2 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BladeWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        fVar6 = *(float *)((long)pSVar3->m_Items + 0x1c);
        fVar1 = *(float *)(pSVar3->m_Items + 4);
        if (value <= fVar6) {
          fVar6 = value;
        }
        fVar6 = (float)(-(uint)(0.0 <= value) & (uint)fVar6);
        *(float *)(pSVar3->m_Items + 4) = fVar6;
        if ((0.0 < fVar6) || (fVar1 <= 0.0)) {
          if (fVar6 <= 0.0) {
            return;
          }
          if (0.0 < fVar1) {
            return;
          }
          Characters_Human__ToggleBlades(pCVar5,1,(MethodInfo *)0x0);
          pCVar5 = (__this->fields).Human;
          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pCVar5 != (Characters_Human_o *)0x0) {
            sound = *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
            goto LAB_03e022ce;
          }
        }
        else {
          Characters_Human__ToggleBlades(pCVar5,0,(MethodInfo *)0x0);
          pCVar5 = (__this->fields).Human;
          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pCVar5 != (Characters_Human_o *)0x0) {
            sound = (System_String_o *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
LAB_03e022ce:
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)pCVar5,sound,(MethodInfo *)0x0);
            return;
          }
        }
      }
LAB_03e022df:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBladeDurability
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e022f0

float CustomLogic_CustomLogicHumanBuiltin__get_MaxBladeDurability
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b8d = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          return *(float *)((long)pSVar3->m_Items + 0x1c);
        }
        goto LAB_03e02367;
      }
    }
    return 0.0;
  }
LAB_03e02367:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBladeDurability
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e02370

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBladeDurability
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b8e = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          *(float *)((long)pSVar3->m_Items + 0x1c) = value;
          return;
        }
        goto LAB_03e023fc;
      }
    }
    return;
  }
LAB_03e023fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02410

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b8f = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e02484:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)(pSVar3->m_Items + 5);
      }
      goto LAB_03e02484;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e02490

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  int iVar5;
  
  if (DAT_05702b90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b90 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          iVar5 = *(int *)((long)pSVar3->m_Items + 0x24);
          if (value < iVar5) {
            iVar5 = value;
          }
          *(int *)(pSVar3->m_Items + 5) = iVar5;
          return;
        }
        goto LAB_03e02518;
      }
    }
    return;
  }
LAB_03e02518:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxBlade
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02520

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxBlade
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b91 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e02594:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)((long)pSVar3->m_Items + 0x24);
      }
      goto LAB_03e02594;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxBlade
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e025a0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxBlade
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    DAT_05702b92 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          *(int32_t *)((long)pSVar3->m_Items + 0x24) = value;
          return;
        }
        goto LAB_03e02620;
      }
    }
    return;
  }
LAB_03e02620:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02630

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b93 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e026a4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)(pSVar3->m_Items + 5);
      }
      goto LAB_03e026a4;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e026b0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  
  if (DAT_05702b94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b94 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    pSVar4 = (pCVar3->fields).crossfadeCache;
    if (pSVar4 != (System_Object_array *)0x0) {
      pIVar5 = (pSVar4->obj).klass;
      bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
         ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
        if (pSVar4 != (System_Object_array *)0x0) {
          iVar2 = *(int *)((long)pSVar4->m_Items + 0x24);
          if (iVar2 <= value) {
            value = iVar2;
          }
          *(int32_t *)(pSVar4->m_Items + 5) = value;
          return;
        }
        goto LAB_03e02738;
      }
    }
    return;
  }
LAB_03e02738:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoRound
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02740

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoRound
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b95 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e027b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)((long)pSVar3->m_Items + 0x24);
      }
      goto LAB_03e027b4;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoRound
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e027c0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoRound
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b96 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          *(int32_t *)((long)pSVar3->m_Items + 0x24) = value;
          return;
        }
        goto LAB_03e02840;
      }
    }
    return;
  }
LAB_03e02840:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CurrentAmmoLeft
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02850

int32_t CustomLogic_CustomLogicHumanBuiltin__get_CurrentAmmoLeft
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b97 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e028c4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)(pSVar3->m_Items + 4);
      }
      goto LAB_03e028c4;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CurrentAmmoLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e028d0

void CustomLogic_CustomLogicHumanBuiltin__set_CurrentAmmoLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  
  if (DAT_05702b98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b98 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    pSVar4 = (pCVar3->fields).crossfadeCache;
    if (pSVar4 != (System_Object_array *)0x0) {
      pIVar5 = (pSVar4->obj).klass;
      bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
         ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
        if (pSVar4 != (System_Object_array *)0x0) {
          iVar2 = *(int *)((long)pSVar4->m_Items + 0x1c);
          if (iVar2 <= value) {
            value = iVar2;
          }
          *(int32_t *)(pSVar4->m_Items + 4) = value;
          return;
        }
        goto LAB_03e02958;
      }
    }
    return;
  }
LAB_03e02958:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MaxAmmoTotal
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02960

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MaxAmmoTotal
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b99 = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
LAB_03e029d4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (pCVar2->fields).crossfadeCache;
  if (pSVar3 != (System_Object_array *)0x0) {
    pIVar4 = (pSVar3->obj).klass;
    bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
      if (pSVar3 != (System_Object_array *)0x0) {
        return *(int32_t *)((long)pSVar3->m_Items + 0x1c);
      }
      goto LAB_03e029d4;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_MaxAmmoTotal
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e029e0

void CustomLogic_CustomLogicHumanBuiltin__set_MaxAmmoTotal
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  
  if (DAT_05702b9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05702b9a = '\x01';
  }
  pCVar2 = (__this->fields).Human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pSVar3 = (pCVar2->fields).crossfadeCache;
    if (pSVar3 != (System_Object_array *)0x0) {
      pIVar4 = (pSVar3->obj).klass;
      bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
        if (pSVar3 != (System_Object_array *)0x0) {
          *(int32_t *)((long)pSVar3->m_Items + 0x1c) = value;
          return;
        }
        goto LAB_03e02a60;
      }
    }
    return;
  }
LAB_03e02a60:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02a70

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_LeftHookEnabled
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HumanCache, pCVar2 != (Characters_HumanComponentCache_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar2 >> 8),*(undefined1 *)((long)&(pCVar2->fields).HandL + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_LeftHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e02a90

void CustomLogic_CustomLogicHumanBuiltin__set_LeftHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).HumanCache, pCVar2 != (Characters_HumanComponentCache_o *)0x0)) {
    *(char *)((long)&(pCVar2->fields).HandL + 4) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookEnabled
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02ac0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_RightHookEnabled
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Special, pCVar2 != (Characters_BaseUseable_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar2 >> 8),*(undefined1 *)((long)&pCVar2[1].klass + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_RightHookEnabled
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e02ae0

void CustomLogic_CustomLogicHumanBuiltin__set_RightHookEnabled
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *pCVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Special, pCVar2 != (Characters_BaseUseable_o *)0x0)) {
    *(char *)((long)&pCVar2[1].klass + 4) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsMounted
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsMounted (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02b10

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsMounted
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),*(int *)&(pCVar1->fields).Weapon == 2)
    ;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountState
// il2cpp: int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02b30

int32_t CustomLogic_CustomLogicHumanBuiltin__get_MountState
                  (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return *(int32_t *)&(pCVar1->fields).Weapon;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02b50

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedMapObject
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Characters_Human_o *pCVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (DAT_05702b9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702b9b = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).BackHuman == (Characters_Human_o *)0x0) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e02bd9;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,(Map_MapObject_o *)(pCVar1->fields).BackHuman,(MethodInfo *)0x0)
      ;
      return pCVar2;
    }
  }
LAB_03e02bd9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_MountedTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02be0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicHumanBuiltin__get_MountedTransform
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *transform;
  bool_conflict bVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (DAT_05702b9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b9c = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    x = *(UnityEngine_Object_o **)&(pCVar1->fields).CarryVelocity.fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      transform = *(UnityEngine_Transform_o **)&(pCVar1->fields).CarryVelocity.fields;
      __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AutoRefillGas
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02c90

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_AutoRefillGas
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  if (DAT_05702b9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05702b9d = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar1 = (__this->fields).Human;
    if (pCVar1 == (Characters_Human_o *)0x0) {
LAB_03e02d4e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = 0;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) ||
         (lVar2 = *(long *)(lVar2 + 200), lVar2 == 0)) goto LAB_03e02d4e;
      uVar4 = (uint)(*(char *)(lVar2 + 0x11) != '\0');
    }
  }
  return uVar4;
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AutoRefillGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e02d60

void CustomLogic_CustomLogicHumanBuiltin__set_AutoRefillGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  long lVar2;
  Settings_TypedSetting_bool__o *__this_00;
  bool_conflict bVar3;
  
  if (DAT_05702b9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05702b9e = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
       (__this_00 = *(Settings_TypedSetting_bool__o **)(lVar2 + 200),
       __this_00 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value(__this_00,value & 0xff,MethodInfo_Void_set_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_State
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_State (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02e30

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_State
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  bool_conflict local_10;
  
  if (DAT_05702b9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanState);
    DAT_05702b9f = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    local_10 = (pCVar1->fields).FinishSetup;
    local_20.klass = TypeInfo_HumanState;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_CanDodge
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02ea0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_CanDodge
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields)._lastMountedPosition.fields.x + 3));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_CanDodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e02ec0

void CustomLogic_CustomLogicHumanBuiltin__set_CanDodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(char *)((long)&(pCVar1->fields)._lastMountedPosition.fields.x + 3) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsInvincible
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02ee0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsInvincible
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)&(pCVar1->fields)._lastMountedPosition.fields.y);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_IsInvincible
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e02f00

void CustomLogic_CustomLogicHumanBuiltin__set_IsInvincible
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(char *)&(pCVar1->fields)._lastMountedPosition.fields.y = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InvincibleTimeLeft
// il2cpp: float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02f20

float CustomLogic_CustomLogicHumanBuiltin__get_InvincibleTimeLeft
                (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields)._lastMountedPosition.fields.z;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_InvincibleTimeLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e02f40

void CustomLogic_CustomLogicHumanBuiltin__set_InvincibleTimeLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    (pCVar1->fields)._lastMountedPosition.fields.z = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsCarried
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsCarried (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02f60

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsCarried
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),*(int *)((long)&(pCVar1->fields).Weapon + 4) == 1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Grounded
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_Grounded (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02f80

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_Grounded
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).Animation + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Pivot
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_Pivot (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02fa0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_Pivot
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).IsRefillable + 1));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_PivotPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e02fc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_PivotPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Nullable_Vector3__o SVar2;
  
  if (DAT_05702ba0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05702ba0 = '\x01';
  }
  __this_00 = (__this->fields).Human;
  if (__this_00 != (Characters_Human_o *)0x0) {
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    SVar2 = Characters_Human__PivotPosition(__this_00,(MethodInfo *)0x0);
    if ((char)SVar2.fields.hasValue != '\0') {
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         (SVar2.fields.value.fields,(MethodInfo *)0x0);
    }
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03040

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsHookedLeft
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HumanCache, __this_00 != (Characters_HumanComponentCache_o *)0x0)
     ) {
    bVar2 = Characters_HookUseable__IsHooked
                      ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookedRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03070

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsHookedRight
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooked(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e030a0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsHookingLeft
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HumanCache, __this_00 != (Characters_HumanComponentCache_o *)0x0)
     ) {
    bVar2 = Characters_HookUseable__IsHooking
                      ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsHookingRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e030d0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsHookingRight
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsHooking(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookLeft
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03100

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_HasHookLeft
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HumanCache, __this_00 != (Characters_HumanComponentCache_o *)0x0)
     ) {
    bVar2 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0)
    ;
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_HasHookRight
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03130

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_HasHookRight
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__HasHook(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03160

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_LeftHookReady
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HumanCache, __this_00 != (Characters_HumanComponentCache_o *)0x0)
     ) {
    bVar2 = Characters_HookUseable__IsReady((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0)
    ;
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookReady
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03190

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_RightHookReady
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this_00 != (Characters_HookUseable_o *)0x0)) {
    bVar2 = Characters_HookUseable__IsReady(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_LeftHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e031c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_LeftHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_Nullable_Vector3__o SVar3;
  
  if (DAT_05702ba1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05702ba1 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (pCVar1->fields).HumanCache, __this_00 != (Characters_HumanComponentCache_o *)0x0)
     ) {
    pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    SVar3 = Characters_HookUseable__GetCLHookPosition
                      ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    if ((char)SVar3.fields.hasValue != '\0') {
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         (SVar3.fields.value.fields,(MethodInfo *)0x0);
    }
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_RightHookPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03250

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_RightHookPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_Nullable_Vector3__o SVar3;
  
  if (DAT_05702ba2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05702ba2 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
     __this_00 != (Characters_HookUseable_o *)0x0)) {
    pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    SVar3 = Characters_HookUseable__GetCLHookPosition(__this_00,(MethodInfo *)0x0);
    if ((char)SVar3.fields.hasValue != '\0') {
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         (SVar3.fields.value.fields,(MethodInfo *)0x0);
    }
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_Target
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanBuiltin__get_Target (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e032e0

Il2CppObject *
CustomLogic_CustomLogicHumanBuiltin__get_Target
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Controllers_HumanAIController_o *pCVar4;
  Characters_Human_c *pCVar5;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *gameObject;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_00;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_01;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  undefined1 auVar7 [16];
  
  if (DAT_05702ba3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_MapTargetable);
    DAT_05702ba3 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    bVar6 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 == '\0') {
      return (Il2CppObject *)0x0;
    }
    pCVar3 = (__this->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar3->fields).CustomDamage != '\0') {
        pCVar4 = (__this->fields).Controller;
        if (pCVar4 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e034ee;
        pCVar3 = *(Characters_Human_o **)&(pCVar4->fields)._hookingRight;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          pCVar5 = pCVar3->klass;
          bVar1 = (pCVar5->_2).naturalAligment;
          bVar2 = (TypeInfo_MapTargetable->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapTargetable)) {
            gameObject = Map_MapTargetable__get_GameObject
                                   ((Map_MapTargetable_o *)pCVar3,(MethodInfo *)0x0);
            __this_00 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicMapTargetableBuiltin);
            CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                      (__this_00,gameObject,(Map_MapTargetable_o *)pCVar3,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_00;
          }
          bVar2 = (TypeInfo_Human->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
            auVar7 = il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            CustomLogic_CustomLogicHumanBuiltin___ctor(auVar7._0_8_,pCVar3,auVar7._8_8_);
            return (Il2CppObject *)auVar7._0_8_;
          }
          bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseShifter)) {
            __this_01 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_01,(Characters_BaseShifter_o *)pCVar3,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_01;
          }
          bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
          if ((bVar2 <= bVar1) && ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BasicTitan)) {
            __this_02 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            CustomLogic_CustomLogicTitanBuiltin___ctor
                      (__this_02,(Characters_BasicTitan_o *)pCVar3,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_02;
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e034ee:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_Target
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_Target (CustomLogic_CustomLogicHumanBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3e03500

void CustomLogic_CustomLogicHumanBuiltin__set_Target
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Il2CppObject *value,MethodInfo *method
               )

{
  byte bVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Il2CppClass *pIVar4;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar5;
  
  if (DAT_05702ba4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    DAT_05702ba4 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pCVar3 = (__this->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar3->fields).CustomDamage == '\0') {
        return;
      }
      if (value != (Il2CppObject *)0x0) {
        pIVar4 = value->klass;
        bVar1 = (pIVar4->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicMapTargetableBuiltin->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicMapTargetableBuiltin)) {
          bVar2 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicCharacterBuiltin)) {
LAB_03e03613:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(value);
          }
          bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if (((value->klass->_2).naturalAligment < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicCharacterBuiltin))
          goto LAB_03e03613;
          pIVar4 = value[3].klass;
          __this_00 = (__this->fields).Controller;
        }
        else {
          pIVar4 = value[3].monitor;
          __this_00 = (__this->fields).Controller;
        }
        if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
          Controllers_HumanAIController__set_Target
                    (__this_00,(Characters_ITargetable_o *)pIVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03620

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetPosition
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)&(pCVar1->fields)._target,(MethodInfo *)0x0);
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_TargetPosition
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e03650

void CustomLogic_CustomLogicHumanBuiltin__set_TargetPosition
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Characters_ITargetable_o *pCVar2;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pCVar1 = (__this->fields).Controller;
    pCVar2 = *(Characters_ITargetable_o **)&(value->fields).Value.fields;
    if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
      (pCVar1->fields).TargetPosition.fields.x = (value->fields).Value.fields.z;
      (pCVar1->fields)._target = pCVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_TargetVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03690

/* WARNING: Type propagation algorithm not settling */

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicHumanBuiltin__get_TargetVelocity
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_HumanAIController_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)
                         &(pCVar1->fields)._targetLastPosition.fields.value.fields.y,
                        (MethodInfo *)0x0);
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsWalking
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsWalking (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e036c0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsWalking
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(char)(pCVar1->fields).IsRefillable);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_IsWalking
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_IsWalking (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e036e0

void CustomLogic_CustomLogicHumanBuiltin__set_IsWalking
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e03719;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        *(char *)&(pCVar1->fields).IsRefillable = (char)value;
      }
    }
    return;
  }
LAB_03e03719:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowHorse
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03720

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_AllowHorse
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),*(undefined1 *)&(pCVar1->fields).HookRight);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowHorse
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e03740

void CustomLogic_CustomLogicHumanBuiltin__set_AllowHorse
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(char *)&(pCVar1->fields).HookRight = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_AllowSkin
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03760

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_AllowSkin
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).HookRight + 1));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$set_AllowSkin
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e03780

void CustomLogic_CustomLogicHumanBuiltin__set_AllowSkin
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    *(char *)((long)&(pCVar1->fields).HookRight + 1) = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Refill
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__Refill (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e037a0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__Refill
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return 0;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      bVar2 = Characters_Human__NeedRefill(pCVar1,1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return 0;
      }
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        bVar2 = Characters_Human__Refill(pCVar1,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$RefillImmediate
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__RefillImmediate (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e037f0

void CustomLogic_CustomLogicHumanBuiltin__RefillImmediate
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__FinishRefill(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearHooks
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearHooks (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03820

void CustomLogic_CustomLogicHumanBuiltin__ClearHooks
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *__this_01;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).HumanCache,
       __this_00 != (Characters_HumanComponentCache_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (__this_01 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
         __this_01 != (Characters_HookUseable_o *)0x0)) {
        Characters_HookUseable__DisableAnyHook(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearLeftHook
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03880

void CustomLogic_CustomLogicHumanBuiltin__ClearLeftHook
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanComponentCache_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).HumanCache,
       __this_00 != (Characters_HumanComponentCache_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook
                ((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ClearRightHook
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ClearRightHook (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e038c0

void CustomLogic_CustomLogicHumanBuiltin__ClearRightHook
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HookUseable_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (Characters_HookUseable_o *)(pCVar1->fields).Special,
       __this_00 != (Characters_HookUseable_o *)0x0)) {
      Characters_HookUseable__DisableAnyHook(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$MountMapObject
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MountMapObject (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, CustomLogic_CustomLogicVector3Builtin_o* positionOffset, CustomLogic_CustomLogicVector3Builtin_o* rotationOffset, bool canMountedAttack, const MethodInfo* method);
// 0x3e03900

void CustomLogic_CustomLogicHumanBuiltin__MountMapObject
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,
               bool_conflict canMountedAttack,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
         (positionOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
        (rotationOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (pCVar1 = (__this->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      Characters_Human__Mount
                (pCVar1,(mapObject->fields).Value,
                 (UnityEngine_Vector3_o)(positionOffset->fields).Value.fields,
                 (UnityEngine_Vector3_o)(rotationOffset->fields).Value.fields,
                 canMountedAttack & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$MountTransform
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MountTransform (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* transform, CustomLogic_CustomLogicVector3Builtin_o* positionOffset, CustomLogic_CustomLogicVector3Builtin_o* rotationOffset, bool canMountedAttack, const MethodInfo* method);
// 0x3e03980

void CustomLogic_CustomLogicHumanBuiltin__MountTransform
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *transform,
               CustomLogic_CustomLogicVector3Builtin_o *positionOffset,
               CustomLogic_CustomLogicVector3Builtin_o *rotationOffset,
               bool_conflict canMountedAttack,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((((transform != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
         (positionOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
        (rotationOffset != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (pCVar1 = (__this->fields).Human, pCVar1 != (Characters_Human_o *)0x0)) {
      Characters_Human__Mount
                (pCVar1,(transform->fields).Value,
                 (UnityEngine_Vector3_o)(positionOffset->fields).Value.fields,
                 (UnityEngine_Vector3_o)(rotationOffset->fields).Value.fields,
                 canMountedAttack & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Unmount
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Unmount (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool immediate, const MethodInfo* method);
// 0x3e03a00

void CustomLogic_CustomLogicHumanBuiltin__Unmount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict immediate,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__Unmount(pCVar1,immediate & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* special, const MethodInfo* method);
// 0x3e01b20

void CustomLogic_CustomLogicHumanBuiltin__SetSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *special,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      Characters_Human__SetSpecial(pCVar1,special,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ActivateSpecial
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03a50

void CustomLogic_CustomLogicHumanBuiltin__ActivateSpecial
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged;
      if (pSVar2 == (System_Action_Hashtable__o *)0x0) {
        return;
      }
      (*(pSVar2->klass->vtable)._12_Invoke.methodPtr)
                (pSVar2,1,(pSVar2->klass->vtable)._12_Invoke.method);
      pCVar1 = (__this->fields).Human;
      if ((pCVar1 != (Characters_Human_o *)0x0) &&
         (pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged,
         pSVar2 != (System_Action_Hashtable__o *)0x0)) {
        vtable_dispatch = (pSVar2->klass->vtable)._12_Invoke.methodPtr;
        (*vtable_dispatch)
                  (pSVar2,0,(pSVar2->klass->vtable)._12_Invoke.method,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetWeapon
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetWeapon (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x3e01270

void CustomLogic_CustomLogicHumanBuiltin__SetWeapon
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *weapon,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  Settings_StringSetting_o *__this_00;
  long *plVar4;
  UnityEngine_Object_o *x;
  long lVar5;
  Il2CppObject *pIVar6;
  System_Object_array *pSVar7;
  Settings_TypedSetting_T__o *__this_01;
  GameManagers_InGameManager_o *__this_02;
  Il2CppClass *pIVar8;
  long lVar9;
  bool_conflict bVar10;
  uint uVar11;
  undefined8 *puVar12;
  System_Collections_Generic_List_object__o *__this_03;
  Settings_InGameCharacterSettings_o *settings;
  Characters_Human_o *pCVar13;
  Characters_Human_o **ppCVar14;
  
  if (DAT_05702ba5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Thunderspears");
    il2cpp_init_method_metadata(&"Blades");
    DAT_05702ba5 = '\x01';
  }
  pCVar13 = (__this->fields).Human;
  if (pCVar13 == (Characters_Human_o *)0x0) goto LAB_03e01a92;
  bVar10 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar13,(MethodInfo *)0x0)
  ;
  if ((char)bVar10 == '\0') {
    return;
  }
  ppCVar14 = &(__this->fields).Human;
  pCVar13 = *ppCVar14;
  if (pCVar13 == (Characters_Human_o *)0x0) goto LAB_03e01a92;
  if ((char)(pCVar13->fields).CustomDamage != '\0') {
    settings = *(Settings_InGameCharacterSettings_o **)&(pCVar13->fields)._attackRelease;
    if ((settings == (Settings_InGameCharacterSettings_o *)0x0) ||
       (__this_00 = (settings->fields).Loadout, __this_00 == (Settings_StringSetting_o *)0x0))
    goto LAB_03e01a92;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)weapon,MethodInfo_Void_set_Value);
    pCVar13 = *ppCVar14;
    if (pCVar13 == (Characters_Human_o *)0x0) goto LAB_03e01a92;
    goto LAB_03e013ca;
  }
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03e01a92;
  bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
     (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(plVar4);
  }
  x = (UnityEngine_Object_o *)plVar4[0xe];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  if ((long *)plVar4[0xe] == (long *)0x0) {
    return;
  }
  lVar5 = *(long *)plVar4[0xe];
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (*(byte *)(lVar5 + 0x130) < bVar2) {
    return;
  }
  if (*(Il2CppClass **)(*(long *)(lVar5 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_Human) {
    return;
  }
  if (*ppCVar14 == (Characters_Human_o *)0x0) goto LAB_03e01a92;
  bVar10 = Characters_BaseCharacter__IsMine
                     ((Characters_BaseCharacter_o *)*ppCVar14,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  bVar10 = System_String__op_Equality(weapon,"Blades",(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    bVar10 = System_String__op_Equality(weapon,"Thunderspears",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (DAT_05702cbf == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
        DAT_05702cbf = '\x01';
      }
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar12 = (undefined8 *)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
      goto LAB_03e0156e;
    }
  }
  else {
    if (DAT_05702cbe == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
      DAT_05702cbe = '\x01';
    }
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar12 = *(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
LAB_03e0156e:
    weapon = (System_String_o *)*puVar12;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar5 == 0) || (*ppCVar14 == (Characters_Human_o *)0x0)) goto LAB_03e01a92;
  if (*(char *)&((*ppCVar14)->fields).FeedVictimName != '\0') {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x58);
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto LAB_03e01a92;
  if (*(char *)(*(long *)(lVar5 + 0x58) + 0x11) != '\0') {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e01a92;
    pIVar6 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e01a92;
    uVar11 = (__this_03->fields)._size;
    if (uVar11 < (uint)pSVar7->max_length) {
      (__this_03->fields)._size = uVar11 + 1;
      pSVar7->m_Items[(int)uVar11] = pIVar6;
      il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_03,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(lVar5 + 0x60) == 0) goto LAB_03e01a92;
  if (*(char *)(*(long *)(lVar5 + 0x60) + 0x11) != '\0') {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e01a92;
    pIVar6 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e01a92;
    uVar11 = (__this_03->fields)._size;
    if (uVar11 < (uint)pSVar7->max_length) {
      (__this_03->fields)._size = uVar11 + 1;
      pSVar7->m_Items[(int)uVar11] = pIVar6;
      il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_03,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(lVar5 + 0x68) == 0) goto LAB_03e01a92;
  if (*(char *)(*(long *)(lVar5 + 0x68) + 0x11) != '\0') {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e01a92;
    pIVar6 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e01a92;
    uVar11 = (__this_03->fields)._size;
    if (uVar11 < (uint)pSVar7->max_length) {
      (__this_03->fields)._size = uVar11 + 1;
      pSVar7->m_Items[(int)uVar11] = pIVar6;
      il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_03,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(lVar5 + 0x70) == 0) goto LAB_03e01a92;
  if (*(char *)(*(long *)(lVar5 + 0x70) + 0x11) == '\0') {
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e01a92;
LAB_03e0188c:
    iVar3 = (__this_03->fields)._size;
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar5 = MethodInfo_Void_Add;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e01a92;
    pIVar6 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e01a92;
    uVar11 = (__this_03->fields)._size;
    if ((uint)pSVar7->max_length <= uVar11) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_03,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      goto LAB_03e0188c;
    }
    (__this_03->fields)._size = uVar11 + 1;
    pSVar7->m_Items[(int)uVar11] = pIVar6;
    il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11);
    iVar3 = (__this_03->fields)._size;
  }
  if (iVar3 == 0) {
    uVar11 = 0;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
      uVar11 = (__this_03->fields)._size;
    }
    lVar5 = MethodInfo_Void_Add;
    pIVar6 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e01a92;
    if (uVar11 < (uint)pSVar7->max_length) {
      (__this_03->fields)._size = uVar11 + 1;
      pSVar7->m_Items[(int)uVar11] = pIVar6;
      il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar11);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_03,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar10 = System_Collections_Generic_List<object>__Contains
                     (__this_03,(Il2CppObject *)weapon,MethodInfo_Boolean_Contains);
  if ((char)bVar10 == '\0') {
    return;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) {
    bVar10 = System_String__op_Inequality
                       (weapon,*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return;
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar5 != 0) &&
       (__this_01 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30),
       __this_01 != (Settings_TypedSetting_T__o *)0x0)) {
      Settings_TypedSetting<object>__set_Value(__this_01,(Il2CppObject *)weapon,MethodInfo_Void_set_Value);
      pIVar8 = TypeInfo_Human;
      __this_02 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_02 != (GameManagers_InGameManager_o *)0x0) {
        bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
        if (((__this_02->klass->_2).naturalAligment < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_02);
        }
      }
      pCVar13 = (Characters_Human_o *)plVar4[0xe];
      if (pCVar13 == (Characters_Human_o *)0x0) {
        *ppCVar14 = (Characters_Human_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_Human->_2).naturalAligment;
        if (((pCVar13->klass->_2).naturalAligment < bVar2) ||
           ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
LAB_03e01a45:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pCVar13,pIVar8);
        }
        *ppCVar14 = pCVar13;
        if (((pCVar13->klass->_2).naturalAligment < bVar2) ||
           ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar8)) goto LAB_03e01a45;
      }
      il2cpp_runtime_glue(ppCVar14);
      if (__this_02 != (GameManagers_InGameManager_o *)0x0) {
        pCVar13 = *ppCVar14;
        settings = GameManagers_InGameManager__GetSetHumanSettings(__this_02,(MethodInfo *)0x0);
        if (pCVar13 != (Characters_Human_o *)0x0) {
LAB_03e013ca:
          Characters_Human__ReloadHuman(pCVar13,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03e01a92:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$DisablePerks
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__DisablePerks (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03ad0

void CustomLogic_CustomLogicHumanBuiltin__DisablePerks
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (__this_00 = (pCVar1->fields).Horse, __this_00 != (Characters_Horse_o *)0x0)) {
      Characters_HumanStats__DisablePerks((Characters_HumanStats_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MoveTo (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, const MethodInfo* method);
// 0x3e03b10

void CustomLogic_CustomLogicHumanBuiltin__MoveTo
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__MoveTo
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$MoveToTarget
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__MoveToTarget (CustomLogic_CustomLogicHumanBuiltin_o* __this, Il2CppObject* target, float range, const MethodInfo* method);
// 0x3e03b80

void CustomLogic_CustomLogicHumanBuiltin__MoveToTarget
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,Il2CppObject *target,float range,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Il2CppClass *pIVar4;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar5;
  
  if (DAT_05702ba6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    DAT_05702ba6 = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pCVar3 = (__this->fields).Human;
    if (pCVar3 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar3->fields).CustomDamage == '\0') {
        return;
      }
      if (target != (Il2CppObject *)0x0) {
        pIVar4 = target->klass;
        bVar1 = (pIVar4->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicMapTargetableBuiltin->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicMapTargetableBuiltin)) {
          bVar2 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicCharacterBuiltin)) {
LAB_03e03c9f:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(target);
          }
          bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if (((target->klass->_2).naturalAligment < bVar1) ||
             ((target->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicCharacterBuiltin))
          goto LAB_03e03c9f;
          pIVar4 = target[3].klass;
          __this_00 = (__this->fields).Controller;
        }
        else {
          pIVar4 = target[3].monitor;
          __this_00 = (__this->fields).Controller;
        }
        if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
          Controllers_HumanAIController__MoveToTarget
                    (__this_00,(Characters_ITargetable_o *)pIVar4,range,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Idle
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Idle (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03cb0

void CustomLogic_CustomLogicHumanBuiltin__Idle
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Idle(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$HasAIState
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__HasAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e03cf0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__HasAIState
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return 0;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return 0;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        bVar2 = Controllers_HumanAIController__HasAIState(__this_00,name,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetAIState
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, CustomLogic_UserClassInstance_o* classInstance, const MethodInfo* method);
// 0x3e03d50

void CustomLogic_CustomLogicHumanBuiltin__SetAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,
               CustomLogic_UserClassInstance_o *classInstance,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar3;
  Controllers_HumanAIStates_Custom_o *__this_01;
  
  if (DAT_05702ba7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Custom);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05702ba7 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if (classInstance == (CustomLogic_UserClassInstance_o *)0x0) {
        pCVar2 = (__this->fields).Controller;
        if ((pCVar2 != (Controllers_HumanAIController_o *)0x0) &&
           (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pCVar2->fields).Callbacks,
           __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
          return;
        }
      }
      else {
        __this_01 = (Controllers_HumanAIStates_Custom_o *)il2cpp_runtime_glue(TypeInfo_Custom);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$GetAIState
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__GetAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e03e50

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__GetAIState
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  long *plVar3;
  code *vtable_dispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 extraout_RDX;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e03ea4;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e03ea4;
        plVar3 = *(long **)&(pCVar2->fields).TargetVelocity.fields.z;
        if (plVar3 != (long *)0x0) {
          vtable_dispatch = *(code **)(*plVar3 + 0x178);
          pSVar5 = (System_String_o *)
                   (*vtable_dispatch)
                             (plVar3,*(undefined8 *)(*plVar3 + 0x180),extraout_RDX,
                              vtable_dispatch);
          return pSVar5;
        }
      }
    }
    return (System_String_o *)0x0;
  }
LAB_03e03ea4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$SwitchAIState
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e03eb0

void CustomLogic_CustomLogicHumanBuiltin__SwitchAIState
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *name,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool_conflict bVar2;
  Controllers_HumanAIState_o *aiState;
  
  if (DAT_05702ba8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanAIState_get_Item);
    DAT_05702ba8 = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if ((__this_00 != (Controllers_HumanAIController_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this_00->fields).Callbacks,
         __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        aiState = (Controllers_HumanAIState_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_01,(Il2CppObject *)name,MethodInfo_HumanAIState_get_Item);
        Controllers_HumanAIController__SwitchAIState(__this_00,aiState,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ResetCallback
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ResetCallback (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* callback, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3e03f50

void CustomLogic_CustomLogicHumanBuiltin__ResetCallback(void)

{
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_Type_o *__this;
  System_Reflection_FieldInfo_o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppClass *in_RDX;
  System_String_o *in_RSI;
  long in_RDI;
  
  if (DAT_05702ba9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__ResetCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass159_0);
    DAT_05702ba9 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass159_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].klass = in_RDX;
    il2cpp_runtime_glue(pIVar3 + 1);
    if (*(Characters_BaseCharacter_o **)(in_RDI + 0x38) != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        (*(Characters_BaseCharacter_o **)(in_RDI + 0x38),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (*(long *)(in_RDI + 0x38) != 0) {
        if (*(char *)(*(long *)(in_RDI + 0x38) + 0x78) == '\0') {
          return;
        }
        if ((*(long *)(in_RDI + 0x40) != 0) &&
           (pIVar4 = *(Il2CppObject **)(*(long *)(in_RDI + 0x40) + 0xa0),
           pIVar4 != (Il2CppObject *)0x0)) {
          pIVar1 = pIVar3[1].klass;
          __this = System_Object__GetType(pIVar4,(MethodInfo *)0x0);
          if (__this != (System_Type_o *)0x0) {
            __this_00 = System_Type__GetField(__this,in_RSI,(MethodInfo *)0x0);
            if (*(long *)(in_RDI + 0x40) != 0) {
              pIVar3 = *(Il2CppObject **)(*(long *)(in_RDI + 0x40) + 0xa0);
              if (pIVar1 == (Il2CppClass *)0x0) {
                if (__this_00 != (System_Reflection_FieldInfo_o *)0x0) {
                  pIVar4 = (Il2CppObject *)0x0;
                  goto LAB_03e040aa;
                }
              }
              else {
                pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Action);
                System_Action___ctor();
                if (__this_00 != (System_Reflection_FieldInfo_o *)0x0) {
LAB_03e040aa:
                  System_Reflection_FieldInfo__SetValue(__this_00,pIVar3,pIVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Move (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x3e040d0

void CustomLogic_CustomLogicHumanBuiltin__Move
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Controllers_HumanAIController_o *__this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_01;
  System_Nullable_Vector3__o direction_00;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_05702baa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    DAT_05702baa = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 == (Characters_Human_o *)0x0) {
LAB_03e04179:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar6 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pCVar3 = (__this->fields).Human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03e04179;
    if ((char)(pCVar3->fields).CustomDamage != '\0') {
      __this_00 = (__this->fields).Controller;
      if (direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar1 = (direction->fields).Value.fields.x;
        uVar2 = (direction->fields).Value.fields.y;
        __this_01.fields.value.fields.z = (float)uVar2;
        __this_01.fields.value.fields.y = (float)uVar1;
        local_28 = 0;
        uStack_20 = 0;
        value.fields.y = 0.0;
        value.fields.z = 0.0;
        value.fields.x = (direction->fields).Value.fields.z;
        __this_01.fields._0_8_ = &local_28;
        System_Nullable<Vector3>___ctor(__this_01,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
        uVar4 = local_28;
        uVar5 = uStack_20;
      }
      if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e04179;
      direction_00.fields.value.fields.y = (float)(int)uVar5;
      direction_00.fields.value.fields.z = (float)(int)((ulong)uVar5 >> 0x20);
      direction_00.fields.hasValue = (int)uVar4;
      direction_00.fields.value.fields.x = (float)(int)((ulong)uVar4 >> 0x20);
      Controllers_HumanAIController__Move(__this_00,direction_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$AimAt
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__AimAt (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3e04180

void CustomLogic_CustomLogicHumanBuiltin__AimAt
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Controllers_HumanAIController_o *__this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_01;
  System_Nullable_Vector3__o position_00;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_05702bab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    DAT_05702bab = '\x01';
  }
  pCVar3 = (__this->fields).Human;
  if (pCVar3 == (Characters_Human_o *)0x0) {
LAB_03e04229:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar6 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pCVar3 = (__this->fields).Human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03e04229;
    if ((char)(pCVar3->fields).CustomDamage != '\0') {
      __this_00 = (__this->fields).Controller;
      if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar1 = (position->fields).Value.fields.x;
        uVar2 = (position->fields).Value.fields.y;
        __this_01.fields.value.fields.z = (float)uVar2;
        __this_01.fields.value.fields.y = (float)uVar1;
        local_28 = 0;
        uStack_20 = 0;
        value.fields.y = 0.0;
        value.fields.z = 0.0;
        value.fields.x = (position->fields).Value.fields.z;
        __this_01.fields._0_8_ = &local_28;
        System_Nullable<Vector3>___ctor(__this_01,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
        uVar4 = local_28;
        uVar5 = uStack_20;
      }
      if (__this_00 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e04229;
      position_00.fields.value.fields.y = (float)(int)uVar5;
      position_00.fields.value.fields.z = (float)(int)((ulong)uVar5 >> 0x20);
      position_00.fields.hasValue = (int)uVar4;
      position_00.fields.value.fields.x = (float)(int)((ulong)uVar4 >> 0x20);
      Controllers_HumanAIController__AimAt(__this_00,position_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicHumanBuiltin$$Jump
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Jump (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04230

void CustomLogic_CustomLogicHumanBuiltin__Jump
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Jump(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$HorseMount
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__HorseMount (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool mount, const MethodInfo* method);
// 0x3e04270

void CustomLogic_CustomLogicHumanBuiltin__HorseMount
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict mount,MethodInfo *method
               )

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__HorseMount(__this_00,mount & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dodge
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dodge (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e042d0

void CustomLogic_CustomLogicHumanBuiltin__Dodge
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Dodge(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Reload
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Reload (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04310

void CustomLogic_CustomLogicHumanBuiltin__Reload
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Reload(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$UseGas
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__UseGas (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool useGas, const MethodInfo* method);
// 0x3e04350

void CustomLogic_CustomLogicHumanBuiltin__UseGas
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict useGas,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03e0438f;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_HumanAIController_o *)0x0) goto LAB_03e0438f;
        *(char *)&(pCVar2->fields)._usingGas = (char)useGas;
      }
    }
    return;
  }
LAB_03e0438f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$HorseWalk
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__HorseWalk (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool isWalk, const MethodInfo* method);
// 0x3e043a0

void CustomLogic_CustomLogicHumanBuiltin__HorseWalk
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict isWalk,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__HorseWalk(__this_00,isWalk & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Dash
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Dash (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x3e04400

void CustomLogic_CustomLogicHumanBuiltin__Dash
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__Dash
                  (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Reel
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Reel (CustomLogic_CustomLogicHumanBuiltin_o* __this, int32_t reelAxis, const MethodInfo* method);
// 0x3e04470

void CustomLogic_CustomLogicHumanBuiltin__Reel
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,int32_t reelAxis,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Reel(__this_00,reelAxis,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x3e044c0

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((aimPoint != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__LaunchHookLeft
                  (__this_00,(UnityEngine_Vector3_o)(aimPoint->fields).Value.fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$LaunchHookRight
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* aimPoint, const MethodInfo* method);
// 0x3e04530

void CustomLogic_CustomLogicHumanBuiltin__LaunchHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *aimPoint,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((aimPoint != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_HumanAIController_o *)0x0)) {
        Controllers_HumanAIController__LaunchHookRight
                  (__this_00,(UnityEngine_Vector3_o)(aimPoint->fields).Value.fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookLeft
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e045a0

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookLeft
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookLeft(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookRight
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e045e0

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookRight
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookRight(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$ReleaseHookAll
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04620

void CustomLogic_CustomLogicHumanBuiltin__ReleaseHookAll
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__ReleaseHookAll(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Attack
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Attack (CustomLogic_CustomLogicHumanBuiltin_o* __this, bool attackOn, const MethodInfo* method);
// 0x3e04660

void CustomLogic_CustomLogicHumanBuiltin__Attack
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,bool_conflict attackOn,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__Attack(__this_00,attackOn & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$FindNearestEnemy
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e046c0

void CustomLogic_CustomLogicHumanBuiltin__FindNearestEnemy
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  Characters_ITargetable_o *value;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        value = Controllers_HumanAIController__FindNearestEnemy(__this_00,(MethodInfo *)0x0);
        Controllers_HumanAIController__set_Target(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$Navigation
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__Navigation (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04710

void CustomLogic_CustomLogicHumanBuiltin__Navigation
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Controllers_HumanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__MoveToPosition(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$SetParticleEffect
// il2cpp: void CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect (CustomLogic_CustomLogicHumanBuiltin_o* __this, System_String_o* effectName, bool enabled, const MethodInfo* method);
// 0x3e04750

void CustomLogic_CustomLogicHumanBuiltin__SetParticleEffect
               (CustomLogic_CustomLogicHumanBuiltin_o *__this,System_String_o *effectName,
               bool_conflict enabled,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702bac == '\0') {
    il2cpp_init_method_metadata(&"Buff2");
    il2cpp_init_method_metadata(&"Buff1");
    il2cpp_init_method_metadata(&"Fire1");
    DAT_05702bac = '\x01';
  }
  pCVar1 = (__this->fields).Human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    bVar2 = System_String__op_Equality(effectName,"Buff1",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(effectName,"Buff2",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(effectName,"Fire1",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pCVar1 = (__this->fields).Human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__ToggleFire1(pCVar1,enabled & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pCVar1 = (__this->fields).Human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__ToggleBuff2(pCVar1,enabled & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pCVar1 = (__this->fields).Human;
      if (pCVar1 != (Characters_Human_o *)0x0) {
        Characters_Human__ToggleBuff1(pCVar1,enabled & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanBuiltin__get_ClassName (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04850

System_String_o *
CustomLogic_CustomLogicHumanBuiltin__get_ClassName
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702bad == '\0') {
    il2cpp_init_method_metadata(&"Human");
    DAT_05702bad = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04880

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_IsStatic (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e04890

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_IsStatic
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicHumanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicHumanBuiltin_o* __this, const MethodInfo* method);
// 0x3e048a0

bool_conflict
CustomLogic_CustomLogicHumanBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


