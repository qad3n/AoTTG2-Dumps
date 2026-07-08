// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNavmeshObstacleBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dee630

CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702a90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNavmeshObstacleBuiltin);
    DAT_05702a90 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicNavmeshObstacleBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicNavmeshObstacleBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3defc80

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702aa5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702aa5 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3defcf0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$<__CreateMethodBinding__AutoScale>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3defd00

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_<>c__<__CreateMethodBinding__AutoScale>b__11_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dee720

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this_00;
  
  if (DAT_05702a91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ShapeCapsule");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"ShapeBox");
    il2cpp_init_method_metadata(&"Carving");
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"AutoScale");
    il2cpp_init_method_metadata(&"CarveOnlyStationary");
    il2cpp_init_method_metadata(&"Shape");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702a91 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x4380ddc7) {
    if (uVar3 < 0x1bd13563) {
      if (uVar3 == 0xfd70833) {
        bVar4 = System_String__op_Equality(name,"ShapeBox",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a92 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShapeBox_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
            DAT_05702a92 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x1bd13562) &&
              (bVar4 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a95 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Height_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
          DAT_05702a95 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x28528e11) {
      bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a96 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
          DAT_05702a96 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x3a8111d3) {
      bVar4 = System_String__op_Equality(name,"Radius",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a94 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Radius_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Radius_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
          DAT_05702a94 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x4380ddc6) &&
            (bVar4 = System_String__op_Equality(name,"Shape",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a9a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shape_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Shape_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        DAT_05702a9a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0x4b9fbea5) {
    if (uVar3 == 0x48479f2b) {
      bVar4 = System_String__op_Equality(name,"Carving",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a98 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Carving_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Carving_g____sett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
          DAT_05702a98 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x4b9fbea4) &&
            (bVar4 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a97 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Center_g____sette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        DAT_05702a97 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0x83a1c814) {
    bVar4 = System_String__op_Equality(name,"AutoScale",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a9b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuil);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuilti);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AutoScale_b__11_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702a9b = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_glue(lVar2 + 8,function);
      }
      __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuilti);
      CustomLogic_CLMethodBinding<object>___ctor(__this_00,function,MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuil);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar3 == 0xf50bdc61) {
    bVar4 = System_String__op_Equality(name,"ShapeCapsule",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a93 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShapeCapsule_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
        DAT_05702a93 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0x7a0c4e3c) &&
          (bVar4 = System_String__op_Equality(name,"CarveOnlyStationary",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a99 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CarveOnlyStatio);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CarveOnlyStationa);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
      DAT_05702a99 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicNavmeshObstacleBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeBox
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox (const MethodInfo* method);
// 0x3deebe0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShapeBox_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a92 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeCapsule
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule (const MethodInfo* method);
// 0x3deec80

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShapeCapsule_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a93 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Radius
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius (const MethodInfo* method);
// 0x3deed20

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Radius_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Radius_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a94 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x3deee00

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Height_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Height_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x3deeee0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a96 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x3deefc0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Center_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a97 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Carving
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving (const MethodInfo* method);
// 0x3def0a0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Carving_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Carving_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a98 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__CarveOnlyStationary
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary (const MethodInfo* method);
// 0x3def180

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CarveOnlyStatio);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CarveOnlyStationa);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a99 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Shape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape (const MethodInfo* method);
// 0x3def260

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shape_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Shape_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    DAT_05702a9a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuil);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBu);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreateMethodBinding__AutoScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale (const MethodInfo* method);
// 0x3def340

CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (DAT_05702a9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AutoScale_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a9b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuilti);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuil);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3def490

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ShapeCapsule");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"ShapeBox");
    il2cpp_init_method_metadata(&"Carving");
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"AutoScale");
    il2cpp_init_method_metadata(&"CarveOnlyStationary");
    il2cpp_init_method_metadata(&"Shape");
    il2cpp_init_method_metadata(&"Height");
    DAT_05702a9c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ShapeBox",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShapeCapsule",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Radius",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Height",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Center",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Carving",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CarveOnlyStationary",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Shape",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AutoScale",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeBox>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def690

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__ShapeBox>g____getter_2_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeCapsule>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def6b0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__ShapeCapsule>g____getter_3_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def6d0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Radius>g____getter_4_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_radius(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3def710

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Radius>g____setter_4_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (DAT_05702a9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a9d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_radius(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def790

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Height>g____getter_5_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_height(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3def7d0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Height>g____setter_5_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (DAT_05702a9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a9e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def850

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____getter_6_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    if (DAT_05702a8e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702a8e = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      value = UnityEngine_AI_NavMeshObstacle__get_size(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3def8d0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____setter_6_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702a9f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a9f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
      (pIVar1 != (Il2CppObject *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3def960

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Center>g____getter_7_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (DAT_05702aa0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702aa0 = '\x01';
  }
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_18 = (UnityEngine_Vector3_Fields)
               UnityEngine_AI_NavMeshObstacle__get_center(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_18);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3def9c0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Center>g____setter_7_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702aa1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_ConvertTo_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aa1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<Vector3>(__v,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3defa40

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Carving>g____getter_8_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carving(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3defa80

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Carving>g____setter_8_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  uint uVar1;
  
  if (DAT_05702aa2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aa2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3defb00

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__CarveOnlyStationary>g____getter_9_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3defb40

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__CarveOnlyStationary>g____setter_9_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  uint uVar1;
  
  if (DAT_05702aa3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aa3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x3defbc0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Shape>g____getter_10_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_shape(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3defc00

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__<__CreatePropertyBinding__Shape>g____setter_10_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  int32_t value;
  
  if (DAT_05702aa4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aa4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee030

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x3dee040

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Component_c *pUVar2;
  UnityEngine_Component_o *pUVar3;
  
  if (DAT_05702a8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NavMeshObstacle_GetOrAddComponent_NavMeshObstacl);
    il2cpp_init_method_metadata(&TypeInfo_NavMeshObstacle);
    DAT_05702a8d = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    pUVar3 = (UnityEngine_Component_o *)
             CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
                       ((pMVar1->fields).GameObject,MethodInfo_NavMeshObstacle_GetOrAddComponent_NavMeshObstacl);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,pUVar3,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    il2cpp_runtime_glue(&(__this->fields).OwnerMapObject,owner);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar1->fields).GameObject;
      il2cpp_runtime_glue(&(__this->fields).Owner);
      pUVar2 = TypeInfo_NavMeshObstacle;
      pUVar3 = (__this->fields).Component;
      if (pUVar3 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
      }
      else if ((pUVar3->klass != TypeInfo_NavMeshObstacle) ||
              ((__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)pUVar3,
              pUVar3->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar3,pUVar2);
      }
      il2cpp_runtime_glue(&(__this->fields).Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeBox
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox (const MethodInfo* method);
// 0x3dee120

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeCapsule
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule (const MethodInfo* method);
// 0x3dee130

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Radius
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee140

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar1 = UnityEngine_AI_NavMeshObstacle__get_radius(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Radius
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dee160

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_radius(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Height
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee180

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar1 = UnityEngine_AI_NavMeshObstacle__get_height(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Height
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dee1a0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee1c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702a8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a8e = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    value = UnityEngine_AI_NavMeshObstacle__get_size(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3dee240

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Center
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee270

UnityEngine_Vector3_o
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_AI_NavMeshObstacle__get_center(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Center
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x3dee290

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_center(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Carving
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee2b0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carving(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Carving
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3dee2d0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_CarveOnlyStationary
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee2f0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_CarveOnlyStationary
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3dee310

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Shape
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee330

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape
                  (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar1 = UnityEngine_AI_NavMeshObstacle__get_shape(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Shape
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3dee350

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$AutoScale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee370

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_AI_NavMeshObstacle_o *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o local_70;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pCVar1 = (__this->fields).OwnerMapObject;
  if (((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) &&
     (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
    if ((int)pUVar3->max_length == 0) {
LAB_03dee5c3:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pUVar3->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_70,pUVar3->m_Items[0],(MethodInfo *)0x0);
      pCVar1 = (__this->fields).OwnerMapObject;
      if (((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
          (pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) &&
         (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
        fVar18 = 0.0;
        fVar13 = 0.0;
        auVar22._8_8_ = 0;
        auVar22._0_4_ = local_70.fields.m_Extents.fields.x;
        auVar22._4_4_ = local_70.fields.m_Extents.fields.y;
        uVar8 = (uint)pUVar3->max_length;
        fVar10 = local_70.fields.m_Extents.fields.z;
        fVar16 = local_70.fields.m_Center.fields.z;
        fVar20 = local_70.fields.m_Center.fields.x;
        fVar17 = local_70.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar12._8_8_ = 0;
          auVar12._0_4_ = local_70.fields.m_Extents.fields.x;
          auVar12._4_4_ = local_70.fields.m_Extents.fields.y;
        }
        else {
          uVar9 = 0;
          do {
            if (uVar8 <= uVar9) goto LAB_03dee5c3;
            local_48._0_4_ = fVar16;
            _local_58 = auVar22;
            local_38 = fVar20;
            fStack_34 = fVar17;
            fStack_30 = fVar18;
            fStack_2c = fVar13;
            if (pUVar3->m_Items[(int)uVar9] == (UnityEngine_Collider_o *)0x0) goto LAB_03dee5be;
            UnityEngine_Collider__get_bounds
                      (&local_70,pUVar3->m_Items[(int)uVar9],(MethodInfo *)0x0);
            fVar16 = local_70.fields.m_Center.fields.x - local_70.fields.m_Extents.fields.x;
            fVar17 = local_70.fields.m_Center.fields.y - local_70.fields.m_Extents.fields.y;
            fVar18 = local_70.fields.m_Center.fields.z - local_70.fields.m_Extents.fields.z;
            auVar21._0_4_ = local_38 - (float)local_58._0_4_;
            auVar21._4_4_ = fStack_34 - (float)local_58._4_4_;
            auVar21._8_4_ = fStack_30 - fStack_50;
            auVar21._12_4_ = fStack_2c - fStack_4c;
            auVar24._4_4_ = fVar17;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = 0;
            auVar22 = minps(auVar21,auVar24);
            fVar20 = (float)local_48._0_4_ - fVar10;
            if (fVar18 <= (float)local_48._0_4_ - fVar10) {
              fVar20 = fVar18;
            }
            auVar11._0_4_ = (float)local_58._0_4_ + local_38;
            auVar11._4_4_ = (float)local_58._4_4_ + fStack_34;
            auVar11._8_4_ = fStack_50 + fStack_30;
            auVar11._12_4_ = fStack_4c + fStack_2c;
            auVar5._4_4_ = fVar17;
            auVar5._0_4_ = fVar16;
            auVar5._8_8_ = 0;
            auVar12 = maxps(auVar11,auVar5);
            fVar16 = (float)local_48._0_4_ + fVar10;
            if ((float)local_48._0_4_ + fVar10 <= fVar18) {
              fVar16 = fVar18;
            }
            fVar17 = (auVar12._0_4_ - auVar22._0_4_) * 0.5;
            fVar18 = (auVar12._4_4_ - auVar22._4_4_) * 0.5;
            fVar13 = (auVar12._8_4_ - auVar22._8_4_) * 0.0;
            fVar14 = (auVar12._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar16 - fVar20) * 0.5;
            fVar19 = auVar22._0_4_ + fVar17;
            fVar25 = auVar22._4_4_ + fVar18;
            fVar26 = auVar22._8_4_ + fVar13;
            fVar27 = auVar22._12_4_ + fVar14;
            fVar29 = local_70.fields.m_Center.fields.x + local_70.fields.m_Extents.fields.x;
            fVar30 = local_70.fields.m_Center.fields.y + local_70.fields.m_Extents.fields.y;
            fVar28 = local_70.fields.m_Center.fields.z + local_70.fields.m_Extents.fields.z;
            auVar15._0_4_ = fVar19 - fVar17;
            auVar15._4_4_ = fVar25 - fVar18;
            auVar15._8_4_ = fVar26 - fVar13;
            auVar15._12_4_ = fVar27 - fVar14;
            fVar16 = (fVar20 + fVar10) - fVar10;
            auVar6._4_4_ = fVar30;
            auVar6._0_4_ = fVar29;
            auVar6._8_8_ = 0;
            auVar22 = minps(auVar15,auVar6);
            if (fVar28 <= fVar16) {
              fVar16 = fVar28;
            }
            auVar23._0_4_ = fVar19 + fVar17;
            auVar23._4_4_ = fVar25 + fVar18;
            auVar23._8_4_ = fVar26 + fVar13;
            auVar23._12_4_ = fVar27 + fVar14;
            fVar10 = fVar20 + fVar10 + fVar10;
            auVar7._4_4_ = fVar30;
            auVar7._0_4_ = fVar29;
            auVar7._8_8_ = 0;
            auVar24 = maxps(auVar23,auVar7);
            if (fVar10 <= fVar28) {
              fVar10 = fVar28;
            }
            fVar20 = (auVar24._0_4_ - auVar22._0_4_) * 0.5;
            fVar17 = (auVar24._4_4_ - auVar22._4_4_) * 0.5;
            auVar12._0_8_ = CONCAT44(fVar17,fVar20);
            auVar12._8_4_ = (auVar24._8_4_ - auVar22._8_4_) * 0.0;
            auVar12._12_4_ = (auVar24._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar10 - fVar16) * 0.5;
            fVar20 = auVar22._0_4_ + fVar20;
            fVar17 = auVar22._4_4_ + fVar17;
            fVar18 = auVar22._8_4_ + auVar12._8_4_;
            fVar13 = auVar22._12_4_ + auVar12._12_4_;
            fVar16 = fVar16 + fVar10;
            uVar9 = uVar9 + 1;
            uVar8 = (uint)pUVar3->max_length;
            auVar22._8_4_ = auVar12._8_4_;
            auVar22._0_8_ = auVar12._0_8_;
            auVar22._12_4_ = auVar12._12_4_;
          } while ((int)uVar9 < (int)uVar8);
        }
        local_58._0_4_ = fVar10;
        pUVar4 = (__this->fields).Value;
        local_48 = auVar12;
        local_38 = fVar20;
        fStack_34 = fVar17;
        fStack_30 = fVar18;
        fStack_2c = fVar13;
        if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar4,1,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).Value;
          if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)local_48._0_4_ + (float)local_48._0_4_;
            value.fields.y = (float)local_48._4_4_ + (float)local_48._4_4_;
            value.fields.z = (float)local_58._0_4_ + (float)local_58._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar4,value,(MethodInfo *)0x0);
            pUVar4 = (__this->fields).Value;
            if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_34;
              value_00.fields.x = local_38;
              value_00.fields.z = fVar16;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar4,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03dee5be:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee5d0

System_String_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a8f == '\0') {
    il2cpp_init_method_metadata(&"NavmeshObstacleBuiltin");
    DAT_05702a8f = '\x01';
  }
  return "NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee600

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee610

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x3dee620

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


