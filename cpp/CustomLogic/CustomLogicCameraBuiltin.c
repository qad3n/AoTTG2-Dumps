// Type: CustomLogic.CustomLogicCameraBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicCameraBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicCameraBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraBuiltin_o* CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eacee0

CustomLogic_CustomLogicCameraBuiltin_o *
CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057037f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraBuiltin);
    DAT_057037f5 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCameraBuiltin);
      if (DAT_057037dc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057037dc = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCameraBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCameraBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCameraBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3eaf5d0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703811 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703811 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3eaf640

void CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetManual>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf650

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetManual>b__12_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  bool_conflict bVar2;
  
  if (DAT_05703812 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703812 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      if (DAT_05703875 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703875 = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39) = (char)bVar2;
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf730

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPosition>b__13_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *method_00;
  
  if (DAT_05703813 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703813 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV;
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           (obj,(MethodInfo_24AB7B0 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      CustomLogic_CustomLogicCameraBuiltin__SetPosition(position,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf7b0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetRotation>b__14_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  MethodInfo *method_00;
  
  if (DAT_05703814 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703814 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV;
      rotation = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           (obj,(MethodInfo_24AB7B0 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      CustomLogic_CustomLogicCameraBuiltin__SetRotation(rotation,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetVelocity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf830

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetVelocity>b__15_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05703815 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703815 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (DAT_057037ed == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      DAT_057037ed = '\x01';
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      uVar1 = *(undefined4 *)&pIVar4[3].monitor;
      pIVar2 = pIVar4[3].klass;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(undefined4 *)(lVar3 + 100) = uVar1;
      *(Il2CppClass **)(lVar3 + 0x5c) = pIVar2;
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf920

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__LookAt>b__16_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *method_00;
  
  if (DAT_05703816 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703816 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV;
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                           (obj,(MethodInfo_24AB7B0 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      CustomLogic_CustomLogicCameraBuiltin__LookAt(position,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFOV>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eaf9a0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetFOV>b__17_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  float fVar2;
  
  if (DAT_05703817 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703817 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
      if (DAT_05703876 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703876 = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c) = fVar2;
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraMode>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eafaa0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCameraMode>b__18_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *mode;
  MethodInfo *method_00;
  
  if (DAT_05703818 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703818 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      mode = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                       (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetDistance>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eafb20

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__ResetDistance>b__19_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this_00;
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCameraMode>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eafbb0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__ResetCameraMode>b__20_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)__this);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraLocked>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eafbc0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCameraLocked>b__21_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  bool_conflict bVar2;
  
  if (DAT_05703819 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703819 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      if (DAT_05703877 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703877 = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70) = (char)bVar2;
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCursorVisible>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eafca0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCursorVisible>b__22_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  bool_conflict bVar2;
  
  if (DAT_0570381a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570381a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      if (DAT_05703878 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703878 = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x71) = (char)bVar2;
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ead000

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_057037f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetCursorVisible");
    il2cpp_init_method_metadata(&"ResetDistance");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"SetCameraMode");
    il2cpp_init_method_metadata(&"SetRotation");
    il2cpp_init_method_metadata(&"IsManual");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"SetVelocity");
    il2cpp_init_method_metadata(&"ResetCameraMode");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"SetPosition");
    il2cpp_init_method_metadata(&"SetCameraLocked");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"SetFOV");
    il2cpp_init_method_metadata(&"FOV");
    il2cpp_init_method_metadata(&"FollowDistance");
    il2cpp_init_method_metadata(&"SetManual");
    il2cpp_init_method_metadata(&"CameraMode");
    il2cpp_init_method_metadata(&"LookAt");
    DAT_057037f6 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6dd1aa8b) {
    if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 == 0x232777f) {
          bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057037f9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
              DAT_057037f9 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1e9e9f85) &&
                (bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057037fe == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
            DAT_057037fe = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x24a169e7) {
        bVar4 = System_String__op_Equality(name,"SetCameraMode",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703807 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCameraMode_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703807 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2e32cf0b) {
        bVar4 = System_String__op_Equality(name,"FollowDistance",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703800 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FollowDistance);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FollowDistance_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
            DAT_05703800 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x42f35940) &&
              (bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037ff == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
          DAT_057037ff = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x56e974f5) {
      if (uVar3 == 0x51f457ad) {
        bVar4 = System_String__op_Equality(name,"SetCursorVisible",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570380b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCursorVisible);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_0570380b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x58);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x56e974f4) &&
              (bVar4 = System_String__op_Equality(name,"SetVelocity",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703804 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetVelocity_b__15);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703804 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x5853691b) {
      bVar4 = System_String__op_Equality(name,"ResetDistance",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703808 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetDistance_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703808 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x5e2c4c73) {
      bVar4 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703805 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__16_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703805 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x6dd1aa8a) &&
            (bVar4 = System_String__op_Equality(name,"SetCameraLocked",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570380a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCameraLocked_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570380a = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xd6a213a9) {
    if (uVar3 < 0x8adad751) {
      if (uVar3 == 0x8adad750) {
        bVar4 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703802 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPosition_b__13);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703802 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x6fcec725) &&
              (bVar4 = System_String__op_Equality(name,"SetManual",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703801 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetManual_b__12_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703801 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xba408252) {
      bVar4 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037fa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
          DAT_057037fa = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd11e3ab2) {
      bVar4 = System_String__op_Equality(name,"SetFOV",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703806 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFOV_b__17_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703806 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xd6a213a8) &&
            (bVar4 = System_String__op_Equality(name,"ResetCameraMode",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703809 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCameraMode_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703809 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe27f342b) {
    if (uVar3 == 0xdc33653d) {
      bVar4 = System_String__op_Equality(name,"SetRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703803 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetRotation_b__14);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703803 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xdeef5e95) {
      bVar4 = System_String__op_Equality(name,"CameraMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037fc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CameraMode_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
          DAT_057037fc = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe27f342a) &&
            (bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037f8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
        DAT_057037f8 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe50883ba) {
    bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037fd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
        DAT_057037fd = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf3cda0fc) {
    bVar4 = System_String__op_Equality(name,"FOV",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037fb == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FOV_g____getter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
        DAT_057037fb = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf1bacbd3) &&
          (bVar4 = System_String__op_Equality(name,"IsManual",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037f7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsManual_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
      DAT_057037f7 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCameraBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__IsManual
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual (const MethodInfo* method);
// 0x3ead800

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsManual_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3ead8a0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3ead940

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x3ead9e0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FOV
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV (const MethodInfo* method);
// 0x3eada80

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FOV_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037fb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__CameraMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode (const MethodInfo* method);
// 0x3eadb20

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CameraMode_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037fc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3eadbc0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037fd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3eadca0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037fe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3eadd80

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_057037ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_057037ff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FollowDistance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance (const MethodInfo* method);
// 0x3eade60

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703800 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCameraBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FollowDistance);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FollowDistance_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object);
    DAT_05703800 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCameraBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetManual
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual (const MethodInfo* method);
// 0x3eadf40

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703801 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetManual_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703801 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x3eae090

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703802 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPosition_b__13);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703802 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation (const MethodInfo* method);
// 0x3eae1e0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703803 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetRotation_b__14);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703803 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetVelocity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity (const MethodInfo* method);
// 0x3eae330

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703804 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetVelocity_b__15);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703804 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x3eae480

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703805 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703805 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetFOV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV (const MethodInfo* method);
// 0x3eae5d0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703806 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFOV_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703806 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode (const MethodInfo* method);
// 0x3eae720

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703807 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCameraMode_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703807 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetDistance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance (const MethodInfo* method);
// 0x3eae870

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703808 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetDistance_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703808 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode (const MethodInfo* method);
// 0x3eae9c0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_05703809 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCameraMode_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703809 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraLocked
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked (const MethodInfo* method);
// 0x3eaeb10

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_0570380a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCameraLocked_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570380a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCursorVisible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible (const MethodInfo* method);
// 0x3eaec60

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this;
  
  if (DAT_0570380b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCursorVisible);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570380b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCameraBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3eaedb0

void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570380c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetCursorVisible");
    il2cpp_init_method_metadata(&"ResetDistance");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"SetCameraMode");
    il2cpp_init_method_metadata(&"SetRotation");
    il2cpp_init_method_metadata(&"IsManual");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"SetVelocity");
    il2cpp_init_method_metadata(&"ResetCameraMode");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"SetPosition");
    il2cpp_init_method_metadata(&"SetCameraLocked");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"SetFOV");
    il2cpp_init_method_metadata(&"FOV");
    il2cpp_init_method_metadata(&"FollowDistance");
    il2cpp_init_method_metadata(&"SetManual");
    il2cpp_init_method_metadata(&"CameraMode");
    il2cpp_init_method_metadata(&"LookAt");
    DAT_0570380c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsManual",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Velocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FOV",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CameraMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FollowDistance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetManual",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetVelocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LookAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetFOV",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCameraMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ResetDistance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ResetCameraMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCameraLocked",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCursorVisible",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__IsManual>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf120

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__IsManual>g____getter_2_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (DAT_05703873 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703873 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  local_9 = *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf1a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_3_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Position(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf1b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_4_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Rotation(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf1c0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Velocity>g____getter_5_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_057037e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x5c);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor
            (__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FOV>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf260

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__FOV>g____getter_6_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  undefined4 local_c;
  
  if (DAT_05703874 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703874 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  local_c = *(undefined4 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__CameraMode>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf2e0

System_String_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__CameraMode>g____getter_7_0
          (MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(method);
  return pSVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf2f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____getter_8_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Forward(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eaf300

void CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____setter_8_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_0570380d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570380d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (DAT_057037e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e5 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eabfd4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((pIVar4 != (Il2CppObject *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_forward
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eabfd4;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar5.fields.x * 57.29578;
          euler.fields.y = UVar5.fields.y * 57.29578;
          euler.fields.z = UVar5.fields.z * 57.29578;
          UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar5.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar5.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf360

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Right>g____getter_9_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Right(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eaf370

void CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Right>g____setter_9_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_0570380e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570380e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (DAT_057037e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e7 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eac294:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((pIVar4 != (Il2CppObject *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_right
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eac294;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar5.fields.x * 57.29578;
          euler.fields.y = UVar5.fields.y * 57.29578;
          euler.fields.z = UVar5.fields.z * 57.29578;
          UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar5.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar5.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf3d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Up>g____getter_10_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Up(method);
  return pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eaf3e0

void CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__Up>g____setter_10_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_0570380f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570380f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (DAT_057037e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e9 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eac554:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((pIVar4 != (Il2CppObject *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eac554;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar5.fields.x * 57.29578;
          euler.fields.y = UVar5.fields.y * 57.29578;
          euler.fields.z = UVar5.fields.z * 57.29578;
          UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar5.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar5.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x3eaf440

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__FollowDistance>g____getter_11_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eaf4e0

void CustomLogic_CustomLogicCameraBuiltin_Bindings__<__CreatePropertyBinding__FollowDistance>g____setter_11_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  long *plVar1;
  float fVar2;
  
  if (DAT_05703810 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703810 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      *(float *)((long)plVar1 + 0x6c) = fVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin___ctor (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x3eab760

void CustomLogic_CustomLogicCameraBuiltin___ctor
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057037dc = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CurrentCamera
// il2cpp: Cameras_InGameCamera_o* CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera (const MethodInfo* method);
// 0x3eab7d0

Cameras_InGameCamera_o * CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *pCVar2;
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  pCVar2 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (pCVar2 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pCVar2);
    }
  }
  return pCVar2;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsManual
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual (const MethodInfo* method);
// 0x3eab850

bool_conflict CustomLogic_CustomLogicCameraBuiltin__get_IsManual(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037de = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39));
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Position (const MethodInfo* method);
// 0x3eab8c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Position(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_057037df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037df = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Rotation (const MethodInfo* method);
// 0x3eab9b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Rotation(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057037e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e0 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       __this != (UnityEngine_Transform_o *)0x0)) {
      rotation = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
      UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar2.fields.x * 57.29578;
      euler.fields.y = UVar2.fields.y * 57.29578;
      euler.fields.z = UVar2.fields.z * 57.29578;
      UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,UVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Velocity (const MethodInfo* method);
// 0x3eabac0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Velocity(MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (DAT_057037e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x5c);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor
            (__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FOV
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FOV (const MethodInfo* method);
// 0x3eabb60

float CustomLogic_CustomLogicCameraBuiltin__get_FOV(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c);
  }
  il2cpp_init_class();
  return *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CameraMode
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_CameraMode (const MethodInfo* method);
// 0x3eabbd0

System_String_o * CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  System_String_o *pSVar5;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (DAT_057037e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CameraInputMode);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_CameraInputMode_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_057037e3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68);
    cVar4 = (char)uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68);
    cVar4 = (char)uVar2;
  }
  if (cVar4 == '\0') {
    if (DAT_057037dd == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_057037dd = '\x01';
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    local_10 = (undefined4)plVar3[0xd];
  }
  else {
    local_10 = (undefined4)((ulong)uVar2 >> 0x20);
  }
  local_20.klass = TypeInfo_CameraInputMode;
  local_20.monitor = (void *)0xffffffffffffffff;
  pSVar5 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar5;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Forward (const MethodInfo* method);
// 0x3eabd20

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Forward(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_057037e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e4 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_forward(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Forward (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3eabe10

void CustomLogic_CustomLogicCameraBuiltin__set_Forward
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057037e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e5 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eabfd4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_forward
                (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eabfd4;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar4.fields.x * 57.29578;
          euler.fields.y = UVar4.fields.y * 57.29578;
          euler.fields.z = UVar4.fields.z * 57.29578;
          UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar4.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar4.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Right (const MethodInfo* method);
// 0x3eabfe0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Right(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_057037e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e6 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_right(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Right (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3eac0d0

void CustomLogic_CustomLogicCameraBuiltin__set_Right
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057037e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e7 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eac294:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_right
                (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eac294;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar4.fields.x * 57.29578;
          euler.fields.y = UVar4.fields.y * 57.29578;
          euler.fields.z = UVar4.fields.z * 57.29578;
          UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar4.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar4.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Up (const MethodInfo* method);
// 0x3eac2a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Up(MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_057037e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057037e8 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       (__this = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Up (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3eac390

void CustomLogic_CustomLogicCameraBuiltin__set_Up
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057037e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037e9 = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eac554:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_up
                (pUVar2,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eac554;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar4.fields.x * 57.29578;
          euler.fields.y = UVar4.fields.y * 57.29578;
          euler.fields.z = UVar4.fields.z * 57.29578;
          UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar4.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar4.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FollowDistance
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance (const MethodInfo* method);
// 0x3eac560

float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  float fVar2;
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      fVar2 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_FollowDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance (float value, const MethodInfo* method);
// 0x3eac5e0

void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance(float value,MethodInfo *method)

{
  long *plVar1;
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      *(float *)((long)plVar1 + 0x6c) = value;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetManual
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetManual (bool manual, const MethodInfo* method);
// 0x3eac670

void CustomLogic_CustomLogicCameraBuiltin__SetManual(bool_conflict manual,MethodInfo *method)

{
  if (DAT_057037ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037ea = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39) = (char)manual;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetPosition (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3eac6c0

void CustomLogic_CustomLogicCameraBuiltin__SetPosition
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  Cameras_InGameCamera_o *__this;
  
  if (DAT_057037eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037eb = '\x01';
  }
  if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar2 = (position->fields).Value.fields.z;
    uVar3 = *(undefined8 *)&(position->fields).Value.fields;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(float *)(lVar4 + 0x4c) = fVar2;
    *(undefined8 *)(lVar4 + 0x44) = uVar3;
    __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
        Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetRotation
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetRotation (CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x3eac7a0

void CustomLogic_CustomLogicCameraBuiltin__SetRotation
               (CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  Cameras_InGameCamera_o *__this;
  
  if (DAT_057037ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037ec = '\x01';
  }
  if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar2 = (rotation->fields).Value.fields.z;
    uVar3 = *(undefined8 *)&(rotation->fields).Value.fields;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(float *)(lVar4 + 0x58) = fVar2;
    *(undefined8 *)(lVar4 + 0x50) = uVar3;
    __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
        Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetVelocity
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetVelocity (CustomLogic_CustomLogicVector3Builtin_o* velocity, const MethodInfo* method);
// 0x3eac880

void CustomLogic_CustomLogicCameraBuiltin__SetVelocity
               (CustomLogic_CustomLogicVector3Builtin_o *velocity,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (DAT_057037ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037ed = '\x01';
  }
  if (velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar1 = (velocity->fields).Value.fields.z;
    uVar2 = *(undefined8 *)&(velocity->fields).Value.fields;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(float *)(lVar3 + 100) = fVar1;
    *(undefined8 *)(lVar3 + 0x5c) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__LookAt (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3eac900

void CustomLogic_CustomLogicCameraBuiltin__LookAt
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057037ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037ee = '\x01';
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
LAB_03eacac4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((plVar1[5] != 0) &&
       ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__LookAt
                (pUVar2,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
      if (DAT_057037dd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
        il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
        DAT_057037dd = '\x01';
      }
      plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
            TypeInfo_InGameCamera)) goto LAB_03eacac4;
        if ((plVar1[5] != 0) &&
           (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
          euler.fields.x = UVar4.fields.x * 57.29578;
          euler.fields.y = UVar4.fields.y * 57.29578;
          euler.fields.z = UVar4.fields.z * 57.29578;
          UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
          *(long *)(lVar3 + 0x50) = UVar4.fields._0_8_;
          *(float *)(lVar3 + 0x58) = UVar4.fields.z;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetFOV
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetFOV (float fov, const MethodInfo* method);
// 0x3eacad0

void CustomLogic_CustomLogicCameraBuiltin__SetFOV(float fov,MethodInfo *method)

{
  if (DAT_057037ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037ef = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c) = fov;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode (System_String_o* mode, const MethodInfo* method);
// 0x3eacb40

void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(System_String_o *mode,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t value;
  undefined8 local_10;
  
  if (DAT_057037f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_CameraInputMode_Parse_CameraInputMode);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Settings_CameraInputMode);
    il2cpp_init_method_metadata(&"null");
    DAT_057037f0 = '\x01';
  }
  bVar1 = System_String__op_Equality(mode,"null",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68) = 0;
    return;
  }
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = System_Enum__Parse<Int32Enum>(mode,MethodInfo_CameraInputMode_Parse_CameraInputMode);
  local_10 = 0;
  System_Nullable<Int32Enum>___ctor((System_Nullable_Int32Enum__o)&local_10,value,MethodInfo_Nullable_1_Settings_CameraInputMode);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68) = local_10;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetDistance (const MethodInfo* method);
// 0x3eacc50

void CustomLogic_CustomLogicCameraBuiltin__ResetDistance(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ResetDistance(__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode (const MethodInfo* method);
// 0x3eaccd0

void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_InGameCamera_o *__this;
  
  if (DAT_057037f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037f1 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68) = 0;
  }
  if (DAT_057037dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057037dd = '\x01';
  }
  __this = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
  if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
    Cameras_InGameCamera__ResetCameraMode(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraLocked
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked (bool locked, const MethodInfo* method);
// 0x3eacde0

void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked(bool_conflict locked,MethodInfo *method)

{
  if (DAT_057037f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037f2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70) = (char)locked;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCursorVisible
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible (bool visible, const MethodInfo* method);
// 0x3eace30

void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible
               (bool_conflict visible,MethodInfo *method)

{
  if (DAT_057037f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_057037f3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x71) = (char)visible;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_ClassName (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x3eace80

System_String_o *
CustomLogic_CustomLogicCameraBuiltin__get_ClassName
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057037f4 == '\0') {
    il2cpp_init_method_metadata(&"Camera");
    DAT_057037f4 = '\x01';
  }
  return "Camera";
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x3eaceb0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsStatic (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x3eacec0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x3eaced0

bool_conflict
CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


