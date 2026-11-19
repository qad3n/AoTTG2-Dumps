// Type: CustomLogic.CustomLogicPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPlayerBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPlayerBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a391a0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754613a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_0754613a = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)args->max_length != 1) {
    NullCheck(args);
    pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar2 = System_String__Concat_5301f10(str0,pSVar2,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar2,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  obj = args->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pPVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Player);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  if (Il2CppMethodInitialized_0754611e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754611e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Player = pPVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Player);
  return __this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a3bb00

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546158 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a3bb70

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCustomProperty>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a3bb80

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *property;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546159 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    property = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty(__c,property,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCustomProperty>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a3bc10

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  
  if (Il2CppMethodInitialized_0754615a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754615a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a3bca3:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    property = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
                  (__c,property,__a->m_Items[1],(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a3bca3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearKDR>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a3bcb0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__ClearKDR(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a39320

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPlayerBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_0754613b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAnonymous");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateID");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"UserID");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Connected");
    il2cpp_codegen_initialize_runtime_metadata(&"DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_0754613b = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7bf69371) {
    if (uVar2 < 0x2329c92d) {
      if (uVar2 < 0xfe07307) {
        if (uVar2 == 0x5ef20f) {
          bVar1 = System_String__op_Equality(name,"Status",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xfe07306) {
          bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x209c92df) {
        bVar1 = System_String__op_Equality(name,"UserID",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2267fabd) {
        bVar1 = System_String__op_Equality(name,"ClearKDR",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x2329c92c) {
        bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x537d6b99) {
      if (uVar2 == 0x33b0223e) {
        bVar1 = System_String__op_Equality(name,"IsAnonymous",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x369870e0) {
        bVar1 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x537d6b98) {
        bVar1 = System_String__op_Equality(name,"CharacterType",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x56e8eb60) {
      bVar1 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x72527c0e) {
      bVar1 = System_String__op_Equality(name,"SpawnPoint",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7bf69370) {
      bVar1 = System_String__op_Equality(name,"Connected",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdbaad9bb) {
    if (uVar2 < 0xb404b03a) {
      if (uVar2 == 0xb404b039) {
        bVar1 = System_String__op_Equality(name,"SetCustomProperty",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x7fb7f0a9) {
        bVar1 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc835e055) {
      bVar1 = System_String__op_Equality(name,"GetCustomProperty",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xcd8e1e97) {
      bVar1 = System_String__op_Equality(name,"SpectateID",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdbaad9ba) {
      bVar1 = System_String__op_Equality(name,"Deaths",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf30591ff) {
    if (uVar2 == 0xe078d003) {
      bVar1 = System_String__op_Equality(name,"Loadout",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xec7340b0) {
      bVar1 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf30591fe) {
      bVar1 = System_String__op_Equality(name,"Kills",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf4b21828) {
    bVar1 = System_String__op_Equality(name,"TotalDamage",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf8eca4b6) {
    bVar1 = System_String__op_Equality(name,"DisplayName",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xffbdd3de) {
    bVar1 = System_String__op_Equality(name,"HighestDamage",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x5a39b70

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754613c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754613c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Connected
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected (const MethodInfo* method);
// 0x5a39c10

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754613d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754613d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x5a39cb0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754613e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754613e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsAnonymous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous (const MethodInfo* method);
// 0x5a39d50

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754613f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754613f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__UserID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID (const MethodInfo* method);
// 0x5a39df0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546140 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x5a39e90

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546141 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__DisplayName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName (const MethodInfo* method);
// 0x5a39f30

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546142 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x5a39fd0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546143 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x5a3a070

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546144 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Status
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status (const MethodInfo* method);
// 0x5a3a110

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546145 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__CharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType (const MethodInfo* method);
// 0x5a3a1b0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546146 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Loadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout (const MethodInfo* method);
// 0x5a3a250

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546147 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Kills
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills (const MethodInfo* method);
// 0x5a3a2f0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546148 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Deaths
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths (const MethodInfo* method);
// 0x5a3a3d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_07546149 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__HighestDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage (const MethodInfo* method);
// 0x5a3a4b0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754614a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754614a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__TotalDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage (const MethodInfo* method);
// 0x5a3a590

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754614b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754614b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x5a3a670

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754614c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754614c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpectateID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID (const MethodInfo* method);
// 0x5a3a710

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754614d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754614d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpawnPoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint (const MethodInfo* method);
// 0x5a3a7b0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754614e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_0754614e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__GetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty (const MethodInfo* method);
// 0x5a3a890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a3a8c5: jmp 0x5a3a935

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754614f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754614f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__SetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty (const MethodInfo* method);
// 0x5a3a9d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a3aa05: jmp 0x5a3aa75

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546150 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__ClearKDR
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR (const MethodInfo* method);
// 0x5a3ab10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a3ab45: jmp 0x5a3abb5

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546151 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a3ac50

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAnonymous");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateID");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"UserID");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Connected");
    il2cpp_codegen_initialize_runtime_metadata(&"DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07546152 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Character",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Connected",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAnonymous",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UserID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DisplayName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Guild",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Status",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CharacterType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loadout",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kills",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deaths",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HighestDamage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TotalDamage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ping",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectateID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCustomProperty",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCustomProperty",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearKDR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3afe0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicPlayerBuiltin__get_Character(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Connected>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3aff0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b020

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) ||
     ((__i->fields).Player == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsAnonymous>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b060

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *__this;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546120 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"anon_");
      Il2CppMethodInitialized_07546120 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      __this = (pPVar1->fields)._UserId_k__BackingField;
      if (__this == (System_String_o *)0x0) {
        local_9 = true;
      }
      else {
        local_9 = System_String__StartsWith(__this,"anon_",(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__UserID>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b0e0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) ||
     (pPVar1 = (__i->fields).Player, pPVar1 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pPVar1->fields)._UserId_k__BackingField;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b100

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546121 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__DisplayName>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b180

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546122 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName,
                      "",(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b210

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546123 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,"",
                      (MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b290

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546124 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Status>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b310

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546125 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,""
                      ,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__CharacterType>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b390

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546126 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                      "",(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Loadout>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b410

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546127 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                      "",(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b490

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546128 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3b520

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546153 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__set_Kills(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b5a0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0754612a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612a = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3b630

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546154 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__set_Deaths(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b6b0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0754612c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612c = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3b740

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546155 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b7c0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0754612e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612e = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3b850

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546156 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b8d0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546130 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpectateID>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b960

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546131 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  PhotonExtensions__GetIntProperty
            (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,0,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a3b9f0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546132 = '\x01';
  }
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  bVar1 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
  if (bVar1) {
    value = PhotonExtensions__GetSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a3ba80

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546157 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin___ctor (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5a34900

void CustomLogic_CustomLogicPlayerBuiltin___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754611e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754611e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Player);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Character
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin__get_Character (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37a50

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Character
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Utility_BaseComponentCache_o *pUVar1;
  bool bVar2;
  int32_t viewID;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_0754611f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754611f = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    pPVar3 = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) {
label_05a37ba5:
        ThrowNullReferenceException();
      }
      character = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pPVar3,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter
                            );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (character == (Characters_BaseCharacter_o *)0x0) goto label_05a37ba5;
        if ((character->fields).Dead == false) {
          pUVar1 = (character->fields).Cache;
          if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pPVar3 = (pUVar1->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0))
          goto label_05a37ba5;
          if ((pPVar3->fields)._Owner_k__BackingField == (__this->fields).Player) {
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
            return pCVar4;
          }
        }
      }
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Connected
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_Connected (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37bb0

bool CustomLogic_CustomLogicPlayerBuiltin__get_Connected
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Player != (Photon_Realtime_Player_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37bc0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields).actorNumber;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAnonymous
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37be0

bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"anon_");
    Il2CppMethodInitialized_07546120 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pPVar1->fields)._UserId_k__BackingField;
  if (__this_00 == (System_String_o *)0x0) {
    return true;
  }
  bVar2 = System_String__StartsWith(__this_00,"anon_",(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_UserID
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_UserID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37c30

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_UserID
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._UserId_k__BackingField;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Name (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37c50

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Name
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546121 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_DisplayName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37cd0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546122 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Guild (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37d50

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Guild
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546123 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Team (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37dd0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Team
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546124 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Status
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Status (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37e50

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Status
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546125 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,""
                      ,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_CharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37ed0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546126 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Loadout
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Loadout (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37f50

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Loadout
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546127 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Kills
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a37fd0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07546128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546128 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Kills
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a38030
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a38065: jmp 0x5a380da
// asm:   0x5a380c7: jmp 0x5a380da

void CustomLogic_CustomLogicPlayerBuiltin__set_Kills
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07546129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546129 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar4) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  value_00 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Deaths
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38140

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754612a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612a = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Deaths
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a381a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a381d5: jmp 0x5a3824a
// asm:   0x5a38237: jmp 0x5a3824a

void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_0754612b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612b = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar4) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
  value_00 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_HighestDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a382b0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754612c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612c = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_HighestDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a38310
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a38345: jmp 0x5a383ba
// asm:   0x5a383a7: jmp 0x5a383ba

void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_0754612d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612d = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar4) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
  value_00 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_TotalDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38420

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754612e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612e = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_TotalDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a38480
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a384b5: jmp 0x5a3852a
// asm:   0x5a38517: jmp 0x5a3852a

void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *key;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value_00;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_0754612f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754612f = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar3) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if (pPVar2 != pPVar4) {
      return;
    }
  }
  pPVar2 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
  value_00 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
  PhotonExtensions__SetCustomProperty(pPVar2,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38590

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07546130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546130 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpectateID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38600

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07546131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07546131 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpawnPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38670

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546132 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  bVar1 = PhotonExtensions__HasSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
  if (bVar1) {
    value = PhotonExtensions__GetSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  }
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_SpawnPoint
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a386f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a38728: jmp 0x5a387d6
// asm:   0x5a387bf: jmp 0x5a387d6

void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_array *value_00;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined8 uStack_30;
  float afStack_28 [2];
  
  if (Il2CppMethodInitialized_07546133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07546133 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (!bVar3) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
    }
    if (pPVar2 != pPVar4) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"SpawnPoint",method_00);
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pPVar2 = (__this->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    PhotonExtensions__SetCustomProperty
              (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
               (Il2CppObject *)"null",(MethodInfo *)0x0);
    return;
  }
  afStack_28[0] = (value->fields).Value.fields.z;
  uStack_30._0_4_ = (value->fields).Value.fields.x;
  uStack_30._4_4_ = (value->fields).Value.fields.y;
  value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar5 = System_Single__ToString((float *)&uStack_30,(MethodInfo *)0x0);
  if (value_00 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)value_00->max_length != 0) {
    value_00->m_Items[0] = pSVar5;
    Il2CppCodeGenWriteBarrier(value_00->m_Items);
    pSVar5 = System_Single__ToString((float *)((long)&uStack_30 + 4),(MethodInfo *)0x0);
    if ((value_00->max_length & 0xfffffffe) != 0) {
      value_00->m_Items[1] = pSVar5;
      Il2CppCodeGenWriteBarrier(value_00->m_Items + 1);
      pSVar5 = System_Single__ToString(afStack_28,(MethodInfo *)0x0);
      if (2 < (uint)value_00->max_length) {
        value_00->m_Items[2] = pSVar5;
        Il2CppCodeGenWriteBarrier(value_00->m_Items + 2);
        pSVar5 = System_String__Join(",",value_00,(MethodInfo *)0x0);
        pPVar2 = (__this->fields).Player;
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        PhotonExtensions__SetCustomProperty
                  (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
                   (Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetCustomProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x5a38c10

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_07546134 = '\x01';
  }
  player = (__this->fields).Player;
  key = System_String__Concat_52f0320("CL:",property,(MethodInfo *)0x0);
  pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$SetCustomProperty
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x5a38c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a38ca9: jmp 0x5a38d25

void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,Il2CppObject *value,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  Il2CppClass *pIVar5;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_07546135 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05a38cdd;
label_05a38c9e:
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) goto label_05a38d25;
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05a38c9e;
label_05a38cdd:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) goto label_05a38d25;
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar1 != pPVar3) {
    return;
  }
label_05a38d25:
  if ((value == (Il2CppObject *)0x0) ||
     ((((pIVar5 = value->klass, pIVar5 != g_data_07556740 && (pIVar5 != g_data_07556710)) &&
       (pIVar5 != g_data_07556758)) && (pIVar5 != g_data_075566f0)))) {
    pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar5);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
    System_Exception___ctor_54fa440(__this_00,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_SetCustomProperty);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pSVar4 = System_String__Concat_52f0320("CL:",property,(MethodInfo *)0x0);
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,pSVar4,method_00);
  pPVar1 = (__this->fields).Player;
  pSVar4 = System_String__Concat_52f0320("CL:",property,(MethodInfo *)0x0);
  PhotonExtensions__SetCustomProperty(pPVar1,pSVar4,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$ClearKDR
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a38df0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a38e28: jmp 0x5a38ed6
// asm:   0x5a38ebf: jmp 0x5a38ed6

void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (Il2CppMethodInitialized_07546136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    Il2CppMethodInitialized_07546136 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (!bVar4) {
    pPVar2 = (__this->fields).Player;
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_02;
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
    }
    if (pPVar2 != pPVar5) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"ClearKDR",method_00);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar3 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  local_34 = 0;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
  if (__this_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar3,
             pIVar6,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar3 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
  local_38 = 0;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar3,
             pIVar6,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar3 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
  local_3c = 0;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar3,
             pIVar6,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar3 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
  local_40 = 0;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar3,
             pIVar6,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  PhotonExtensions__SetCustomProperties((__this->fields).Player,__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$CheckPropertyRateLimit
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x5a38950

void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  int32_t key;
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  System_String_o *pSVar5;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07546137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546137 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar1 == pPVar4) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
      (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (pCVar2->fields).PlayerIdToLastPropertyChanges,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_00,(pPVar1->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ContainsKey
                      );
    if (!bVar3) {
      pPVar1 = (__this->fields).Player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_05a38ba6;
      key = (pPVar1->fields).actorNumber;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      System_Collections_Generic_Dictionary_int__object___set_Item
                (__this_00,key,(Il2CppObject *)__this_01,
                 (MethodInfo_4A0F720 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_set_Item);
    }
    pPVar1 = (__this->fields).Player;
    if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
       (__this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_00,(pPVar1->fields).actorNumber,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_get_Item
                              ), __this_02 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (__this_02,(Il2CppObject *)property,
                         (MethodInfo_4AB5680 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
      if (!bVar3) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (__this_02,(Il2CppObject *)property,0.0,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      }
      fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                        (__this_02,(Il2CppObject *)property,
                         (MethodInfo_4AB53E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (fVar6 - fVar7 < 1.0) {
        pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Exceeded set property rate limit on non-local client: ");
        pSVar5 = System_String__Concat_52f0320(pSVar5,property,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_54fa440(__this_03,pSVar5,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_CheckPropertyRateLimit);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
      }
      fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      System_Collections_Generic_Dictionary_object__float___set_Item
                (__this_02,(Il2CppObject *)property,fVar6,
                 (MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item)
      ;
      return;
    }
  }
label_05a38ba6:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__Equals (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5a39040

bool CustomLogic_CustomLogicPlayerBuiltin__Equals
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_07546138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_07546138 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppClass *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) {
      return false;
    }
    pIVar2 = obj[3].klass;
  }
  return (Il2CppClass *)(__this->fields).Player == pIVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a390c0

int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pPVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pPVar1,(pPVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin____Eq__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x5a390f0

bool CustomLogic_CustomLogicPlayerBuiltin____Eq__
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined1 uVar1;
  
  if (self == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = self->klass->vtable[0].methodPtr;
  uVar1 = (*vtableDispatch)(self,other,self->klass->vtable[0].method,vtableDispatch);
  return (bool)uVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a39120

int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._2_GetHashCode.methodPtr)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a39140

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    Il2CppMethodInitialized_07546139 = '\x01';
  }
  return "Player";
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a39170

bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a39180

bool CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a39190

bool CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


