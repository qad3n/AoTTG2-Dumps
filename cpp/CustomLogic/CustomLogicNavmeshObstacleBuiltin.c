// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNavmeshObstacleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a011e0

CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
    Il2CppMethodInitialized_07545e7b = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNavmeshObstacleBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a02820

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e90 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a02890

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$<__CreateMethodBinding__AutoScale>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a028a0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale(__c,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a012d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeCapsule");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Carving");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CarveOnlyStationary");
    il2cpp_codegen_initialize_runtime_metadata(&"Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_07545e7c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x4380ddc7) {
    if (uVar2 < 0x1bd13563) {
      if (uVar2 == 0xfd70833) {
        bVar1 = System_String__op_Equality(name,"ShapeBox",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1bd13562) {
        bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x28528e11) {
      bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3a8111d3) {
      bVar1 = System_String__op_Equality(name,"Radius",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x4380ddc6) {
      bVar1 = System_String__op_Equality(name,"Shape",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x4b9fbea5) {
    if (uVar2 == 0x48479f2b) {
      bVar1 = System_String__op_Equality(name,"Carving",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x4b9fbea4) {
      bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x83a1c814) {
    bVar1 = System_String__op_Equality(name,"AutoScale",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf50bdc61) {
    bVar1 = System_String__op_Equality(name,"ShapeCapsule",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0x7a0c4e3c) {
    bVar1 = System_String__op_Equality(name,"CarveOnlyStationary",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNavmeshObstacleBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeBox
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox (const MethodInfo* method);
// 0x5a01790

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e7d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeCapsule
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule (const MethodInfo* method);
// 0x5a01830

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
          (MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e7e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Radius
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius (const MethodInfo* method);
// 0x5a018d0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e7f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x5a019b0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e80 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x5a01a90

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e81 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x5a01b70

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e82 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Carving
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving (const MethodInfo* method);
// 0x5a01c50

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e83 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__CarveOnlyStationary
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary (const MethodInfo* method);
// 0x5a01d30

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
          (MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_71c0a00
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e84 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_71c0a00
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Shape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape (const MethodInfo* method);
// 0x5a01e10

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_07545e85 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreateMethodBinding__AutoScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale (const MethodInfo* method);
// 0x5a01ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a01f25: jmp 0x5a01f95

CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNavmeshObstacleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545e86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
    ;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
    ;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c)->static_fields
    ;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicNavmeshObstacleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin
                        );
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a02030

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeCapsule");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Carving");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CarveOnlyStationary");
    il2cpp_codegen_initialize_runtime_metadata(&"Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_07545e87 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShapeBox",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShapeCapsule",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Radius",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Height",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Carving",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CarveOnlyStationary",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shape",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AutoScale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeBox>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02230

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeCapsule>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02250

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02270

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__get_radius(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a022b0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e88 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_radius(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02330

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__get_height(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a02370

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e89 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_height(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a023f0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545e77 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545e77 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      value = UnityEngine_AI_NavMeshObstacle__get_size(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a02470

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e8a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_size
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02500

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_07545e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545e8b = '\x01';
  }
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_18 = UnityEngine_AI_NavMeshObstacle__get_center(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_18);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a02560

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Vector3)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e8c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_
                    (__v,(MethodInfo_34BE1C0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Vector3);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_center(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a025e0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_AI_NavMeshObstacle__get_carving(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a02620

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e8d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_carving(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a026a0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a026e0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e8e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x5a02760

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__get_shape(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a027a0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07545e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e8f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_shape(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00380

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x5a00390

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor_5900390
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_AI_NavMeshObstacle_c *pUVar3;
  UnityEngine_AI_NavMeshObstacle_o *component;
  
  if (Il2CppMethodInitialized_07545e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_NavMeshObstacle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AI_NavMeshObstacle);
    Il2CppMethodInitialized_07545e76 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    component = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar1->fields).GameObject,
                           (MethodInfo_3479500 *)
                           MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_NavMeshObstacle);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)component,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar1->fields).GameObject;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
      pUVar3 = TypeInfo_UnityEngine_AI_NavMeshObstacle;
      pUVar2 = (__this->fields).Component;
      if (pUVar2 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
      }
      else if (((UnityEngine_AI_NavMeshObstacle_c *)pUVar2->klass != TypeInfo_UnityEngine_AI_NavMeshObstacle)
              || ((__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)pUVar2,
                 (UnityEngine_AI_NavMeshObstacle_c *)pUVar2->klass != pUVar3)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pUVar3);
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeBox
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox (const MethodInfo* method);
// 0x5a00470

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeCapsule
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule (const MethodInfo* method);
// 0x5a00480

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Radius
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00490

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AI_NavMeshObstacle__get_radius(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Radius
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a004b0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_radius(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Height
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a004d0

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AI_NavMeshObstacle__get_height(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Height
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a004f0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_height(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00510

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545e77 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_AI_NavMeshObstacle__get_size(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a00590

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_size
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Center
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a005c0

UnityEngine_Vector3_o
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)UnityEngine_AI_NavMeshObstacle__get_center(__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Center
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5a005e0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_center(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Carving
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00600

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_AI_NavMeshObstacle__get_carving(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Carving
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a00620

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_carving(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_CarveOnlyStationary
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00640

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_CarveOnlyStationary
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a00660

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Shape
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a00680

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape
                  (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_AI_NavMeshObstacle__get_shape(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Shape
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a006a0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AI_NavMeshObstacle__set_shape(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$AutoScale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a006c0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_Collider_array *pUVar4;
  UnityEngine_Collider_o *collider;
  UnityEngine_AI_NavMeshObstacle_o *pUVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  UnityEngine_Bounds_o bounds;
  UnityEngine_Matrix4x4_o matrix;
  bool bVar10;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCVar11;
  bool bVar12;
  UnityEngine_Transform_o *pUVar13;
  ulong uVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar15;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  float local_250;
  float local_24c;
  UnityEngine_Bounds_o local_248;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [12];
  float fStack_20c;
  UnityEngine_Matrix4x4_o local_208;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07545e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545e78 = '\x01';
  }
  local_248.fields.m_Center.fields.x = 0.0;
  local_248.fields.m_Center.fields.y = 0.0;
  local_248.fields.m_Center.fields.z = 0.0;
  local_248.fields.m_Extents.fields.x = 0.0;
  local_248.fields.m_Extents.fields.y = 0.0;
  local_248.fields.m_Extents.fields.z = 0.0;
  __this_00 = (__this->fields).Owner;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar13 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar13 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__get_worldToLocalMatrix(&local_208,pUVar13,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).OwnerMapObject;
    if ((pCVar2 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
       ((pMVar3 = (pCVar2->fields).Value, pMVar3 != (Map_MapObject_o *)0x0 &&
        (pUVar4 = (pMVar3->fields).colliderCache, pUVar4 != (UnityEngine_Collider_array *)0x0)))) {
      local_1c0 = __this;
      if ((int)pUVar4->max_length < 1) {
        local_218._0_4_ = 0.0;
        local_218._4_4_ = 0.0;
        stack0xfffffffffffffdf0 = 0;
        local_24c = 0.0;
        bVar10 = false;
        local_250 = 0.0;
        local_228 = 0;
        uStack_220 = 0;
      }
      else {
        local_1a8 = CONCAT44(local_208.fields.m10,local_208.fields.m00);
        uStack_1a0 = CONCAT44(local_208.fields.m30,local_208.fields.m20);
        local_a8 = CONCAT44(local_208.fields.m11,local_208.fields.m01);
        uStack_a0 = CONCAT44(local_208.fields.m31,local_208.fields.m21);
        local_1b8 = CONCAT44(local_208.fields.m12,local_208.fields.m02);
        uStack_1b0 = CONCAT44(local_208.fields.m32,local_208.fields.m22);
        local_b8 = CONCAT44(local_208.fields.m13,local_208.fields.m03);
        uStack_b0 = CONCAT44(local_208.fields.m33,local_208.fields.m23);
        uVar14 = pUVar4->max_length & 0xffffffff;
        local_250 = 0.0;
        local_218._0_4_ = 0.0;
        local_218._4_4_ = 0.0;
        stack0xfffffffffffffdf0 = 0;
        bVar10 = false;
        local_24c = 0.0;
        uVar16 = 0;
        local_228 = 0;
        uStack_220 = 0;
        pMVar15 = extraout_RDX;
        do {
          if (uVar14 <= uVar16) {
            ThrowIndexOutOfRangeException();
          }
          collider = pUVar4->m_Items[uVar16];
          bVar12 = CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds
                             (collider,&local_248,pMVar15);
          pMVar15 = extraout_RDX_00;
          if (bVar12) {
            if ((collider == (UnityEngine_Collider_o *)0x0) ||
               (pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
               pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05a00d34;
            UnityEngine_Transform__get_localToWorldMatrix(&local_208,pUVar13,(MethodInfo *)0x0);
            local_98 = local_208.fields.m01;
            local_88 = local_208.fields.m03;
            fVar17 = local_208.fields.m10;
            fVar22 = local_208.fields.m12;
            fVar24 = local_208.fields.m20;
            fVar20 = local_208.fields.m11;
            fVar21 = local_208.fields.m13;
            fVar27 = local_208.fields.m33;
            fVar29 = local_208.fields.m02;
            fVar30 = local_208.fields.m23;
            fVar31 = local_208.fields.m30;
            fVar32 = local_208.fields.m22;
            fVar33 = local_208.fields.m31;
            fVar34 = local_208.fields.m32;
            fVar23 = local_208.fields.m00;
            fVar26 = local_208.fields.m21;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              local_c8 = local_208.fields.m30;
              fStack_c4 = local_208.fields.m01;
              fStack_c0 = local_208.fields.m11;
              fStack_bc = local_208.fields.m21;
              local_d8 = local_208.fields.m31;
              fStack_d4 = local_208.fields.m02;
              fStack_d0 = local_208.fields.m12;
              fStack_cc = local_208.fields.m22;
              local_e8 = local_208.fields.m32;
              fStack_e4 = local_208.fields.m03;
              fStack_e0 = local_208.fields.m13;
              fStack_dc = local_208.fields.m23;
              local_f8 = ZEXT416((uint)local_208.fields.m33);
              local_108 = ZEXT416((uint)local_208.fields.m23);
              local_118 = ZEXT416((uint)local_208.fields.m13);
              local_128 = local_208.fields.m22;
              fStack_124 = local_208.fields.m32;
              fStack_120 = local_208.fields.m03;
              fStack_11c = local_208.fields.m13;
              local_138 = local_208.fields.m12;
              fStack_134 = local_208.fields.m22;
              fStack_130 = local_208.fields.m32;
              fStack_12c = local_208.fields.m03;
              local_148 = local_208.fields.m02;
              fStack_144 = local_208.fields.m12;
              fStack_140 = local_208.fields.m22;
              fStack_13c = local_208.fields.m32;
              local_158 = local_208.fields.m21;
              fStack_154 = local_208.fields.m31;
              fStack_150 = local_208.fields.m02;
              fStack_14c = local_208.fields.m12;
              local_168 = local_208.fields.m11;
              fStack_164 = local_208.fields.m21;
              fStack_160 = local_208.fields.m31;
              fStack_15c = local_208.fields.m02;
              local_178 = local_208.fields.m20;
              fStack_174 = local_208.fields.m30;
              fStack_170 = local_208.fields.m01;
              fStack_16c = local_208.fields.m11;
              local_188 = local_208.fields.m10;
              fStack_184 = local_208.fields.m20;
              fStack_180 = local_208.fields.m30;
              fStack_17c = local_208.fields.m01;
              local_198 = local_208.fields.m00;
              fStack_194 = local_208.fields.m10;
              fStack_190 = local_208.fields.m20;
              fStack_18c = local_208.fields.m30;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              fVar17 = local_188;
              fVar22 = local_138;
              fVar24 = local_178;
              fVar20 = local_168;
              fVar21 = (float)local_118._0_4_;
              fVar27 = (float)local_f8._0_4_;
              fVar29 = local_148;
              fVar30 = (float)local_108._0_4_;
              fVar31 = local_c8;
              fVar32 = local_128;
              fVar33 = local_d8;
              fVar34 = local_e8;
              fVar23 = local_198;
              fVar26 = local_158;
            }
            local_78 = fVar31 * (float)local_b8 +
                       fVar24 * (float)local_1b8 + fVar17 * (float)local_a8 + fVar23 * (float)local_1a8;
            fStack_74 = fVar31 * local_b8._4_4_ +
                        fVar24 * local_1b8._4_4_ + fVar17 * local_a8._4_4_ + fVar23 * local_1a8._4_4_;
            fStack_70 = fVar31 * (float)uStack_b0 +
                        fVar24 * (float)uStack_1b0 + fVar17 * (float)uStack_a0 + fVar23 * (float)uStack_1a0;
            fStack_6c = fVar31 * uStack_b0._4_4_ +
                        fVar24 * uStack_1b0._4_4_ + fVar17 * uStack_a0._4_4_ + fVar23 * uStack_1a0._4_4_;
            local_68 = fVar33 * (float)local_b8 +
                       fVar26 * (float)local_1b8 + fVar20 * (float)local_a8 + local_98 * (float)local_1a8;
            fStack_64 = fVar33 * local_b8._4_4_ +
                        fVar26 * local_1b8._4_4_ + fVar20 * local_a8._4_4_ + local_98 * local_1a8._4_4_;
            fStack_60 = fVar33 * (float)uStack_b0 +
                        fVar26 * (float)uStack_1b0 + fVar20 * (float)uStack_a0 + local_98 * (float)uStack_1a0;
            fStack_5c = fVar33 * uStack_b0._4_4_ +
                        fVar26 * uStack_1b0._4_4_ + fVar20 * uStack_a0._4_4_ + local_98 * uStack_1a0._4_4_;
            local_58 = fVar34 * (float)local_b8 +
                       fVar32 * (float)local_1b8 + fVar22 * (float)local_a8 + fVar29 * (float)local_1a8;
            fStack_54 = fVar34 * local_b8._4_4_ +
                        fVar32 * local_1b8._4_4_ + fVar22 * local_a8._4_4_ + fVar29 * local_1a8._4_4_;
            fStack_50 = fVar34 * (float)uStack_b0 +
                        fVar32 * (float)uStack_1b0 + fVar22 * (float)uStack_a0 + fVar29 * (float)uStack_1a0;
            fStack_4c = fVar34 * uStack_b0._4_4_ +
                        fVar32 * uStack_1b0._4_4_ + fVar22 * uStack_a0._4_4_ + fVar29 * uStack_1a0._4_4_;
            local_48 = fVar27 * (float)local_b8 +
                       fVar30 * (float)local_1b8 + fVar21 * (float)local_a8 + local_88 * (float)local_1a8;
            fStack_44 = fVar27 * local_b8._4_4_ +
                        fVar30 * local_1b8._4_4_ + fVar21 * local_a8._4_4_ + local_88 * local_1a8._4_4_;
            fStack_40 = fVar27 * (float)uStack_b0 +
                        fVar30 * (float)uStack_1b0 + fVar21 * (float)uStack_a0 + local_88 * (float)uStack_1a0;
            fStack_3c = fVar27 * uStack_b0._4_4_ +
                        fVar30 * uStack_1b0._4_4_ + fVar21 * uStack_a0._4_4_ + local_88 * uStack_1a0._4_4_;
            matrix.fields.m10 = fStack_74;
            matrix.fields.m00 = local_78;
            matrix.fields.m30 = fStack_6c;
            matrix.fields.m20 = fStack_70;
            matrix.fields.m11 = fStack_64;
            matrix.fields.m01 = local_68;
            matrix.fields.m31 = fStack_5c;
            matrix.fields.m21 = fStack_60;
            matrix.fields.m12 = fStack_54;
            matrix.fields.m02 = local_58;
            matrix.fields.m32 = fStack_4c;
            matrix.fields.m22 = fStack_50;
            bounds.fields.m_Extents.fields.z = local_248.fields.m_Extents.fields.z;
            bounds.fields.m_Extents.fields.y = local_248.fields.m_Extents.fields.y;
            bounds.fields.m_Extents.fields.x = local_248.fields.m_Extents.fields.x;
            bounds.fields.m_Center.fields.z = local_248.fields.m_Center.fields.z;
            bounds.fields.m_Center.fields.x = local_248.fields.m_Center.fields.x;
            bounds.fields.m_Center.fields.y = local_248.fields.m_Center.fields.y;
            matrix.fields.m03 = local_48;
            matrix.fields.m13 = fStack_44;
            matrix.fields.m23 = fStack_40;
            matrix.fields.m33 = fStack_3c;
            Utility_Util__TransformBounds((UnityEngine_Bounds_o *)&local_208,bounds,matrix,(MethodInfo *)0x0);
            local_248.fields.m_Extents.fields.y = local_208.fields.m01;
            local_248.fields.m_Extents.fields.z = local_208.fields.m11;
            local_248.fields.m_Center.fields.y = local_208.fields.m10;
            local_248.fields.m_Center.fields.x = local_208.fields.m00;
            local_248.fields.m_Center.fields.z = local_208.fields.m20;
            local_248.fields.m_Extents.fields.x = local_208.fields.m30;
            pMVar15 = extraout_RDX_01;
            if (bVar10) {
              fVar24 = local_208.fields.m20 - local_208.fields.m11;
              fVar22 = local_208.fields.m20 + local_208.fields.m11;
              auVar18._0_4_ = (float)local_218._0_4_ - (float)local_228;
              auVar18._4_4_ = (float)local_218._4_4_ - local_228._4_4_;
              auVar18._8_4_ = (float)local_218._8_4_ - (float)uStack_220;
              auVar18._12_4_ = fStack_20c - uStack_220._4_4_;
              fVar17 = local_24c - local_250;
              if (fVar24 <= local_24c - local_250) {
                fVar17 = fVar24;
              }
              auVar28._0_4_ = (float)local_218._0_4_ + (float)local_228;
              auVar28._4_4_ = (float)local_218._4_4_ + local_228._4_4_;
              auVar28._8_4_ = (float)local_218._8_4_ + (float)uStack_220;
              auVar28._12_4_ = fStack_20c + uStack_220._4_4_;
              fVar20 = local_250 + local_24c;
              if (local_250 + local_24c <= fVar24) {
                fVar20 = fVar24;
              }
              fVar24 = (fVar20 - fVar17) * 0.5;
              local_24c = (fVar17 + fVar24) - fVar24;
              if (fVar22 <= local_24c) {
                local_24c = fVar22;
              }
              fVar24 = fVar17 + fVar24 + fVar24;
              if (fVar24 <= fVar22) {
                fVar24 = fVar22;
              }
              auVar8._4_4_ = local_208.fields.m10 - local_208.fields.m01;
              auVar8._0_4_ = local_208.fields.m00 - local_208.fields.m30;
              auVar8._8_8_ = 0;
              auVar18 = minps(auVar18,auVar8);
              auVar9._4_4_ = local_208.fields.m10 - local_208.fields.m01;
              auVar9._0_4_ = local_208.fields.m00 - local_208.fields.m30;
              auVar9._8_8_ = 0;
              auVar28 = maxps(auVar28,auVar9);
              fVar27 = (auVar28._0_4_ - auVar18._0_4_) * 0.5;
              fVar29 = (auVar28._4_4_ - auVar18._4_4_) * 0.5;
              fVar30 = (auVar28._8_4_ - auVar18._8_4_) * 0.0;
              fVar31 = (auVar28._12_4_ - auVar18._12_4_) * 0.0;
              fVar17 = auVar18._0_4_ + fVar27;
              fVar22 = auVar18._4_4_ + fVar29;
              fVar20 = auVar18._8_4_ + fVar30;
              fVar21 = auVar18._12_4_ + fVar31;
              auVar25._0_4_ = fVar17 - fVar27;
              auVar25._4_4_ = fVar22 - fVar29;
              auVar25._8_4_ = fVar20 - fVar30;
              auVar25._12_4_ = fVar21 - fVar31;
              auVar6._4_4_ = local_208.fields.m10 + local_208.fields.m01;
              auVar6._0_4_ = local_208.fields.m00 + local_208.fields.m30;
              auVar6._8_8_ = 0;
              auVar28 = minps(auVar25,auVar6);
              auVar19._0_4_ = fVar17 + fVar27;
              auVar19._4_4_ = fVar22 + fVar29;
              auVar19._8_4_ = fVar20 + fVar30;
              auVar19._12_4_ = fVar21 + fVar31;
              auVar7._4_4_ = local_208.fields.m10 + local_208.fields.m01;
              auVar7._0_4_ = local_208.fields.m00 + local_208.fields.m30;
              auVar7._8_8_ = 0;
              auVar18 = maxps(auVar19,auVar7);
              fVar17 = (auVar18._0_4_ - auVar28._0_4_) * 0.5;
              fVar22 = (auVar18._4_4_ - auVar28._4_4_) * 0.5;
              fVar20 = (auVar18._8_4_ - auVar28._8_4_) * 0.0;
              fVar21 = (auVar18._12_4_ - auVar28._12_4_) * 0.0;
              local_250 = (fVar24 - local_24c) * 0.5;
              local_24c = local_24c + local_250;
              local_218._4_4_ = auVar28._4_4_ + fVar22;
              local_218._0_4_ = auVar28._0_4_ + fVar17;
              stack0xfffffffffffffdf0 = CONCAT44(auVar28._12_4_ + fVar21,auVar28._8_4_ + fVar20);
              local_228 = CONCAT44(fVar22,fVar17);
              uStack_220 = CONCAT44(fVar21,fVar20);
            }
            else {
              stack0xfffffffffffffdf0 = 0;
              local_24c = local_208.fields.m20;
              local_228 = CONCAT44(local_208.fields.m01,local_208.fields.m30);
              uStack_220 = 0;
              bVar10 = true;
              local_250 = local_208.fields.m11;
              local_218._0_8_ = local_248.fields.m_Center.fields._0_8_;
            }
          }
          uVar16 = uVar16 + 1;
          uVar1 = (uint)pUVar4->max_length;
          uVar14 = (ulong)uVar1;
        } while ((long)uVar16 < (long)(int)uVar1);
      }
      pCVar11 = local_1c0;
      if (!bVar10) {
        return;
      }
      pUVar5 = (local_1c0->fields).Value;
      if (pUVar5 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
        UnityEngine_AI_NavMeshObstacle__set_shape(pUVar5,1,(MethodInfo *)0x0);
        pUVar5 = (pCVar11->fields).Value;
        if (pUVar5 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          value.fields.z = local_250 + local_250;
          value.fields.x = (float)local_228 + (float)local_228;
          value.fields.y = local_228._4_4_ + local_228._4_4_;
          UnityEngine_AI_NavMeshObstacle__set_size(pUVar5,value,(MethodInfo *)0x0);
          pUVar5 = (pCVar11->fields).Value;
          if (pUVar5 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.z = local_24c;
            value_00.fields.x = (float)local_218._0_4_;
            value_00.fields.y = (float)local_218._4_4_;
            UnityEngine_AI_NavMeshObstacle__set_center(pUVar5,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05a00d34:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$TryGetColliderBounds
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds (UnityEngine_Collider_o* collider, UnityEngine_Bounds_o* bounds, const MethodInfo* method);
// 0x5a00d40

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds
               (UnityEngine_Collider_o *collider,UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_Collider_c *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *__this;
  Il2CppClass *pIVar8;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *pSVar9;
  MethodInfo *lastManagedFrame;
  float *pfVar10;
  float *pfVar11;
  MethodInfo **metadataPointer;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar13;
  float local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_5c;
  undefined1 local_58 [16];
  UnityEngine_Bounds_o local_40;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07545e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_07545e79 = '\x01';
  }
  if (collider == (UnityEngine_Collider_o *)0x0) {
label_05a00eb7:
    (bounds->fields).m_Center.fields.x = 0.0;
    (bounds->fields).m_Center.fields.y = 0.0;
    *(undefined8 *)&(bounds->fields).m_Center.fields.z = 0;
    (bounds->fields).m_Extents.fields.y = 0.0;
    (bounds->fields).m_Extents.fields.z = 0.0;
    bVar5 = false;
  }
  else {
    pUVar3 = collider->klass;
    bVar1 = (pUVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
      bVar2 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider))
      {
        bVar2 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          bVar2 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
          if ((bVar2 <= bVar1) &&
             ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider
             )) {
            x = (UnityEngine_Object_o *)
                UnityEngine_MeshCollider__get_sharedMesh
                          ((UnityEngine_MeshCollider_o *)collider,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              __this = UnityEngine_MeshCollider__get_sharedMesh
                                 ((UnityEngine_MeshCollider_o *)collider,(MethodInfo *)0x0);
              if (__this == (UnityEngine_Mesh_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Mesh__get_bounds(&local_40,__this,(MethodInfo *)0x0);
              (bounds->fields).m_Extents.fields.y = local_40.fields.m_Extents.fields.y;
              (bounds->fields).m_Extents.fields.z = local_40.fields.m_Extents.fields.z;
              (bounds->fields).m_Center.fields.x = local_40.fields.m_Center.fields.x;
              (bounds->fields).m_Center.fields.y = local_40.fields.m_Center.fields.y;
              *(undefined8 *)&(bounds->fields).m_Center.fields.z = local_40.fields._8_8_;
              goto label_05a010ef;
            }
          }
          goto label_05a00eb7;
        }
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_78._0_4_ = (pUVar4->oneVector).fields.x;
        local_78._4_4_ = (pUVar4->oneVector).fields.y;
        uStack_70 = 0;
        local_58._0_4_ = (pUVar4->oneVector).fields.z;
        fVar12 = UnityEngine_CapsuleCollider__get_radius
                           ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
        local_40.fields.m_Center.fields.x = fVar12 * (float)local_78 + fVar12 * (float)local_78;
        local_40.fields.m_Center.fields.y = fVar12 * local_78._4_4_ + fVar12 * local_78._4_4_;
        local_80[0] = (float)local_58._0_4_ * fVar12 + (float)local_58._0_4_ * fVar12;
        iVar6 = UnityEngine_CapsuleCollider__get_direction
                          ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
        fVar12 = UnityEngine_CapsuleCollider__get_height
                           ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
        local_78 = CONCAT44(local_78._4_4_,fVar12);
        iVar7 = UnityEngine_CapsuleCollider__get_direction
                          ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
        pfVar10 = (float *)&local_40;
        pfVar11 = pfVar10;
        if (iVar7 != 0) {
          if (iVar7 == 2) {
            pfVar11 = local_80;
          }
          else {
            if (iVar7 != 1) {
              pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
              __this_00 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar8);
              pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
              System_IndexOutOfRangeException___ctor_54b5410(__this_00,pSVar9,(MethodInfo *)0x0);
              metadataPointer = &MethodInfo_UnityEngine_Vector3_get_Item;
              goto label_05a0116f;
            }
            pfVar11 = &local_40.fields.m_Center.fields.y;
          }
        }
        fVar12 = (float)local_78;
        if ((float)local_78 <= *pfVar11) {
          fVar12 = *pfVar11;
        }
        if (iVar6 != 0) {
          if (iVar6 == 2) {
            pfVar10 = local_80;
          }
          else {
            if (iVar6 != 1) {
              pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
              __this_00 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar8);
              pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
              System_IndexOutOfRangeException___ctor_54b5410(__this_00,pSVar9,(MethodInfo *)0x0);
              metadataPointer = &MethodInfo_UnityEngine_Vector3_set_Item;
label_05a0116f:
              lastManagedFrame = il2cpp_codegen_get_runtime_metadata(metadataPointer);
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
            }
            pfVar10 = &local_40.fields.m_Center.fields.y;
          }
        }
        *pfVar10 = fVar12;
        UVar13 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
        (bounds->fields).m_Center.fields.x = UVar13.fields.x;
        (bounds->fields).m_Center.fields.y = UVar13.fields.y;
        (bounds->fields).m_Center.fields.z = UVar13.fields.z;
        (bounds->fields).m_Extents.fields.x = local_40.fields.m_Center.fields.x * 0.5;
        (bounds->fields).m_Extents.fields.y = local_40.fields.m_Center.fields.y * 0.5;
      }
      else {
        UVar13 = UnityEngine_SphereCollider__get_center
                           ((UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
        local_58._8_4_ = extraout_XMM0_Dc_00;
        local_58._0_8_ = UVar13.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd_00;
        local_78 = CONCAT44(local_78._4_4_,UVar13.fields.z);
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_28._0_4_ = (pUVar4->oneVector).fields.x;
        local_28._4_4_ = (pUVar4->oneVector).fields.y;
        uStack_20 = 0;
        local_5c = (pUVar4->oneVector).fields.z;
        fVar12 = UnityEngine_SphereCollider__get_radius
                           ((UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
        local_80[0] = local_5c * fVar12 + local_5c * fVar12;
        (bounds->fields).m_Center.fields.x = (float)local_58._0_4_;
        (bounds->fields).m_Center.fields.y = (float)local_58._4_4_;
        (bounds->fields).m_Center.fields.z = (float)local_78;
        (bounds->fields).m_Extents.fields.x = (fVar12 * (float)local_28 + fVar12 * (float)local_28) * 0.5;
        (bounds->fields).m_Extents.fields.y = (fVar12 * local_28._4_4_ + fVar12 * local_28._4_4_) * 0.5;
      }
      (bounds->fields).m_Extents.fields.z = local_80[0] * 0.5;
    }
    else {
      UVar13 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)collider,(MethodInfo *)0x0);
      local_58._8_4_ = extraout_XMM0_Dc;
      local_58._0_8_ = UVar13.fields._0_8_;
      local_58._12_4_ = extraout_XMM0_Dd;
      local_78 = CONCAT44(local_78._4_4_,UVar13.fields.z);
      UVar13 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)collider,(MethodInfo *)0x0);
      (bounds->fields).m_Center.fields.x = (float)local_58._0_4_;
      (bounds->fields).m_Center.fields.y = (float)local_58._4_4_;
      (bounds->fields).m_Center.fields.z = (float)local_78;
      (bounds->fields).m_Extents.fields.x = UVar13.fields.x * 0.5;
      (bounds->fields).m_Extents.fields.y = UVar13.fields.y * 0.5;
      (bounds->fields).m_Extents.fields.z = UVar13.fields.z * 0.5;
    }
label_05a010ef:
    bVar5 = true;
  }
  return bVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a01180

System_String_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NavmeshObstacleBuiltin");
    Il2CppMethodInitialized_07545e7a = '\x01';
  }
  return "NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a011b0

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a011c0

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x5a011d0

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


