// Type: CustomLogic.CustomLogicLightBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicLightBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLightBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLightBuiltin_o* CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59f7600

CustomLogic_CustomLogicLightBuiltin_o *
CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLightBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin);
    Il2CppMethodInitialized_07545df9 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLightBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59f76f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLightBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07545dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"TypeOfLight");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"Intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeSpot");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeHard");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherControlled");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypePoint");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeNone");
    il2cpp_codegen_initialize_runtime_metadata(&"SpotAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowType");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeDirectional");
    Il2CppMethodInitialized_07545dfa = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x67b0f90a) {
    if (uVar2 < 0x3cf8f4e5) {
      if (uVar2 == 0x6bb3b2f) {
        bVar1 = System_String__op_Equality(name,"LightTypeSpot",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2d3acfd4) {
        bVar1 = System_String__op_Equality(name,"TypeOfLight",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3cf8f4e4) {
        bVar1 = System_String__op_Equality(name,"ShadowStrength",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x48a10dd9) {
      if (uVar2 == 0x44ba848f) {
        bVar1 = System_String__op_Equality(name,"ShadowTypeNone",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x48a10dd8) {
        bVar1 = System_String__op_Equality(name,"ShadowTypeHard",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x53b4f9aa) {
      bVar1 = System_String__op_Equality(name,"Intensity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x67b0f909) {
      bVar1 = System_String__op_Equality(name,"WeatherControlled",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd9e6934e) {
    if (uVar2 < 0xa8d979d0) {
      if (uVar2 == 0xa311e772) {
        bVar1 = System_String__op_Equality(name,"Range",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa8d979cf) {
        bVar1 = System_String__op_Equality(name,"LightTypePoint",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xab6315a1) {
      bVar1 = System_String__op_Equality(name,"ShadowTypeSoft",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd9e6934d) {
      bVar1 = System_String__op_Equality(name,"LightTypeDirectional",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe5b43cf9) {
    if (uVar2 == 0xe2c2c340) {
      bVar1 = System_String__op_Equality(name,"SpotAngle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe5b43cf8) {
      bVar1 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf6a210e9) {
    bVar1 = System_String__op_Equality(name,"ShadowType",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf950f202) {
    bVar1 = System_String__op_Equality(name,"BounceIntensity",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLightBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeDirectional
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional (const MethodInfo* method);
// 0x59f7d10

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional
          (MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545dfb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypePoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint (const MethodInfo* method);
// 0x59f7db0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545dfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeSpot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot (const MethodInfo* method);
// 0x59f7e50

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545dfd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeNone
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone (const MethodInfo* method);
// 0x59f7ef0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545dfe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeHard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard (const MethodInfo* method);
// 0x59f7f90

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545dff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeSoft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft (const MethodInfo* method);
// 0x59f8030

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__TypeOfLight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight (const MethodInfo* method);
// 0x59f80d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Range
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range (const MethodInfo* method);
// 0x59f81b0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__SpotAngle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle (const MethodInfo* method);
// 0x59f8290

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e03 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x59f8370

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e04 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Intensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity (const MethodInfo* method);
// 0x59f8450

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e05 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__BounceIntensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity (const MethodInfo* method);
// 0x59f8530

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e06 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType (const MethodInfo* method);
// 0x59f8610

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e07 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowStrength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength (const MethodInfo* method);
// 0x59f86f0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e08 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__WeatherControlled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled (const MethodInfo* method);
// 0x59f87d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_07545e09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59f88b0

void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"TypeOfLight");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"Intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeSpot");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeHard");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherControlled");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypePoint");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeNone");
    il2cpp_codegen_initialize_runtime_metadata(&"SpotAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowType");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeDirectional");
    Il2CppMethodInitialized_07545e0a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypeDirectional",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypePoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypeSpot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeNone",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeHard",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeSoft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TypeOfLight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Range",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpotAngle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Intensity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BounceIntensity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowStrength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WeatherControlled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeDirectional>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8b50

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypePoint>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8b70

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeSpot>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8b90

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeNone>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8bb0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeHard>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8bd0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeSoft>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8bf0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8c10

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_type(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f8c50

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e0b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_type(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8ce0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_range(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f8d30

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e0c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_range(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8dc0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_spotAngle(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f8e10

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e0d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_spotAngle(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8ea0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545df6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      Il2CppMethodInitialized_07545df6 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapLight_o *)0x0) &&
       (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
      color = UnityEngine_Light__get_color(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f8f20

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Utility_Color255_o *__this;
  UnityEngine_Light_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar2;
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_07545e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e0e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if ((((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
      (pCVar2 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this = (pCVar2->fields).Value, __this != (Utility_Color255_o *)0x0)) {
    __this_00 = (pMVar1->fields).Light;
    value = Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f8fc0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) || ((__i->fields).Value == (Map_MapLight_o *)0x0))
  {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f9000

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07545e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e0f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields).MaxIntensity = fVar2;
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f9080

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_bounceIntensity(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f90d0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e10 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_bounceIntensity(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f9160

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_shadows(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f91a0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e11 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_shadows(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f9230

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__get_shadowStrength(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f9280

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e12 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) ||
      (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapLight_o *)0x0)) ||
     (__this = (pMVar1->fields).Light, __this == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_shadowStrength(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x59f9310

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f9340

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e13 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f6f10

void CustomLogic_CustomLogicLightBuiltin___ctor
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, int32_t type, const MethodInfo* method);
// 0x59f6f20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f6fdc: test rbp, rbp
// asm:   0x59f6fdf: jne 0x59f6fed
// asm:   0x59f6fe1: jmp 0x59f7001

void CustomLogic_CustomLogicLightBuiltin___ctor_58f6f20
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner
               ,int32_t type,MethodInfo *method)

{
  Map_MapLight_o **targetAddress;
  Map_MapObject_o *pMVar1;
  UnityEngine_Light_o *pUVar2;
  Map_MapLight_o *pMVar3;
  
  if (Il2CppMethodInitialized_07545df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545df5 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    pUVar2 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar1->fields).GameObject,
                        (MethodInfo_3479500 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Light);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pUVar2,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar1->fields).GameObject;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
      pUVar2 = (UnityEngine_Light_o *)(__this->fields).Component;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if ((pUVar2 != (UnityEngine_Light_o *)0x0) && (pUVar2->klass != TypeInfo_UnityEngine_Light)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
      pMVar3 = Map_MapLoader__RegisterMapLight(pUVar2,type == 1,(MethodInfo *)0x0);
      targetAddress = &(__this->fields).Value;
      (__this->fields).Value = pMVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pMVar3 = (__this->fields).Value;
      if (pMVar3 != (Map_MapLight_o *)0x0) {
        (pMVar3->fields).MaxIntensity = 1.0;
        pUVar2 = (pMVar3->fields).Light;
        if (pUVar2 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_type(pUVar2,type,(MethodInfo *)0x0);
          pMVar3 = *targetAddress;
          if (type == 1) {
            if ((pMVar3 != (Map_MapLight_o *)0x0) &&
               (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
              UnityEngine_Light__set_shadows(pUVar2,2,(MethodInfo *)0x0);
              if ((*targetAddress != (Map_MapLight_o *)0x0) &&
                 (pUVar2 = ((*targetAddress)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                UnityEngine_Light__set_shadowStrength(pUVar2,0.8,(MethodInfo *)0x0);
                if ((*targetAddress != (Map_MapLight_o *)0x0) &&
                   (pUVar2 = ((*targetAddress)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                  UnityEngine_Light__set_shadowBias(pUVar2,0.2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else if ((pMVar3 != (Map_MapLight_o *)0x0) &&
                  (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
            UnityEngine_Light__set_shadows(pUVar2,0,(MethodInfo *)0x0);
            if ((*targetAddress != (Map_MapLight_o *)0x0) &&
               (pUVar2 = ((*targetAddress)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
              UnityEngine_Light__set_renderMode(pUVar2,1,(MethodInfo *)0x0);
              if ((*targetAddress != (Map_MapLight_o *)0x0) &&
                 (pUVar2 = ((*targetAddress)->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                UnityEngine_Light__set_bounceIntensity(pUVar2,0.0,(MethodInfo *)0x0);
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


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeDirectional
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional (const MethodInfo* method);
// 0x59f7130

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypePoint
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint (const MethodInfo* method);
// 0x59f7140

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeSpot
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot (const MethodInfo* method);
// 0x59f7150

int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeNone
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone (const MethodInfo* method);
// 0x59f7160

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeHard
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard (const MethodInfo* method);
// 0x59f7170

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeSoft
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft (const MethodInfo* method);
// 0x59f7180

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_TypeOfLight
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7190

int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = UnityEngine_Light__get_type(__this_00,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_TypeOfLight
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f71b0

void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_type(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_Range
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f71d0

float CustomLogic_CustomLogicLightBuiltin__get_Range
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Light__get_range(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_Range
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f71f0

void CustomLogic_CustomLogicLightBuiltin__set_Range
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_range(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_SpotAngle
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7210

float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Light__get_spotAngle(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_SpotAngle
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f7230

void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_spotAngle(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLightBuiltin__get_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7250

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLightBuiltin__get_Color
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07545df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_07545df6 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  color = UnityEngine_Light__get_color(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_01,color,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x59f72d0

void CustomLogic_CustomLogicLightBuiltin__set_Color
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value,
               MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Utility_Color255_o *__this_00;
  UnityEngine_Light_o *__this_01;
  UnityEngine_Color_o value_00;
  
  pMVar1 = (__this->fields).Value;
  if (((pMVar1 != (Map_MapLight_o *)0x0) && (value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (pMVar1->fields).Light;
    value_00 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_color(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Intensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7310

float CustomLogic_CustomLogicLightBuiltin__get_Intensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapLight_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).MaxIntensity;
}


// CustomLogic.CustomLogicLightBuiltin$$set_Intensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f7330

void CustomLogic_CustomLogicLightBuiltin__set_Intensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapLight_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields).MaxIntensity = value;
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_BounceIntensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7350

float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Light__get_bounceIntensity(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_BounceIntensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f7370

void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_bounceIntensity(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowType
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7390

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = UnityEngine_Light__get_shadows(__this_00,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowType
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f73b0

void CustomLogic_CustomLogicLightBuiltin__set_ShadowType
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_shadows(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowStrength
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f73d0

float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Light__get_shadowStrength(__this_00,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowStrength
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f73f0

void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 == (Map_MapLight_o *)0x0) ||
     (__this_00 = (pMVar1->fields).Light, __this_00 == (UnityEngine_Light_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_shadowStrength(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$get_WeatherControlled
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f7410

bool CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._weatherControlled;
}


// CustomLogic.CustomLogicLightBuiltin$$set_WeatherControlled
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f7420

void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
               (CustomLogic_CustomLogicLightBuiltin_o *__this,bool value,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Map_MapLight_o *pMVar4;
  System_Collections_Generic_List_Light__o *pSVar5;
  UnityEngine_Light_o *item;
  UnityEngine_Light_array *pUVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  
  if (Il2CppMethodInitialized_07545df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545df7 = '\x01';
  }
  (__this->fields)._weatherControlled = value;
  uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  if (value) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar4 = (__this->fields).Value;
    if ((pMVar4 != (Map_MapLight_o *)0x0) &&
       (pSVar5 = TypeInfo_Map_MapLoader->static_fields->Daylight,
       pSVar5 != (System_Collections_Generic_List_Light__o *)0x0)) {
      bVar8 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         (Il2CppObject *)(pMVar4->fields).Light,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_Light_Contains);
      if (bVar8) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar7 = MethodInfo_System_Collections_Generic_List_Light_Add;
      pMVar4 = (__this->fields).Value;
      if ((pMVar4 != (Map_MapLight_o *)0x0) &&
         (pSVar5 = TypeInfo_Map_MapLoader->static_fields->Daylight,
         pSVar5 != (System_Collections_Generic_List_Light__o *)0x0)) {
        item = (pMVar4->fields).Light;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar5->fields)._items;
        if (pUVar6 != (UnityEngine_Light_array *)0x0) {
          uVar3 = (pSVar5->fields)._size;
          if (uVar3 < (uint)pUVar6->max_length) {
            (pSVar5->fields)._size = uVar3 + 1;
            pUVar6->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  else {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar4 = (__this->fields).Value;
    if ((pMVar4 != (Map_MapLight_o *)0x0) &&
       (pSVar5 = TypeInfo_Map_MapLoader->static_fields->Daylight,
       pSVar5 != (System_Collections_Generic_List_Light__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)(pMVar4->fields).Light,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_Light_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLightBuiltin__get_ClassName (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f75a0

System_String_o *
CustomLogic_CustomLogicLightBuiltin__get_ClassName
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LightBuiltin");
    Il2CppMethodInitialized_07545df8 = '\x01';
  }
  return "LightBuiltin";
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsAbstract (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f75d0

bool CustomLogic_CustomLogicLightBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsStatic (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f75e0

bool CustomLogic_CustomLogicLightBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLightBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x59f75f0

bool CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


