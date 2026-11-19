// Type: CustomLogic.CustomLogicPrefabBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrefabBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPrefabBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a3c710

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool clearComponents;
  System_String_o *pSVar2;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_RCX;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_07546162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    Il2CppMethodInitialized_07546162 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    CustomLogic_CustomLogicPrefabBuiltin___ctor(__this,method);
  }
  else {
    if ((int)args->max_length != 2) {
      NullCheck(args);
      pSVar2 = System_Int32__ToString(&local_24,(MethodInfo *)0x0);
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPrefabBuiltin constructor found that takes ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      pSVar2 = System_String__Concat_5301f10(str0,pSVar2,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar2,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)args->max_length < 2) {
      clearComponents = false;
    }
    else {
      pIVar1 = args->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      clearComponents =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (pIVar1,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    CustomLogic_CustomLogicPrefabBuiltin___ctor_593bd60(__this,pSVar2,clearComponents,in_RCX);
  }
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a3e7c0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754617e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754617e = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a3e830

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearComponents>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0 (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPrefabBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a3e840

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0
          (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPrefabBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__c,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a3c8b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPrefabBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetType");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearComponents");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_07546163 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x28528e12) {
    if (uVar2 < 0x18a43c5c) {
      if (uVar2 == 0x232777f) {
        bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xfe07306) {
        bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x18a43c5b) {
        bVar1 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x1f89134f) {
      bVar1 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x23922d03) {
      bVar1 = System_String__op_Equality(name,"AssetType",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x28528e11) {
      bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x6f79efb7) {
    if (uVar2 == 0x384cf68a) {
      bVar1 = System_String__op_Equality(name,"CollideMode",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x592a4941) {
      bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6f79efb6) {
      bVar1 = System_String__op_Equality(name,"ClearComponents",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x94e7d8c2) {
    if (uVar2 == 0x829f123b) {
      bVar1 = System_String__op_Equality(name,"Asset",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x94e7d8c1) {
      bVar1 = System_String__op_Equality(name,"CollideWith",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xa3dd2697) {
    bVar1 = System_String__op_Equality(name,"PhysicsMaterial",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe27f342a) {
    bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPrefabBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__AssetType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType (const MethodInfo* method);
// 0x5a3ce70

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546164 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Asset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset (const MethodInfo* method);
// 0x5a3cf50

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546165 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x5a3d030

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546166 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x5a3d110

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546167 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x5a3d1f0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546168 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x5a3d2d0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_07546169 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a3d3b0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5a3d490

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x5a3d570

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode (const MethodInfo* method);
// 0x5a3d650

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideWith
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith (const MethodInfo* method);
// 0x5a3d730

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__PhysicsMaterial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial (const MethodInfo* method);
// 0x5a3d810

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754616f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_0754616f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreateMethodBinding__ClearComponents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents (const MethodInfo* method);
// 0x5a3d8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a3d925: jmp 0x5a3d995

CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPrefabBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546170 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicPrefabBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a3da30

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetType");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"PersistsOwnership");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearComponents");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_07546171 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PersistsOwnership",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AssetType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Asset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Active",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Static",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Visible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollideMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollideWith",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PhysicsMaterial",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearComponents",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3dcb0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).Type;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3dcd0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546172 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Type = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Type);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3dd90

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).Asset;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3ddb0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546173 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Asset = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Asset);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3de70

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3deb0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546174 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Active = bVar2;
    pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3df60

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3dfa0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546175 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Static = bVar2;
    pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e050

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     ((__i->fields).Value == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e090

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546176 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Visible = bVar2;
    pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e140

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).Name;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e160

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546177 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Name = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Name);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e220

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_0754615d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_0754615d = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e2a0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546178 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPrefabBuiltin__set_Position(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e320

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_0754615e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_0754615e = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e3a0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546179 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPrefabBuiltin__set_Rotation(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e420

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_0754615f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_0754615f = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e4a0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754617a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754617a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPrefabBuiltin__set_Scale(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e520

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).CollideMode;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e540

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754617b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754617b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideMode = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideMode);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e600

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).CollideWith;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e620

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754617c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754617c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideWith = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideWith);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x5a3e6e0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields).Value, pMVar1 == (Map_MapScriptSceneObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields).PhysicsMaterial;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3e700

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754617d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754617d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).PhysicsMaterial = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).PhysicsMaterial);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3bcd0

void CustomLogic_CustomLogicPrefabBuiltin___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  
  if (Il2CppMethodInitialized_0754615b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_0754615b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* prefabCSV, bool clearComponents, const MethodInfo* method);
// 0x5a3bd60

void CustomLogic_CustomLogicPrefabBuiltin___ctor_593bd60
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *prefabCSV,bool clearComponents
               ,MethodInfo *method)

{
  System_String_array *value;
  MethodInfo *method_00;
  Map_MapScriptSceneObject_o *pMVar1;
  
  if (Il2CppMethodInitialized_0754615c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754615c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (prefabCSV != (System_String_o *)0x0) {
    value = System_String__Split(prefabCSV,10,0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Join("",value,(MethodInfo *)0x0);
    pMVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar1,(MethodInfo *)0x0);
    (__this->fields).Value = pMVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,(System_String_o *)method_00,(pMVar1->klass->vtable)._9_Deserialize.method);
      if (clearComponents) {
        CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__this,method_00);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_AssetType
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3bf10

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_AssetType
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Type;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_AssetType
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3bf30

void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Type = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Type);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Asset
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3bfe0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Asset
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Asset;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Asset
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3c000

void CustomLogic_CustomLogicPrefabBuiltin__set_Asset
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Asset = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Asset);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c060

bool CustomLogic_CustomLogicPrefabBuiltin__get_Active
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Active;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a3c080

void CustomLogic_CustomLogicPrefabBuiltin__set_Active
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Active = value;
    pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c0d0

bool CustomLogic_CustomLogicPrefabBuiltin__get_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Static;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Static
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a3c0f0

void CustomLogic_CustomLogicPrefabBuiltin__set_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Static = value;
    pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Visible
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c140

bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Visible;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Visible
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a3c160

void CustomLogic_CustomLogicPrefabBuiltin__set_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Visible = value;
    pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c1b0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Name
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Name;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3c1d0

void CustomLogic_CustomLogicPrefabBuiltin__set_Name
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Name = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Name);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c230

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Position
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754615d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754615d = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a3c2b0

