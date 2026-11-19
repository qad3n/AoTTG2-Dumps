// Type: CustomLogic.CustomLogicLineCastHitResultBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicLineCastHitResultBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineCastHitResultBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicLineCastHitResultBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59afb70

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineCastHitResultBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59b0c80

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b30 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59b0cf0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b0d00

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__c,(MethodInfo *)__c);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b0d20

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
                        ((CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)__this,__a->m_Items[0],
                         __a->m_Items[1],method);
      uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b0d70

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_14 [4];
  
  if ((__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._Point_k__BackingField, pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)
     ) {
    CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__c->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59afc00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"ColliderInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Point");
    Il2CppMethodInitialized_07545b24 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x624ce79f) {
    if (uVar2 < 0x32b1316e) {
      if (uVar2 == 0x2cfc1e5d) {
        bVar1 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings)
          ;
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x32b1316d) {
        bVar1 = System_String__op_Equality(name,"ColliderInfo",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings)
          ;
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x549f4d10) {
      bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x58de2772) {
      bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x624ce79e) {
      bVar1 = System_String__op_Equality(name,"IsMapObject",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x91efe6d8) {
    if (uVar2 == 0x91efe6d7) {
      bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xd3d96082) {
    bVar1 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xeaa8ef31) {
    bVar1 = System_String__op_Equality(name,"Point",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf5ca12e0) {
    bVar1 = System_String__op_Equality(name,"IsCharacter",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineCastHitResultBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter (const MethodInfo* method);
// 0x59b00c0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsCharacter_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b25 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsCharacter_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject (const MethodInfo* method);
// 0x59b0160

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsMapObject_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b26 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsMapObject_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Distance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance (const MethodInfo* method);
// 0x59b0200

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Distance_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b27 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Distance_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Point
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point (const MethodInfo* method);
// 0x59b02a0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point(MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Point_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b28 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Point_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x59b0340

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Normal_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b29 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Normal_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x59b03e0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Collider_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b2a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Collider_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__ColliderInfo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo (const MethodInfo* method);
// 0x59b0480

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__ColliderInfo_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
    Il2CppMethodInitialized_07545b2b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__ColliderInfo_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59b0520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b0555: jmp 0x59b05c5

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Copy___b__9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b2c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->
             static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Copy___b__9
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59b0660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b0695: jmp 0x59b0705

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Eq___b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b2d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->
             static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Eq___b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59b07a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b07d5: jmp 0x59b0845

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Hash___b__11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b2e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->
             static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Hash___b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59b08e0

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"ColliderInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Point");
    Il2CppMethodInitialized_07545b2f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCharacter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Distance",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Point",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Collider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColliderInfo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsCharacter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0ae0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  undefined1 local_11;
  Il2CppObject *local_10;
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545b1e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
      il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
      Il2CppMethodInitialized_07545b1e = '\x01';
    }
    local_10 = (Il2CppObject *)0x0;
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(__i->fields).Variables;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)"IsCharacter",&local_10,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
      if (((bVar1) && (local_10 != (Il2CppObject *)0x0)) && (local_10->klass == g_data_075566f0)) {
        puVar3 = il2cpp_vm_Object_Unbox(local_10);
        local_11 = *puVar3;
      }
      else {
        local_11 = 0;
      }
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_11);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsMapObject>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0ba0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Distance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0bd0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Point>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0c00

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._Point_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Normal>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0c20

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0c40

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._Collider_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__ColliderInfo>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x59b0c60

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsCharacter
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af510

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  char *pcVar2;
  Il2CppObject *local_10;
  
  if (Il2CppMethodInitialized_07545b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_07545b1e = '\x01';
  }
  local_10 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)"IsCharacter",&local_10,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
  if (((bVar1) && (local_10 != (Il2CppObject *)0x0)) && (local_10->klass == g_data_075566f0)) {
    pcVar2 = il2cpp_vm_Object_Unbox(local_10);
    return *pcVar2 != '\0';
  }
  return false;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsCharacter
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59af5b0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *value_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_07545b1f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  uStack_18 = CONCAT17(value,(undefined7)uStack_18);
  value_00 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)"IsCharacter",value_00,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsMapObject
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af630

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsMapObject_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsMapObject
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59af640

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsMapObject_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Distance
// il2cpp: float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af650

