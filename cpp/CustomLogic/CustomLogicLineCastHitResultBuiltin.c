// Type: CustomLogic.CustomLogicLineCastHitResultBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineCastHitResultBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineCastHitResultBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicLineCastHitResultBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3db9c00

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLineCastHitResultBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLineCastHitResultBuiltin_CreateInstan);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dbad40

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570282e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570282e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dbadb0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbadc0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__9_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__c,(MethodInfo *)__c);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbade0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__10_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
                        ((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this,__a->m_Items[0]
                         ,__a->m_Items[1],method);
      uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbae30

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__11_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__(__c,(MethodInfo *)__c);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3db9c90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05702822 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Collider");
    il2cpp_init_method_metadata(&"ColliderInfo");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"IsCharacter");
    il2cpp_init_method_metadata(&"IsMapObject");
    il2cpp_init_method_metadata(&"Point");
    DAT_05702822 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x624ce79f) {
    if (uVar3 < 0x32b1316e) {
      if (uVar3 == 0x2cfc1e5d) {
        bVar4 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702828 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Collider_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
            DAT_05702828 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x32b1316d) &&
              (bVar4 = System_String__op_Equality(name,"ColliderInfo",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702829 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColliderInfo_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          DAT_05702829 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x549f4d10) {
      bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570282a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570282a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x58de2772) {
      bVar4 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702827 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          DAT_05702827 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x624ce79e) &&
            (bVar4 = System_String__op_Equality(name,"IsMapObject",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702824 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMapObject_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        DAT_05702824 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x91efe6d8) {
    if (uVar3 == 0x91efe6d7) {
      bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570282b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__10_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570282b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570282c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__11_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570282c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xd3d96082) {
    bVar4 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702825 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Distance_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        DAT_05702825 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xeaa8ef31) {
    bVar4 = System_String__op_Equality(name,"Point",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702826 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Point_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
        DAT_05702826 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf5ca12e0) &&
          (bVar4 = System_String__op_Equality(name,"IsCharacter",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702823 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCharacter_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
      DAT_05702823 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLineCastHitResultBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter (const MethodInfo* method);
// 0x3dba150

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702823 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCharacter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702823 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject (const MethodInfo* method);
// 0x3dba1f0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702824 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMapObject_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702824 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Distance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance (const MethodInfo* method);
// 0x3dba290

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702825 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Distance_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702825 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Point
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point (const MethodInfo* method);
// 0x3dba330

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702826 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Point_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702826 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x3dba3d0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702827 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702827 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x3dba470

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702828 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Collider_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702828 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__ColliderInfo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo (const MethodInfo* method);
// 0x3dba510

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_05702829 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColliderInfo_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    DAT_05702829 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineCastHitResultBu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineCastHitResult);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3dba5b0

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_0570282a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570282a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3dba700

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_0570282b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570282b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3dba850

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this;
  
  if (DAT_0570282c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570282c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineCastHitResultBuiltin__object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLineCastHitResultBuil);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLineCastHitResultBu);
  return __this;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dba9a0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570282d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Collider");
    il2cpp_init_method_metadata(&"ColliderInfo");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Distance");
    il2cpp_init_method_metadata(&"IsCharacter");
    il2cpp_init_method_metadata(&"IsMapObject");
    il2cpp_init_method_metadata(&"Point");
    DAT_0570282d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsCharacter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Distance",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Point",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Normal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Collider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColliderInfo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsCharacter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbaba0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__IsCharacter>g____getter_2_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  undefined1 local_11;
  Il2CppObject *local_10;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    if (DAT_0570281c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
      il2cpp_init_method_metadata(&"IsCharacter");
      DAT_0570281c = '\x01';
    }
    local_10 = (Il2CppObject *)0x0;
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this,"IsCharacter",&local_10,MethodInfo_Boolean_TryGetValue);
      if ((((char)bVar1 == '\0') || (local_10 == (Il2CppObject *)0x0)) ||
         (local_10->klass != DAT_05711048)) {
        local_11 = 0;
      }
      else {
        puVar3 = (undefined1 *)il2cpp_glue_022c7330();
        local_11 = *puVar3;
      }
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_11);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsMapObject>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbac60

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__IsMapObject>g____getter_3_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Distance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbac90

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__Distance>g____getter_4_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Point>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbacc0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__Point>g____getter_5_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Point_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Normal>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbace0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__Normal>g____getter_6_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbad00

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__Collider>g____getter_7_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__ColliderInfo>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x3dbad20

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__<__CreatePropertyBinding__ColliderInfo>g____getter_8_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsCharacter
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9190

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  char *pcVar2;
  Il2CppObject *local_10;
  
  if (DAT_0570281c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&"IsCharacter");
    DAT_0570281c = '\x01';
  }
  local_10 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,"IsCharacter",&local_10,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar1 != '\0') && (local_10 != (Il2CppObject *)0x0)) &&
       (local_10->klass == DAT_05711048)) {
      pcVar2 = (char *)il2cpp_glue_022c7330();
      return (bool_conflict)CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '\0');
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsCharacter
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3db9230

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *value_00;
  MethodInfo *extraout_RDX;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_0570281d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"IsCharacter");
    DAT_0570281d = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  uStack_18 = CONCAT17((char)value,(undefined7)uStack_18);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7,method);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,"IsCharacter",value_00,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsMapObject
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db92b0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)
                   ((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1));
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsMapObject
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3db92c0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Distance
// il2cpp: float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db92d0

