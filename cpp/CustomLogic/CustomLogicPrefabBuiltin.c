// Type: CustomLogic.CustomLogicPrefabBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrefabBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicPrefabBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e274f0

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  System_String_o *pSVar4;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  MethodInfo *in_RCX;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05702d40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrefabBuiltin);
    DAT_05702d40 = '\x01';
  }
  uVar3 = (uint)uStack_28;
  uStack_28 = (ulong)(uint)uStack_28;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPrefabBuiltin);
      CustomLogic_CustomLogicPrefabBuiltin___ctor(__this,method);
    }
    else {
      iVar2 = (int)args->max_length;
      if (iVar2 != 2) {
        uStack_28 = CONCAT44(iVar2,uVar3);
        pSVar4 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPrefabBuiltin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar4 = System_String__Concat(str0,pSVar4,str2,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar5);
        System_ArgumentException___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
        uVar5 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPrefabBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar5);
      }
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
      if ((int)args->max_length < 2) {
        uVar3 = 0;
      }
      else {
        pIVar1 = args->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      __this = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPrefabBuiltin);
      CustomLogic_CustomLogicPrefabBuiltin___ctor(__this,pSVar4,uVar3 & 0xff,in_RCX);
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e295b0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702d5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d5c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e29620

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearComponents>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0 (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPrefabBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e29630

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearComponents>b__14_0
          (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPrefabBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e27690

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702d41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Asset");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"AssetType");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"ClearComponents");
    il2cpp_init_method_metadata(&"PhysicsMaterial");
    DAT_05702d41 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x28528e12) {
    if (uVar3 < 0x18a43c5c) {
      if (uVar3 == 0x232777f) {
        bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d49 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
            DAT_05702d49 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xfe07306) {
        bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d47 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Name_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
            DAT_05702d47 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x18a43c5b) &&
              (bVar4 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d45 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Static_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Static_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d45 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x1f89134f) {
      bVar4 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Active_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Active_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d44 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x23922d03) {
      bVar4 = System_String__op_Equality(name,"AssetType",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d42 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AssetType_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AssetType_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d42 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x28528e11) &&
            (bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d4a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        DAT_05702d4a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0x6f79efb7) {
    if (uVar3 == 0x384cf68a) {
      bVar4 = System_String__op_Equality(name,"CollideMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d4b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollideMode_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollideMode_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d4b = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x592a4941) {
      bVar4 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d46 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Visible_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Visible_g____sett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d46 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x6f79efb6) &&
            (bVar4 = System_String__op_Equality(name,"ClearComponents",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d4e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearComponents_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702d4e = '\x01';
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
        function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_glue(lVar2 + 8,function);
      }
      __this_00 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(__this_00,function,MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar3 < 0x94e7d8c2) {
    if (uVar3 == 0x829f123b) {
      bVar4 = System_String__op_Equality(name,"Asset",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d43 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Asset_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Asset_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
          DAT_05702d43 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x94e7d8c1) &&
            (bVar4 = System_String__op_Equality(name,"CollideWith",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d4c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollideWith_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollideWith_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        DAT_05702d4c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xa3dd2697) {
    bVar4 = System_String__op_Equality(name,"PhysicsMaterial",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d4d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PhysicsMaterial);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PhysicsMaterial_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
        DAT_05702d4d = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xe27f342a) &&
          (bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702d48 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
      DAT_05702d48 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPrefabBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__AssetType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType (const MethodInfo* method);
// 0x3e27c50

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AssetType_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AssetType_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Asset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset (const MethodInfo* method);
// 0x3e27d30

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Asset_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Asset_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d43 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x3e27e10

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Active_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Active_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d44 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x3e27ef0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Static_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Static_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d45 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x3e27fd0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Visible_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Visible_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d46 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x3e280b0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Name_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d47 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3e28190

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d48 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3e28270

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d49 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x3e28350

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d4a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode (const MethodInfo* method);
// 0x3e28430

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollideMode_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollideMode_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d4b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideWith
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith (const MethodInfo* method);
// 0x3e28510

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollideWith_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollideWith_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d4c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__PhysicsMaterial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial (const MethodInfo* method);
// 0x3e285f0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPrefabBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PhysicsMaterial);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PhysicsMaterial_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object);
    DAT_05702d4d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPrefabBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreateMethodBinding__ClearComponents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents (const MethodInfo* method);
// 0x3e286d0

CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *__this;
  
  if (DAT_05702d4e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPrefabBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearComponents_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d4e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPrefabBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPrefabBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e28820

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702d4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Asset");
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"CollideMode");
    il2cpp_init_method_metadata(&"AssetType");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"PersistsOwnership");
    il2cpp_init_method_metadata(&"Active");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Static");
    il2cpp_init_method_metadata(&"CollideWith");
    il2cpp_init_method_metadata(&"ClearComponents");
    il2cpp_init_method_metadata(&"PhysicsMaterial");
    DAT_05702d4f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"PersistsOwnership",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AssetType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Asset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Active",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Static",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Visible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CollideMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CollideWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PhysicsMaterial",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearComponents",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28aa0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__AssetType>g____getter_2_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).Type;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28ac0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__AssetType>g____setter_2_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05702d50 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d50 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Type = pSVar3;
    il2cpp_runtime_glue(&pMVar1->fields,pSVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28b80

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Asset>g____getter_3_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).Asset;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28ba0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Asset>g____setter_3_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05702d51 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d51 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Asset = pSVar3;
    il2cpp_runtime_glue(&(pMVar1->fields).Asset,pSVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28c60

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Active>g____getter_4_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28ca0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Active>g____setter_4_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 uVar4;
  
  if (DAT_05702d52 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d52 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)&(pMVar1->fields).Active = (char)bVar3;
    uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28d50

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Static>g____getter_5_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28d90

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Static>g____setter_5_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 uVar4;
  
  if (DAT_05702d53 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d53 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)((long)&(pMVar1->fields).Active + 1) = (char)bVar3;
    uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28e40

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Visible>g____getter_6_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Map_MapScriptSceneObject_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28e80

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Visible>g____setter_6_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 uVar4;
  
  if (DAT_05702d54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d54 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)((long)&(pMVar1->fields).Active + 2) = (char)bVar3;
    uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e28f30

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Name>g____getter_7_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return *(Il2CppObject **)&(pMVar1->fields).Visible;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e28f50

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Name>g____setter_7_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  
  if (DAT_05702d55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d55 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(Il2CppObject **)&(pMVar1->fields).Visible = pIVar3;
    il2cpp_runtime_glue(&(pMVar1->fields).Visible,pIVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e29010

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_8_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (DAT_05702d3b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702d3b = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetPosition
                        ((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e29090

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_8_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05702d56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d56 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPrefabBuiltin__set_Position(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e29110

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_9_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (DAT_05702d3c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702d3c = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetRotation
                        ((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e29190

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____setter_9_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702d57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d57 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
      Map_MapScriptBaseObject__SetRotation
                ((Map_MapScriptBaseObject_o *)pMVar1,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
        pMVar1 = (__i->fields).Value;
        if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
          pMVar2 = pMVar1->klass;
          vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
          (*vtable_dispatch)
                    (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,
                     vtable_dispatch);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e29210

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____getter_10_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (DAT_05702d3d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702d3d = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      value = Map_MapScriptBaseObject__GetScale
                        ((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e29290

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____setter_10_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702d58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d58 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
      Map_MapScriptBaseObject__SetScale
                ((Map_MapScriptBaseObject_o *)pMVar1,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
        pMVar1 = (__i->fields).Value;
        if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
          pMVar2 = pMVar1->klass;
          vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
          (*vtable_dispatch)
                    (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,
                     vtable_dispatch);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e29310

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__CollideMode>g____getter_11_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return *(Il2CppObject **)&(pMVar1->fields).ScaleZ;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e29330

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__CollideMode>g____setter_11_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  
  if (DAT_05702d59 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d59 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(Il2CppObject **)&(pMVar1->fields).ScaleZ = pIVar3;
    il2cpp_runtime_glue(&(pMVar1->fields).ScaleZ,pIVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e293f0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__CollideWith>g____getter_12_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideMode;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e29410

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__CollideWith>g____setter_12_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05702d5a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d5a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideMode = pSVar3;
    il2cpp_runtime_glue(&(pMVar1->fields).CollideMode,pSVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x3e294d0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__PhysicsMaterial>g____getter_13_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideWith;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e294f0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings__<__CreatePropertyBinding__PhysicsMaterial>g____setter_13_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05702d5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d5b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideWith = pSVar3;
    il2cpp_runtime_glue(&(pMVar1->fields).CollideWith,pSVar3);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar4 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar4,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26ab0

void CustomLogic_CustomLogicPrefabBuiltin___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  
  if (DAT_05702d39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    DAT_05702d39 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Value,__this_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* prefabCSV, bool clearComponents, const MethodInfo* method);
// 0x3e26b40

void CustomLogic_CustomLogicPrefabBuiltin___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *prefabCSV,
               bool_conflict clearComponents,MethodInfo *method)

{
  System_String_array *value;
  MethodInfo *method_00;
  Map_MapScriptSceneObject_o *pMVar1;
  
  if (DAT_05702d3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"");
    DAT_05702d3a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (prefabCSV != (System_String_o *)0x0) {
    value = System_String__Split(prefabCSV,10,0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Join("",value,(MethodInfo *)0x0);
    pMVar1 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar1,(MethodInfo *)0x0);
    (__this->fields).Value = pMVar1;
    il2cpp_runtime_glue(&(__this->fields).Value,pMVar1);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,method_00,(pMVar1->klass->vtable)._9_Deserialize.method);
      if ((char)clearComponents != '\0') {
        CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__this,method_00);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_AssetType
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26cf0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_AssetType
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).Type;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_AssetType
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e26d10

void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Type = value;
    il2cpp_runtime_glue(&pMVar1->fields);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Asset
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26dc0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Asset
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).Asset;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Asset
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e26de0

void CustomLogic_CustomLogicPrefabBuiltin__set_Asset
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Asset = value;
    il2cpp_runtime_glue(&(pMVar1->fields).Asset);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26e40

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Active
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pMVar1 >> 8),(char)(pMVar1->fields).Active);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e26e60

void CustomLogic_CustomLogicPrefabBuiltin__set_Active
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)&(pMVar1->fields).Active = (char)value;
    uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26eb0

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Static
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar1 >> 8),*(undefined1 *)((long)&(pMVar1->fields).Active + 1));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Static
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e26ed0

void CustomLogic_CustomLogicPrefabBuiltin__set_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar1->fields).Active + 1) = (char)value;
    uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Visible
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26f20

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_Visible
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar1 >> 8),*(undefined1 *)((long)&(pMVar1->fields).Active + 2));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Visible
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e26f40

void CustomLogic_CustomLogicPrefabBuiltin__set_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(char *)((long)&(pMVar1->fields).Active + 2) = (char)value;
    uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26f90

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Name
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return *(System_String_o **)&(pMVar1->fields).Visible;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e26fb0

void CustomLogic_CustomLogicPrefabBuiltin__set_Name
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(System_String_o **)&(pMVar1->fields).Visible = value;
    il2cpp_runtime_glue(&(pMVar1->fields).Visible);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e27010

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Position
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702d3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d3b = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    value = Map_MapScriptBaseObject__GetPosition
                      ((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e27090

void CustomLogic_CustomLogicPrefabBuiltin__set_Position
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pMVar1,
               (UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e27100

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Rotation
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702d3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d3c = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    value = Map_MapScriptBaseObject__GetRotation
                      ((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e27180

void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pMVar1,
               (UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e271f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Scale
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702d3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d3d = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    value = Map_MapScriptBaseObject__GetScale
                      ((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e27270

void CustomLogic_CustomLogicPrefabBuiltin__set_Scale
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar1,
               (UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideMode
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e272e0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return *(System_String_o **)&(pMVar1->fields).ScaleZ;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideMode
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e27300

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    *(System_String_o **)&(pMVar1->fields).ScaleZ = value;
    il2cpp_runtime_glue(&(pMVar1->fields).ScaleZ);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideWith
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e27360

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideMode;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideWith
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e27380

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideMode = value;
    il2cpp_runtime_glue(&(pMVar1->fields).CollideMode);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_PhysicsMaterial
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e273e0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideWith;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_PhysicsMaterial
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3e27400

void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideWith = value;
    il2cpp_runtime_glue(&(pMVar1->fields).CollideWith);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        pMVar2 = pMVar1->klass;
        vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
        (*vtable_dispatch)
                  (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$ClearComponents
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26c50

void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  Map_MapScriptBaseMaterial_o *pMVar2;
  Map_MapScriptSceneObject_c *pMVar3;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar4;
  Map_MapScriptSceneObject_o *pMVar5;
  
  if (DAT_05702d3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05702d3e = '\x01';
  }
  pMVar5 = (__this->fields).Value;
  if ((pMVar5 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pMVar2 = (pMVar5->fields).Material, pMVar2 != (Map_MapScriptBaseMaterial_o *)0x0)) {
    piVar1 = (int *)((long)&(pMVar2->fields).Color + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pMVar2->fields).Color;
    *(undefined4 *)&(pMVar2->fields).Color = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pMVar2->fields).Shader,0,length,(MethodInfo *)0x0);
      pMVar5 = (__this->fields).Value;
      if (pMVar5 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03e26cde;
    }
    uVar4 = (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
    pMVar5 = (__this->fields).Value;
    if (pMVar5 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar3 = pMVar5->klass;
      vtable_dispatch = (pMVar3->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar5,uVar4,(pMVar3->vtable)._9_Deserialize.method,pMVar3,vtable_dispatch);
      return;
    }
  }
LAB_03e26cde:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$Refresh
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__Refresh (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e26d70

void CustomLogic_CustomLogicPrefabBuiltin__Refresh
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Map_MapScriptSceneObject_c *pMVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar3;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    uVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pMVar2 = pMVar1->klass;
      vtable_dispatch = (pMVar2->vtable)._9_Deserialize.methodPtr;
      (*vtable_dispatch)
                (pMVar1,uVar3,(pMVar2->vtable)._9_Deserialize.method,pMVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin____Str__ (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e27460

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin____Str__
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    vtable_dispatch = (pMVar1->klass->vtable)._8_Serialize.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method,in_RDX,
                        vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_ClassName (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e27490

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_ClassName
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702d3f == '\0') {
    il2cpp_init_method_metadata(&"Prefab");
    DAT_05702d3f = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e274c0

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e274d0

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x3e274e0

bool_conflict
CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