float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance
                (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Distance_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Distance
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59af660

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._Distance_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Point
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af670

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Point_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Point
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x59af680

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Point_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Normal
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af690

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Normal_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Normal
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x59af6a0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  (__this->fields)._Normal_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Normal_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Collider
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af6b0

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Collider_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Collider
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* value, const MethodInfo* method);
// 0x59af6c0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *value,MethodInfo *method)

{
  (__this->fields)._Collider_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Collider_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ColliderInfo
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af6d0

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._ColliderInfo_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_ColliderInfo
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* value, const MethodInfo* method);
// 0x59af6e0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,
               CustomLogic_CustomLogicColliderBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._ColliderInfo_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ColliderInfo_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af6f0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  Il2CppObject *value;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 local_31;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_07545b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545b20 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
  if (Il2CppMethodInitialized_07545b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b23 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_07545b1e = '\x01';
  }
  local_30 = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)"IsCharacter",&local_30,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    if (((bVar3) && (local_30 != (Il2CppObject *)0x0)) && (local_30->klass == g_data_075566f0)) {
      puVar5 = il2cpp_vm_Object_Unbox(local_30);
      uVar6 = *puVar5;
    }
    else {
      uVar6 = 0;
    }
    if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) goto label_059af96b;
    if (Il2CppMethodInitialized_07545b1f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
      Il2CppMethodInitialized_07545b1f = '\x01';
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
    local_31 = uVar6;
    value = il2cpp_vm_Object_Box(g_data_075566f0,&local_31);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059af96b;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)"IsCharacter",value,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    (__this_00->fields)._IsMapObject_k__BackingField = (__this->fields)._IsMapObject_k__BackingField;
    pCVar4 = (__this->fields)._Point_k__BackingField;
    if (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_059af96b;
    pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar4,(MethodInfo *)0x0);
    if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059af970;
    }
    (__this_00->fields)._Point_k__BackingField = pCVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField);
    pCVar4 = (__this->fields)._Normal_k__BackingField;
    if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar4,(MethodInfo *)0x0);
      if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
        if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
label_059af970:
          il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
        }
      }
      (__this_00->fields)._Normal_k__BackingField = pCVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField);
      (__this_00->fields)._Distance_k__BackingField = (__this->fields)._Distance_k__BackingField;
      (__this_00->fields)._Collider_k__BackingField = (__this->fields)._Collider_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField);
      (__this_00->fields)._ColliderInfo_k__BackingField = (__this->fields)._ColliderInfo_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField);
      return (Il2CppObject *)__this_00;
    }
  }
label_059af96b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af9f0

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
// 0x59afa00

bool CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,Il2CppObject *self,
               Il2CppObject *other,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppClass *__this_01;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07545b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    Il2CppMethodInitialized_07545b21 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (self->klass->_2).typeHierarchyDepth) {
      pIVar3 = (Il2CppObject *)0x0;
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin) {
        pIVar3 = self;
      }
      if ((((other != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).typeHierarchyDepth)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin)) {
        __this_00 = pIVar3[3].monitor;
        if (__this_00 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicVector3Builtin____Eq__
                            (__this_00,(Il2CppObject *)__this_00,other[3].monitor,(MethodInfo *)0x0);
          if (!bVar2) {
            return false;
          }
          __this_01 = pIVar3[4].klass;
          if (__this_01 != (Il2CppClass *)0x0) {
            bVar2 = CustomLogic_CustomLogicVector3Builtin____Eq__
                              ((CustomLogic_CustomLogicVector3Builtin_o *)__this_01,(Il2CppObject *)__this_01,
                               (Il2CppObject *)other[4].klass,(MethodInfo *)0x0);
            return bVar2;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59afad0

int32_t CustomLogic_CustomLogicLineCastHitResultBuiltin____Hash__
                  (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  uint uVar2;
  uint uVar3;
  
  pCVar1 = (__this->fields)._Point_k__BackingField;
  if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar2 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar3 = CustomLogic_CustomLogicVector3Builtin____Hash__(pCVar1,(MethodInfo *)0x0);
      return uVar3 ^ uVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59afb10

System_String_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastHitResult");
    Il2CppMethodInitialized_07545b22 = '\x01';
  }
  return "LineCastHitResult";
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59afb40

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59afb50

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59afb60

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x59af980

void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b23 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


