// Type: CustomLogic.CustomLogicColliderBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColliderBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicColliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59f30c0

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColliderBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59f5170

void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dd9 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59f51e0

void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__14_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f51f0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__14_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dda = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicColliderBuiltin__ClosestPoint(__c,pCVar1,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPointOnBounds>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPointOnBounds_b__15_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f5280

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPointOnBounds_b__15_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ddb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ddb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds(__c,pCVar1,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__Raycast>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__Raycast_b__16_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f5310

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__Raycast_b__16_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545ddc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ddc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f53ec:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        __this_00 = (CustomLogic_CustomLogicColliderBuiltin_o *)__a->m_Items[2];
        collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                ((Il2CppObject *)__this_00,
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
          pCVar1 = CustomLogic_CustomLogicColliderBuiltin__Raycast(__this_00,start,end,collideWith,in_R8);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059f53ec;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__17_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f5400

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__17_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicColliderBuiltin____Copy__(__c,(MethodInfo *)__c);
  return pIVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__18_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f5420

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__18_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

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
    if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicColliderBuiltin____Eq__
                        ((CustomLogic_CustomLogicColliderBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                         method);
      uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__19_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f5470

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__19_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  int32_t iStack_1c;
  
  if (__c == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
label_059f550d:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545dbd = '\x01';
  }
  x = (UnityEngine_Object_o *)(__c->fields).collider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar3 = 0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__c->fields).collider;
    if (pUVar1 == (UnityEngine_Collider_o *)0x0) goto label_059f550d;
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  }
  iStack_1c = iVar3;
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
  return pIVar4;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59f3150

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicColliderBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"ExcludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"GameObjectTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"IncludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"ContactOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPointOnBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ProvidesContacts");
    il2cpp_codegen_initialize_runtime_metadata(&"MaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SharedMaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"AttachedArticulationBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Raycast");
    Il2CppMethodInitialized_07545dbf = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x8e2afb14) {
    if (uVar2 < 0x4b9fbea5) {
      if (uVar2 < 0x241c90a3) {
        if (uVar2 == 0xe986ab0) {
          bVar1 = System_String__op_Equality(name,"GameObjectTransform",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x241c90a2) {
          bVar1 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x4a5dd7d3) {
        bVar1 = System_String__op_Equality(name,"IsTrigger",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x4b9fbea4) {
        bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x790e86e9) {
      if (uVar2 == 0x549f4d10) {
        bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x790e86e8) {
        bVar1 = System_String__op_Equality(name,"AttachedArticulationBody",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x80175e56) {
      bVar1 = System_String__op_Equality(name,"ClosestPointOnBounds",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x8e2afb13) {
      bVar1 = System_String__op_Equality(name,"ExcludeLayers",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xad216711) {
    if (uVar2 < 0x990db27f) {
      if (uVar2 == 0x91efe6d7) {
        bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x990db27e) {
        bVar1 = System_String__op_Equality(name,"ProvidesContacts",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x9c86e43e) {
      bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xad216710) {
      bVar1 = System_String__op_Equality(name,"ContactOffset",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xb9fdf63f) {
    if (uVar2 == 0xad82abbb) {
      bVar1 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xb9fdf63e) {
      bVar1 = System_String__op_Equality(name,"SharedMaterialName",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xc0b0a123) {
    bVar1 = System_String__op_Equality(name,"MaterialName",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xd06f5ba1) {
    bVar1 = System_String__op_Equality(name,"IncludeLayers",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xdebe8d80) {
    bVar1 = System_String__op_Equality(name,"Raycast",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColliderBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__AttachedArticulationBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody (const MethodInfo* method);
// 0x59f3850

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ContactOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset (const MethodInfo* method);
// 0x59f38f0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x59f39d0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ExcludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers (const MethodInfo* method);
// 0x59f3ab0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IncludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers (const MethodInfo* method);
// 0x59f3b90

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IsTrigger
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger (const MethodInfo* method);
// 0x59f3c70

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x59f3d50

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ProvidesContacts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts (const MethodInfo* method);
// 0x59f3df0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__MaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName (const MethodInfo* method);
// 0x59f3ed0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__SharedMaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName (const MethodInfo* method);
// 0x59f3f70

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dc9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x59f4010

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__GameObjectTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform (const MethodInfo* method);
// 0x59f40b0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_07545dcb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x59f4150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f4185: jmp 0x59f41f5

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dcc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPointOnBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds (const MethodInfo* method);
// 0x59f4290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f42c5: jmp 0x59f4335

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dcd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__Raycast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast (const MethodInfo* method);
// 0x59f43d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f4405: jmp 0x59f4475

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dce = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59f4510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f4545: jmp 0x59f45b5

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dcf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59f4650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f4685: jmp 0x59f46f5

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dd0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59f4790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f47c5: jmp 0x59f4835

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicColliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545dd1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicColliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59f48d0

void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545dd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"ExcludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"GameObjectTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"IncludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"ContactOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPointOnBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ProvidesContacts");
    il2cpp_codegen_initialize_runtime_metadata(&"MaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SharedMaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"AttachedArticulationBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Raycast");
    Il2CppMethodInitialized_07545dd2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttachedArticulationBody",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContactOffset",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExcludeLayers",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IncludeLayers",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsTrigger",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProvidesContacts",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaterialName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SharedMaterialName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GameObjectTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPointOnBounds",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Raycast",
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
  TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__AttachedArticulationBody>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4bd0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____getter_3_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4be0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____getter_3_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__get_contactOffset(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____setter_3_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f4c20

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____setter_3_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_contactOffset(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4ca0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f4ce0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_enabled(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____getter_5_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4d60

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____getter_5_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o mask;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  mask = UnityEngine_Collider__get_excludeLayers(__this,(MethodInfo *)0x0);
  UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____setter_5_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f4da0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____setter_5_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (Il2CppMethodInitialized_07545dd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit_691af40(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_excludeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____getter_6_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4e30

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____getter_6_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o mask;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  mask = UnityEngine_Collider__get_includeLayers(__this,(MethodInfo *)0x0);
  UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____setter_6_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f4e70

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____setter_6_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (Il2CppMethodInitialized_07545dd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit_691af40(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_includeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____getter_7_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4f00

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____getter_7_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Collider__get_isTrigger(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____setter_7_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f4f40

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____setter_7_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545dd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_isTrigger(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_8_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4fc0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_8_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicColliderBuiltin__get_Center(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____getter_9_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f4fd0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____getter_9_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Collider__get_providesContacts(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____setter_9_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f5010

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____setter_9_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545dd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dd8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
     (__this = (__i->fields).collider, __this == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_providesContacts(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__MaterialName>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__MaterialName_g____getter_10_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f5090

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__MaterialName_g____getter_10_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)UnityEngine_Collider__get_material(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__SharedMaterialName>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__SharedMaterialName_g____getter_11_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f50c0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__SharedMaterialName_g____getter_11_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)UnityEngine_Collider__get_sharedMaterial(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_12_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f50f0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_12_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Component_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545db7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_07545db7 = '\x01';
    }
    __this = (UnityEngine_Component_o *)(__i->fields).collider;
    if (__this != (UnityEngine_Component_o *)0x0) {
      transform = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__GameObjectTransform>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__GameObjectTransform_g____getter_13_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x59f5160

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__GameObjectTransform_g____getter_13_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2200

void CustomLogic_CustomLogicColliderBuiltin___ctor
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545db3 = '\x01';
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


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x59f2270

void CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *pUVar2;
  UnityEngine_Collider_c *pUVar3;
  
  if (Il2CppMethodInitialized_07545db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collider);
    Il2CppMethodInitialized_07545db4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar3 = TypeInfo_UnityEngine_Collider;
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pUVar2 = (UnityEngine_Collider_o *)parameters->m_Items[0];
  if (pUVar2 == (UnityEngine_Collider_o *)0x0) {
    (__this->fields).collider = (UnityEngine_Collider_o *)0x0;
label_059f2332:
    Il2CppCodeGenWriteBarrier(&(__this->fields).collider);
    return;
  }
  bVar1 = (TypeInfo_UnityEngine_Collider->_2).typeHierarchyDepth;
  if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).typeHierarchyDepth) &&
     ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_UnityEngine_Collider)) {
    (__this->fields).collider = pUVar2;
    if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).typeHierarchyDepth) &&
       ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pUVar3))
    goto label_059f2332;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pUVar3);
}


// CustomLogic.CustomLogicColliderBuiltin$$get_AttachedArticulationBody
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2350

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_07545db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07545db5 = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = UnityEngine_Collider__get_attachedRigidbody(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
      ;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ContactOffset
// il2cpp: float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f23d0

float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset
                (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Collider__get_contactOffset(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ContactOffset
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f23f0

void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_contactOffset(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2410

bool CustomLogic_CustomLogicColliderBuiltin__get_Enabled
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f2430

void CustomLogic_CustomLogicColliderBuiltin__set_Enabled
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_enabled(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ExcludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2450

int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o mask;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  mask = UnityEngine_Collider__get_excludeLayers(__this_00,(MethodInfo *)0x0);
  iVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ExcludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f2470

void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit_691af40(value,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_excludeLayers(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IncludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f24a0

int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o mask;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  mask = UnityEngine_Collider__get_includeLayers(__this_00,(MethodInfo *)0x0);
  iVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IncludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x59f24c0

void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit_691af40(value,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_includeLayers(__this_00,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsTrigger
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f24f0

bool CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IsTrigger
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f2510

void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_isTrigger(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Center
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__get_Center (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2530

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Center
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_07545db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545db6 = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__get_bounds(&local_20,__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = local_20.fields.m_Center.fields.x;
  (__this_01->fields).Value.fields.y = local_20.fields.m_Center.fields.y;
  (__this_01->fields).Value.fields.z = local_20.fields.m_Center.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ProvidesContacts
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2600

bool CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Collider__get_providesContacts(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ProvidesContacts
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59f2620

void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Collider__set_providesContacts(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_MaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_MaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2640

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_MaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)UnityEngine_Collider__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_SharedMaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2670

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)UnityEngine_Collider__get_sharedMaterial(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_Transform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f26a0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Transform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_07545db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07545db7 = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 == (UnityEngine_Component_o *)0x0) {
    ThrowNullReferenceException();
  }
  transform = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_GameObjectTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2710

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_07545db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07545db8 = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      transform = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPoint (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x59f2790

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPoint
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).collider, __this_00 == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_Collider__ClosestPoint
                    (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPointOnBounds
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x59f2860

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).collider, __this_00 == (UnityEngine_Collider_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_Collider__ClosestPointOnBounds
                    (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin$$Raycast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__Raycast (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x59f2930

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__Raycast
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,System_String_o *collideWith,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Collider_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  MethodInfo *method_00;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o end_00;
  UnityEngine_LayerMask_o local_80;
  float local_7c;
  undefined1 local_78 [16];
  UnityEngine_RaycastHit_o local_68;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07545db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07545db9 = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
label_059f2d3d:
    ThrowNullReferenceException();
  }
  uVar1 = (start->fields).Value.fields.x;
  uVar2 = (start->fields).Value.fields.y;
  local_78._4_4_ = uVar2;
  local_78._0_4_ = uVar1;
  local_78._8_8_ = 0;
  fVar11 = (start->fields).Value.fields.z;
  local_38._0_4_ = (end->fields).Value.fields.x;
  local_38._4_4_ = (end->fields).Value.fields.y;
  uStack_30 = 0;
  local_7c = (end->fields).Value.fields.z;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar5 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  local_80 = Utility_PhysicsLayer__CopyMask(iVar5,(MethodInfo *)0x0);
  iVar5 = UnityEngine_LayerMask__get_value(&local_80,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar12.fields.z = fVar11;
  UVar12.fields.x = (float)local_78._0_4_;
  UVar12.fields.y = (float)local_78._4_4_;
  end_00.fields.z = local_7c;
  end_00.fields.x = (float)(undefined4)local_38;
  end_00.fields.y = (float)local_38._4_4_;
  bVar4 = UnityEngine_Physics__Linecast_69da590(UVar12,end_00,&local_68,iVar5,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
    pCVar7 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar6,(MethodInfo *)0x0);
    if (pCVar7 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
      bVar3 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
      pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
      if ((bVar3 <= (pCVar7->klass->_2).typeHierarchyDepth) &&
         (pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0,
         (pCVar7->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
        pCVar10 = pCVar7;
      }
      if (__this_00 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
        bVar4 = false;
        CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                  (__this_00,pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
        if (bVar3 <= (pCVar7->klass->_2).typeHierarchyDepth) {
          bVar4 = (pCVar7->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin;
        }
        (__this_00->fields)._IsMapObject_k__BackingField = bVar4;
        UVar12 = UnityEngine_RaycastHit__get_point(&local_68,(MethodInfo *)0x0);
        local_78._8_4_ = extraout_XMM0_Dc;
        local_78._0_8_ = UVar12.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd;
        pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar8,(MethodInfo *)0x0);
        (pCVar8->fields).Value.fields.x = (float)local_78._0_4_;
        (pCVar8->fields).Value.fields.y = (float)local_78._4_4_;
        (pCVar8->fields).Value.fields.z = UVar12.fields.z;
        (__this_00->fields)._Point_k__BackingField = pCVar8;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField);
        UVar12 = UnityEngine_RaycastHit__get_normal(&local_68,(MethodInfo *)0x0);
        local_78._8_4_ = extraout_XMM0_Dc_00;
        local_78._0_8_ = UVar12.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd_00;
        pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar8,(MethodInfo *)0x0);
        (pCVar8->fields).Value.fields.x = (float)local_78._0_4_;
        (pCVar8->fields).Value.fields.y = (float)local_78._4_4_;
        (pCVar8->fields).Value.fields.z = UVar12.fields.z;
        (__this_00->fields)._Normal_k__BackingField = pCVar8;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField);
        fVar11 = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0);
        (__this_00->fields)._Distance_k__BackingField = fVar11;
        (__this_00->fields)._Collider_k__BackingField = pCVar7;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField);
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pUVar6 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
        if (parameters != (System_Object_array *)0x0) {
          if ((pUVar6 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pUVar6,(((parameters->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pUVar6;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_01,parameters,method_00);
          (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField);
          return __this_00;
        }
      }
      goto label_059f2d3d;
    }
  }
  return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicColliderBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicColliderBuiltin__Copy (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2d60

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicColliderBuiltin__Copy
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545dba = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collider;
  if (obj != (UnityEngine_Collider_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
  CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_00,parameters,method_00);
  return (CustomLogic_BuiltinClassInstance_o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin____Copy__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2e30

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin____Copy__
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545dbb = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collider;
  if (obj != (UnityEngine_Collider_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
  CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_00,parameters,method_00);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin____Eq__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59f2f00

bool CustomLogic_CustomLogicColliderBuiltin____Eq__
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07545dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545dbc = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (self->klass->_2).typeHierarchyDepth) {
      pIVar3 = (Il2CppObject *)0x0;
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin) {
        pIVar3 = self;
      }
      if ((((other != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).typeHierarchyDepth)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin)) {
        x = pIVar3[3].klass;
        y = other[3].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColliderBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f2fd0

int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545dbd = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).collider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0;
  }
  pUVar1 = (__this->fields).collider;
  if (pUVar1 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  return iVar3;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_ClassName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f3060

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    Il2CppMethodInitialized_07545dbe = '\x01';
  }
  return "Collider";
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f3090

bool CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsStatic (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f30a0

bool CustomLogic_CustomLogicColliderBuiltin__get_IsStatic
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x59f30b0

bool CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


