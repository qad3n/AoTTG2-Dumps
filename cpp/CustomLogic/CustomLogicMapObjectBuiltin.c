// Type: CustomLogic.CustomLogicMapObjectBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapObjectBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapObjectBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicMapObjectBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e16fb0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicMapObjectBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e1daf0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702cc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cc0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e1db60

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddComponent>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddComponent_b__28_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1db70

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddComponent>b__28_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (DAT_05702cc1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc1 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddComponent(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveComponent>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveComponent_b__29_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1dc00

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveComponent>b__29_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (DAT_05702cc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc2 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetComponent>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetComponent_b__30_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1dca0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetComponent>b__30_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  if (DAT_05702cc3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc3 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetComponent(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetUnityComponent>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetUnityComponent_b__31_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1dd30

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetUnityComponent>b__31_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (DAT_05702cc4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc4 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent
                         (__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentEnabled>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentEnabled_b__32_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1ddc0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__SetComponentEnabled>b__32_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *name;
  
  if (DAT_05702cc5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e1de76:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled
                  (__c,name,uVar1 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e1de76;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetComponentsEnabled>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetComponentsEnabled_b__33_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1de80

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__SetComponentsEnabled>b__33_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  uint uVar1;
  
  if (DAT_05702cc6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc6 = '\x01';
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
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled
                (__c,uVar1 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereCollider>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereCollider_b__34_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1df20

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddSphereCollider>b__34_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  float radius;
  
  if (DAT_05702cc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      collideMode = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        collideWith = (System_String_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          center = (CustomLogic_CustomLogicVector3Builtin_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV)
          ;
          if (3 < (uint)__a->max_length) {
            radius = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                               (__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
              CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
                        (__c,collideMode,collideWith,center,radius,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto LAB_03e1e029;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e1e029:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxCollider>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxCollider_b__35_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e030

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddBoxCollider>b__35_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  System_String_o *collideMode;
  System_String_o *collideWith;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicVector3Builtin_o *size;
  
  if (DAT_05702cc8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03e1e189:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    collideMode = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((uint)__a->max_length < 2) goto LAB_03e1e189;
    collideWith = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
    if ((int)__a->max_length < 3) {
      center = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      size = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    else {
      pIVar1 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      center = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((int)__a->max_length < 4) {
        size = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) goto LAB_03e1e184;
        goto LAB_03e1e0e9;
      }
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      size = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    }
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
LAB_03e1e0e9:
      CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider
                (__c,collideMode,collideWith,center,size,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e1e184:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideWith>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideWith_b__36_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e190

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCollideWith>b__36_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *collideWith;
  
  if (DAT_05702cc9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cc9 = '\x01';
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
    collideWith = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith(__c,collideWith,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCollideMode>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetCollideMode_b__37_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e230

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCollideMode>b__37_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *collideMode;
  
  if (DAT_05702cca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cca = '\x01';
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
    collideMode = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode(__c,collideMode,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddSphereTarget>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddSphereTarget_b__38_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e2d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddSphereTarget>b__38_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *team;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar1;
  float radius;
  
  if (DAT_05702ccb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ccb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      team = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        center = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget
                               (__c,team,center,radius,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto LAB_03e1e3bc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e1e3bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBoxTarget>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBoxTarget_b__39_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e3d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddBoxTarget>b__39_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *team;
  CustomLogic_CustomLogicVector3Builtin_o *center;
  CustomLogic_CustomLogicVector3Builtin_o *size;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar1;
  
  if (DAT_05702ccc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ccc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      team = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        center = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          size = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget
                               (__c,team,center,size,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto LAB_03e1e4ae;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e1e4ae:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChild>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChild_b__40_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e4c0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetChild>b__40_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_HashSet_int__o *__this_04;
  Map_MapObject_o *pMVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  System_String_o *b;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  int32_t key;
  int32_t iVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [32];
  
  if (DAT_05702ccd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ccd = '\x01';
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
    b = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (DAT_05702c5e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager,b,0);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
        il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
        il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
        il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
        il2cpp_init_method_metadata(&TypeInfo_MapLoader);
        DAT_05702c5e = '\x01';
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar4 = (__c->fields).Value;
      if (((pMVar4 != (Map_MapObject_o *)0x0) &&
          (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
         (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
         pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar2,(pMVar1->fields).Id,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar4 = (__c->fields).Value;
          if (((pMVar4 == (Map_MapObject_o *)0x0) ||
              (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0))
             || ((pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                            (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
                 pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0 ||
                 (__this_04 = (System_Collections_Generic_HashSet_int__o *)
                              System_Collections_Generic_Dictionary<int__object>__get_Item
                                        (pSVar2,(pMVar1->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
                 __this_04 == (System_Collections_Generic_HashSet_int__o *)0x0))))
          goto LAB_03e1507b;
          System_Collections_Generic_HashSet<int>__GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,__this_04,
                     MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
          uVar9 = SUB84(auStack_48._16_8_,4);
          pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_48._0_8_;
          pIVar7 = (Il2CppType *)auStack_48._8_8_;
          iVar8 = (int32_t)auStack_48._16_8_;
          while (key = iVar8, __this_01.fields._8_8_ = pIVar7,
                __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6,
                __this_01.fields._current._0_4_ = key, __this_01.fields._current._4_4_ = uVar9,
                bVar3 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                                  (__this_01,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            iVar8 = key;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar3 != '\0') {
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pMVar4 = (Map_MapObject_o *)
                       System_Collections_Generic_Dictionary<int__object>__get_Item
                                 ((System_Collections_Generic_Dictionary_int__object__o *)
                                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item);
              if (pMVar4 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pMVar1 = (pMVar4->fields).ScriptObject;
              if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar3 = System_String__op_Equality
                                (*(System_String_o **)&(pMVar1->fields).Visible,b,(MethodInfo *)0x0)
              ;
              if ((char)bVar3 != '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                     (__this_00,pMVar4,(MethodInfo *)0x0);
                  __this_02.fields._8_8_ = pIVar7;
                  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
                  __this_02.fields._current._0_4_ = iVar8;
                  __this_02.fields._current._4_4_ = uVar9;
                  System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                            (__this_02,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
                  return (Il2CppObject *)pCVar5;
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
          __this_03.fields._8_8_ = pIVar7;
          __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
          __this_03.fields._current._0_4_ = key;
          __this_03.fields._current._4_4_ = uVar9;
          System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                    (__this_03,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
        }
        return (Il2CppObject *)0x0;
      }
LAB_03e1507b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetChildren>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetChildren_b__41_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e550

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetChildren>b__41_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_HashSet_int__o *__this_06;
  Map_MapObject_o *pMVar8;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c5f = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar8 = (__c->fields).Value;
  if (((pMVar8 != (Map_MapObject_o *)0x0) &&
      (pMVar3 = (pMVar8->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
     pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar4,(pMVar3->fields).Id,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      return (Il2CppObject *)__this_05;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar8 = (__c->fields).Value;
    if (((pMVar8 != (Map_MapObject_o *)0x0) &&
        (pMVar3 = (pMVar8->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
        pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0 &&
        (__this_06 = (System_Collections_Generic_HashSet_int__o *)
                     System_Collections_Generic_Dictionary<int__object>__get_Item
                               (pSVar4,(pMVar3->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
        __this_06 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
      System_Collections_Generic_HashSet<int>__GetEnumerator(&SStack_48,__this_06,MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
      if (__this_05 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        do {
          do {
            __this_02.fields._8_8_ = __this_05;
            __this_02.fields._set =
                 (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
            __this_02.fields._current = (Il2CppObject *)pSVar9;
            bVar7 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                              (__this_02,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98);
            if ((char)bVar7 == '\0') {
LAB_03e15560:
              __this_04.fields._8_8_ = __this_05;
              __this_04.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
              __this_04.fields._current = (Il2CppObject *)pSVar9;
              System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                        (__this_04,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
              return (Il2CppObject *)__this_05;
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
LAB_03e15588:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                               (int32_t)SStack_48.fields._current,MethodInfo_Boolean_ContainsKey);
          } while ((char)bVar7 == '\0');
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03e1555b;
          pMVar8 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary<int__object>__get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)
                              **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                              (int32_t)SStack_48.fields._current,MethodInfo_MapObject_get_Item);
          __this_00 = (__this_05->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_01,pMVar8,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
      do {
        __this_03.fields._8_8_ = __this_05;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88
        ;
        __this_03.fields._current = (Il2CppObject *)pSVar9;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                          (__this_03,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') goto LAB_03e15560;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03e15588;
        bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(int32_t)SStack_48.fields._current
                           ,MethodInfo_Boolean_ContainsKey);
      } while ((char)bVar7 == '\0');
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_int__object__o *)
          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int__object>__get_Item
                  ((System_Collections_Generic_Dictionary_int__object__o *)
                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(int32_t)SStack_48.fields._current,
                   MethodInfo_MapObject_get_Item);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03e1555b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__42_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e570

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTransform>b__42_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *obj;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  System_String_o *n;
  
  if (DAT_05702cce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cce = '\x01';
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
    n = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (DAT_05702c60 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin,n,0);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05702c60 = '\x01';
      }
      pMVar1 = (__c->fields).Value;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,n,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
            CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,pUVar3,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_01;
          }
          return (Il2CppObject *)0x0;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetColorAll>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__SetColorAll_b__43_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e600

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__SetColorAll>b__43_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  
  if (DAT_05702ccf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ccf = '\x01';
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
    color = (CustomLogic_CustomLogicColorBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll(__c,color,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__InBounds>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__InBounds_b__44_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e6a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__InBounds>b__44_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05702cd0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cd0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicMapObjectBuiltin__InBounds(__c,position,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsAverageCenter>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsAverageCenter_b__45_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e750

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsAverageCenter>b__45_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar3 [16];
  uint uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_o UVar9;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Bounds_o UStack_38;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c61 = '\x01';
    if (DAT_056fdd15 == '\0') goto LAB_03e15b2a;
LAB_03e15a28:
    pMVar1 = (__c->fields).Value;
  }
  else {
    if (DAT_056fdd15 != '\0') goto LAB_03e15a28;
LAB_03e15b2a:
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    pMVar1 = (__c->fields).Value;
  }
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    fVar7 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    uVar4 = (uint)pUVar2->max_length;
    uVar5 = 0;
    if (0 < (int)uVar4) {
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pUVar2->m_Items[(int)uVar5] == (UnityEngine_Collider_o *)0x0) goto LAB_03e15bb3;
        UnityEngine_Collider__get_bounds(&UStack_38,pUVar2->m_Items[(int)uVar5],(MethodInfo *)0x0);
        fVar7 = fVar7 + UStack_38.fields.m_Center.fields.z;
        fStack_58 = auVar8._0_4_;
        fStack_54 = auVar8._4_4_;
        fStack_50 = auVar8._8_4_;
        fStack_4c = auVar8._12_4_;
        auVar8._0_4_ = fStack_58 + UStack_38.fields.m_Center.fields.x;
        auVar8._4_4_ = fStack_54 + UStack_38.fields.m_Center.fields.y;
        auVar8._8_4_ = fStack_50 + 0.0;
        auVar8._12_4_ = fStack_4c + 0.0;
        uVar5 = uVar5 + 1;
        uVar4 = (uint)pUVar2->max_length;
      } while ((int)uVar5 < (int)uVar4);
    }
    if ((int)uVar5 < 1) {
      pMVar1 = (__c->fields).Value;
      if (((pMVar1 == (Map_MapObject_o *)0x0) ||
          (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
         || (__this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
            __this_02 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e15bb3;
      UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.z;
      __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      fStack_48 = UVar9.fields.x;
      fStack_44 = UVar9.fields.y;
      fStack_58 = fStack_48;
      fStack_54 = fStack_44;
    }
    else {
      fVar6 = (float)(int)uVar5;
      fVar7 = fVar7 / fVar6;
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_8_ = 0;
      auVar8 = divps(auVar8,auVar3);
      __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      fStack_58 = auVar8._0_4_;
      fStack_54 = auVar8._4_4_;
    }
    UVar9.fields.y = fStack_54;
    UVar9.fields.x = fStack_58;
    UVar9.fields.z = fVar7;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar9,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_01;
  }
LAB_03e15bb3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsCenter>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsCenter_b__46_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e770

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsCenter>b__46_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsSize>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsSize_b__47_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e790

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsSize>b__47_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMin>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMin_b__48_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e7b0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsMin>b__48_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o UStack_30;
  undefined8 uStack_18;
  undefined *puStack_10;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    puStack_10 = &UNK_03e1e7c6;
    il2cpp_raise_exception();
  }
  if (DAT_05702c64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin,0);
    DAT_05702c64 = '\x01';
  }
  pMVar1 = (__c->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (Il2CppObject *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&UStack_30,pUVar2->m_Items[0],(MethodInfo *)0x0);
      uStack_18 = CONCAT44(UStack_30.fields.m_Center.fields.y - UStack_30.fields.m_Extents.fields.y,
                           UStack_30.fields.m_Center.fields.x - UStack_30.fields.m_Extents.fields.x)
      ;
      puStack_10 = (undefined *)0x0;
      value.fields.z = UStack_30.fields.m_Center.fields.z - UStack_30.fields.m_Extents.fields.z;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.x = (float)(undefined4)uStack_18;
      value.fields.y = (float)uStack_18._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsMax>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsMax_b__49_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e7d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsMax>b__49_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBoundsExtents>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBoundsExtents_b__50_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e7f0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBoundsExtents>b__50_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCorners>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetCorners_b__51_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e810

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetCorners>b__51_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_BoxCollider_o **ppUVar1;
  CustomLogic_CustomLogicListBuiltin_o **ppCVar2;
  int32_t *piVar3;
  byte bVar4;
  uint uVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_Collider_array *pUVar7;
  UnityEngine_Collider_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  Il2CppClass *pIVar8;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_List_Vector3__o *__this_04;
  System_Collections_Generic_List_int__o *pSVar10;
  long lVar11;
  System_Action_T__o *action;
  System_Int32_array *pSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Bounds_o UStack_70;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_int);
    il2cpp_init_method_metadata(&TypeInfo_BoxCollider);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_CustomLogic_CustomLogicVector3Buil);
    il2cpp_init_method_metadata(&TypeInfo_Func_Vector3__CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_ForEach);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin__GetCorners_b__98_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCorners_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass98_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702c67 = '\x01';
  }
  __this_03 = (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass98_0);
  CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_0___ctor(__this_03,(MethodInfo *)0x0);
  pIVar8 = TypeInfo_BoxCollider;
  pMVar6 = (__c->fields).Value;
  if ((pMVar6 == (Map_MapObject_o *)0x0) ||
     (pUVar7 = (pMVar6->fields).colliderCache, pUVar7 == (UnityEngine_Collider_array *)0x0))
  goto LAB_03e16584;
  if (pUVar7->max_length == 0) {
    return (Il2CppObject *)0x0;
  }
  if ((int)pUVar7->max_length == 0) {
LAB_03e16589:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = pUVar7->m_Items[0];
  if (__this_00 == (UnityEngine_Collider_o *)0x0) goto LAB_03e16584;
  bVar4 = (TypeInfo_BoxCollider->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BoxCollider)) {
    UnityEngine_Collider__get_bounds(&UStack_70,__this_00,(MethodInfo *)0x0);
    auStack_58._0_4_ = UStack_70.fields.m_Center.fields.x;
    auStack_58._4_4_ = UStack_70.fields.m_Center.fields.y;
    uStack_50 = 0;
    auStack_48._0_4_ = UStack_70.fields.m_Extents.fields.x;
    auStack_48._4_4_ = UStack_70.fields.m_Extents.fields.y;
    uStack_40 = 0;
    source = (System_Collections_Generic_IEnumerable_TSource__o *)il2cpp_glue_02274930(TypeInfo_Vector3);
    if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      uVar5 = *(uint *)&source[1].monitor;
      if (uVar5 != 0) {
        fVar15 = (float)auStack_58._0_4_ - (float)auStack_48._0_4_;
        fVar14 = (float)auStack_58._4_4_ - (float)auStack_48._4_4_;
        fVar16 = UStack_70.fields.m_Center.fields.z - UStack_70.fields.m_Extents.fields.z;
        source[2].klass =
             (System_Collections_Generic_IEnumerable_TSource__c *)CONCAT44(fVar14,fVar15);
        *(float *)&source[2].monitor = fVar16;
        if (uVar5 != 1) {
          UStack_70.fields.m_Center.fields.z =
               UStack_70.fields.m_Center.fields.z + UStack_70.fields.m_Extents.fields.z;
          *(ulong *)((long)&source[2].monitor + 4) = CONCAT44(fVar14,fVar15);
          *(float *)((long)&source[3].klass + 4) = UStack_70.fields.m_Center.fields.z;
          if (2 < uVar5) {
            fVar13 = (float)auStack_48._4_4_ + (float)auStack_58._4_4_;
            source[3].monitor = (void *)CONCAT44(fVar13,fVar15);
            *(float *)&source[4].klass = fVar16;
            if (uVar5 != 3) {
              *(ulong *)((long)&source[4].klass + 4) = CONCAT44(fVar13,fVar15);
              *(float *)((long)&source[4].monitor + 4) = UStack_70.fields.m_Center.fields.z;
              if (4 < uVar5) {
                fVar15 = (float)auStack_48._0_4_ + (float)auStack_58._0_4_;
                source[5].klass =
                     (System_Collections_Generic_IEnumerable_TSource__c *)CONCAT44(fVar14,fVar15);
                *(float *)&source[5].monitor = fVar16;
                if (uVar5 != 5) {
                  *(ulong *)((long)&source[5].monitor + 4) = CONCAT44(fVar14,fVar15);
                  *(float *)((long)&source[6].klass + 4) = UStack_70.fields.m_Center.fields.z;
                  if (6 < uVar5) {
                    source[6].monitor = (void *)CONCAT44(fVar13,fVar15);
                    *(float *)&source[7].klass = fVar16;
                    if (uVar5 != 7) {
                      *(ulong *)((long)&source[7].klass + 4) = CONCAT44(fVar13,fVar15);
                      *(float *)((long)&source[7].monitor + 4) = UStack_70.fields.m_Center.fields.z;
                      pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)
                               il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
                      CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
                      if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                        __this_01 = (pCVar9->fields).List;
                        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                          il2cpp_init_class();
                          selector = *(System_Func_TSource__TResult__o **)
                                      (*(long *)(TypeInfo_c + 0xb8) + 8);
                        }
                        else {
                          selector = *(System_Func_TSource__TResult__o **)
                                      (*(long *)(TypeInfo_c + 0xb8) + 8);
                        }
                        if (selector == (System_Func_TSource__TResult__o *)0x0) {
                          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          selector = (System_Func_TSource__TResult__o *)
                                     il2cpp_runtime_glue(TypeInfo_Func_Vector3__CustomLogicVector3Builtin);
                          System_Func<Vector3__object>___ctor();
                          lVar11 = *(long *)(TypeInfo_c + 0xb8);
                          *(System_Func_TSource__TResult__o **)(lVar11 + 8) = selector;
                          il2cpp_runtime_glue(lVar11 + 8,selector);
                        }
                        collection = System_Linq_Enumerable__Select<Vector3__object>
                                               (source,selector,MethodInfo_IEnumerable_1_CustomLogic_CustomLogicVector3Buil);
                        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                          System_Collections_Generic_List<object>__AddRange
                                    (__this_01,
                                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                                     MethodInfo_Void_AddRange);
                          return (Il2CppObject *)pCVar9;
                        }
                      }
                      goto LAB_03e16584;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03e16589;
    }
    goto LAB_03e16584;
  }
  if (__this_03 == (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)0x0)
  goto LAB_03e16584;
  (__this_03->fields).boxCollider = (UnityEngine_BoxCollider_o *)__this_00;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != pIVar8)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00,pIVar8);
  }
  ppUVar1 = &(__this_03->fields).boxCollider;
  il2cpp_runtime_glue(ppUVar1);
  __this_02 = *ppUVar1;
  if (__this_02 == (UnityEngine_BoxCollider_o *)0x0) goto LAB_03e16584;
  UVar17 = UnityEngine_BoxCollider__get_size(__this_02,(MethodInfo *)0x0);
  (__this_03->fields).size.fields.x = (float)(int)UVar17.fields._0_8_;
  (__this_03->fields).size.fields.y = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
  (__this_03->fields).size.fields.z = UVar17.fields.z;
  pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
  ppCVar2 = &(__this_03->fields).result;
  (__this_03->fields).result = pCVar9;
  il2cpp_runtime_glue(ppCVar2,pCVar9);
  __this_04 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(__this_04,MethodInfo_List_1_UnityEngine_Vector3);
  pSVar10 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar10,MethodInfo_List_1_System_Int32);
  lVar11 = MethodInfo_Void_Add;
  if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_03e16584;
  piVar3 = &(pSVar10->fields)._version;
  *piVar3 = *piVar3 + 1;
  pSVar12 = (pSVar10->fields)._items;
  if (pSVar12 == (System_Int32_array *)0x0) goto LAB_03e16584;
  uVar5 = (pSVar10->fields)._size;
  if (uVar5 < (uint)pSVar12->max_length) {
    (pSVar10->fields)._size = uVar5 + 1;
    pSVar12->m_Items[(int)uVar5] = -1;
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    uVar5 = (pSVar10->fields)._size;
    if (uVar5 < (uint)pSVar12->max_length) goto LAB_03e164f6;
LAB_03e16506:
    System_Collections_Generic_List<int>__AddWithResize
              (pSVar10,1,*(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
              );
  }
  else {
    System_Collections_Generic_List<int>__AddWithResize
              (pSVar10,-1,
               *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    lVar11 = MethodInfo_Void_Add;
    pSVar12 = (pSVar10->fields)._items;
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    if (pSVar12 == (System_Int32_array *)0x0) goto LAB_03e16584;
    uVar5 = (pSVar10->fields)._size;
    if ((uint)pSVar12->max_length <= uVar5) goto LAB_03e16506;
LAB_03e164f6:
    (pSVar10->fields)._size = uVar5 + 1;
    pSVar12->m_Items[(int)uVar5] = 1;
  }
  (__this_03->fields).signs = pSVar10;
  il2cpp_runtime_glue(&__this_03->fields,pSVar10);
  pSVar10 = (__this_03->fields).signs;
  action = (System_Action_T__o *)il2cpp_runtime_glue(TypeInfo_Action_int);
  System_Action<int>___ctor();
  if (pSVar10 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List<int>__ForEach(pSVar10,action,MethodInfo_Void_ForEach);
    return (Il2CppObject *)*ppCVar2;
  }
LAB_03e16584:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasTag>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__HasTag_b__52_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e830

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__HasTag>b__52_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *tag;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05702cd1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cd1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    tag = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicMapObjectBuiltin__HasTag(__c,tag,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddBuiltinComponent>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddBuiltinComponent_b__53_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e8e0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddBuiltinComponent>b__53_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **ppCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Map_MapObject_o *pMVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicLodBuiltin_o *__this_00;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_01;
  System_String_o *str2;
  undefined8 uVar7;
  System_Exception_o *__this_02;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_03;
  
  if (DAT_05702cd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cd2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e1e964:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar6 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar9 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar6,MethodInfo_String_ConvertTo_String);
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) goto LAB_03e1e964;
  if (DAT_05702c69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLightBuiltin,pSVar9,0);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"SpotLight");
    il2cpp_init_method_metadata(&"CustomPhysicsMaterial");
    il2cpp_init_method_metadata(&"NavMeshObstacle");
    il2cpp_init_method_metadata(&"Lod");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"PointLight");
    il2cpp_init_method_metadata(&"DayLight");
    DAT_05702c69 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03e169b1;
  bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar2,(Il2CppObject *)pSVar9,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(pSVar9,"DayLight",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(pSVar9,"PointLight",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(pSVar9,"SpotLight",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(pSVar9,"Rigidbody",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pMVar3 = (__c->fields).Value;
            if ((pMVar3 == (Map_MapObject_o *)0x0) ||
               (pMVar4 = (pMVar3->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
            goto LAB_03e169b1;
            if (*(char *)((long)&(pMVar4->fields).Active + 1) != '\0') {
              uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
              __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
              pSVar9 = (System_String_o *)il2cpp_init_method_metadata(&"AddRigidbody cannot be called on a static MapObject.");
              goto LAB_03e16a01;
            }
            __this_01 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
            CustomLogic_CustomLogicRigidbodyBuiltin___ctor
                      (__this_01,__c,1.0,(System_Nullable_Vector3__o)(ZEXT416(0) << 0x40),0,0,
                       (MethodInfo *)0x0);
            ppCVar1 = &(__c->fields)._rigidBody;
            (__c->fields)._rigidBody = __this_01;
            il2cpp_runtime_glue(ppCVar1,__this_01);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__c->fields)._builtinCache;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)*ppCVar1,MethodInfo_Void_set_Item);
              __this_03 = (__c->fields)._builtinCache;
              if (__this_03 ==
                  (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
              goto LAB_03e169b1;
              goto LAB_03e16800;
            }
            goto LAB_03e169b1;
          }
          bVar5 = System_String__op_Equality(pSVar9,"CustomPhysicsMaterial",(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            bVar5 = System_String__op_Equality(pSVar9,"NavMeshObstacle",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              bVar5 = System_String__op_Equality(pSVar9,"Lod",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown builtin component: ");
                pSVar9 = System_String__Concat(pSVar8,pSVar9,(MethodInfo *)0x0);
                goto LAB_03e169e1;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__c->fields)._builtinCache;
              __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLodBuiltin);
              CustomLogic_CustomLogicLodBuiltin___ctor(__this_00,__c,(MethodInfo *)0x0);
            }
            else {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__c->fields)._builtinCache;
              __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNavmeshObstacleBuiltin);
              CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
                        ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__this_00,__c,
                         (MethodInfo *)0x0);
            }
          }
          else {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__c->fields)._builtinCache;
            __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPhysicsMaterialBuiltin);
            CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor
                      ((CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)__this_00,__c,
                       (MethodInfo *)0x0);
          }
        }
        else {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__c->fields)._builtinCache;
          __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
          CustomLogic_CustomLogicLightBuiltin___ctor
                    ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__c,0,(MethodInfo *)0x0);
        }
      }
      else {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__c->fields)._builtinCache;
        __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
        CustomLogic_CustomLogicLightBuiltin___ctor
                  ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__c,2,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__c->fields)._builtinCache;
      __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
      CustomLogic_CustomLogicLightBuiltin___ctor
                ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__c,1,(MethodInfo *)0x0);
    }
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)__this_00,MethodInfo_Void_set_Item);
      __this_03 = (__c->fields)._builtinCache;
      if (__this_03 !=
          (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
LAB_03e16800:
        pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                            (Il2CppObject *)pSVar9,MethodInfo_BuiltinComponentInstance_get_Item);
        return pIVar6;
      }
    }
LAB_03e169b1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"MapObject already has a ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" component.");
  pSVar9 = System_String__Concat(pSVar8,pSVar9,str2,(MethodInfo *)0x0);
LAB_03e169e1:
  uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
LAB_03e16a01:
  System_Exception___ctor(__this_02,pSVar9,(MethodInfo *)0x0);
  uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object_AddBuiltinComponent);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_02,uVar7);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddRigidbody>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__AddRigidbody_b__54_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e970

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__AddRigidbody>b__54_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **ppCVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  undefined8 uVar6;
  System_Exception_o *__this_01;
  System_String_o *message;
  undefined *puVar7;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin,0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Rigidbody");
    DAT_05702c6a = '\x01';
  }
  pMVar2 = (__c->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pMVar3 = (pMVar2->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar3->fields).Active + 1) != '\0') {
      uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
      puVar7 = &"AddRigidbody cannot be called on a static MapObject.";
LAB_03e16bc7:
      message = (System_String_o *)il2cpp_init_method_metadata(puVar7);
      System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar6 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRigidbodyBuiltin_AddRigidbody);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar6);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._builtinCache;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar4,"Rigidbody",MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 != '\0') {
        uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
        puVar7 = &"MapObject already has a Rigidbody component.";
        goto LAB_03e16bc7;
      }
      __this_00 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor
                (__this_00,__c,1.0,(System_Nullable_Vector3__o)(ZEXT416(0) << 0x40),0,0,
                 (MethodInfo *)0x0);
      ppCVar1 = &(__c->fields)._rigidBody;
      (__c->fields)._rigidBody = __this_00;
      il2cpp_runtime_glue(ppCVar1,__this_00);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__c->fields)._builtinCache;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar4,"Rigidbody",(Il2CppObject *)*ppCVar1,MethodInfo_Void_set_Item);
        return (Il2CppObject *)*ppCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBuiltinComponent>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__GetBuiltinComponent_b__55_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1e990

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBuiltinComponent>b__55_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05702cd3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cd3 = '\x01';
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
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      if (DAT_05702c6b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey,pIVar3,0);
        il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Item);
        DAT_05702c6b = '\x01';
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__c->fields)._builtinCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar1,pIVar3,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar2 == '\0') {
          return (Il2CppObject *)0x0;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__c->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,pIVar3,MethodInfo_BuiltinComponentInstance_get_Item);
          return pIVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveBuiltinComponent>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__RemoveBuiltinComponent_b__56_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1ea20

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveBuiltinComponent>b__56_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (DAT_05702cd4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cd4 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings.<>c$$<__CreateMethodBinding__ConvertToCSV>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_____CreateMethodBinding__ConvertToCSV_b__57_0 (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e1eac0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings_<>c__<__CreateMethodBinding__ConvertToCSV>b__57_0
          (CustomLogic_CustomLogicMapObjectBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapObjectBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  
  if (__c == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar1 = (__c->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, __c = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0
     , pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    vtable_dispatch = (pMVar2->klass->vtable)._8_Serialize.methodPtr;
    pIVar3 = (Il2CppObject *)
             (*vtable_dispatch)
                       (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method,__a,vtable_dispatch
                       );
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__c,0);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e17040

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702c70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AddBoxCollider");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"TextureTilingX");
    il2cpp_init_method_metadata(&"GetComponent");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"GetBoundsMax");
    il2cpp_init_method_metadata(&"GetBoundsSize");
    il2cpp_init_method_metadata(&"AddRigidbody");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"GetUnityComponent");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"RemoveBuiltinComponent");
    il2cpp_init_method_metadata(&"GetBoundsMin");
    il2cpp_init_method_metadata(&"LocalPosition");
    il2cpp_init_method_metadata(&"AddBoxTarget");
    il2cpp_init_method_metadata(&"QuaternionLocalRotation");
    il2cpp_init_method_metadata(&"GetBoundsCenter");
    il2cpp_init_method_metadata(&"SetCollideMode");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetBoundsAverageCenter");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"AddComponent");
    il2cpp_init_method_metadata(&"ConvertToCSV");
    il2cpp_init_method_metadata(&"AddBuiltinComponent");
    il2cpp_init_method_metadata(&"GetCorners");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"AddSphereTarget");
    il2cpp_init_method_metadata(&"HasRenderer");
    il2cpp_init_method_metadata(&"TextureOffsetY");
    il2cpp_init_method_metadata(&"InBounds");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"SetComponentsEnabled");
    il2cpp_init_method_metadata(&"AddSphereCollider");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"Tag");
    il2cpp_init_method_metadata(&"GetBoundsExtents");
    il2cpp_init_method_metadata(&"TextureOffsetX");
    il2cpp_init_method_metadata(&"SetComponentEnabled");
    il2cpp_init_method_metadata(&"GetChild");
    il2cpp_init_method_metadata(&"Layer");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"NetworkView");
    il2cpp_init_method_metadata(&"SetColorAll");
    il2cpp_init_method_metadata(&"GetBuiltinComponent");
    il2cpp_init_method_metadata(&"GetTransform");
    il2cpp_init_method_metadata(&"TextureTilingY");
    il2cpp_init_method_metadata(&"LocalRotation");
    il2cpp_init_method_metadata(&"RemoveComponent");
    il2cpp_init_method_metadata(&"HasTag");
    il2cpp_init_method_metadata(&"ID");
    il2cpp_init_method_metadata(&"SetCollideWith");
    il2cpp_init_method_metadata(&"GetChildren");
    DAT_05702c70 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x56e8eb61) {
    if (uVar3 < 0x27a969bc) {
      if (uVar3 < 0x1be9479d) {
        if (uVar3 < 0x65b2735) {
          if (uVar3 == 0x232777f) {
            bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702c74 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
                DAT_05702c74 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if (uVar3 == 0x3134bce) {
            bVar4 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702c75 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalRotation_g);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalRotation_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
                DAT_05702c75 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x65b2734) &&
                  (bVar4 = System_String__op_Equality(name,"GetBoundsMax",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ca0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsMax_b__4);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702ca0 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xb0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 < 0x18a43c5c) {
          if (uVar3 == 0xfe07306) {
            bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702c7c == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
                DAT_05702c7c = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              System_Func<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x18a43c5b) &&
                  (bVar4 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c71 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Static_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c71 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x1b288681) {
          bVar4 = System_String__op_Equality(name,"HasTag",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ca3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasTag_b__52_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702ca3 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 200);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 200);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 200) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 200,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x1be9479c) &&
                (bVar4 = System_String__op_Equality(name,"HasRenderer",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c80 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasRenderer_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c80 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x20810131) {
        if (uVar3 == 0x1e9e9f85) {
          bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c7a == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c7a = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x1f89134f) {
          bVar4 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c7e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Active_g____get);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Active_g____sette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c7e = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x20810130) &&
                (bVar4 = System_String__op_Equality(name,"SetCollideMode",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c94 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCollideMode_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c94 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x23cef8ba) {
        if (uVar3 == 0x22cef726) {
          bVar4 = System_String__op_Equality(name,"TextureTilingY",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c83 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureTilingY);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureTilingY_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c83 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x23cef8b9) &&
                (bVar4 = System_String__op_Equality(name,"TextureTilingX",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c82 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureTilingX);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureTilingX_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c82 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x25ea1867) {
        bVar4 = System_String__op_Equality(name,"GetChild",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c97 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetChild_b__40_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c97 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x27a969bb) &&
              (bVar4 = System_String__op_Equality(name,"SetComponentEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c8f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetComponentEnabl);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c8f = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x342cdb7a) {
      if (uVar3 < 0x2ac20558) {
        if (uVar3 == 0x28528e11) {
          bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c7b == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c7b = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x2862c297) {
          bVar4 = System_String__op_Equality(name,"RemoveBuiltinComponent",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ca7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveBuiltinComp);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702ca7 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0xe8);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xe8,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x2ac20557) &&
                (bVar4 = System_String__op_Equality(name,"AddRigidbody",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ca5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddRigidbody_b__5);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702ca5 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xd8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x2fe74448) {
        if (uVar3 == 0x2ace984c) {
          bVar4 = System_String__op_Equality(name,"SetComponentsEnabled",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c90 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetComponentsEnab);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c90 = '\x01';
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
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x2fe74447) &&
                (bVar4 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c76 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c76 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x30f356f2) {
        bVar4 = System_String__op_Equality(name,"GetComponent",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c8d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetComponent_b__3);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c8d = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x342cdb79) &&
              (bVar4 = System_String__op_Equality(name,"SetColorAll",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c9a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetColorAll_b__43);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c9a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x448260ec) {
      if (uVar3 == 0x42f35940) {
        bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c79 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c79 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x43c043a7) {
        bVar4 = System_String__op_Equality(name,"GetCorners",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ca2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCorners_b__51);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702ca2 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xc0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x448260eb) &&
              (bVar4 = System_String__op_Equality(name,"ConvertToCSV",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ca8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ConvertToCSV_b__5);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702ca8 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xf0);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xf0,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x51826a21) {
      if (uVar3 == 0x4614013f) {
        bVar4 = System_String__op_Equality(name,"SetCollideWith",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c93 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCollideWith_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c93 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x51826a20) &&
              (bVar4 = System_String__op_Equality(name,"AddBoxTarget",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c96 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBoxTarget_b__3);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c96 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x53e18937) {
      bVar4 = System_String__op_Equality(name,"GetBoundsCenter",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c9d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsCenter_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c9d = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x56e8eb60) &&
            (bVar4 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c86 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ID_g____getter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        DAT_05702c86 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xad82abbc) {
    if (uVar3 < 0x83c140bc) {
      if (uVar3 < 0x67cfeb84) {
        if (uVar3 == 0x5eabd17f) {
          bVar4 = System_String__op_Equality(name,"InBounds",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c9b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InBounds_b__44_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702c9b = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x88);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x88);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x61e48c35) {
          bVar4 = System_String__op_Equality(name,"GetBuiltinComponent",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ca6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBuiltinCompone);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702ca6 = '\x01';
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
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0xe0,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x67cfeb83) &&
                (bVar4 = System_String__op_Equality(name,"GetUnityComponent",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c8e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetUnityComponent);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c8e = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 < 0x755b5308) {
        if (uVar3 == 0x6a01cd56) {
          bVar4 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702c77 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionLocal);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionLocalRo);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
              DAT_05702c77 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x755b5307) &&
                (bVar4 = System_String__op_Equality(name,"GetBoundsExtents",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ca1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsExtents);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702ca1 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xb8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x83c140bb) {
        bVar4 = System_String__op_Equality(name,"GetBoundsSize",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c9e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsSize_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c9e = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x770e2958) &&
              (bVar4 = System_String__op_Equality(name,"RemoveComponent",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c8c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveComponent_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c8c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x917c21f1) {
      if (uVar3 == 0x8d7dfb42) {
        bVar4 = System_String__op_Equality(name,"TextureOffsetY",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c85 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureOffsetY);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureOffsetY_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c85 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x8e7dfcd5) {
        bVar4 = System_String__op_Equality(name,"TextureOffsetX",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c84 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureOffsetX);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureOffsetX_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c84 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x917c21f0) &&
              (bVar4 = System_String__op_Equality(name,"GetBoundsAverageCenter",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c9c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsAverageC);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c9c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xa18f595a) {
      if (uVar3 == 0x9f4e7c78) {
        bVar4 = System_String__op_Equality(name,"NetworkView",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c8a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NetworkView_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NetworkView_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c8a = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xa18f5959) &&
              (bVar4 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c99 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransform_b__4);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c99 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xa3370cc8) {
      bVar4 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c89 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rigidbody_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          DAT_05702c89 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xad82abbb) &&
            (bVar4 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c7f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        DAT_05702c7f = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd82af811) {
    if (uVar3 < 0xb6997fba) {
      if (uVar3 == 0xaf82143b) {
        bVar4 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c73 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c73 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xafdc1b96) {
        bVar4 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c88 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Layer_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Layer_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
            DAT_05702c88 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xb6997fb9) &&
              (bVar4 = System_String__op_Equality(name,"AddSphereCollider",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c91 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddSphereCollider);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c91 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xbbdcd0a7) {
      if (uVar3 == 0xbbaa27dc) {
        bVar4 = System_String__op_Equality(name,"AddSphereTarget",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702c95 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddSphereTarget_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702c95 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xbbdcd0a6) &&
              (bVar4 = System_String__op_Equality(name,"AddBuiltinComponent",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ca4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBuiltinCompone);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702ca4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xd0);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0xd0,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xc156ee1d) {
      bVar4 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c7d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Parent_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Parent_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          DAT_05702c7d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd82af810) &&
            (bVar4 = System_String__op_Equality(name,"GetChildren",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c98 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetChildren_b__41);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c98 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe50883bb) {
    if (uVar3 == 0xd8f3e233) {
      bVar4 = System_String__op_Equality(name,"AddComponent",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c8b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddComponent_b__2);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702c8b = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xe27f342a) {
      bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c72 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          DAT_05702c72 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe50883ba) &&
            (bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c78 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        DAT_05702c78 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xe9952416) {
    if (uVar3 == 0xe5b43cf8) {
      bVar4 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702c81 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Color_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Color_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
          DAT_05702c81 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe9952415) &&
            (bVar4 = System_String__op_Equality(name,"AddBoxCollider",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c92 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBoxCollider_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c92 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xf445f026) {
    bVar4 = System_String__op_Equality(name,"GetBoundsMin",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702c9f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsMin_b__4);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702c9f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf8835433) &&
          (bVar4 = System_String__op_Equality(name,"Tag",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702c87 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Tag_g____getter);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Tag_g____setter_2);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
      DAT_05702c87 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicMapObjectBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x3e184e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Static
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Static_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c71 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3e18580

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Position
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c72 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x3e18660

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c73 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3e18740

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c74 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x3e18820

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__LocalRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c75 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x3e18900

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c76 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x3e189e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionLocal);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionLocalRo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c77 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3e18ac0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Forward
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c78 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3e18ba0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c79 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3e18c80

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x3e18d60

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x3e18e40

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x3e18ee0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Parent
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Parent_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Parent_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x3e18fc0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Active
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Active_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Active_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x3e190a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Transform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__HasRenderer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer (const MethodInfo* method);
// 0x3e19140

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__HasRenderer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasRenderer_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c80 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x3e191e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Color_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Color_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c81 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX (const MethodInfo* method);
// 0x3e192c0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingX
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureTilingX);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureTilingX_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c82 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureTilingY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY (const MethodInfo* method);
// 0x3e193a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureTilingY
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureTilingY);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureTilingY_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c83 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetX
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX (const MethodInfo* method);
// 0x3e19480

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetX
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureOffsetX);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureOffsetX_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c84 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__TextureOffsetY
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY (const MethodInfo* method);
// 0x3e19560

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__TextureOffsetY
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TextureOffsetY);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TextureOffsetY_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c85 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x3e19640

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ID_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c86 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Tag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag (const MethodInfo* method);
// 0x3e196e0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Tag(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Tag_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Tag_g____setter_2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x3e197c0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Layer_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Layer_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c88 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x3e198a0

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__Rigidbody
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c89 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rigidbody_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c89 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreatePropertyBinding__NetworkView
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView (const MethodInfo* method);
// 0x3e19940

CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreatePropertyBinding__NetworkView
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NetworkView_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__NetworkView_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
    DAT_05702c8a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapObjectBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent (const MethodInfo* method);
// 0x3e19a20

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddComponent_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c8b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent (const MethodInfo* method);
// 0x3e19b70

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveComponent_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c8c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent (const MethodInfo* method);
// 0x3e19cc0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetComponent_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c8d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetUnityComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent (const MethodInfo* method);
// 0x3e19e10

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetUnityComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetUnityComponent);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c8e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled (const MethodInfo* method);
// 0x3e19f60

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c8f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetComponentEnabl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c8f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetComponentsEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled (const MethodInfo* method);
// 0x3e1a0b0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetComponentsEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetComponentsEnab);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c90 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider (const MethodInfo* method);
// 0x3e1a200

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereCollider
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c91 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddSphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c91 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxCollider
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider (const MethodInfo* method);
// 0x3e1a350

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxCollider
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBoxCollider_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c92 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith (const MethodInfo* method);
// 0x3e1a4a0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideWith
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCollideWith_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c93 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetCollideMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode (const MethodInfo* method);
// 0x3e1a5f0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetCollideMode
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCollideMode_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c94 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddSphereTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget (const MethodInfo* method);
// 0x3e1a740

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddSphereTarget
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddSphereTarget_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c95 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBoxTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget (const MethodInfo* method);
// 0x3e1a890

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBoxTarget
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBoxTarget_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c96 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChild
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild (const MethodInfo* method);
// 0x3e1a9e0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChild
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c97 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetChild_b__40_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c97 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetChildren
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren (const MethodInfo* method);
// 0x3e1ab30

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetChildren
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetChildren_b__41);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c98 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x3e1ac80

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetTransform
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransform_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c99 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__SetColorAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll (const MethodInfo* method);
// 0x3e1add0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__SetColorAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetColorAll_b__43);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__InBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds (const MethodInfo* method);
// 0x3e1af20

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__InBounds
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InBounds_b__44_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsAverageCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter (const MethodInfo* method);
// 0x3e1b070

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsAverageCenter
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsAverageC);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsCenter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter (const MethodInfo* method);
// 0x3e1b1c0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsCenter
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsCenter_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsSize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize (const MethodInfo* method);
// 0x3e1b310

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsSize
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsSize_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin (const MethodInfo* method);
// 0x3e1b460

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMin
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702c9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsMin_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702c9f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsMax
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax (const MethodInfo* method);
// 0x3e1b5b0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsMax
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsMax_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBoundsExtents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents (const MethodInfo* method);
// 0x3e1b700

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBoundsExtents
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBoundsExtents);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetCorners
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners (const MethodInfo* method);
// 0x3e1b850

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetCorners
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCorners_b__51);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xc0) = function;
    il2cpp_runtime_glue(lVar2 + 0xc0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__HasTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag (const MethodInfo* method);
// 0x3e1b9a0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__HasTag(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HasTag_b__52_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 200) = function;
    il2cpp_runtime_glue(lVar2 + 200,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent (const MethodInfo* method);
// 0x3e1baf0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddBuiltinComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddBuiltinCompone);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd0) = function;
    il2cpp_runtime_glue(lVar2 + 0xd0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__AddRigidbody
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody (const MethodInfo* method);
// 0x3e1bc40

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__AddRigidbody
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddRigidbody_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xd8) = function;
    il2cpp_runtime_glue(lVar2 + 0xd8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__GetBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent (const MethodInfo* method);
// 0x3e1bd90

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__GetBuiltinComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBuiltinCompone);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe0) = function;
    il2cpp_runtime_glue(lVar2 + 0xe0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__RemoveBuiltinComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent (const MethodInfo* method);
// 0x3e1bee0

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__RemoveBuiltinComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveBuiltinComp);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xe8) = function;
    il2cpp_runtime_glue(lVar2 + 0xe8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$__CreateMethodBinding__ConvertToCSV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o* CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV (const MethodInfo* method);
// 0x3e1c030

CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings____CreateMethodBinding__ConvertToCSV
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *__this;
  
  if (DAT_05702ca8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ConvertToCSV_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ca8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapObjectBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xf0) = function;
    il2cpp_runtime_glue(lVar2 + 0xf0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapObjectBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapObjectBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapObjectBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e1c180

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ca9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AddBoxCollider");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"TextureTilingX");
    il2cpp_init_method_metadata(&"GetComponent");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"GetBoundsMax");
    il2cpp_init_method_metadata(&"GetBoundsSize");
    il2cpp_init_method_metadata(&"AddRigidbody");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"GetUnityComponent");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"RemoveBuiltinComponent");
    il2cpp_init_method_metadata(&"GetBoundsMin");
    il2cpp_init_method_metadata(&"LocalPosition");
    il2cpp_init_method_metadata(&"AddBoxTarget");
    il2cpp_init_method_metadata(&"QuaternionLocalRotation");
    il2cpp_init_method_metadata(&"GetBoundsCenter");
    il2cpp_init_method_metadata(&"SetCollideMode");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetBoundsAverageCenter");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"AddComponent");
    il2cpp_init_method_metadata(&"ConvertToCSV");
    il2cpp_init_method_metadata(&"AddBuiltinComponent");
    il2cpp_init_method_metadata(&"GetCorners");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"AddSphereTarget");
    il2cpp_init_method_metadata(&"HasRenderer");
    il2cpp_init_method_metadata(&"TextureOffsetY");
    il2cpp_init_method_metadata(&"InBounds");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"SetComponentsEnabled");
    il2cpp_init_method_metadata(&"AddSphereCollider");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"Tag");
    il2cpp_init_method_metadata(&"GetBoundsExtents");
    il2cpp_init_method_metadata(&"TextureOffsetX");
    il2cpp_init_method_metadata(&"SetComponentEnabled");
    il2cpp_init_method_metadata(&"GetChild");
    il2cpp_init_method_metadata(&"Layer");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"NetworkView");
    il2cpp_init_method_metadata(&"SetColorAll");
    il2cpp_init_method_metadata(&"GetBuiltinComponent");
    il2cpp_init_method_metadata(&"GetTransform");
    il2cpp_init_method_metadata(&"TextureTilingY");
    il2cpp_init_method_metadata(&"LocalRotation");
    il2cpp_init_method_metadata(&"RemoveComponent");
    il2cpp_init_method_metadata(&"HasTag");
    il2cpp_init_method_metadata(&"ID");
    il2cpp_init_method_metadata(&"SetCollideWith");
    il2cpp_init_method_metadata(&"GetChildren");
    DAT_05702ca9 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Static",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LocalPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LocalRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuaternionRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuaternionLocalRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Parent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Active",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Transform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasRenderer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Color",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextureTilingX",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextureTilingY",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextureOffsetX",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TextureOffsetY",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Tag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Layer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rigidbody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NetworkView",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetUnityComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetComponentEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetComponentsEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddSphereCollider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddBoxCollider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCollideWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCollideMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddSphereTarget",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddBoxTarget",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetChild",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetChildren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetColorAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InBounds",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsAverageCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsMin",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsMax",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBoundsExtents",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetCorners",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasTag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddBuiltinComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddRigidbody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBuiltinComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveBuiltinComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ConvertToCSV",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_2_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1c970

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Static>g____getter_2_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     ((pMVar1->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1c9b0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_3_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Position(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1c9d0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_3_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702caa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702caa = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_4_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1ca80

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__LocalPosition>g____getter_4_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_4_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1caa0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__LocalPosition>g____setter_4_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702cab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cab = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_5_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1cb50

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_5_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_5_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1cb70

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____setter_5_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702cac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cac = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) && (pIVar5 != (Il2CppObject *)0x0))
  {
    pIVar3 = pIVar5[3].klass;
    (__i->fields)._internalRotation.fields.z = *(float *)&pIVar5[3].monitor;
    *(Il2CppClass **)&(__i->fields)._internalRotation.fields = pIVar3;
    *(undefined1 *)&(__i->fields)._needSetRotation = 0;
    pMVar4 = (__i->fields).Value;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar4->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalRotation.fields.x;
      uVar2 = (__i->fields)._internalRotation.fields.y;
      euler.fields.x = (float)uVar1 * 0.017453292;
      euler.fields.y = (float)uVar2 * 0.017453292;
      euler.fields.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_6_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1cc40

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__LocalRotation>g____getter_6_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_1c;
  undefined8 uStack_18;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c47 = '\x01';
  }
  if (*(char *)((long)&(__i->fields)._needSetRotation + 1) != '\0') {
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        rotation = UnityEngine_Transform__get_localRotation(__this_00,(MethodInfo *)0x0);
        UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar2.fields.x * 57.29578;
        euler.fields.y = UVar2.fields.y * 57.29578;
        euler.fields.z = UVar2.fields.z * 57.29578;
        UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        fStack_1c = UVar2.fields.z;
        uStack_18 = UVar2.fields._0_8_;
        (__i->fields)._internalLocalRotation.fields.x = (float)(int)uStack_18;
        (__i->fields)._internalLocalRotation.fields.y = (float)(int)((ulong)uStack_18 >> 0x20);
        (__i->fields)._internalLocalRotation.fields.z = fStack_1c;
        *(undefined1 *)((long)&(__i->fields)._needSetRotation + 1) = 0;
        goto LAB_03e114ca;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uStack_18._0_4_ = (__i->fields)._internalLocalRotation.fields.x;
  uStack_18._4_4_ = (__i->fields)._internalLocalRotation.fields.y;
  fStack_1c = (__i->fields)._internalLocalRotation.fields.z;
LAB_03e114ca:
  __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  UVar2.fields.z = fStack_1c;
  UVar2.fields.x = (float)(undefined4)uStack_18;
  UVar2.fields.y = (float)uStack_18._4_4_;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar2,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_6_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1cc60

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__LocalRotation>g____setter_6_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702cad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cad = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) && (pIVar5 != (Il2CppObject *)0x0))
  {
    pIVar3 = pIVar5[3].klass;
    (__i->fields)._internalLocalRotation.fields.z = *(float *)&pIVar5[3].monitor;
    *(Il2CppClass **)&(__i->fields)._internalLocalRotation.fields = pIVar3;
    *(undefined1 *)((long)&(__i->fields)._needSetRotation + 1) = 0;
    pMVar4 = (__i->fields).Value;
    if ((pMVar4 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar4->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      uVar1 = (__i->fields)._internalLocalRotation.fields.x;
      uVar2 = (__i->fields)._internalLocalRotation.fields.y;
      euler.fields.x = (float)uVar1 * 0.017453292;
      euler.fields.y = (float)uVar2 * 0.017453292;
      euler.fields.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_7_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1cd30

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____getter_7_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_o value;
  
  if (__i == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702c48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702c48 = '\x01';
  }
  pMVar1 = (__i->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      __this_01 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_01,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_7_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1cd50

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____setter_7_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702cae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cae = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this_00,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_8_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1ce00

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__QuaternionLocalRotation>g____getter_8_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_8_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1ce20

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__QuaternionLocalRotation>g____setter_8_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702caf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702caf = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localRotation
                (__this_00,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1ced0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____getter_9_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Forward(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1cef0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____setter_9_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702cb0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_forward
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1cfa0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Up>g____getter_10_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Up(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1cfc0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Up>g____setter_10_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702cb1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_up
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d070

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Right>g____getter_11_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Right(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d090

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Right>g____setter_11_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (DAT_05702cb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_right
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_12_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d140

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____getter_12_0
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
    if (DAT_05702c4d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702c4d = '\x01';
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
          __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          local_18 = auVar5._0_8_;
          UVar6.fields.x = (float)(undefined4)local_18;
          UVar6.fields.y = (float)local_18._4_4_;
          CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar6,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_12_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d1f0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____setter_12_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05702cb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_Scale(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d270

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Name>g____getter_13_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return *(Il2CppObject **)&(pMVar2->fields).Visible;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_14_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d2a0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Parent>g____getter_14_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Parent(__i,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_14_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d2c0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Parent>g____setter_14_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (DAT_05702cb4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_ConvertTo_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_Object_ConvertTo_Object);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_Parent(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_15_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d340

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Active>g____getter_15_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_15_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d380

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Active>g____setter_15_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  uint uVar2;
  
  if (DAT_05702cb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this,uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_16_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d410

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Transform>g____getter_16_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (DAT_05702c50 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_05702c50 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
      transform = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__HasRenderer>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__HasRenderer_g____getter_17_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d490

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__HasRenderer>g____getter_17_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 uStack_1;
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     ((pMVar1->fields).renderCache != (UnityEngine_Renderer_array *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_18_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d4d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Color>g____getter_18_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicMapObjectBuiltin__get_Color(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_18_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d4f0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Color>g____setter_18_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05702cb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicColorBuiltin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_Color(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____getter_19_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d570

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureTilingX>g____getter_19_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX(__i,method);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingX>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingX_g____setter_19_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d5a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureTilingX>g____setter_19_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702cb7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____getter_20_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d620

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureTilingY>g____getter_20_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY(__i,method);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureTilingY>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureTilingY_g____setter_20_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d650

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureTilingY>g____setter_20_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702cb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____getter_21_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d6d0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureOffsetX>g____getter_21_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX(__i,method);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetX>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetX_g____setter_21_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d700

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureOffsetX>g____setter_21_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702cb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cb9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____getter_22_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d780

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureOffsetY>g____getter_22_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY(__i,method);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__TextureOffsetY>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__TextureOffsetY_g____setter_22_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d7b0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__TextureOffsetY>g____setter_22_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702cba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_23_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d830

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__ID>g____getter_23_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     ((pMVar1->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____getter_24_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d870

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Tag>g____getter_24_0
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Tag>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Tag_g____setter_24_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d8a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Tag>g____setter_24_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *obj;
  System_String_o *tag;
  
  if (DAT_05702cbb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cbb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  tag = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    if (DAT_05702c52 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_MapLoader);
      DAT_05702c52 = '\x01';
    }
    obj = (__i->fields).Value;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_MapLoader__RegisterTag(tag,obj,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_25_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1d960

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Layer>g____getter_25_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_25_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1d9a0

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Layer>g____setter_25_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this;
  int32_t value;
  
  if (DAT_05702cbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cbc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (((__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (__this = (pMVar1->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_26_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1da30

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__Rigidbody>g____getter_26_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._rigidBody;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____getter_27_0 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, const MethodInfo* method);
// 0x3e1da50

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__NetworkView>g____getter_27_0
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._NetworkView_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.Bindings$$<__CreatePropertyBinding__NetworkView>g____setter|27_1
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin_Bindings_____CreatePropertyBinding__NetworkView_g____setter_27_1 (CustomLogic_CustomLogicMapObjectBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e1da70

void CustomLogic_CustomLogicMapObjectBuiltin_Bindings__<__CreatePropertyBinding__NetworkView>g____setter_27_1
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar1;
  
  if (DAT_05702cbd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_ConvertTo_CustomLo);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cbd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar1 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicNetworkViewBuiltin_ConvertTo_CustomLo);
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    (__i->fields)._NetworkView_k__BackingField = pCVar1;
    il2cpp_runtime_glue(&(__i->fields)._NetworkView_k__BackingField,pCVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___cctor (const MethodInfo* method);
// 0x3e1eae0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702cd5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cd5 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, const MethodInfo* method);
// 0x3e1eb50

void CustomLogic_CustomLogicMapObjectBuiltin_<>c___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c$$<GetCorners>b__98_1
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin___c___GetCorners_b__98_1 (CustomLogic_CustomLogicMapObjectBuiltin___c_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x3e1eb60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin_<>c__<GetCorners>b__98_1
          (CustomLogic_CustomLogicMapObjectBuiltin___c_o *__this,UnityEngine_Vector3_o v,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  
  if (DAT_05702cd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702cd6 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,v,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x3e1ebc0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_0___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_0$$<GetCorners>b__0
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0___GetCorners_b__0 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o* __this, int32_t signX, const MethodInfo* method);
// 0x3e1ebd0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_0__<GetCorners>b__0
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *__this,
               int32_t signX,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  Il2CppObject *__this_01;
  System_Action_T__o *action;
  
  if (DAT_05702cd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_ForEach);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCorners_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass98_1);
    DAT_05702cd7 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass98_1);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].monitor = __this;
    il2cpp_runtime_glue(&__this_01[1].monitor,__this);
    *(int32_t *)&__this_01[1].klass = signX;
    __this_00 = (__this->fields).signs;
    action = (System_Action_T__o *)il2cpp_runtime_glue(TypeInfo_Action_int);
    System_Action<int>___ctor();
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__ForEach(__this_00,action,MethodInfo_Void_ForEach);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_1$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o* __this, const MethodInfo* method);
// 0x3e1ecb0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_1___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_1$$<GetCorners>b__2
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1___GetCorners_b__2 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o* __this, int32_t signY, const MethodInfo* method);
// 0x3e1ecc0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_1__<GetCorners>b__2
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o *__this,
               int32_t signY,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *pCVar1;
  System_Collections_Generic_List_int__o *__this_00;
  Il2CppObject *__this_01;
  System_Action_T__o *action;
  
  if (DAT_05702cd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_ForEach);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCorners_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass98_2);
    DAT_05702cd8 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass98_2);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].monitor = __this;
    il2cpp_runtime_glue(&__this_01[1].monitor,__this);
    *(int32_t *)&__this_01[1].klass = signY;
    pCVar1 = (__this->fields).CS___8__locals1;
    if (pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)0x0) {
      __this_00 = (pCVar1->fields).signs;
      action = (System_Action_T__o *)il2cpp_runtime_glue(TypeInfo_Action_int);
      System_Action<int>___ctor();
      if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__ForEach(__this_00,action,MethodInfo_Void_ForEach);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_2$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2___ctor (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2_o* __this, const MethodInfo* method);
// 0x3e1eda0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_2___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin.<>c__DisplayClass98_2$$<GetCorners>b__3
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2___GetCorners_b__3 (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2_o* __this, int32_t signZ, const MethodInfo* method);
// 0x3e1edb0

void CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_2__<GetCorners>b__3
               (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_2_o *__this,
               int32_t signZ,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o *pCVar8;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *pCVar9;
  CustomLogic_CustomLogicListBuiltin_o *pCVar10;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  System_Object_array *pSVar11;
  long lVar12;
  UnityEngine_Transform_o *__this_03;
  CustomLogic_CustomLogicVector3Builtin_o *__this_04;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o position;
  
  if (DAT_05702cd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702cd9 = '\x01';
  }
  pCVar8 = (__this->fields).CS___8__locals2;
  if ((((pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o *)0x0) &&
       (pCVar9 = (pCVar8->fields).CS___8__locals1,
       pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)0x0)) &&
      (pCVar10 = (pCVar9->fields).result, pCVar10 != (CustomLogic_CustomLogicListBuiltin_o *)0x0))
     && (__this_00 = (UnityEngine_Component_o *)(pCVar9->fields).boxCollider,
        __this_00 != (UnityEngine_Component_o *)0x0)) {
    iVar5 = (pCVar8->fields).signX;
    iVar6 = (__this->fields).signY;
    fVar2 = (pCVar9->fields).size.fields.x;
    fVar3 = (pCVar9->fields).size.fields.y;
    fVar4 = (pCVar9->fields).size.fields.z;
    __this_01 = (pCVar10->fields).List;
    __this_03 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    pCVar8 = (__this->fields).CS___8__locals2;
    if (((pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_1_o *)0x0) &&
        (pCVar9 = (pCVar8->fields).CS___8__locals1,
        pCVar9 != (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)0x0)) &&
       (__this_02 = (pCVar9->fields).boxCollider, __this_02 != (UnityEngine_BoxCollider_o *)0x0)) {
      UVar13 = UnityEngine_BoxCollider__get_center(__this_02,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_Transform_o *)0x0) {
        position.fields.y = (float)iVar6 * fVar3 * 0.5 + UVar13.fields.y;
        position.fields.x = (float)iVar5 * fVar2 * 0.5 + UVar13.fields.x;
        position.fields.z = (float)signZ * fVar4 * 0.5 + UVar13.fields.z;
        UVar13 = UnityEngine_Transform__TransformPoint(__this_03,position,(MethodInfo *)0x0);
        __this_04 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_04,UVar13,(MethodInfo *)0x0);
        lVar12 = MethodInfo_Void_Add;
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this_01->fields)._items;
          if (pSVar11 != (System_Object_array *)0x0) {
            uVar7 = (__this_01->fields)._size;
            if (uVar7 < (uint)pSVar11->max_length) {
              (__this_01->fields)._size = uVar7 + 1;
              pSVar11->m_Items[(int)uVar7] = (Il2CppObject *)__this_04;
              il2cpp_runtime_glue(pSVar11->m_Items + (int)uVar7,__this_04);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,(Il2CppObject *)__this_04,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin___ctor (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3e11020

void CustomLogic_CustomLogicMapObjectBuiltin___ctor
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Map_MapObject_o *obj,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05702c43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_BuiltinCo);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BuiltinComponentInstance);
    DAT_05702c43 = '\x01';
  }
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = obj;
  il2cpp_runtime_glue(&(__this->fields).Value,obj);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__BuiltinComponentInstance);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_CustomLogic_BuiltinCo);
  (__this->fields)._builtinCache =
       (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._builtinCache,__this_00);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Static (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e110e0

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_Static
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar2 >> 8),*(undefined1 *)((long)&(pMVar2->fields).Active + 1));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11100

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Position
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702c44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c44 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Position (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11190

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e111e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702c45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c45 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalPosition (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11270

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e112c0

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
  UnityEngine_Quaternion_o rotation;
  float local_1c;
  undefined8 local_18;
  
  if (DAT_05702c46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c46 = '\x01';
  }
  if ((char)(__this->fields)._needSetRotation != '\0') {
    pMVar1 = (__this->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        rotation = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar2.fields.x * 57.29578;
        euler.fields.y = UVar2.fields.y * 57.29578;
        euler.fields.z = UVar2.fields.z * 57.29578;
        UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        local_1c = UVar2.fields.z;
        local_18 = UVar2.fields._0_8_;
        (__this->fields)._internalRotation.fields.x = (float)(int)local_18;
        (__this->fields)._internalRotation.fields.y = (float)(int)((ulong)local_18 >> 0x20);
        (__this->fields)._internalRotation.fields.z = local_1c;
        *(undefined1 *)&(__this->fields)._needSetRotation = 0;
        goto LAB_03e1136a;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_18._0_4_ = (__this->fields)._internalRotation.fields.x;
  local_18._4_4_ = (__this->fields)._internalRotation.fields.y;
  local_1c = (__this->fields)._internalRotation.fields.z;
LAB_03e1136a:
  __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  UVar2.fields.z = local_1c;
  UVar2.fields.x = (float)(undefined4)local_18;
  UVar2.fields.y = (float)local_18._4_4_;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar2,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Rotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e113a0

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
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.x;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalRotation.fields.z = (value->fields).Value.fields.z;
    (__this->fields)._internalRotation.fields.x = fVar4;
    (__this->fields)._internalRotation.fields.y = fVar5;
    *(undefined1 *)&(__this->fields)._needSetRotation = 0;
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalRotation.fields.x;
      uVar2 = (__this->fields)._internalRotation.fields.y;
      euler.fields.x = (float)uVar1 * 0.017453292;
      euler.fields.y = (float)uVar2 * 0.017453292;
      euler.fields.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_01,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11420

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
  UnityEngine_Quaternion_o rotation;
  float fStack_1c;
  undefined8 uStack_18;
  
  if (DAT_05702c47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c47 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._needSetRotation + 1) != '\0') {
    pMVar1 = (__this->fields).Value;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        rotation = UnityEngine_Transform__get_localRotation(__this_01,(MethodInfo *)0x0);
        UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar2.fields.x * 57.29578;
        euler.fields.y = UVar2.fields.y * 57.29578;
        euler.fields.z = UVar2.fields.z * 57.29578;
        UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        fStack_1c = UVar2.fields.z;
        uStack_18 = UVar2.fields._0_8_;
        (__this->fields)._internalLocalRotation.fields.x = (float)(int)uStack_18;
        (__this->fields)._internalLocalRotation.fields.y = (float)(int)((ulong)uStack_18 >> 0x20);
        (__this->fields)._internalLocalRotation.fields.z = fStack_1c;
        *(undefined1 *)((long)&(__this->fields)._needSetRotation + 1) = 0;
        goto LAB_03e114ca;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uStack_18._0_4_ = (__this->fields)._internalLocalRotation.fields.x;
  uStack_18._4_4_ = (__this->fields)._internalLocalRotation.fields.y;
  fStack_1c = (__this->fields)._internalLocalRotation.fields.z;
LAB_03e114ca:
  __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  UVar2.fields.z = fStack_1c;
  UVar2.fields.x = (float)(undefined4)uStack_18;
  UVar2.fields.y = (float)uStack_18._4_4_;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar2,(MethodInfo *)0x0);
  return __this_02;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_LocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11500

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
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.x;
    fVar5 = (value->fields).Value.fields.y;
    (__this->fields)._internalLocalRotation.fields.z = (value->fields).Value.fields.z;
    (__this->fields)._internalLocalRotation.fields.x = fVar4;
    (__this->fields)._internalLocalRotation.fields.y = fVar5;
    *(undefined1 *)((long)&(__this->fields)._needSetRotation + 1) = 0;
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar3->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._internalLocalRotation.fields.x;
      uVar2 = (__this->fields)._internalLocalRotation.fields.y;
      euler.fields.x = (float)uVar1 * 0.017453292;
      euler.fields.y = (float)uVar2 * 0.017453292;
      euler.fields.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_01,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11580

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702c48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702c48 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3e11610

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
                (__this_01,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11660

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702c49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702c49 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_localRotation(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3e116f0

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
                (__this_01,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11740

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Forward
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o UVar7;
  float local_1c;
  undefined8 local_18;
  
  if (DAT_05702c4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c4a = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if (((pMVar2 != (Map_MapObject_o *)0x0) &&
      (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
    local_1c = UVar7.fields.z;
    auVar5._0_8_ = UVar7.fields._0_8_;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc;
    auVar6._0_8_ = auVar5._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      DAT_056fde20 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      auVar5 = auVar6;
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      auVar5 = auVar6;
    }
    fVar4 = local_1c * local_1c + auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      auVar5 = auVar6;
      in_XMM1_Dc = extraout_XMM0_Dc_00;
      in_XMM1_Dd = extraout_XMM0_Dd_00;
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    if (1e-05 < fVar4) {
      local_1c = local_1c / fVar4;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar6 = divps(auVar5,auVar3);
      local_18 = auVar6._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      local_18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      local_1c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    UVar7.fields.z = local_1c;
    UVar7.fields.x = (float)(undefined4)local_18;
    UVar7.fields.y = (float)local_18._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar7,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Forward (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e118f0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11940

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Up
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o UVar7;
  float local_1c;
  undefined8 local_18;
  
  if (DAT_05702c4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c4b = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if (((pMVar2 != (Map_MapObject_o *)0x0) &&
      (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_up(__this_01,(MethodInfo *)0x0);
    local_1c = UVar7.fields.z;
    auVar5._0_8_ = UVar7.fields._0_8_;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc;
    auVar6._0_8_ = auVar5._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      DAT_056fde20 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      auVar5 = auVar6;
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      auVar5 = auVar6;
    }
    fVar4 = local_1c * local_1c + auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      auVar5 = auVar6;
      in_XMM1_Dc = extraout_XMM0_Dc_00;
      in_XMM1_Dd = extraout_XMM0_Dd_00;
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    if (1e-05 < fVar4) {
      local_1c = local_1c / fVar4;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar6 = divps(auVar5,auVar3);
      local_18 = auVar6._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      local_18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      local_1c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    UVar7.fields.z = local_1c;
    UVar7.fields.x = (float)(undefined4)local_18;
    UVar7.fields.y = (float)local_18._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar7,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Up (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11af0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11b40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Right
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o UVar7;
  float local_1c;
  undefined8 local_18;
  
  if (DAT_05702c4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c4c = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if (((pMVar2 != (Map_MapObject_o *)0x0) &&
      (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
    local_1c = UVar7.fields.z;
    auVar5._0_8_ = UVar7.fields._0_8_;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc;
    auVar6._0_8_ = auVar5._0_8_;
    auVar6._12_4_ = extraout_XMM0_Dd;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      DAT_056fde20 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      auVar5 = auVar6;
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      auVar5 = auVar6;
    }
    fVar4 = local_1c * local_1c + auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      auVar5 = auVar6;
      in_XMM1_Dc = extraout_XMM0_Dc_00;
      in_XMM1_Dd = extraout_XMM0_Dd_00;
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    if (1e-05 < fVar4) {
      local_1c = local_1c / fVar4;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar6 = divps(auVar5,auVar3);
      local_18 = auVar6._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      local_18 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      local_1c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    UVar7.fields.z = local_1c;
    UVar7.fields.x = (float)(undefined4)local_18;
    UVar7.fields.y = (float)local_18._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar7,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Right (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11cf0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11d40

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
  
  if (DAT_05702c4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c4d = '\x01';
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
        __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        local_18 = auVar5._0_8_;
        UVar6.fields.x = (float)(undefined4)local_18;
        UVar6.fields.y = (float)local_18._4_4_;
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,UVar6,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Scale (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e11df0

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
  float local_28;
  float fStack_24;
  float local_18;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Name (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11e70

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Name
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return *(System_String_o **)&(pMVar2->fields).Visible;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Parent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__get_Parent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e11e90

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__get_Parent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  int32_t key;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  
  if (DAT_05702c4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c4e = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    key = (pMVar1->fields).Parent;
    if (key < 1) {
      return (Il2CppObject *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)
        **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pMVar1 = (Map_MapObject_o *)
               System_Collections_Generic_Dictionary<int__object>__get_Item
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,pMVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Parent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Parent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3e11f70

void CustomLogic_CustomLogicMapObjectBuiltin__set_Parent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar3;
  Map_MapObject_o *pMVar4;
  
  if (DAT_05702c4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c4f = '\x01';
  }
  if (value == (Il2CppObject *)0x0) {
    pMVar4 = (__this->fields).Value;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = (Il2CppClass *)0x0;
  }
  else {
    pIVar3 = value->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
      bVar2 = (TypeInfo_CustomLogicTransformBuiltin->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicTransformBuiltin)) {
        pMVar4 = (__this->fields).Value;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapLoader__SetParent(pMVar4,(Map_MapObject_o *)0x0,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogicTransformBuiltin->_2).naturalAligment;
        if (((value->klass->_2).naturalAligment < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicTransformBuiltin)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(value);
        }
        pMVar4 = (__this->fields).Value;
        if (((pMVar4 == (Map_MapObject_o *)0x0) ||
            (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
           || (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
              __this_01 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)value[3].klass,(MethodInfo *)0x0);
      }
      goto LAB_03e120ef;
    }
    pMVar4 = (__this->fields).Value;
    pIVar3 = value[3].klass;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  Map_MapLoader__SetParent(pMVar4,(Map_MapObject_o *)pIVar3,(MethodInfo *)0x0);
LAB_03e120ef:
  *(undefined1 *)((long)&(__this->fields)._needSetRotation + 1) = 1;
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12110

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_Active
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Active (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e12130

void CustomLogic_CustomLogicMapObjectBuiltin__set_Active
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Transform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12160

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Transform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (DAT_05702c50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_05702c50 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_HasRenderer
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e121d0

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_HasRenderer
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)pUVar2 >> 8),(int)pUVar2->max_length != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12200

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
  
  if (DAT_05702c51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    DAT_05702c51 = '\x01';
  }
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        color = UnityEngine_Material__get_color(__this_00,(MethodInfo *)0x0);
        __this_01 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        Utility_Color255___ctor(__this_01,color,(MethodInfo *)0x0);
        __this_02 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor(__this_02,__this_01,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Color (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x3e12350

void CustomLogic_CustomLogicMapObjectBuiltin__set_Color
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *value,MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingX
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12480

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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.x;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingX
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e124d0

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
LAB_03e1256e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto LAB_03e1256e;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureTilingY
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureTilingY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12580

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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.y;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureTilingY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e125d0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureTilingY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float local_28;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
LAB_03e1266f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureScale(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto LAB_03e1266f;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              local_28 = UVar3.fields.x;
              UVar3.fields.y = value;
              UVar3.fields.x = local_28;
              UnityEngine_Material__set_mainTextureScale(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetX
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12680

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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.x;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetX
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetX (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e126d0

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
LAB_03e1276e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto LAB_03e1276e;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_TextureOffsetY
// il2cpp: float CustomLogic_CustomLogicMapObjectBuiltin__get_TextureOffsetY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12780

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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      __this_00 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(__this_00,(MethodInfo *)0x0);
        return UVar3.fields.y;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_TextureOffsetY
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e127d0

void CustomLogic_CustomLogicMapObjectBuiltin__set_TextureOffsetY
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Material_o *pUVar4;
  float local_28;
  
  CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet(__this,method);
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if ((int)pUVar2->max_length == 0) {
LAB_03e1286f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
      pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UVar3 = UnityEngine_Material__get_mainTextureOffset(pUVar4,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Value;
        if ((pMVar1 != (Map_MapObject_o *)0x0) &&
           (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
          if ((int)pUVar2->max_length == 0) goto LAB_03e1286f;
          if (pUVar2->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            pUVar4 = UnityEngine_Renderer__get_material(pUVar2->m_Items[0],(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              local_28 = UVar3.fields.x;
              UVar3.fields.y = value;
              UVar3.fields.x = local_28;
              UnityEngine_Material__set_mainTextureOffset(pUVar4,UVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_ID (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12880

int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_ID
                  (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar2->fields).Id;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Tag
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e128a0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Tag
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e128c0

void CustomLogic_CustomLogicMapObjectBuiltin__set_Tag
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapObject_o *obj;
  
  if (DAT_05702c52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c52 = '\x01';
  }
  obj = (__this->fields).Value;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_MapLoader__RegisterTag(value,obj,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Layer
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__get_Layer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e12920

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_Layer
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_Layer (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e12940

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__AddComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e12960

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  
  if (DAT_05702c53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702c53 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
                       (__this_00,(__this->fields).Value,name,(MethodInfo *)0x0);
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e129f0

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
               MethodInfo *method)

{
  int iVar1;
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  
  if (DAT_05702c54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702c54 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (__this->fields).Value;
  }
  else {
    __this_00 = (__this->fields).Value;
  }
  if (__this_00 != (Map_MapObject_o *)0x0) {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    instance = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__RemoveComponent(__this_01,instance,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__GetComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e12a90

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicComponentInstance_o *pCVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    pCVar1 = Map_MapObject__FindComponentInstance(__this_00,name,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetUnityComponent
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e12ab0

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetUnityComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance_o *pCVar1;
  
  if (DAT_05702c55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnityComponentManager);
    DAT_05702c55 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicUnityComponentManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar1 = CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
                     (__this,name,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentEnabled
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, bool enabled, const MethodInfo* method);
// 0x3e12b10

void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentEnabled
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
               bool_conflict enabled,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicComponentInstance_o *pCVar4;
  undefined8 uVar5;
  System_String_array *values;
  System_String_o *message;
  System_Exception_o *__this_01;
  CustomLogic_BuiltinComponentInstance_o *local_28;
  
  if (DAT_05702c56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05702c56 = '\x01';
  }
  local_28 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    pCVar4 = Map_MapObject__FindComponentInstance(pMVar1,name,(MethodInfo *)0x0);
    if (pCVar4 != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
      *(char *)&(pCVar4->fields).Enabled = (char)enabled;
      return;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._builtinCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this_00,(Il2CppObject *)name,(Il2CppObject **)&local_28,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 == '\0') {
        uVar5 = il2cpp_init_method_metadata(&TypeInfo_string);
        values = (System_String_array *)il2cpp_glue_02274930(uVar5,5);
        il2cpp_glue_01f2f1a0(values);
        uVar5 = il2cpp_init_method_metadata(&"Component '");
        il2cpp_glue_01f34f00(values,0,uVar5);
        il2cpp_glue_01f2f1a0(values);
        il2cpp_glue_01f34f00(values,1,name);
        il2cpp_glue_01f2f1a0(values);
        uVar5 = il2cpp_init_method_metadata(&"' not found on MapObject '");
        il2cpp_glue_01f34f00(values,2,uVar5);
        pMVar1 = (__this->fields).Value;
        il2cpp_glue_01f2f1a0(pMVar1);
        pMVar2 = (pMVar1->fields).ScriptObject;
        il2cpp_glue_01f2f1a0(pMVar2);
        uVar5._0_4_ = (pMVar2->fields).Visible;
        uVar5._4_4_ = (pMVar2->fields).Networked;
        il2cpp_glue_01f2f1a0(values);
        il2cpp_glue_01f34f00(values,3,uVar5);
        il2cpp_glue_01f2f1a0(values);
        uVar5 = il2cpp_init_method_metadata(&"'.");
        il2cpp_glue_01f34f00(values,4,uVar5);
        message = System_String__Concat(values,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
        System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&MethodInfo_Void_SetComponentEnabled);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_01,uVar5);
      }
      if (local_28 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__set_Enabled(local_28,enabled & 0xff,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetComponentsEnabled
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x3e12cc0

void CustomLogic_CustomLogicMapObjectBuiltin__SetComponentsEnabled
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  _union_247328 _Var3;
  Il2CppType *pIVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  CustomLogic_BuiltinComponentInstance_o *local_58;
  _union_247328 local_48;
  Il2CppType *pIStack_40;
  Il2CppObject *local_38;
  
  if (DAT_05702c57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05702c57 = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (CustomLogic_BuiltinComponentInstance_o *)0x0;
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).ComponentInstances,
     __this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    _Var3 = local_48;
    pIVar4 = pIStack_40;
    pIVar5 = local_38;
    while( true ) {
      __this_02.fields._8_8_ = pIVar4;
      __this_02.fields._list = _Var3.genericMethod;
      __this_02.fields._current = pIVar5;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
      if ((char)bVar2 == '\0') break;
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(char *)&pIVar5[1].klass = (char)enabled;
    }
    __this_03.fields._8_8_ = pIVar4;
    __this_03.fields._list = _Var3.genericMethod;
    __this_03.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._builtinCache;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_06 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this_01,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
      if (__this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                    *)&local_68,__this_06,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
        while( true ) {
          __this_04.fields._8_8_ = pIVar4;
          __this_04.fields._dictionary = _Var3.genericMethod;
          __this_04.fields._currentValue = pIVar5;
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_04,(MethodInfo_31D09E0 *)&local_68);
          if ((char)bVar2 == '\0') {
            __this_05.fields._8_8_ = pIVar4;
            __this_05.fields._dictionary = _Var3.genericMethod;
            __this_05.fields._currentValue = pIVar5;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                      (__this_05,(MethodInfo_31D09D0 *)&local_68);
            return;
          }
          if (local_58 == (CustomLogic_BuiltinComponentInstance_o *)0x0) break;
          CustomLogic_BuiltinComponentInstance__set_Enabled
                    (local_58,enabled & 0xff,(MethodInfo *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereCollider
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, System_String_o* collideWith, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x3e12f90

/* WARNING: Removing unreachable block (ram,0x03e133aa) */
/* WARNING: Removing unreachable block (ram,0x03e133b5) */
/* WARNING: Removing unreachable block (ram,0x03e1335d) */
/* WARNING: Removing unreachable block (ram,0x03e1336b) */

void CustomLogic_CustomLogicMapObjectBuiltin__AddSphereCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,
               float radius,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *p;
  UnityEngine_Collider_o *c;
  Il2CppObject *pIVar10;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o b;
  undefined4 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff80;
  float fVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  float fVar11;
  
  if (DAT_05702c58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702c58 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  pMVar5 = (__this->fields).Value;
  if ((pMVar5 != (Map_MapObject_o *)0x0) &&
     (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (pMVar5->fields).BaseScale.fields.x;
    uVar3 = (pMVar5->fields).BaseScale.fields.y;
    v.fields.y = (float)uVar3;
    v.fields.x = (float)uVar1;
    fVar11 = (pMVar5->fields).BaseScale.fields.z;
    uVar2 = (center->fields).Value.fields.x;
    uVar4 = (center->fields).Value.fields.y;
    UVar12.fields.y = (float)uVar4;
    UVar12.fields.x = (float)uVar2;
    fVar13 = (center->fields).Value.fields.z;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
      in_stack_ffffffffffffff80 = fVar13;
    }
    UVar12.fields.z = fVar13;
    b.fields.z = fVar11;
    b.fields.x = (float)uVar1;
    b.fields.y = (float)uVar3;
    UVar12 = Utility_Util__DivideVectors(UVar12,b,(MethodInfo *)0x0);
    pCVar8 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(UVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    v.fields.z = fVar11;
    fVar11 = MiscExtensions__MaxComponent(v,(MethodInfo *)0x0);
    __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
      pUVar9 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      pMVar5 = (__this->fields).Value;
      if (((pMVar5 != (Map_MapObject_o *)0x0) &&
          (__this_00 = (pMVar5->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0))
         && (p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
            pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar9,p,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar9,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          pUVar9 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
          if (DAT_056fde1e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Quaternion);
            DAT_056fde1e = '\x01';
          }
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar9,(UnityEngine_Quaternion_o)
                              **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                       (MethodInfo *)0x0);
            pUVar9 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar9,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)
                                 (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
              c = (UnityEngine_Collider_o *)
                  UnityEngine_GameObject__AddComponent<object>(__this_05,MethodInfo_SphereCollider_AddComponent_SphereCollider);
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
              if ((c != (UnityEngine_Collider_o *)0x0) &&
                 (UnityEngine_SphereCollider__set_radius
                            ((UnityEngine_SphereCollider_o *)c,radius / fVar11,(MethodInfo *)0x0),
                 pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
                UnityEngine_SphereCollider__set_center
                          ((UnityEngine_SphereCollider_o *)c,
                           (UnityEngine_Vector3_o)(pCVar8->fields).Value.fields,(MethodInfo *)0x0);
                pIVar10 = UnityEngine_GameObject__AddComponent<object>(__this_05,MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
                pMVar5 = (__this->fields).Value;
                if ((pMVar5 != (Map_MapObject_o *)0x0) &&
                   (__this_01 = (pMVar5->fields).ComponentInstances,
                   __this_01 !=
                   (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                  System_Collections_Generic_List<object>__GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)
                             &stack0xffffffffffffff88,
                             (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
                  if (pIVar10 == (Il2CppObject *)0x0) {
                    __this_03.fields._list._4_4_ = fVar11;
                    __this_03.fields._list._0_4_ = in_stack_ffffffffffffff78;
                    __this_03.fields._index = (int32_t)in_stack_ffffffffffffff80;
                    __this_03.fields._version = (int32_t)radius;
                    __this_03.fields._current = (Il2CppObject *)pSVar14;
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
                    cVar6 = (char)bVar7;
                  }
                  else {
                    __this_02.fields._list._4_4_ = fVar11;
                    __this_02.fields._list._0_4_ = in_stack_ffffffffffffff78;
                    __this_02.fields._index = (int32_t)in_stack_ffffffffffffff80;
                    __this_02.fields._version = (int32_t)radius;
                    __this_02.fields._current = (Il2CppObject *)pSVar14;
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
                    cVar6 = (char)bVar7;
                  }
                  if (cVar6 == '\0') {
                    __this_04.fields._list._4_4_ = fVar11;
                    __this_04.fields._list._0_4_ = in_stack_ffffffffffffff78;
                    __this_04.fields._index = (int32_t)in_stack_ffffffffffffff80;
                    __this_04.fields._version = (int32_t)radius;
                    __this_04.fields._current = (Il2CppObject *)pSVar14;
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
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


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxCollider
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, System_String_o* collideWith, CustomLogic_CustomLogicVector3Builtin_o* center, CustomLogic_CustomLogicVector3Builtin_o* size, const MethodInfo* method);
// 0x3e134a0

void CustomLogic_CustomLogicMapObjectBuiltin__AddBoxCollider
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               System_String_o *collideWith,CustomLogic_CustomLogicVector3Builtin_o *center,
               CustomLogic_CustomLogicVector3Builtin_o *size,MethodInfo *method)

{
  UnityEngine_Bounds_o *__return_storage_ptr__;
  uint uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  undefined8 *puVar4;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *p;
  UnityEngine_Collider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_05;
  bool bVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o b;
  undefined1 in_stack_fffffffffffffef8 [12];
  undefined4 uVar36;
  undefined4 uVar37;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  undefined1 local_b8 [32];
  float local_98;
  undefined8 local_94;
  float local_8c;
  CustomLogic_CustomLogicMapObjectBuiltin_o *local_88;
  Il2CppRGCTXData *pIStack_80;
  System_String_o *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (DAT_05702c59 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702c59 = '\x01';
  }
  local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_b8._8_8_ = (Il2CppMethodPointer)0x0;
  local_b8._16_8_ = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar2 = (__this->fields).Value;
  if (pMVar2 == (Map_MapObject_o *)0x0) goto LAB_03e13cd5;
  if ((center == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (size == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    pMVar2 = (__this->fields).Value;
    if ((pMVar2 == (Map_MapObject_o *)0x0) ||
       (pUVar3 = (pMVar2->fields).renderCache, pUVar3 == (UnityEngine_Renderer_array *)0x0))
    goto LAB_03e13cd5;
    puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_e8 = (char *)*puVar4;
    local_d8 = *(float *)(puVar4 + 1);
    fVar13 = *(float *)(puVar4 + 1) * 0.5;
    uStack_e0 = 0;
    fVar14 = SUB84(local_e8,0) * 0.5;
    fVar17 = (float)((ulong)local_e8 >> 0x20) * 0.5;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    local_88 = __this;
    local_70 = collideMode;
    if (0 < (int)pUVar3->max_length) {
      bVar11 = false;
      __return_storage_ptr__ = (UnityEngine_Bounds_o *)(local_b8 + 0x18);
      uVar12 = 0;
      if ((pUVar3->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pUVar3->m_Items[uVar12];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar8 != '\0') {
            if (x == (UnityEngine_Object_o *)0x0) goto LAB_03e13cd5;
            if (bVar11) {
              UnityEngine_Renderer__get_bounds
                        (__return_storage_ptr__,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
              auVar23._0_4_ = (float)local_b8._24_8_ - (float)local_94;
              auVar23._4_4_ = SUB84(local_b8._24_8_,4) - SUB84(local_94,4);
              auVar23._8_8_ = 0;
              fVar29 = local_98 - local_8c;
              auVar15._0_4_ = (float)local_e8 - fVar14;
              auVar15._4_4_ = local_e8._4_4_ - fVar17;
              auVar15._8_4_ = (float)uStack_e0 - fStack_f0;
              auVar15._12_4_ = uStack_e0._4_4_ - fStack_ec;
              auVar15 = minps(auVar15,auVar23);
              fVar19 = local_d8 - fVar13;
              if (fVar29 <= local_d8 - fVar13) {
                fVar19 = fVar29;
              }
              auVar22._0_4_ = fVar14 + (float)local_e8;
              auVar22._4_4_ = fVar17 + local_e8._4_4_;
              auVar22._8_4_ = fStack_f0 + (float)uStack_e0;
              auVar22._12_4_ = fStack_ec + uStack_e0._4_4_;
              auVar23 = maxps(auVar22,auVar23);
              fVar14 = local_d8 + fVar13;
              if (local_d8 + fVar13 <= fVar29) {
                fVar14 = fVar29;
              }
              fVar20 = (auVar23._0_4_ - auVar15._0_4_) * 0.5;
              fVar25 = (auVar23._4_4_ - auVar15._4_4_) * 0.5;
              fVar26 = (auVar23._8_4_ - auVar15._8_4_) * 0.0;
              fVar27 = (auVar23._12_4_ - auVar15._12_4_) * 0.0;
              fVar13 = (fVar14 - fVar19) * 0.5;
              fVar14 = auVar15._0_4_ + fVar20;
              fVar17 = auVar15._4_4_ + fVar25;
              fVar29 = auVar15._8_4_ + fVar26;
              fVar18 = auVar15._12_4_ + fVar27;
              fVar31 = (float)local_b8._24_8_ + (float)local_94;
              fVar32 = SUB84(local_b8._24_8_,4) + SUB84(local_94,4);
              fVar30 = local_98 + local_8c;
              auVar28._0_4_ = fVar14 - fVar20;
              auVar28._4_4_ = fVar17 - fVar25;
              auVar28._8_4_ = fVar29 - fVar26;
              auVar28._12_4_ = fVar18 - fVar27;
              local_d8 = (fVar19 + fVar13) - fVar13;
              auVar5._4_4_ = fVar32;
              auVar5._0_4_ = fVar31;
              auVar5._8_8_ = 0;
              auVar15 = minps(auVar28,auVar5);
              if (fVar30 <= local_d8) {
                local_d8 = fVar30;
              }
              auVar16._0_4_ = fVar14 + fVar20;
              auVar16._4_4_ = fVar17 + fVar25;
              auVar16._8_4_ = fVar29 + fVar26;
              auVar16._12_4_ = fVar18 + fVar27;
              fVar13 = fVar19 + fVar13 + fVar13;
              auVar6._4_4_ = fVar32;
              auVar6._0_4_ = fVar31;
              auVar6._8_8_ = 0;
              auVar23 = maxps(auVar16,auVar6);
              if (fVar13 <= fVar30) {
                fVar13 = fVar30;
              }
              fVar14 = (auVar23._0_4_ - auVar15._0_4_) * 0.5;
              fVar17 = (auVar23._4_4_ - auVar15._4_4_) * 0.5;
              fStack_f0 = (auVar23._8_4_ - auVar15._8_4_) * 0.0;
              fStack_ec = (auVar23._12_4_ - auVar15._12_4_) * 0.0;
              fVar13 = (fVar13 - local_d8) * 0.5;
              local_e8 = (char *)CONCAT44(auVar15._4_4_ + fVar17,auVar15._0_4_ + fVar14);
              uStack_e0 = CONCAT44(auVar15._12_4_ + fStack_ec,auVar15._8_4_ + fStack_f0);
              local_d8 = local_d8 + fVar13;
            }
            else {
              UnityEngine_Renderer__get_bounds
                        (__return_storage_ptr__,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
              UnityEngine_Renderer__get_bounds
                        (__return_storage_ptr__,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
              local_e8 = (char *)local_b8._24_8_;
              uStack_e0 = 0;
              local_d8 = local_98;
              fVar14 = (float)local_94;
              fVar17 = SUB84(local_94,4);
              fStack_f0 = 0.0;
              fStack_ec = 0.0;
              bVar11 = true;
              fVar13 = local_8c;
            }
          }
          uVar12 = uVar12 + 1;
          uVar1 = (uint)pUVar3->max_length;
          if ((long)(int)uVar1 <= (long)uVar12) goto LAB_03e1388f;
        } while (uVar12 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03e1388f:
    collideMode = local_70;
    __this = local_88;
    pMVar2 = (local_88->fields).Value;
    if (((pMVar2 == (Map_MapObject_o *)0x0) ||
        (pUVar9 = (pMVar2->fields).GameObject, pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e13cd5;
    UVar34 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).Value;
    if (((pMVar2 == (Map_MapObject_o *)0x0) ||
        (pUVar9 = (pMVar2->fields).GameObject, local_48 = UVar34.fields._0_8_,
        pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e13cd5;
    UVar35 = UnityEngine_Transform__get_localScale(pUVar10,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).Value;
    if (((pMVar2 == (Map_MapObject_o *)0x0) ||
        (pUVar9 = (pMVar2->fields).GameObject, local_58 = UVar35.fields._0_8_,
        pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (uStack_50 = extraout_XMM0_Qb,
       pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e13cd5;
    UVar35 = UnityEngine_Transform__get_localScale(pUVar10,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).Value;
    if (((pMVar2 == (Map_MapObject_o *)0x0) ||
        (pUVar9 = (pMVar2->fields).GameObject, local_68 = UVar35.fields._0_8_,
        pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e13cd5;
    UVar33.z = local_d8 - UVar34.fields.z;
    UVar33.x = (float)local_e8 - (float)local_48;
    UVar33.y = local_e8._4_4_ - local_48._4_4_;
    fVar14 = fVar14 + fVar14;
    fVar17 = fVar17 + fVar17;
    fVar13 = fVar13 + fVar13;
    UVar34 = UnityEngine_Transform__get_localScale(pUVar10,(MethodInfo *)0x0);
    auVar24._4_4_ = local_68._4_4_;
    auVar24._0_4_ = (undefined4)local_58;
    auVar24._8_4_ = (undefined4)uStack_50;
    auVar24._12_4_ = uStack_50._4_4_;
    auVar7._4_4_ = fVar17;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fStack_f0 + fStack_f0;
    auVar7._12_4_ = fStack_ec + fStack_ec;
    auVar15 = divps(auVar7,auVar24);
    fVar14 = auVar15._0_4_;
    fVar17 = auVar15._4_4_;
    fVar13 = fVar13 / UVar34.fields.z;
  }
  else {
    uVar21._0_4_ = (pMVar2->fields).BaseScale.fields.x;
    uVar21._4_4_ = (pMVar2->fields).BaseScale.fields.y;
    fVar13 = (pMVar2->fields).BaseScale.fields.z;
    UVar33 = (center->fields).Value.fields;
    local_88 = *(CustomLogic_CustomLogicMapObjectBuiltin_o **)&(size->fields).Value.fields;
    pIStack_80 = (Il2CppRGCTXData *)0x0;
    fVar14 = (size->fields).Value.fields.z;
    uVar36 = (undefined4)uVar21;
    uVar37 = uVar21._4_4_;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
      uVar36 = (undefined4)uVar21;
      uVar37 = uVar21._4_4_;
    }
    UVar35.fields.z = fVar13;
    UVar35.fields.x = (float)(int)uVar21;
    UVar35.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
    UVar33 = (UnityEngine_Vector3_Fields)
             Utility_Util__DivideVectors((UnityEngine_Vector3_o)UVar33,UVar35,(MethodInfo *)0x0);
    b.fields.y = (float)uVar37;
    b.fields.x = (float)uVar36;
    UVar34.fields.z = fVar14;
    UVar34.fields._0_8_ = local_88;
    b.fields.z = fVar13;
    UVar34 = Utility_Util__DivideVectors(UVar34,b,(MethodInfo *)0x0);
    fVar13 = UVar34.fields.z;
    fVar14 = UVar34.fields.x;
    fVar17 = UVar34.fields.y;
  }
  pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar9,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).Value;
    if (((pMVar2 != (Map_MapObject_o *)0x0) &&
        (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
       (p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar10,p,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar10,(UnityEngine_Vector3_o)
                           **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0)
        ;
        pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation
                    (pUVar10,(UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                     (MethodInfo *)0x0);
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar10,(UnityEngine_Vector3_o)
                               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc)
                       ,(MethodInfo *)0x0);
            c = (UnityEngine_Collider_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_BoxCollider_AddComponent_BoxCollider);
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
            if (c != (UnityEngine_Collider_o *)0x0) {
              value.fields.y = fVar17;
              value.fields.x = fVar14;
              value.fields.z = fVar13;
              UnityEngine_BoxCollider__set_size
                        ((UnityEngine_BoxCollider_o *)c,value,(MethodInfo *)0x0);
              UnityEngine_BoxCollider__set_center
                        ((UnityEngine_BoxCollider_o *)c,(UnityEngine_Vector3_o)UVar33,
                         (MethodInfo *)0x0);
              __this_05 = (CustomLogic_CustomLogicCollisionHandler_o *)
                          UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
              pMVar2 = (__this->fields).Value;
              if ((pMVar2 != (Map_MapObject_o *)0x0) &&
                 (__this_01 = (pMVar2->fields).ComponentInstances,
                 __this_01 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0
                 )) {
                System_Collections_Generic_List<object>__GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                           (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
                if (__this_05 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                  while (__this_03.fields._version = (int32_t)fVar13,
                        __this_03.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8._0_8_
                        , __this_03.fields._index = in_stack_fffffffffffffef8._8_4_,
                        __this_03.fields._current._0_4_ = fVar14,
                        __this_03.fields._current._4_4_ = fVar17,
                        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                          (__this_03,(MethodInfo_3185E20 *)local_b8),
                        (char)bVar8 != '\0') {
                    if ((CustomLogic_CustomLogicComponentInstance_o *)local_b8._16_8_ ==
                        (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e13cd0;
                    bVar8 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                      ((CustomLogic_CustomLogicComponentInstance_o *)local_b8._16_8_
                                       ,(MethodInfo *)0x0);
                    if ((char)bVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                  }
                }
                else {
                  while (__this_02.fields._version = (int32_t)fVar13,
                        __this_02.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8._0_8_
                        , __this_02.fields._index = in_stack_fffffffffffffef8._8_4_,
                        __this_02.fields._current._0_4_ = fVar14,
                        __this_02.fields._current._4_4_ = fVar17,
                        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                          (__this_02,(MethodInfo_3185E20 *)local_b8),
                        uVar21 = local_b8._16_8_, (char)bVar8 != '\0') {
                    if ((CustomLogic_CustomLogicComponentInstance_o *)local_b8._16_8_ ==
                        (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e13cd0:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar8 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                      ((CustomLogic_CustomLogicComponentInstance_o *)local_b8._16_8_
                                       ,(MethodInfo *)0x0);
                    if ((char)bVar8 != '\0') {
                      CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                (__this_05,(CustomLogic_CustomLogicComponentInstance_o *)uVar21,
                                 (MethodInfo *)0x0);
                    }
                  }
                }
                __this_04.fields._version = (int32_t)fVar13;
                __this_04.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8._0_8_;
                __this_04.fields._index = in_stack_fffffffffffffef8._8_4_;
                __this_04.fields._current._0_4_ = fVar14;
                __this_04.fields._current._4_4_ = fVar17;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_04,(MethodInfo_3185E10 *)local_b8);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03e13cd5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideWith
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideWith, const MethodInfo* method);
// 0x3e13d90

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideWith
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideWith,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Collider_o *__this_00;
  System_String_o *collideMode;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  undefined8 *puVar7;
  UnityEngine_Collider_array *pUVar8;
  uint uVar9;
  
  if (DAT_05702c5a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05702c5a = '\x01';
  }
  pMVar3 = (__this->fields).Value;
  if (((pMVar3 != (Map_MapObject_o *)0x0) &&
      (pUVar4 = (pMVar3->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar4,MethodInfo_Collider___GetComponentsInChildren_Collider),
     pSVar6 != (System_Object_array *)0x0)) {
    iVar1 = (int)pSVar6->max_length;
    if (0 < iVar1) {
      uVar9 = 0;
      if (iVar1 != 0) {
        do {
          __this_00 = (UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar9];
          if (__this_00 == (UnityEngine_Collider_o *)0x0) goto LAB_03e13f39;
          bVar5 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            puVar7 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
          }
          else {
            bVar5 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            puVar7 = *(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8) + 1;
            if ((char)bVar5 == '\0') {
              puVar7 = *(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
            }
          }
          collideMode = (System_String_o *)*puVar7;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Map_MapLoader__SetCollider(__this_00,collideMode,collideWith,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar6->max_length;
          if ((int)uVar2 <= (int)uVar9) goto LAB_03e13ef3;
        } while (uVar9 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03e13ef3:
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapObject_o *)0x0) &&
       (pUVar4 = (pMVar3->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar8 = (UnityEngine_Collider_array *)
               UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar4,MethodInfo_Collider___GetComponentsInChildren_Collider);
      (pMVar3->fields).colliderCache = pUVar8;
      il2cpp_runtime_glue(&(pMVar3->fields).colliderCache,pUVar8);
      return;
    }
  }
LAB_03e13f39:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetCollideMode
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* collideMode, const MethodInfo* method);
// 0x3e13f50

void CustomLogic_CustomLogicMapObjectBuiltin__SetCollideMode
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *collideMode,
               MethodInfo *method)

{
  uint uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Collider_o *c;
  System_Object_array *pSVar4;
  System_String_o *collideWith;
  UnityEngine_Collider_array *pUVar5;
  ulong uVar6;
  
  if (DAT_05702c5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c5b = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if (((pMVar2 != (Map_MapObject_o *)0x0) &&
      (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar3,MethodInfo_Collider___GetComponentsInChildren_Collider),
     pSVar4 != (System_Object_array *)0x0)) {
    if (0 < (int)pSVar4->max_length) {
      uVar6 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          c = (UnityEngine_Collider_o *)pSVar4->m_Items[uVar6];
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          collideWith = Map_MapLoader__GetColliderCollideWith(c,(MethodInfo *)0x0);
          Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar6) goto LAB_03e1402b;
        } while (uVar6 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03e1402b:
    pMVar2 = (__this->fields).Value;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (pUVar3 = (pMVar2->fields).GameObject, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar5 = (UnityEngine_Collider_array *)
               UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar3,MethodInfo_Collider___GetComponentsInChildren_Collider);
      (pMVar2->fields).colliderCache = pUVar5;
      il2cpp_runtime_glue(&(pMVar2->fields).colliderCache,pUVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddSphereTarget
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* team, CustomLogic_CustomLogicVector3Builtin_o* center, float radius, const MethodInfo* method);
// 0x3e14080

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddSphereTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,float radius,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  uint uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar9;
  System_String_o *collideMode;
  undefined8 classInstance;
  undefined1 auVar10 [16];
  bool_conflict bVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *p;
  UnityEngine_Collider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_07;
  Map_MapTargetable_o *__this_08;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_09;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o b;
  undefined1 in_stack_ffffffffffffff48 [12];
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  Il2CppRGCTXData *pIStack_60;
  System_String_o *local_50;
  undefined1 local_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (DAT_05702c5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapTargetable);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Hitboxes");
    il2cpp_init_method_metadata(&"Region");
    DAT_05702c5c = '\x01';
  }
  collideMode = "Region";
  local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) &&
     (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_50 = "Hitboxes";
    uVar3 = (pMVar7->fields).BaseScale.fields.x;
    uVar5 = (pMVar7->fields).BaseScale.fields.y;
    local_78._4_4_ = uVar5;
    local_78._0_4_ = uVar3;
    fVar15 = (pMVar7->fields).BaseScale.fields.z;
    pCVar4 = *(CustomLogic_CustomLogicMapObjectBuiltin_o **)&(center->fields).Value.fields;
    fVar2 = (center->fields).Value.fields.z;
    local_78._8_8_ = 0;
    uVar14 = (int)pCVar4;
    uVar16 = (int)((ulong)pCVar4 >> 0x20);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pIStack_60 = (Il2CppRGCTXData *)0x0;
      local_68 = pCVar4;
      il2cpp_init_class();
      uVar14 = (undefined4)local_68;
      uVar16 = local_68._4_4_;
      uVar3 = local_78._0_4_;
      uVar5 = local_78._4_4_;
    }
    UVar17.fields.y = (float)uVar16;
    UVar17.fields.x = (float)uVar14;
    UVar17.fields.z = fVar2;
    b.fields.y = (float)uVar5;
    b.fields.x = (float)uVar3;
    b.fields.z = fVar15;
    UVar17 = Utility_Util__DivideVectors(UVar17,b,(MethodInfo *)0x0);
    pCVar12 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(UVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar10 = local_78;
    v.fields.z = fVar15;
    v.fields.x = (float)local_78._0_4_;
    v.fields.y = (float)local_78._4_4_;
    local_78 = auVar10;
    fVar15 = MiscExtensions__MaxComponent(v,(MethodInfo *)0x0);
    local_78._0_4_ = fVar15;
    __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_06,(MethodInfo *)0x0);
    if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
      pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      pMVar7 = (__this->fields).Value;
      if ((pMVar7 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar13,p,(MethodInfo *)0x0);
          pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          local_68 = __this;
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      (pUVar13,(UnityEngine_Vector3_o)
                               **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                       (MethodInfo *)0x0);
            pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
            if (DAT_056fde1e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
            }
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localRotation
                        (pUVar13,(UnityEngine_Quaternion_o)
                                 **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                         (MethodInfo *)0x0);
              pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
              if (DAT_056fe077 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fe077 = '\x01';
              }
              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localScale
                          (pUVar13,(UnityEngine_Vector3_o)
                                   *(UnityEngine_Vector3_Fields *)
                                    (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
                c = (UnityEngine_Collider_o *)
                    UnityEngine_GameObject__AddComponent<object>(__this_06,MethodInfo_SphereCollider_AddComponent_SphereCollider);
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                Map_MapLoader__SetCollider(c,collideMode,local_50,(MethodInfo *)0x0);
                pCVar4 = local_68;
                if (c != (UnityEngine_Collider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius
                            ((UnityEngine_SphereCollider_o *)c,radius / (float)local_78._0_4_,
                             (MethodInfo *)0x0);
                  if (pCVar12 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                    UnityEngine_SphereCollider__set_center
                              ((UnityEngine_SphereCollider_o *)c,
                               (UnityEngine_Vector3_o)(pCVar12->fields).Value.fields,
                               (MethodInfo *)0x0);
                    __this_07 = (CustomLogic_CustomLogicCollisionHandler_o *)
                                UnityEngine_GameObject__AddComponent<object>(__this_06,MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL)
                    ;
                    pMVar7 = (pCVar4->fields).Value;
                    if ((pMVar7 != (Map_MapObject_o *)0x0) &&
                       (__this_01 = (pMVar7->fields).ComponentInstances,
                       __this_01 !=
                       (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                      System_Collections_Generic_List<object>__GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp
                                );
                      local_98._16_8_ = local_38;
                      local_98._0_8_ = local_48._0_8_;
                      local_98._8_8_ = local_48._8_8_;
                      if (__this_07 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                        while( true ) {
                          __this_04.fields._version = (int32_t)radius;
                          __this_04.fields._list =
                               (System_Collections_Generic_List_T__o *)
                               in_stack_ffffffffffffff48._0_8_;
                          __this_04.fields._index = in_stack_ffffffffffffff48._8_4_;
                          __this_04.fields._current._0_4_ = (int)team;
                          __this_04.fields._current._4_4_ = (int)((ulong)team >> 0x20);
                          bVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                             (__this_04,(MethodInfo_3185E20 *)local_98);
                          if ((char)bVar11 == '\0') break;
                          if ((CustomLogic_CustomLogicComponentInstance_o *)local_98._16_8_ ==
                              (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e1463d;
                          bVar11 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                             ((CustomLogic_CustomLogicComponentInstance_o *)
                                              local_98._16_8_,(MethodInfo *)0x0);
                          if ((char)bVar11 != '\0') {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                        }
                      }
                      else {
                        while( true ) {
                          __this_03.fields._version = (int32_t)radius;
                          __this_03.fields._list =
                               (System_Collections_Generic_List_T__o *)
                               in_stack_ffffffffffffff48._0_8_;
                          __this_03.fields._index = in_stack_ffffffffffffff48._8_4_;
                          __this_03.fields._current._0_4_ = (int)team;
                          __this_03.fields._current._4_4_ = (int)((ulong)team >> 0x20);
                          bVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                             (__this_03,(MethodInfo_3185E20 *)local_98);
                          classInstance = local_98._16_8_;
                          if ((char)bVar11 == '\0') break;
                          if ((CustomLogic_CustomLogicComponentInstance_o *)local_98._16_8_ ==
                              (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e1463d:
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          bVar11 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                             ((CustomLogic_CustomLogicComponentInstance_o *)
                                              local_98._16_8_,(MethodInfo *)0x0);
                          if ((char)bVar11 != '\0') {
                            CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                      (__this_07,
                                       (CustomLogic_CustomLogicComponentInstance_o *)classInstance,
                                       (MethodInfo *)0x0);
                          }
                        }
                      }
                      __this_05.fields._version = (int32_t)radius;
                      __this_05.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
                      __this_05.fields._index = in_stack_ffffffffffffff48._8_4_;
                      __this_05.fields._current._0_4_ = (int)team;
                      __this_05.fields._current._4_4_ = (int)((ulong)team >> 0x20);
                      System_Collections_Generic_List_Enumerator<object>__Dispose
                                (__this_05,(MethodInfo_3185E10 *)local_98);
                      pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                      UVar17 = UnityEngine_SphereCollider__get_center
                                         ((UnityEngine_SphereCollider_o *)c,(MethodInfo *)0x0);
                      fVar15 = UVar17.fields.z;
                      local_78._8_4_ = extraout_XMM0_Dc;
                      local_78._0_8_ = UVar17.fields._0_8_;
                      local_78._12_4_ = extraout_XMM0_Dd;
                      __this_08 = (Map_MapTargetable_o *)il2cpp_runtime_glue(TypeInfo_MapTargetable);
                      auVar10 = local_78;
                      center_00.fields.z = fVar15;
                      center_00.fields.x = (float)local_78._0_4_;
                      center_00.fields.y = (float)local_78._4_4_;
                      local_78 = auVar10;
                      Map_MapTargetable___ctor(__this_08,pUVar13,center_00,team,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      lVar9 = MethodInfo_Void_Add;
                      __this_02 = *(System_Collections_Generic_List_object__o **)
                                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                        piVar1 = &(__this_02->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar8 = (__this_02->fields)._items;
                        if (pSVar8 != (System_Object_array *)0x0) {
                          uVar6 = (__this_02->fields)._size;
                          if (uVar6 < (uint)pSVar8->max_length) {
                            (__this_02->fields)._size = uVar6 + 1;
                            pSVar8->m_Items[(int)uVar6] = (Il2CppObject *)__this_08;
                            il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar6,__this_08);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (__this_02,(Il2CppObject *)__this_08,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          __this_09 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)
                                      il2cpp_runtime_glue(TypeInfo_CustomLogicMapTargetableBuiltin);
                          CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                                    (__this_09,__this_06,__this_08,(MethodInfo *)0x0);
                          return __this_09;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBoxTarget
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* team, CustomLogic_CustomLogicVector3Builtin_o* center, CustomLogic_CustomLogicVector3Builtin_o* size, const MethodInfo* method);
// 0x3e14700

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddBoxTarget
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *team,
          CustomLogic_CustomLogicVector3Builtin_o *center,
          CustomLogic_CustomLogicVector3Builtin_o *size,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar9;
  System_String_o *collideWith;
  System_String_o *collideMode;
  bool_conflict bVar10;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *p;
  UnityEngine_Collider_o *c;
  CustomLogic_CustomLogicCollisionHandler_o *__this_07;
  Map_MapTargetable_o *__this_08;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_09;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o b_00;
  undefined8 in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff54;
  float fVar16;
  System_Collections_Generic_List_T__o *pSVar17;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05702c5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapTargetable);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Hitboxes");
    il2cpp_init_method_metadata(&"Region");
    DAT_05702c5d = '\x01';
  }
  collideMode = "Region";
  collideWith = "Hitboxes";
  pMVar7 = (__this->fields).Value;
  if ((pMVar7 != (Map_MapObject_o *)0x0) &&
     (center != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2 = (pMVar7->fields).BaseScale.fields.x;
    uVar4 = (pMVar7->fields).BaseScale.fields.y;
    b_00.fields.y = (float)uVar4;
    b_00.fields.x = (float)uVar2;
    fVar14 = (pMVar7->fields).BaseScale.fields.z;
    uVar3 = (center->fields).Value.fields.x;
    uVar5 = (center->fields).Value.fields.y;
    UVar15.fields.y = (float)uVar5;
    UVar15.fields.x = (float)uVar3;
    fVar16 = (center->fields).Value.fields.z;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
      in_stack_ffffffffffffff54 = fVar16;
    }
    UVar15.fields.z = fVar16;
    b.fields.z = fVar14;
    b.fields.x = (float)uVar2;
    b.fields.y = (float)uVar4;
    UVar15 = Utility_Util__DivideVectors(UVar15,b,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(UVar15,(MethodInfo *)0x0);
    if (size != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      b_00.fields.z = fVar14;
      UVar15 = Utility_Util__DivideVectors((size->fields).Value.fields,b_00,(MethodInfo *)0x0);
      pCVar12 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(UVar15,(MethodInfo *)0x0);
      __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_06,(MethodInfo *)0x0);
      if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
        pMVar7 = (__this->fields).Value;
        if ((pMVar7 != (Map_MapObject_o *)0x0) &&
           (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0))
        {
          p = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar13,p,(MethodInfo *)0x0);
            pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localPosition
                        (pUVar13,(UnityEngine_Vector3_o)
                                 **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                         (MethodInfo *)0x0);
              pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
              if (DAT_056fde1e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                DAT_056fde1e = '\x01';
              }
              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localRotation
                          (pUVar13,(UnityEngine_Quaternion_o)
                                   **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                           (MethodInfo *)0x0);
                pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                if (DAT_056fe077 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fe077 = '\x01';
                }
                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localScale
                            (pUVar13,(UnityEngine_Vector3_o)
                                     *(UnityEngine_Vector3_Fields *)
                                      (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
                  c = (UnityEngine_Collider_o *)
                      UnityEngine_GameObject__AddComponent<object>(__this_06,MethodInfo_BoxCollider_AddComponent_BoxCollider);
                  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  Map_MapLoader__SetCollider(c,collideMode,collideWith,(MethodInfo *)0x0);
                  if ((pCVar12 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
                     (c != (UnityEngine_Collider_o *)0x0)) {
                    UnityEngine_BoxCollider__set_size
                              ((UnityEngine_BoxCollider_o *)c,
                               (UnityEngine_Vector3_o)(pCVar12->fields).Value.fields,
                               (MethodInfo *)0x0);
                    if (pCVar11 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
                      UnityEngine_BoxCollider__set_center
                                ((UnityEngine_BoxCollider_o *)c,
                                 (UnityEngine_Vector3_o)(pCVar11->fields).Value.fields,
                                 (MethodInfo *)0x0);
                      __this_07 = (CustomLogic_CustomLogicCollisionHandler_o *)
                                  UnityEngine_GameObject__AddComponent<object>
                                            (__this_06,MethodInfo_CustomLogicCollisionHandler_AddComponent_CustomL);
                      pMVar7 = (__this->fields).Value;
                      if ((pMVar7 != (Map_MapObject_o *)0x0) &&
                         (__this_01 = (pMVar7->fields).ComponentInstances,
                         __this_01 !=
                         (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)) {
                        System_Collections_Generic_List<object>__GetEnumerator
                                  (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                                   MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
                        pSVar17 = local_48.fields._list;
                        if (__this_07 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                          while( true ) {
                            __this_04.fields._index = (int32_t)fVar14;
                            __this_04.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
                            __this_04.fields._version = (int32_t)in_stack_ffffffffffffff54;
                            __this_04.fields._current = (Il2CppObject *)pSVar17;
                            bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (__this_04,
                                                (MethodInfo_3185E20 *)&stack0xffffffffffffff58);
                            if ((char)bVar10 == '\0') break;
                            if ((CustomLogic_CustomLogicComponentInstance_o *)
                                local_48.fields._current ==
                                (CustomLogic_CustomLogicComponentInstance_o *)0x0)
                            goto LAB_03e14ccd;
                            bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                               ((CustomLogic_CustomLogicComponentInstance_o *)
                                                local_48.fields._current,(MethodInfo *)0x0);
                            if ((char)bVar10 != '\0') {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                          }
                        }
                        else {
                          while( true ) {
                            __this_03.fields._index = (int32_t)fVar14;
                            __this_03.fields._list =
                                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
                            __this_03.fields._version = (int32_t)in_stack_ffffffffffffff54;
                            __this_03.fields._current = (Il2CppObject *)pSVar17;
                            bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (__this_03,
                                                (MethodInfo_3185E20 *)&stack0xffffffffffffff58);
                            if ((char)bVar10 == '\0') break;
                            if ((CustomLogic_CustomLogicComponentInstance_o *)
                                local_48.fields._current ==
                                (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e14ccd:
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            bVar10 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                                               ((CustomLogic_CustomLogicComponentInstance_o *)
                                                local_48.fields._current,(MethodInfo *)0x0);
                            if ((char)bVar10 != '\0') {
                              CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                                        (__this_07,
                                         (CustomLogic_CustomLogicComponentInstance_o *)
                                         local_48.fields._current,(MethodInfo *)0x0);
                            }
                          }
                        }
                        __this_05.fields._index = (int32_t)fVar14;
                        __this_05.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
                        __this_05.fields._version = (int32_t)in_stack_ffffffffffffff54;
                        __this_05.fields._current = (Il2CppObject *)pSVar17;
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
                        pUVar13 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0)
                        ;
                        UVar15 = UnityEngine_BoxCollider__get_center
                                           ((UnityEngine_BoxCollider_o *)c,(MethodInfo *)0x0);
                        fVar14 = UVar15.fields.z;
                        __this_08 = (Map_MapTargetable_o *)il2cpp_runtime_glue(TypeInfo_MapTargetable);
                        center_00.fields.z = fVar14;
                        center_00.fields.x = (float)(int)UVar15.fields._0_8_;
                        center_00.fields.y = (float)(int)((ulong)UVar15.fields._0_8_ >> 0x20);
                        Map_MapTargetable___ctor(__this_08,pUVar13,center_00,team,(MethodInfo *)0x0)
                        ;
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        lVar9 = MethodInfo_Void_Add;
                        __this_02 = *(System_Collections_Generic_List_object__o **)
                                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
                        if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                          piVar1 = &(__this_02->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar8 = (__this_02->fields)._items;
                          if (pSVar8 != (System_Object_array *)0x0) {
                            uVar6 = (__this_02->fields)._size;
                            if (uVar6 < (uint)pSVar8->max_length) {
                              (__this_02->fields)._size = uVar6 + 1;
                              pSVar8->m_Items[(int)uVar6] = (Il2CppObject *)__this_08;
                              il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar6,__this_08);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (__this_02,(Il2CppObject *)__this_08,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            __this_09 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)
                                        il2cpp_runtime_glue(TypeInfo_CustomLogicMapTargetableBuiltin);
                            CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                                      (__this_09,__this_06,__this_08,(MethodInfo *)0x0);
                            return __this_09;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetChild
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetChild (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e14d90

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetChild
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_HashSet_int__o *__this_04;
  Map_MapObject_o *pMVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  int32_t key;
  int32_t iVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [24];
  
  if (DAT_05702c5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c5e = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (__this->fields).Value;
  if (((pMVar4 != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(pMVar1->fields).Id,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar4 = (__this->fields).Value;
      if (((pMVar4 == (Map_MapObject_o *)0x0) ||
          (pMVar1 = (pMVar4->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) ||
         ((pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
          pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0 ||
          (__this_04 = (System_Collections_Generic_HashSet_int__o *)
                       System_Collections_Generic_Dictionary<int__object>__get_Item
                                 (pSVar2,(pMVar1->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
          __this_04 == (System_Collections_Generic_HashSet_int__o *)0x0)))) goto LAB_03e1507b;
      System_Collections_Generic_HashSet<int>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,__this_04,
                 MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
      uVar9 = SUB84(auStack_48._16_8_,4);
      pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_48._0_8_;
      pIVar7 = (Il2CppType *)auStack_48._8_8_;
      iVar8 = (int32_t)auStack_48._16_8_;
      while (key = iVar8, __this_01.fields._8_8_ = pIVar7,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6,
            __this_01.fields._current._0_4_ = key, __this_01.fields._current._4_4_ = uVar9,
            bVar3 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                              (__this_01,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98),
            (char)bVar3 != '\0') {
        iVar8 = key;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar4 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary<int__object>__get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)
                              **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item);
          if (pMVar4 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar1 = (pMVar4->fields).ScriptObject;
          if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar3 = System_String__op_Equality
                            (*(System_String_o **)&(pMVar1->fields).Visible,name,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8)
            ;
            if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                 (__this_00,pMVar4,(MethodInfo *)0x0);
              __this_02.fields._8_8_ = pIVar7;
              __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
              __this_02.fields._current._0_4_ = iVar8;
              __this_02.fields._current._4_4_ = uVar9;
              System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                        (__this_02,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
              return pCVar5;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      __this_03.fields._8_8_ = pIVar7;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
      __this_03.fields._current._0_4_ = key;
      __this_03.fields._current._4_4_ = uVar9;
      System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                (__this_03,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
    }
    return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  }
LAB_03e1507b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetChildren
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetChildren (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15190

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
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  long lVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_HashSet_int__o *__this_06;
  Map_MapObject_o *pMVar8;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05702c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c5f = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar8 = (__this->fields).Value;
  if (((pMVar8 != (Map_MapObject_o *)0x0) &&
      (pMVar3 = (pMVar8->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
     pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar4,(pMVar3->fields).Id,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      return __this_05;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar8 = (__this->fields).Value;
    if (((pMVar8 != (Map_MapObject_o *)0x0) &&
        (pMVar3 = (pMVar8->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
        pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0 &&
        (__this_06 = (System_Collections_Generic_HashSet_int__o *)
                     System_Collections_Generic_Dictionary<int__object>__get_Item
                               (pSVar4,(pMVar3->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
        __this_06 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
      System_Collections_Generic_HashSet<int>__GetEnumerator(&SStack_48,__this_06,MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_48.fields._set;
      if (__this_05 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        do {
          do {
            __this_02.fields._8_8_ = __this_05;
            __this_02.fields._set =
                 (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
            __this_02.fields._current = (Il2CppObject *)pSVar9;
            bVar7 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                              (__this_02,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98);
            if ((char)bVar7 == '\0') {
LAB_03e15560:
              __this_04.fields._8_8_ = __this_05;
              __this_04.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
              __this_04.fields._current = (Il2CppObject *)pSVar9;
              System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                        (__this_04,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
              return __this_05;
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
LAB_03e15588:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                               (int32_t)SStack_48.fields._current,MethodInfo_Boolean_ContainsKey);
          } while ((char)bVar7 == '\0');
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03e1555b;
          pMVar8 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary<int__object>__get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)
                              **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                              (int32_t)SStack_48.fields._current,MethodInfo_MapObject_get_Item);
          __this_00 = (__this_05->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_01,pMVar8,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
      do {
        __this_03.fields._8_8_ = __this_05;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88
        ;
        __this_03.fields._current = (Il2CppObject *)pSVar9;
        bVar7 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                          (__this_03,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') goto LAB_03e15560;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03e15588;
        bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(int32_t)SStack_48.fields._current
                           ,MethodInfo_Boolean_ContainsKey);
      } while ((char)bVar7 == '\0');
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_int__object__o *)
          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int__object>__get_Item
                  ((System_Collections_Generic_Dictionary_int__object__o *)
                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(int32_t)SStack_48.fields._current,
                   MethodInfo_MapObject_get_Item);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03e1555b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetTransform (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e15700

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetTransform
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (DAT_05702c60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702c60 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,name,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,pUVar3,(MethodInfo *)0x0);
        return __this_01;
      }
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$SetColorAll
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x3e157d0

void CustomLogic_CustomLogicMapObjectBuiltin__SetColorAll
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *color,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  Utility_Color255_o *__this_00;
  uint uVar4;
  UnityEngine_Material_o *__this_01;
  undefined8 uVar5;
  System_Exception_o *__this_02;
  System_String_o *message;
  uint uVar6;
  UnityEngine_Color_o value;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar2->fields).Active + 1) != '\0') {
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
      message = (System_String_o *)il2cpp_init_method_metadata(&"SetColorAll cannot be called on a static MapObject.");
      System_Exception___ctor(__this_02,message,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&MethodInfo_Void_SetColorAll);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_02,uVar5);
    }
    pUVar3 = (pMVar1->fields).renderCache;
    if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
      uVar4 = (uint)pUVar3->max_length;
      if (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        if (0 < (int)uVar4) {
          if (pUVar3->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__get_material(pUVar3->m_Items[0],(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_03e158d4;
        }
      }
      else if (0 < (int)uVar4) {
        uVar6 = 0;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pUVar3->m_Items[(int)uVar6] == (UnityEngine_Renderer_o *)0x0) goto LAB_03e158d4;
          __this_01 = UnityEngine_Renderer__get_material
                                (pUVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
          __this_00 = (color->fields).Value;
          if ((__this_00 == (Utility_Color255_o *)0x0) ||
             (value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_Material_o *)0x0)) goto LAB_03e158d4;
          UnityEngine_Material__set_color(__this_01,value,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pUVar3->max_length;
        } while ((int)uVar6 < (int)uVar4);
      }
      return;
    }
  }
LAB_03e158d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$InBounds
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__InBounds (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3e158f0

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__InBounds
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  uint uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Bounds_o __this_00;
  bool_conflict bVar4;
  long lVar5;
  undefined1 local_60 [40];
  _union_14 local_38;
  
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
    if (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if (0 < (int)pUVar3->max_length) {
        if (pUVar3->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
          UnityEngine_Collider__get_bounds
                    ((UnityEngine_Bounds_o *)local_60,pUVar3->m_Items[0],(MethodInfo *)0x0);
          local_38.genericMethod = (void *)local_60._16_8_;
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_03e159c6;
      }
LAB_03e159a8:
      bVar4 = 0;
    }
    else {
      lVar5 = 0;
      do {
        uVar1 = (uint)pUVar3->max_length;
        if ((int)uVar1 <= (int)(uint)lVar5) goto LAB_03e159a8;
        if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pUVar3->m_Items[lVar5] == (UnityEngine_Collider_o *)0x0) goto LAB_03e159c6;
        UnityEngine_Collider__get_bounds
                  ((UnityEngine_Bounds_o *)local_60,pUVar3->m_Items[lVar5],(MethodInfo *)0x0);
        local_38.genericMethod = (void *)local_60._16_8_;
        __this_00.fields.m_Center.fields.y = (float)local_60._4_4_;
        __this_00.fields.m_Center.fields.x = (float)local_60._0_4_;
        __this_00.fields.m_Center.fields.z = (float)local_60._8_4_;
        __this_00.fields.m_Extents.fields.x = (float)local_60._12_4_;
        __this_00.fields.m_Extents.fields.y = (float)local_60._16_4_;
        __this_00.fields.m_Extents.fields.z = (float)local_60._20_4_;
        bVar4 = UnityEngine_Bounds__Contains
                          (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                           (MethodInfo *)&stack0xffffffffffffff88);
        lVar5 = lVar5 + 1;
      } while ((char)bVar4 == '\0');
      bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
    }
    return bVar4;
  }
LAB_03e159c6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsAverageCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15a00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsAverageCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined1 auVar3 [16];
  uint uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_o UVar9;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Bounds_o UStack_38;
  
  if (DAT_05702c61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c61 = '\x01';
    if (DAT_056fdd15 == '\0') goto LAB_03e15b2a;
LAB_03e15a28:
    pMVar1 = (__this->fields).Value;
  }
  else {
    if (DAT_056fdd15 != '\0') goto LAB_03e15a28;
LAB_03e15b2a:
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    pMVar1 = (__this->fields).Value;
  }
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    fVar7 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    uVar4 = (uint)pUVar2->max_length;
    uVar5 = 0;
    if (0 < (int)uVar4) {
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pUVar2->m_Items[(int)uVar5] == (UnityEngine_Collider_o *)0x0) goto LAB_03e15bb3;
        UnityEngine_Collider__get_bounds(&UStack_38,pUVar2->m_Items[(int)uVar5],(MethodInfo *)0x0);
        fVar7 = fVar7 + UStack_38.fields.m_Center.fields.z;
        fStack_58 = auVar8._0_4_;
        fStack_54 = auVar8._4_4_;
        fStack_50 = auVar8._8_4_;
        fStack_4c = auVar8._12_4_;
        auVar8._0_4_ = fStack_58 + UStack_38.fields.m_Center.fields.x;
        auVar8._4_4_ = fStack_54 + UStack_38.fields.m_Center.fields.y;
        auVar8._8_4_ = fStack_50 + 0.0;
        auVar8._12_4_ = fStack_4c + 0.0;
        uVar5 = uVar5 + 1;
        uVar4 = (uint)pUVar2->max_length;
      } while ((int)uVar5 < (int)uVar4);
    }
    if ((int)uVar5 < 1) {
      pMVar1 = (__this->fields).Value;
      if (((pMVar1 == (Map_MapObject_o *)0x0) ||
          (__this_00 = (pMVar1->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
         || (__this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
            __this_02 == (UnityEngine_Transform_o *)0x0)) goto LAB_03e15bb3;
      UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.z;
      __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      fStack_48 = UVar9.fields.x;
      fStack_44 = UVar9.fields.y;
      fStack_58 = fStack_48;
      fStack_54 = fStack_44;
    }
    else {
      fVar6 = (float)(int)uVar5;
      fVar7 = fVar7 / fVar6;
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_8_ = 0;
      auVar8 = divps(auVar8,auVar3);
      __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      fStack_58 = auVar8._0_4_;
      fStack_54 = auVar8._4_4_;
    }
    UVar9.fields.y = fStack_54;
    UVar9.fields.x = fStack_58;
    UVar9.fields.z = fVar7;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar9,(MethodInfo *)0x0);
    return __this_01;
  }
LAB_03e15bb3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsCenter
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15bc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsCenter
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (DAT_05702c62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c62 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Center.fields.z;
      value.fields.x = local_20.fields.m_Center.fields.x;
      value.fields.y = local_20.fields.m_Center.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsSize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15c80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsSize
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (DAT_05702c63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c63 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      value.fields.x = local_20.fields.m_Extents.fields.x + local_20.fields.m_Extents.fields.x;
      value.fields.y = local_20.fields.m_Extents.fields.y + local_20.fields.m_Extents.fields.y;
      value.fields.z = local_20.fields.m_Extents.fields.z + local_20.fields.m_Extents.fields.z;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMin
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMin (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15d40

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
  
  if (DAT_05702c64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c64 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&UStack_30,pUVar2->m_Items[0],(MethodInfo *)0x0);
      uStack_18 = CONCAT44(UStack_30.fields.m_Center.fields.y - UStack_30.fields.m_Extents.fields.y,
                           UStack_30.fields.m_Center.fields.x - UStack_30.fields.m_Extents.fields.x)
      ;
      uStack_10 = 0;
      value.fields.z = UStack_30.fields.m_Center.fields.z - UStack_30.fields.m_Extents.fields.z;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.x = (float)(undefined4)uStack_18;
      value.fields.y = (float)uStack_18._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsMax
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsMax (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15e10

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
  
  if (DAT_05702c65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c65 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_30,pUVar2->m_Items[0],(MethodInfo *)0x0);
      local_18 = CONCAT44(local_30.fields.m_Extents.fields.y + local_30.fields.m_Center.fields.y,
                          local_30.fields.m_Extents.fields.x + local_30.fields.m_Center.fields.x);
      uStack_10 = 0;
      value.fields.z = local_30.fields.m_Center.fields.z + local_30.fields.m_Extents.fields.z;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.x = (float)(undefined4)local_18;
      value.fields.y = (float)local_18._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBoundsExtents
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15ee0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetBoundsExtents
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Collider_array *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (DAT_05702c66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702c66 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).colliderCache, pUVar2 != (UnityEngine_Collider_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    if ((int)pUVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar2->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,pUVar2->m_Items[0],(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Extents.fields.z;
      value.fields.x = local_20.fields.m_Extents.fields.x;
      value.fields.y = local_20.fields.m_Extents.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetCorners
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__GetCorners (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e15fa0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__GetCorners
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_BoxCollider_o **ppUVar1;
  CustomLogic_CustomLogicListBuiltin_o **ppCVar2;
  int32_t *piVar3;
  byte bVar4;
  uint uVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_Collider_array *pUVar7;
  UnityEngine_Collider_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  Il2CppClass *pIVar8;
  CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_List_Vector3__o *__this_04;
  System_Collections_Generic_List_int__o *pSVar10;
  long lVar11;
  System_Action_T__o *action;
  System_Int32_array *pSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Bounds_o UStack_70;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  if (DAT_05702c67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_int);
    il2cpp_init_method_metadata(&TypeInfo_BoxCollider);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_CustomLogic_CustomLogicVector3Buil);
    il2cpp_init_method_metadata(&TypeInfo_Func_Vector3__CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_ForEach);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin__GetCorners_b__98_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCorners_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass98_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702c67 = '\x01';
  }
  __this_03 = (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass98_0);
  CustomLogic_CustomLogicMapObjectBuiltin_<>c__DisplayClass98_0___ctor(__this_03,(MethodInfo *)0x0);
  pIVar8 = TypeInfo_BoxCollider;
  pMVar6 = (__this->fields).Value;
  if ((pMVar6 == (Map_MapObject_o *)0x0) ||
     (pUVar7 = (pMVar6->fields).colliderCache, pUVar7 == (UnityEngine_Collider_array *)0x0))
  goto LAB_03e16584;
  if (pUVar7->max_length == 0) {
    return (CustomLogic_CustomLogicListBuiltin_o *)0x0;
  }
  if ((int)pUVar7->max_length == 0) {
LAB_03e16589:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = pUVar7->m_Items[0];
  if (__this_00 == (UnityEngine_Collider_o *)0x0) goto LAB_03e16584;
  bVar4 = (TypeInfo_BoxCollider->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BoxCollider)) {
    UnityEngine_Collider__get_bounds(&UStack_70,__this_00,(MethodInfo *)0x0);
    auStack_58._0_4_ = UStack_70.fields.m_Center.fields.x;
    auStack_58._4_4_ = UStack_70.fields.m_Center.fields.y;
    uStack_50 = 0;
    auStack_48._0_4_ = UStack_70.fields.m_Extents.fields.x;
    auStack_48._4_4_ = UStack_70.fields.m_Extents.fields.y;
    uStack_40 = 0;
    source = (System_Collections_Generic_IEnumerable_TSource__o *)il2cpp_glue_02274930(TypeInfo_Vector3);
    if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      uVar5 = *(uint *)&source[1].monitor;
      if (uVar5 != 0) {
        fVar15 = (float)auStack_58._0_4_ - (float)auStack_48._0_4_;
        fVar14 = (float)auStack_58._4_4_ - (float)auStack_48._4_4_;
        fVar16 = UStack_70.fields.m_Center.fields.z - UStack_70.fields.m_Extents.fields.z;
        source[2].klass =
             (System_Collections_Generic_IEnumerable_TSource__c *)CONCAT44(fVar14,fVar15);
        *(float *)&source[2].monitor = fVar16;
        if (uVar5 != 1) {
          UStack_70.fields.m_Center.fields.z =
               UStack_70.fields.m_Center.fields.z + UStack_70.fields.m_Extents.fields.z;
          *(ulong *)((long)&source[2].monitor + 4) = CONCAT44(fVar14,fVar15);
          *(float *)((long)&source[3].klass + 4) = UStack_70.fields.m_Center.fields.z;
          if (2 < uVar5) {
            fVar13 = (float)auStack_48._4_4_ + (float)auStack_58._4_4_;
            source[3].monitor = (void *)CONCAT44(fVar13,fVar15);
            *(float *)&source[4].klass = fVar16;
            if (uVar5 != 3) {
              *(ulong *)((long)&source[4].klass + 4) = CONCAT44(fVar13,fVar15);
              *(float *)((long)&source[4].monitor + 4) = UStack_70.fields.m_Center.fields.z;
              if (4 < uVar5) {
                fVar15 = (float)auStack_48._0_4_ + (float)auStack_58._0_4_;
                source[5].klass =
                     (System_Collections_Generic_IEnumerable_TSource__c *)CONCAT44(fVar14,fVar15);
                *(float *)&source[5].monitor = fVar16;
                if (uVar5 != 5) {
                  *(ulong *)((long)&source[5].monitor + 4) = CONCAT44(fVar14,fVar15);
                  *(float *)((long)&source[6].klass + 4) = UStack_70.fields.m_Center.fields.z;
                  if (6 < uVar5) {
                    source[6].monitor = (void *)CONCAT44(fVar13,fVar15);
                    *(float *)&source[7].klass = fVar16;
                    if (uVar5 != 7) {
                      *(ulong *)((long)&source[7].klass + 4) = CONCAT44(fVar13,fVar15);
                      *(float *)((long)&source[7].monitor + 4) = UStack_70.fields.m_Center.fields.z;
                      pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)
                               il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
                      CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
                      if (pCVar9 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                        __this_01 = (pCVar9->fields).List;
                        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                          il2cpp_init_class();
                          selector = *(System_Func_TSource__TResult__o **)
                                      (*(long *)(TypeInfo_c + 0xb8) + 8);
                        }
                        else {
                          selector = *(System_Func_TSource__TResult__o **)
                                      (*(long *)(TypeInfo_c + 0xb8) + 8);
                        }
                        if (selector == (System_Func_TSource__TResult__o *)0x0) {
                          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          selector = (System_Func_TSource__TResult__o *)
                                     il2cpp_runtime_glue(TypeInfo_Func_Vector3__CustomLogicVector3Builtin);
                          System_Func<Vector3__object>___ctor();
                          lVar11 = *(long *)(TypeInfo_c + 0xb8);
                          *(System_Func_TSource__TResult__o **)(lVar11 + 8) = selector;
                          il2cpp_runtime_glue(lVar11 + 8,selector);
                        }
                        collection = System_Linq_Enumerable__Select<Vector3__object>
                                               (source,selector,MethodInfo_IEnumerable_1_CustomLogic_CustomLogicVector3Buil);
                        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                          System_Collections_Generic_List<object>__AddRange
                                    (__this_01,
                                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                                     MethodInfo_Void_AddRange);
                          return pCVar9;
                        }
                      }
                      goto LAB_03e16584;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03e16589;
    }
    goto LAB_03e16584;
  }
  if (__this_03 == (CustomLogic_CustomLogicMapObjectBuiltin___c__DisplayClass98_0_o *)0x0)
  goto LAB_03e16584;
  (__this_03->fields).boxCollider = (UnityEngine_BoxCollider_o *)__this_00;
  if (((__this_00->klass->_2).naturalAligment < bVar4) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != pIVar8)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00,pIVar8);
  }
  ppUVar1 = &(__this_03->fields).boxCollider;
  il2cpp_runtime_glue(ppUVar1);
  __this_02 = *ppUVar1;
  if (__this_02 == (UnityEngine_BoxCollider_o *)0x0) goto LAB_03e16584;
  UVar17 = UnityEngine_BoxCollider__get_size(__this_02,(MethodInfo *)0x0);
  (__this_03->fields).size.fields.x = (float)(int)UVar17.fields._0_8_;
  (__this_03->fields).size.fields.y = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
  (__this_03->fields).size.fields.z = UVar17.fields.z;
  pCVar9 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
  ppCVar2 = &(__this_03->fields).result;
  (__this_03->fields).result = pCVar9;
  il2cpp_runtime_glue(ppCVar2,pCVar9);
  __this_04 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(__this_04,MethodInfo_List_1_UnityEngine_Vector3);
  pSVar10 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar10,MethodInfo_List_1_System_Int32);
  lVar11 = MethodInfo_Void_Add;
  if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_03e16584;
  piVar3 = &(pSVar10->fields)._version;
  *piVar3 = *piVar3 + 1;
  pSVar12 = (pSVar10->fields)._items;
  if (pSVar12 == (System_Int32_array *)0x0) goto LAB_03e16584;
  uVar5 = (pSVar10->fields)._size;
  if (uVar5 < (uint)pSVar12->max_length) {
    (pSVar10->fields)._size = uVar5 + 1;
    pSVar12->m_Items[(int)uVar5] = -1;
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    uVar5 = (pSVar10->fields)._size;
    if (uVar5 < (uint)pSVar12->max_length) goto LAB_03e164f6;
LAB_03e16506:
    System_Collections_Generic_List<int>__AddWithResize
              (pSVar10,1,*(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
              );
  }
  else {
    System_Collections_Generic_List<int>__AddWithResize
              (pSVar10,-1,
               *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    lVar11 = MethodInfo_Void_Add;
    pSVar12 = (pSVar10->fields)._items;
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    if (pSVar12 == (System_Int32_array *)0x0) goto LAB_03e16584;
    uVar5 = (pSVar10->fields)._size;
    if ((uint)pSVar12->max_length <= uVar5) goto LAB_03e16506;
LAB_03e164f6:
    (pSVar10->fields)._size = uVar5 + 1;
    pSVar12->m_Items[(int)uVar5] = 1;
  }
  (__this_03->fields).signs = pSVar10;
  il2cpp_runtime_glue(&__this_03->fields,pSVar10);
  pSVar10 = (__this_03->fields).signs;
  action = (System_Action_T__o *)il2cpp_runtime_glue(TypeInfo_Action_int);
  System_Action<int>___ctor();
  if (pSVar10 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List<int>__ForEach(pSVar10,action,MethodInfo_Void_ForEach);
    return *ppCVar2;
  }
LAB_03e16584:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$HasTag
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__HasTag (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* tag, const MethodInfo* method);
// 0x3e165a0

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__HasTag
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *tag,MethodInfo *method
          )

{
  Map_MapObject_o *obj;
  bool_conflict bVar1;
  
  if (DAT_05702c68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702c68 = '\x01';
  }
  obj = (__this->fields).Value;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = Map_MapLoader__HasTag(obj,tag,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddBuiltinComponent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e16600

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__AddBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **ppCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Map_MapObject_o *pMVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicLodBuiltin_o *__this_00;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_01;
  System_String_o *str2;
  undefined8 uVar7;
  System_Exception_o *__this_02;
  System_String_o *pSVar8;
  System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *__this_03;
  
  if (DAT_05702c69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLightBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"SpotLight");
    il2cpp_init_method_metadata(&"CustomPhysicsMaterial");
    il2cpp_init_method_metadata(&"NavMeshObstacle");
    il2cpp_init_method_metadata(&"Lod");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"PointLight");
    il2cpp_init_method_metadata(&"DayLight");
    DAT_05702c69 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache
  ;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03e169b1;
  bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar2,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(name,"DayLight",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(name,"PointLight",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(name,"SpotLight",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pMVar3 = (__this->fields).Value;
            if ((pMVar3 == (Map_MapObject_o *)0x0) ||
               (pMVar4 = (pMVar3->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
            goto LAB_03e169b1;
            if (*(char *)((long)&(pMVar4->fields).Active + 1) != '\0') {
              uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
              __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
              pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"AddRigidbody cannot be called on a static MapObject.");
              goto LAB_03e16a01;
            }
            __this_01 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
            CustomLogic_CustomLogicRigidbodyBuiltin___ctor
                      (__this_01,__this,1.0,(System_Nullable_Vector3__o)(ZEXT416(0) << 0x40),0,0,
                       (MethodInfo *)0x0);
            ppCVar1 = &(__this->fields)._rigidBody;
            (__this->fields)._rigidBody = __this_01;
            il2cpp_runtime_glue(ppCVar1,__this_01);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._builtinCache;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar2,(Il2CppObject *)name,(Il2CppObject *)*ppCVar1,MethodInfo_Void_set_Item);
              __this_03 = (__this->fields)._builtinCache;
              if (__this_03 ==
                  (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0)
              goto LAB_03e169b1;
              goto LAB_03e16800;
            }
            goto LAB_03e169b1;
          }
          bVar5 = System_String__op_Equality(name,"CustomPhysicsMaterial",(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            bVar5 = System_String__op_Equality(name,"NavMeshObstacle",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              bVar5 = System_String__op_Equality(name,"Lod",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown builtin component: ");
                pSVar8 = System_String__Concat(pSVar8,name,(MethodInfo *)0x0);
                goto LAB_03e169e1;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._builtinCache;
              __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLodBuiltin);
              CustomLogic_CustomLogicLodBuiltin___ctor(__this_00,__this,(MethodInfo *)0x0);
            }
            else {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._builtinCache;
              __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNavmeshObstacleBuiltin);
              CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
                        ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__this_00,__this,
                         (MethodInfo *)0x0);
            }
          }
          else {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._builtinCache;
            __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPhysicsMaterialBuiltin);
            CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor
                      ((CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)__this_00,__this,
                       (MethodInfo *)0x0);
          }
        }
        else {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._builtinCache;
          __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
          CustomLogic_CustomLogicLightBuiltin___ctor
                    ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__this,0,(MethodInfo *)0x0);
        }
      }
      else {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._builtinCache;
        __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
        CustomLogic_CustomLogicLightBuiltin___ctor
                  ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__this,2,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._builtinCache;
      __this_00 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLightBuiltin);
      CustomLogic_CustomLogicLightBuiltin___ctor
                ((CustomLogic_CustomLogicLightBuiltin_o *)__this_00,__this,1,(MethodInfo *)0x0);
    }
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar2,(Il2CppObject *)name,(Il2CppObject *)__this_00,MethodInfo_Void_set_Item);
      __this_03 = (__this->fields)._builtinCache;
      if (__this_03 !=
          (System_Collections_Generic_Dictionary_string__BuiltinComponentInstance__o *)0x0) {
LAB_03e16800:
        pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                            (Il2CppObject *)name,MethodInfo_BuiltinComponentInstance_get_Item);
        return pIVar6;
      }
    }
LAB_03e169b1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"MapObject already has a ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" component.");
  pSVar8 = System_String__Concat(pSVar8,name,str2,(MethodInfo *)0x0);
LAB_03e169e1:
  uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
LAB_03e16a01:
  System_Exception___ctor(__this_02,pSVar8,(MethodInfo *)0x0);
  uVar7 = il2cpp_init_method_metadata(&MethodInfo_Object_AddBuiltinComponent);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_02,uVar7);
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AddRigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16a70

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__AddRigidbody
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o **ppCVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  undefined8 uVar6;
  System_Exception_o *__this_01;
  System_String_o *message;
  undefined *puVar7;
  
  if (DAT_05702c6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Rigidbody");
    DAT_05702c6a = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapObject_o *)0x0) &&
     (pMVar3 = (pMVar2->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar3->fields).Active + 1) != '\0') {
      uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
      puVar7 = &"AddRigidbody cannot be called on a static MapObject.";
LAB_03e16bc7:
      message = (System_String_o *)il2cpp_init_method_metadata(puVar7);
      System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar6 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRigidbodyBuiltin_AddRigidbody);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar6);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._builtinCache;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar4,"Rigidbody",MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 != '\0') {
        uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
        puVar7 = &"MapObject already has a Rigidbody component.";
        goto LAB_03e16bc7;
      }
      __this_00 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor
                (__this_00,__this,1.0,(System_Nullable_Vector3__o)(ZEXT416(0) << 0x40),0,0,
                 (MethodInfo *)0x0);
      ppCVar1 = &(__this->fields)._rigidBody;
      (__this->fields)._rigidBody = __this_00;
      il2cpp_runtime_glue(ppCVar1,__this_00);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._builtinCache;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar4,"Rigidbody",(Il2CppObject *)*ppCVar1,MethodInfo_Void_set_Item);
        return *ppCVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetBuiltinComponent
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e16bf0

Il2CppObject *
CustomLogic_CustomLogicMapObjectBuiltin__GetBuiltinComponent
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05702c6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Item);
    DAT_05702c6b = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (Il2CppObject *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._builtinCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)name,MethodInfo_BuiltinComponentInstance_get_Item);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$RemoveBuiltinComponent
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e16c80

void CustomLogic_CustomLogicMapObjectBuiltin__RemoveBuiltinComponent
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,System_String_o *name,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinComponentInstance_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this_01;
  
  if (DAT_05702c6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_BuiltinComponentInstance_get_Item);
    il2cpp_init_method_metadata(&"Rigidbody");
    DAT_05702c6c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._builtinCache
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"MapObject does not have a ");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&" component.");
      pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
      uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
      System_Exception___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
      uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_RemoveBuiltinComponent);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar4);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._builtinCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_00 = (CustomLogic_BuiltinComponentInstance_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar1,(Il2CppObject *)name,MethodInfo_BuiltinComponentInstance_get_Item);
      if (__this_00 != (CustomLogic_BuiltinComponentInstance_o *)0x0) {
        CustomLogic_BuiltinComponentInstance__Unload(__this_00,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._builtinCache;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
          bVar2 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            (__this->fields)._rigidBody = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0;
            il2cpp_runtime_glue(&(__this->fields)._rigidBody,0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$ConvertToCSV
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__ConvertToCSV (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16df0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ConvertToCSV
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 in_RDX;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    vtable_dispatch = (pMVar2->klass->vtable)._8_Serialize.methodPtr;
    pSVar3 = (System_String_o *)
             (*vtable_dispatch)
                       (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method,in_RDX,
                        vtable_dispatch);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16e20

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_Rigidbody
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._rigidBody;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16e30

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_NetworkView
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x3e16e40

void CustomLogic_CustomLogicMapObjectBuiltin__set_NetworkView
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererGet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e122e0

void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererGet
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Renderer_array *pUVar2;
  undefined8 uVar3;
  System_Exception_o *__this_00;
  System_String_o *message;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pUVar2 = (pMVar1->fields).renderCache, pUVar2 != (UnityEngine_Renderer_array *)0x0)) {
    if (pUVar2->max_length != 0) {
      return;
    }
    uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
    message = (System_String_o *)il2cpp_init_method_metadata(&"MapObject has no renderer.");
    System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&MethodInfo_Void_AssertRendererGet);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$AssertRendererSet
// il2cpp: void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e123e0

void CustomLogic_CustomLogicMapObjectBuiltin__AssertRendererSet
               (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Renderer_array *pUVar3;
  undefined8 uVar4;
  System_Exception_o *__this_00;
  System_String_o *message;
  undefined *puVar5;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar2->fields).Active + 1) == '\0') {
      pUVar3 = (pMVar1->fields).renderCache;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto LAB_03e1240b;
      if (pUVar3->max_length != 0) {
        return;
      }
      uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
      puVar5 = &"MapObject has no renderer.";
    }
    else {
      uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
      puVar5 = &"Property cannot be set on a static MapObject.";
    }
    message = (System_String_o *)il2cpp_init_method_metadata(puVar5);
    System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_AssertRendererSet);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
LAB_03e1240b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__Equals (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3e16e50

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__Equals
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *in_RAX;
  bool bVar2;
  
  if (DAT_05702c6d == '\0') {
    in_RAX = (Il2CppClass *)il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    DAT_05702c6d = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    bVar2 = (__this->fields).Value == (Map_MapObject_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
      return 0;
    }
    in_RAX = (Il2CppClass *)(__this->fields).Value;
    bVar2 = in_RAX == obj[3].klass;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),bVar2);
}


// CustomLogic.CustomLogicMapObjectBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicMapObjectBuiltin__GetHashCode (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16ed0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__ToString (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16ef0

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__ToString
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  
  if (DAT_05702c6e == '\0') {
    il2cpp_init_method_metadata(&" (MapObject)");
    DAT_05702c6e = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (__this_00 = (UnityEngine_Object_o *)(pMVar1->fields).GameObject,
     __this_00 != (UnityEngine_Object_o *)0x0)) {
    pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(pSVar2," (MapObject)",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16f50

System_String_o *
CustomLogic_CustomLogicMapObjectBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702c6f == '\0') {
    il2cpp_init_method_metadata(&"MapObject");
    DAT_05702c6f = '\x01';
  }
  return "MapObject";
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16f80

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16f90

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_IsStatic
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicMapObjectBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapObjectBuiltin_o* __this, const MethodInfo* method);
// 0x3e16fa0

bool_conflict
CustomLogic_CustomLogicMapObjectBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicMapObjectBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