float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance
                (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (float)(__this->fields)._IsMapObject_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Distance
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3db92e0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,float value,
               MethodInfo *method)

{
  (__this->fields)._IsMapObject_k__BackingField = (bool_conflict)value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Point
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db92f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Point_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Point
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3db9300

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Point_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Point_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Normal
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9310

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Normal_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Normal
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3db9320

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Normal_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Normal_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Collider
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9330

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Collider_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Collider
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* value, const MethodInfo* method);
// 0x3db9340

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *value,MethodInfo *method)

{
  (__this->fields)._Collider_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Collider_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ColliderInfo
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9350

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._ColliderInfo_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_ColliderInfo
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* value, const MethodInfo* method);
// 0x3db9360

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicColliderBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._ColliderInfo_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._ColliderInfo_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9370

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_BuiltinClassInstance_c *pCVar5;
  bool_conflict bVar6;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  Il2CppObject *value;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 local_39;
  Il2CppObject *local_38;
  
  if (DAT_0570281e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570281e = '\x01';
  }
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
  if (DAT_05702821 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702821 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  if (DAT_0570281c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&"IsCharacter");
    DAT_0570281c = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (pSVar3,"IsCharacter",&local_38,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar6 == '\0') || (local_38 == (Il2CppObject *)0x0)) ||
       (local_38->klass != DAT_05711048)) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined1 *)il2cpp_glue_022c7330();
      uVar8 = *puVar7;
    }
    if (__this_00 == (CustomLogic_BuiltinClassInstance_o *)0x0) goto LAB_03db96ca;
    if (DAT_0570281d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
      il2cpp_init_method_metadata(&"IsCharacter");
      DAT_0570281d = '\x01';
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this_00->fields).Variables;
    local_39 = uVar8;
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_39);
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03db96ca;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar3,"IsCharacter",value,MethodInfo_Void_set_Item);
    *(undefined1 *)((long)&(__this_00->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
         *(undefined1 *)((long)&(__this->fields)._LookupBaseClassForVariables_k__BackingField + 1);
    pCVar4 = (__this->fields)._Point_k__BackingField;
    if (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto LAB_03db96ca;
    if (DAT_05702915 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702915 = '\x01';
    }
    pCVar5 = *(CustomLogic_BuiltinClassInstance_c **)&(pCVar4->fields).Value.fields;
    fVar2 = (pCVar4->fields).Value.fields.z;
    __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    __this_01[1].klass = pCVar5;
    *(float *)&__this_01[1].monitor = fVar2;
    if (__this_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
      goto LAB_03db96cf;
    }
    __this_00[1].monitor = __this_01;
    il2cpp_runtime_glue(&__this_00[1].monitor);
    pCVar4 = (__this->fields)._Normal_k__BackingField;
    if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if (DAT_05702915 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702915 = '\x01';
      }
      pCVar5 = *(CustomLogic_BuiltinClassInstance_c **)&(pCVar4->fields).Value.fields;
      fVar2 = (pCVar4->fields).Value.fields.z;
      __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if (DAT_05702910 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702910 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
      __this_01[1].klass = pCVar5;
      *(float *)&__this_01[1].monitor = fVar2;
      if (__this_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
LAB_03db96cf:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_01);
        }
      }
      *(CustomLogic_BuiltinClassInstance_o **)&__this_00[1].fields = __this_01;
      il2cpp_runtime_glue(&__this_00[1].fields,__this_01);
      *(bool_conflict *)&__this_00[1].klass = (__this->fields)._IsMapObject_k__BackingField;
      __this_00[1].fields.Variables =
           (System_Collections_Generic_Dictionary_string__object__o *)
           (__this->fields)._Collider_k__BackingField;
      il2cpp_runtime_glue(&__this_00[1].fields.Variables);
      *(CustomLogic_CustomLogicColliderBuiltin_o **)&__this_00[1].fields._containsTypeOverride =
           (__this->fields)._ColliderInfo_k__BackingField;
      il2cpp_runtime_glue(&__this_00[1].fields._containsTypeOverride);
      return (Il2CppObject *)__this_00;
    }
  }
