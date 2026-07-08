// Type: CustomLogic.CustomLogicPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicPlayerBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e23f00

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  uint uVar2;
  uint in_EAX;
  Photon_Realtime_Player_o *pPVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702d18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Player_ConvertTo_Player);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    DAT_05702d18 = '\x01';
  }
  uVar2 = (uint)uStack_18;
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    iVar1 = (int)args->max_length;
    if (iVar1 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar3 = (Photon_Realtime_Player_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_Player_ConvertTo_Player);
      __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
      if (DAT_05702cfc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702cfc = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Player = pPVar3;
      il2cpp_runtime_glue(&(__this->fields).Player,pPVar3);
      return __this;
    }
    uStack_18 = CONCAT44(iVar1,uVar2);
    pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPlayerBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar4 = System_String__Concat(str0,pSVar4,str2,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar5);
    System_ArgumentException___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e268a0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702d36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d36 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e26910

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCustomProperty>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e26920

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__GetCustomProperty>b__21_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05702d37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d37 = '\x01';
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
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (DAT_05702d12 == '\0') {
        il2cpp_init_method_metadata(&"CL:");
        DAT_05702d12 = '\x01';
      }
      player = (__c->fields).Player;
      pSVar1 = System_String__Concat("CL:",pSVar1,(MethodInfo *)0x0);
      pIVar2 = PhotonExtensions__GetCustomProperty(player,pSVar1,(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCustomProperty>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e269f0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCustomProperty>b__22_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  
  if (DAT_05702d38 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d38 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e26a83:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    property = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty(__c,property,__a->m_Items[1],method)
        ;
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e26a83;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearKDR>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e26a90

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearKDR>b__23_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__ClearKDR(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e24080

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *pSVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702d19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetCustomProperty");
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"IsAnonymous");
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"ClearKDR");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"SpectateID");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Loadout");
    il2cpp_init_method_metadata(&"GetCustomProperty");
    il2cpp_init_method_metadata(&"CharacterType");
    il2cpp_init_method_metadata(&"SpawnPoint");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"UserID");
    il2cpp_init_method_metadata(&"Ping");
    il2cpp_init_method_metadata(&"Status");
    il2cpp_init_method_metadata(&"Connected");
    il2cpp_init_method_metadata(&"DisplayName");
    il2cpp_init_method_metadata(&"ID");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_05702d19 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7bf69371) {
    if (uVar3 < 0x2329c92d) {
      if (uVar3 < 0xfe07307) {
        if (uVar3 == 0x5ef20f) {
          bVar4 = System_String__op_Equality(name,"Status",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702d23 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Status_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
              DAT_05702d23 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xfe07306) &&
                (bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d1f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
            DAT_05702d1f = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x209c92df) {
        bVar4 = System_String__op_Equality(name,"UserID",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d1e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UserID_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
            DAT_05702d1e = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x2267fabd) {
        bVar4 = System_String__op_Equality(name,"ClearKDR",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d2f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearKDR_b__23_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d2f = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x2329c92c) &&
              (bVar4 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d22 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d22 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x537d6b99) {
      if (uVar3 == 0x33b0223e) {
        bVar4 = System_String__op_Equality(name,"IsAnonymous",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d1d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAnonymous_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
            DAT_05702d1d = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x369870e0) {
        bVar4 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d21 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Guild_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
            DAT_05702d21 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x537d6b98) &&
              (bVar4 = System_String__op_Equality(name,"CharacterType",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d24 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CharacterType_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d24 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x56e8eb60) {
      bVar4 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d1c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ID_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d1c = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x72527c0e) {
      bVar4 = System_String__op_Equality(name,"SpawnPoint",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d2c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpawnPoint_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpawnPoint_g____s);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d2c = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x7bf69370) &&
            (bVar4 = System_String__op_Equality(name,"Connected",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d1b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Connected_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        DAT_05702d1b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xdbaad9bb) {
    if (uVar3 < 0xb404b03a) {
      if (uVar3 == 0xb404b039) {
        bVar4 = System_String__op_Equality(name,"SetCustomProperty",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d2e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCustomProperty);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d2e = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x7fb7f0a9) &&
              (bVar4 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d2a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ping_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d2a = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xc835e055) {
      bVar4 = System_String__op_Equality(name,"GetCustomProperty",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d2d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCustomProperty);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702d2d = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xcd8e1e97) {
      bVar4 = System_String__op_Equality(name,"SpectateID",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d2b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectateID_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d2b = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xdbaad9ba) &&
            (bVar4 = System_String__op_Equality(name,"Deaths",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d27 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Deaths_g____get);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Deaths_g____sette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        DAT_05702d27 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xf30591ff) {
    if (uVar3 == 0xe078d003) {
      bVar4 = System_String__op_Equality(name,"Loadout",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d25 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loadout_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d25 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xec7340b0) {
      bVar4 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d1a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Character_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
          DAT_05702d1a = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xf30591fe) &&
            (bVar4 = System_String__op_Equality(name,"Kills",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d26 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kills_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Kills_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        DAT_05702d26 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf4b21828) {
    bVar4 = System_String__op_Equality(name,"TotalDamage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d29 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TotalDamage_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TotalDamage_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        DAT_05702d29 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf8eca4b6) {
    bVar4 = System_String__op_Equality(name,"DisplayName",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d20 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DisplayName_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
        DAT_05702d20 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xffbdd3de) &&
          (bVar4 = System_String__op_Equality(name,"HighestDamage",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702d28 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighestDamage_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighestDamage_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
      DAT_05702d28 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPlayerBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x3e248d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Character_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Connected
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected (const MethodInfo* method);
// 0x3e24970

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Connected_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x3e24a10

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ID_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsAnonymous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous (const MethodInfo* method);
// 0x3e24ab0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAnonymous_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__UserID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID (const MethodInfo* method);
// 0x3e24b50

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UserID_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x3e24bf0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d1f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__DisplayName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName (const MethodInfo* method);
// 0x3e24c90

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DisplayName_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x3e24d30

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Guild_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x3e24dd0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d22 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Status
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status (const MethodInfo* method);
// 0x3e24e70

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Status_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d23 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__CharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType (const MethodInfo* method);
// 0x3e24f10

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CharacterType_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d24 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Loadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout (const MethodInfo* method);
// 0x3e24fb0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Loadout_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d25 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Kills
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills (const MethodInfo* method);
// 0x3e25050

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kills_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Kills_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d26 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Deaths
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths (const MethodInfo* method);
// 0x3e25130

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Deaths_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Deaths_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d27 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__HighestDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage (const MethodInfo* method);
// 0x3e25210

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighestDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighestDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d28 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__TotalDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage (const MethodInfo* method);
// 0x3e252f0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TotalDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TotalDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d29 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x3e253d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ping_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d2a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpectateID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID (const MethodInfo* method);
// 0x3e25470

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpectateID_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d2b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpawnPoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint (const MethodInfo* method);
// 0x3e25510

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SpawnPoint_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SpawnPoint_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object);
    DAT_05702d2c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__GetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty (const MethodInfo* method);
// 0x3e255f0

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCustomProperty);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d2d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__SetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty (const MethodInfo* method);
// 0x3e25740

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCustomProperty);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d2e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__ClearKDR
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR (const MethodInfo* method);
// 0x3e25890

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this;
  
  if (DAT_05702d2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearKDR_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d2f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e259e0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702d30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetCustomProperty");
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"IsAnonymous");
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"ClearKDR");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"SpectateID");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Loadout");
    il2cpp_init_method_metadata(&"GetCustomProperty");
    il2cpp_init_method_metadata(&"CharacterType");
    il2cpp_init_method_metadata(&"SpawnPoint");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"UserID");
    il2cpp_init_method_metadata(&"Ping");
    il2cpp_init_method_metadata(&"Status");
    il2cpp_init_method_metadata(&"Connected");
    il2cpp_init_method_metadata(&"DisplayName");
    il2cpp_init_method_metadata(&"ID");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_05702d30 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Character",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Connected",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsAnonymous",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UserID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DisplayName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Guild",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Team",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Status",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CharacterType",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Loadout",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Kills",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Deaths",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HighestDamage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TotalDamage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ping",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpectateID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SpawnPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetCustomProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCustomProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearKDR",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25d70

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Character>g____getter_2_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702cfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702cfd = '\x01';
  }
  player = (__i->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (Photon_Pun_PhotonView_o *)0x0) {
LAB_03e22902:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      character = (Characters_BaseCharacter_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)x,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (character == (Characters_BaseCharacter_o *)0x0) goto LAB_03e22902;
        if (*(char *)&(character->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(character->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_03e22902;
          if (*(Photon_Realtime_Player_o **)(lVar1 + 0x80) == (__i->fields).Player) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                               (character,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar3;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Connected>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25d90

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Connected>g____getter_3_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25dc0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__ID>g____getter_4_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     ((__i->fields).Player != (Photon_Realtime_Player_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsAnonymous>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25e00

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsAnonymous>g____getter_5_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *__this;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702cfe == '\0') {
      il2cpp_init_method_metadata(&"anon_");
      DAT_05702cfe = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      __this = (pPVar1->fields).nickName;
      if (__this == (System_String_o *)0x0) {
        local_9 = 1;
      }
      else {
        bVar2 = System_String__StartsWith(__this,"anon_",(MethodInfo *)0x0);
        local_9 = (undefined1)bVar2;
      }
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__UserID>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25e80

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__UserID>g____getter_6_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields).nickName;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25ea0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Name>g____getter_7_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702cff == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702cff = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__DisplayName>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25f20

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__DisplayName>g____getter_8_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d00 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d00 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e25fb0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Guild>g____getter_9_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d01 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d01 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26030

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Team>g____getter_10_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d02 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d02 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Status>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e260b0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Status>g____getter_11_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d03 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d03 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__CharacterType>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26130

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__CharacterType>g____getter_12_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d04 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d04 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Loadout>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e261b0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Loadout>g____getter_13_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d05 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      il2cpp_init_method_metadata(&"");
      DAT_05702d05 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26230

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Kills>g____getter_14_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d06 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d06 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e262c0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Kills>g____setter_14_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Photon_Realtime_Player_o *pPVar6;
  Il2CppObject *value;
  undefined4 extraout_var;
  undefined8 uStack_28;
  undefined *puStack_20;
  
  if (DAT_05702d31 == '\0') {
    puStack_20 = (undefined *)0x3e262df;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    puStack_20 = (undefined *)0x3e262eb;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d31 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    puStack_20 = (undefined *)0x3e2630a;
    il2cpp_init_class();
  }
  puStack_20 = (undefined *)0x3e2631c;
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  uStack_28 = CONCAT44(extraout_var,iVar5);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d07 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d07 = '\x01';
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 == '\0') {
      pPVar2 = (__i->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar2 != pPVar6) {
        return;
      }
    }
    pPVar2 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
    uStack_28 = CONCAT44(iVar5,(undefined4)uStack_28);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4);
    PhotonExtensions__SetCustomProperty(pPVar2,key,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03e26337;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26340

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Deaths>g____getter_15_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d08 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d08 = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e263d0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Deaths>g____setter_15_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Photon_Realtime_Player_o *pPVar6;
  Il2CppObject *value;
  undefined4 extraout_var;
  undefined8 uStack_28;
  undefined *puStack_20;
  
  if (DAT_05702d32 == '\0') {
    puStack_20 = (undefined *)0x3e263ef;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    puStack_20 = (undefined *)0x3e263fb;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d32 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    puStack_20 = (undefined *)0x3e2641a;
    il2cpp_init_class();
  }
  puStack_20 = (undefined *)0x3e2642c;
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  uStack_28 = CONCAT44(extraout_var,iVar5);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d09 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d09 = '\x01';
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 == '\0') {
      pPVar2 = (__i->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar2 != pPVar6) {
        return;
      }
    }
    pPVar2 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
    uStack_28 = CONCAT44(iVar5,(undefined4)uStack_28);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4);
    PhotonExtensions__SetCustomProperty(pPVar2,key,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03e26447;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26450

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__HighestDamage>g____getter_16_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0a = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e264e0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__HighestDamage>g____setter_16_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Photon_Realtime_Player_o *pPVar6;
  Il2CppObject *value;
  undefined4 extraout_var;
  undefined8 uStack_28;
  undefined *puStack_20;
  
  if (DAT_05702d33 == '\0') {
    puStack_20 = (undefined *)0x3e264ff;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    puStack_20 = (undefined *)0x3e2650b;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d33 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    puStack_20 = (undefined *)0x3e2652a;
    il2cpp_init_class();
  }
  puStack_20 = (undefined *)0x3e2653c;
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  uStack_28 = CONCAT44(extraout_var,iVar5);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0b = '\x01';
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 == '\0') {
      pPVar2 = (__i->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar2 != pPVar6) {
        return;
      }
    }
    pPVar2 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
    uStack_28 = CONCAT44(iVar5,(undefined4)uStack_28);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4);
    PhotonExtensions__SetCustomProperty(pPVar2,key,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03e26557;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26560

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__TotalDamage>g____getter_17_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0c = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e265f0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__TotalDamage>g____setter_17_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Photon_Realtime_Player_o *pPVar6;
  Il2CppObject *value;
  undefined4 extraout_var;
  undefined8 uStack_28;
  undefined *puStack_20;
  
  if (DAT_05702d34 == '\0') {
    puStack_20 = (undefined *)0x3e2660f;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    puStack_20 = (undefined *)0x3e2661b;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d34 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    puStack_20 = (undefined *)0x3e2663a;
    il2cpp_init_class();
  }
  puStack_20 = (undefined *)0x3e2664c;
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  uStack_28 = CONCAT44(extraout_var,iVar5);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0d = '\x01';
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 == '\0') {
      pPVar2 = (__i->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar2 != pPVar6) {
        return;
      }
    }
    pPVar2 = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
    uStack_28 = CONCAT44(iVar5,(undefined4)uStack_28);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4);
    PhotonExtensions__SetCustomProperty(pPVar2,key,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03e26667;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26670

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__Ping>g____getter_18_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0e = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpectateID>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26700

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__SpectateID>g____getter_19_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (DAT_05702d0f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
      DAT_05702d0f = '\x01';
    }
    player = (__i->fields).Player;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PhotonExtensions__GetIntProperty
              (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,
               (MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3e26790

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__SpawnPoint>g____getter_20_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702d10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d10 = '\x01';
  }
  bVar1 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
    return (Il2CppObject *)__this;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e26820

void CustomLogic_CustomLogicPlayerBuiltin_Bindings__<__CreatePropertyBinding__SpawnPoint>g____setter_20_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05702d35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d35 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin___ctor (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3e1f210

void CustomLogic_CustomLogicPlayerBuiltin___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  if (DAT_05702cfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702cfc = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Player = player;
  il2cpp_runtime_glue(&(__this->fields).Player,player);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Character
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin__get_Character (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e227b0

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Character
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (DAT_05702cfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702cfd = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    x = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (Photon_Pun_PhotonView_o *)0x0) {
LAB_03e22902:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      character = (Characters_BaseCharacter_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)x,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (character == (Characters_BaseCharacter_o *)0x0) goto LAB_03e22902;
        if (*(char *)&(character->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(character->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_03e22902;
          if (*(Photon_Realtime_Player_o **)(lVar1 + 0x80) == (__this->fields).Player) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                               (character,(MethodInfo *)0x0);
            return pCVar3;
          }
        }
      }
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Connected
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_Connected (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22910

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_Connected
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (__this->fields).Player != (Photon_Realtime_Player_o *)0x0);
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22920

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).actorNumber;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAnonymous
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22940

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05702cfe == '\0') {
    il2cpp_init_method_metadata(&"anon_");
    DAT_05702cfe = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    __this_00 = (pPVar1->fields).nickName;
    if (__this_00 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(__this_00,"anon_",(MethodInfo *)0x0);
      return bVar2;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)pPVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_UserID
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_UserID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22990

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_UserID
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).nickName;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Name (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e229b0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Name
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702cff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702cff = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_DisplayName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22a30

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d00 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98),
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Guild (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22ab0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Guild
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d01 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d01 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Team (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22b30

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Team
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d02 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Status
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Status (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22bb0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Status
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d03 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_CharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22c30

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d04 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Loadout
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Loadout (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22cb0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Loadout
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (DAT_05702d05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05702d05 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Kills
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22d30

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d06 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Kills
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e22d90

void CustomLogic_CustomLogicPlayerBuiltin__set_Kills
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (DAT_05702d07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d07 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Deaths
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e22ea0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d08 = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Deaths
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e22f00

void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (DAT_05702d09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d09 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_HighestDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23010

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0a = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_HighestDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e23070

void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (DAT_05702d0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0b = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_TotalDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23180

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0c = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_TotalDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e231e0

void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (DAT_05702d0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0d = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e232f0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0e = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpectateID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23360

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (DAT_05702d0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05702d0f = '\x01';
  }
  player = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpawnPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e233d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702d10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d10 = '\x01';
  }
  bVar1 = PhotonExtensions__HasSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    value = PhotonExtensions__GetSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return __this_00;
  }
  return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_SpawnPoint
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e23460

void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_array *value_00;
  System_String_o *pSVar4;
  System_String_o *value_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  Photon_Realtime_Player_o *pPVar5;
  float __this_00;
  float fVar6;
  undefined1 local_30 [8];
  float local_28 [2];
  
  if (DAT_05702d11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"SpawnPoint");
    il2cpp_init_method_metadata(&",");
    DAT_05702d11 = '\x01';
  }
  local_28[0] = 0.0;
  local_30 = (undefined1  [8])0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = extraout_RDX_01;
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = extraout_RDX;
  }
  if (cVar1 == '\0') {
    pPVar5 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    if (pPVar5 != pPVar3) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"SpawnPoint",method_00);
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_28[0] = (value->fields).Value.fields.z;
    local_30 = *(undefined1 (*) [8])&(value->fields).Value.fields;
    value_00 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
    pSVar4 = System_Single__ToString(__this_00,(MethodInfo *)local_30);
    if (value_00 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)value_00->max_length != 0) {
      value_00->m_Items[0] = pSVar4;
      fVar6 = (float)il2cpp_runtime_glue(value_00->m_Items,pSVar4);
      pSVar4 = System_Single__ToString(fVar6,(MethodInfo *)(local_30 + 4));
      if (1 < (uint)value_00->max_length) {
        value_00->m_Items[1] = pSVar4;
        fVar6 = (float)il2cpp_runtime_glue(value_00->m_Items + 1,pSVar4);
        pSVar4 = System_Single__ToString(fVar6,(MethodInfo *)local_28);
        if (2 < (uint)value_00->max_length) {
          value_00->m_Items[2] = pSVar4;
          il2cpp_runtime_glue(value_00->m_Items + 2,pSVar4);
          value_01 = System_String__Join(",",value_00,(MethodInfo *)0x0);
          pPVar5 = (__this->fields).Player;
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70);
          goto LAB_03e23682;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pPVar5 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70);
  value_01 = "null";
LAB_03e23682:
  PhotonExtensions__SetCustomProperty(pPVar5,pSVar4,(Il2CppObject *)value_01,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetCustomProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x3e23960

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,
          MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (DAT_05702d12 == '\0') {
    il2cpp_init_method_metadata(&"CL:");
    DAT_05702d12 = '\x01';
  }
  player = (__this->fields).Player;
  key = System_String__Concat("CL:",property,(MethodInfo *)0x0);
  pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$SetCustomProperty
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x3e239c0

void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,
               Il2CppObject *value,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05702d13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"CL:");
    DAT_05702d13 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar6) {
      return;
    }
  }
  if ((value != (Il2CppObject *)0x0) &&
     ((((pIVar3 = value->klass, pIVar3 == DAT_05711098 || (pIVar3 == DAT_05711068)) ||
       (pIVar3 == DAT_057110b0)) || (pIVar3 == DAT_05711048)))) {
    pSVar7 = System_String__Concat("CL:",property,(MethodInfo *)0x0);
    CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,pSVar7,method_00);
    pPVar2 = (__this->fields).Player;
    pSVar7 = System_String__Concat("CL:",property,(MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperty(pPVar2,pSVar7,value,(MethodInfo *)0x0);
    return;
  }
  uVar8 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar8);
  pSVar7 = (System_String_o *)il2cpp_init_method_metadata(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
  System_Exception___ctor(__this_00,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_init_method_metadata(&MethodInfo_Void_SetCustomProperty);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar8);
}


// CustomLogic.CustomLogicPlayerBuiltin$$ClearKDR
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23b40

void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppObject *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_05702d14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"ClearKDR");
    DAT_05702d14 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_00 = extraout_RDX_01;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
    method_00 = extraout_RDX;
  }
  if (cVar4 == '\0') {
    pPVar2 = (__this->fields).Player;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    if (pPVar2 != pPVar6) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"ClearKDR",method_00);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  local_34 = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
  local_38 = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
  System_Collections_Generic_Dictionary<object__object>__Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
  local_3c = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
  System_Collections_Generic_Dictionary<object__object>__Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
  local_40 = 0;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
  System_Collections_Generic_Dictionary<object__object>__Add(__this_00,pIVar3,pIVar7,MethodInfo_Void_Add);
  PhotonExtensions__SetCustomProperties
            ((__this->fields).Player,
             (System_Collections_Generic_Dictionary_string__object__o *)__this_00,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$CheckPropertyRateLimit
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x3e236a0

void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,
               MethodInfo *method)

{
  int32_t key;
  Photon_Realtime_Player_o *pPVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_Exception_o *__this_01;
  float fVar8;
  float fVar9;
  
  if (DAT_05702d15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single__get_It);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702d15 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar1 == pPVar4) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (((lVar2 != 0) && (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)
      ) && (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0x68),
           __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (__this_00,(pPVar1->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      pPVar1 = (__this->fields).Player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto LAB_03e238f6;
      key = (pPVar1->fields).actorNumber;
      pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
      System_Collections_Generic_Dictionary<object__float>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_System_Single);
      System_Collections_Generic_Dictionary<int__object>__set_Item
                (__this_00,key,(Il2CppObject *)pSVar5,MethodInfo_Void_set_Item);
    }
    pPVar1 = (__this->fields).Player;
    if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary<int__object>__get_Item
                           (__this_00,(pPVar1->fields).actorNumber,MethodInfo_Dictionary_2_System_String_System_Single__get_It),
       pSVar5 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                        (pSVar5,(Il2CppObject *)property,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  (pSVar5,(Il2CppObject *)property,0.0,MethodInfo_Void_set_Item);
      }
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar9 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        (pSVar5,(Il2CppObject *)property,MethodInfo_Single_get_Item);
      if (fVar8 - fVar9 < 1.0) {
        pSVar6 = (System_String_o *)il2cpp_init_method_metadata(&"Exceeded set property rate limit on non-local client: ");
        pSVar6 = System_String__Concat(pSVar6,property,(MethodInfo *)0x0);
        uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar7);
        System_Exception___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
        uVar7 = il2cpp_init_method_metadata(&MethodInfo_Void_CheckPropertyRateLimit);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_01,uVar7);
      }
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      System_Collections_Generic_Dictionary<object__float>__set_Item
                (pSVar5,(Il2CppObject *)property,fVar8,MethodInfo_Void_set_Item);
      return;
    }
  }
LAB_03e238f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__Equals (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3e23da0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__Equals
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *in_RAX;
  bool bVar2;
  
  if (DAT_05702d16 == '\0') {
    in_RAX = (Il2CppClass *)il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    DAT_05702d16 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    bVar2 = (__this->fields).Player == (Photon_Realtime_Player_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogicPlayerBuiltin->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPlayerBuiltin)) {
      return 0;
    }
    in_RAX = (Il2CppClass *)(__this->fields).Player;
    bVar2 = in_RAX == obj[3].klass;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),bVar2);
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23e20

int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    vtable_dispatch = (pPVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pPVar1,(pPVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin____Eq__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3e23e50

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin____Eq__
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  
  if (self != (Il2CppObject *)0x0) {
    vtable_dispatch = self->klass->vtable[0].methodPtr;
    bVar1 = (*vtable_dispatch)(self,other,self->klass->vtable[0].method,vtable_dispatch)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23e80

int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._2_GetHashCode.methodPtr;
  iVar1 = (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method,in_RDX,
                     vtable_dispatch);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23ea0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702d17 == '\0') {
    il2cpp_init_method_metadata(&"Player");
    DAT_05702d17 = '\x01';
  }
  return "Player";
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23ed0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23ee0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3e23ef0

bool_conflict
CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