void CustomLogic_CustomLogicPrefabBuiltin__set_Position
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(value->fields).Value.fields,
               (MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c320

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Rotation
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754615e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754615e = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a3c3a0

void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(value->fields).Value.fields,
               (MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c410

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Scale
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754615f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_0754615f = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a3c490

void CustomLogic_CustomLogicPrefabBuiltin__set_Scale
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(value->fields).Value.fields,
               (MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideMode
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c500

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).CollideMode;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideMode
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3c520

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideMode = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideMode);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideWith
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c580

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).CollideWith;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideWith
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3c5a0

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideWith = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideWith);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_PhysicsMaterial
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c600

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).PhysicsMaterial;
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_PhysicsMaterial
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a3c620

void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).PhysicsMaterial = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).PhysicsMaterial);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$ClearComponents
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3be70

void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_MapScriptComponent__o *pSVar2;
  System_String_o *pSVar3;
  Map_MapScriptSceneObject_o *pMVar4;
  
  if (Il2CppMethodInitialized_07546160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_Clear);
    Il2CppMethodInitialized_07546160 = '\x01';
  }
  pMVar4 = (__this->fields).Value;
  if ((pMVar4 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pSVar2 = (pMVar4->fields).Components,
     pSVar2 != (System_Collections_Generic_List_MapScriptComponent__o *)0x0)) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      pMVar4 = (__this->fields).Value;
      if (pMVar4 == (Map_MapScriptSceneObject_o *)0x0) goto label_05a3befd;
    }
    pSVar3 = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
    pMVar4 = (__this->fields).Value;
    if (pMVar4 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar4->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar4,pSVar3,(pMVar4->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
label_05a3befd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$Refresh
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__Refresh (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3bf90

void CustomLogic_CustomLogicPrefabBuiltin__Refresh
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin____Str__ (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c680

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin____Str__
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                     (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
  return pSVar2;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_ClassName (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c6b0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_ClassName
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefab");
    Il2CppMethodInitialized_07546161 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c6e0

bool CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c6f0

bool CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x5a3c700

bool CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