LAB_03db96ca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db97e0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__this,method);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3db97f0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,Il2CppObject *self,
          Il2CppObject *other,MethodInfo *method)

{
  void *pvVar1;
  byte bVar2;
  void *pvVar3;
  long *plVar4;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (DAT_0570281f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    DAT_0570281f = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar2 = (TypeInfo_CustomLogicLineCastHitResultBuiltin->_2).naturalAligment;
    if (bVar2 <= (self->klass->_2).naturalAligment) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicLineCastHitResultBuiltin) {
        self = (Il2CppObject *)0x0;
      }
      if (other == (Il2CppObject *)0x0) {
        return 0;
      }
      if (self == (Il2CppObject *)0x0) {
        return 0;
      }
      if ((bVar2 <= (other->klass->_2).naturalAligment) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicLineCastHitResultBuiltin)) {
        pvVar3 = self[3].monitor;
        if (pvVar3 == (void *)0x0) {
LAB_03db99d8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar4 = other[3].monitor;
        if (DAT_0570291a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
          DAT_0570291a = '\x01';
        }
        if (plVar4 != (long *)0x0) {
          bVar2 = *(byte *)(TypeInfo_CustomLogicVector3Builtin + 0x130);
          if (bVar2 <= *(byte *)(*plVar4 + 0x130)) {
            if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_CustomLogicVector3Builtin) {
              return 0;
            }
            if (plVar4 != (long *)0x0) {
              fVar7 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x30) >> 0x20) -
                      (float)((ulong)plVar4[6] >> 0x20);
              fVar8 = *(float *)((long)pvVar3 + 0x38) - *(float *)(plVar4 + 7);
              fVar9 = (float)*(undefined8 *)((long)pvVar3 + 0x30) - (float)plVar4[6];
              if (9.9999994e-11 <= fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) {
                return 0;
              }
              pIVar5 = self[4].klass;
              if (pIVar5 != (Il2CppClass *)0x0) {
                pIVar6 = other[4].klass;
                if (pIVar6 == (Il2CppClass *)0x0) {
                  return 0;
                }
                pvVar3 = (pIVar6->_1).image;
                if (*(byte *)((long)pvVar3 + 0x130) < bVar2) {
                  return 0;
                }
                if (*(long *)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_CustomLogicVector3Builtin
                   ) {
                  return 0;
                }
                if (pIVar6 != (Il2CppClass *)0x0) {
                  pvVar3 = (pIVar5->_1).this_arg.data;
                  pvVar1 = (pIVar6->_1).this_arg.data;
                  fVar7 = (float)((ulong)pvVar3 >> 0x20) - (float)((ulong)pvVar1 >> 0x20);
                  fVar8 = (float)(pIVar5->_1).this_arg.bits - (float)(pIVar6->_1).this_arg.bits;
                  fVar9 = SUB84(pvVar3,0) - SUB84(pvVar1,0);
                  return (uint)(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < 9.9999994e-11);
                }
              }
            }
            goto LAB_03db99d8;
          }
        }
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9ab0

int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__
                  (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  uint uVar2;
  int32_t iVar3;
  int32_t iVar4;
  uint uVar5;
  int32_t iVar6;
  int32_t iVar7;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  float __this_02;
  float __this_03;
  float __this_04;
  
  pCVar1 = (__this->fields)._Point_k__BackingField;
  if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar2 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(pCVar1->fields).Value);
    iVar3 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(pCVar1->fields).Value.fields.y);
    iVar4 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(pCVar1->fields).Value.fields.z);
    pCVar1 = (__this->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar5 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(pCVar1->fields).Value);
      iVar6 = System_Single__GetHashCode(__this_03,(MethodInfo *)&(pCVar1->fields).Value.fields.y);
      iVar7 = System_Single__GetHashCode(__this_04,(MethodInfo *)&(pCVar1->fields).Value.fields.z);
      return uVar5 ^ iVar4 >> 2 ^ iVar3 << 2 ^ uVar2 ^ iVar7 >> 2 ^ iVar6 << 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9ba0

System_String_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702820 == '\0') {
    il2cpp_init_method_metadata(&"LineCastHitResult");
    DAT_05702820 = '\x01';
  }
  return "LineCastHitResult";
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9bd0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9be0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db9bf0

bool_conflict
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x3db96e0

void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702821 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702821 = '\x01';
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


