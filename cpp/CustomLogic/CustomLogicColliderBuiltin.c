// Type: CustomLogic.CustomLogicColliderBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColliderBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicColliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3de1310

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicColliderBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicColliderBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3de34c0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057029fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029fe = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3de3530

void CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__14_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de3540

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding__ClosestPoint>b__14_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_057029ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029ff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)
        ) && (__this_00 = (__c->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
      v = UnityEngine_Collider__ClosestPoint
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPointOnBounds>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPointOnBounds_b__15_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de35f0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding__ClosestPointOnBounds>b__15_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_05702a00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a00 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)
        ) && (__this_00 = (__c->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
      v = UnityEngine_Collider__ClosestPointOnBounds
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__Raycast>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__Raycast_b__16_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de36a0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding__Raycast>b__16_0
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
  
  if (DAT_05702a01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a01 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicColliderBuiltin_o *)__a->m_Items[2];
          collideWith = (System_String_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                  ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
          if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicColliderBuiltin__Raycast
                               (__this_00,start,end,collideWith,in_R8);
            return (Il2CppObject *)pCVar1;
          }
          goto LAB_03de3775;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03de3775:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__17_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de3780

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__17_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicColliderBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__18_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de37a0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__18_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

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
    if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicColliderBuiltin____Eq__
                        ((CustomLogic_CustomLogicColliderBuiltin_o *)__this,__a->m_Items[0],
                         __a->m_Items[1],method);
      uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__19_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de37f0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__19_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool_conflict bVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  undefined4 local_1c;
  
  if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (DAT_057029e2 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057029e2 = '\x01';
    }
    x = (UnityEngine_Object_o *)(__c->fields).collider;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar1 = (__c->fields).collider;
      __this = (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *)0x0;
      if (pUVar1 == (UnityEngine_Collider_o *)0x0) goto LAB_03de388d;
      uVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    }
    local_1c = uVar3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
    return pIVar4;
  }
LAB_03de388d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3de13a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_057029e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"ExcludeLayers");
    il2cpp_init_method_metadata(&"GameObjectTransform");
    il2cpp_init_method_metadata(&"ClosestPoint");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"IncludeLayers");
    il2cpp_init_method_metadata(&"ContactOffset");
    il2cpp_init_method_metadata(&"ClosestPointOnBounds");
    il2cpp_init_method_metadata(&"ProvidesContacts");
    il2cpp_init_method_metadata(&"MaterialName");
    il2cpp_init_method_metadata(&"IsTrigger");
    il2cpp_init_method_metadata(&"Enabled");
    il2cpp_init_method_metadata(&"SharedMaterialName");
    il2cpp_init_method_metadata(&"AttachedArticulationBody");
    il2cpp_init_method_metadata(&"Raycast");
    DAT_057029e4 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8e2afb14) {
    if (uVar3 < 0x4b9fbea5) {
      if (uVar3 < 0x241c90a3) {
        if (uVar3 == 0xe986ab0) {
          bVar4 = System_String__op_Equality(name,"GameObjectTransform",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057029f0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GameObjectTrans);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
              DAT_057029f0 = '\x01';
            }
            pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x241c90a2) &&
                (bVar4 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029f1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPoint_b__1);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029f1 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x4a5dd7d3) {
        bVar4 = System_String__op_Equality(name,"IsTrigger",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029ea == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsTrigger_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsTrigger_g____se);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
            DAT_057029ea = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x4b9fbea4) &&
              (bVar4 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029eb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029eb = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x790e86e9) {
      if (uVar3 == 0x549f4d10) {
        bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029f4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__17_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029f4 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x20);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x20);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x790e86e8) &&
              (bVar4 = System_String__op_Equality(name,"AttachedArticulationBody",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029e5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttachedArticul);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029e5 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x80175e56) {
      bVar4 = System_String__op_Equality(name,"ClosestPointOnBounds",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029f2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPointOnBou);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029f2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x8e2afb13) {
      bVar4 = System_String__op_Equality(name,"ExcludeLayers",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029e8 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ExcludeLayers_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ExcludeLayers_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029e8 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029f6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__19_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057029f6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xad216711) {
    if (uVar3 < 0x990db27f) {
      if (uVar3 == 0x91efe6d7) {
        bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029f5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__18_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029f5 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x990db27e) &&
              (bVar4 = System_String__op_Equality(name,"ProvidesContacts",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029ec == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ProvidesContact);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ProvidesContacts);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029ec = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x9c86e43e) {
      bVar4 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029e7 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029e7 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xad216710) &&
            (bVar4 = System_String__op_Equality(name,"ContactOffset",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029e6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContactOffset_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ContactOffset_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
        DAT_057029e6 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xb9fdf63f) {
    if (uVar3 == 0xad82abbb) {
      bVar4 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029ef == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
          DAT_057029ef = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xb9fdf63e) &&
            (bVar4 = System_String__op_Equality(name,"SharedMaterialName",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029ee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SharedMaterialN);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
        DAT_057029ee = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xc0b0a123) {
    bVar4 = System_String__op_Equality(name,"MaterialName",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029ed == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaterialName_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
        DAT_057029ed = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar8,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd06f5ba1) {
    bVar4 = System_String__op_Equality(name,"IncludeLayers",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029e9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IncludeLayers_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IncludeLayers_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
        DAT_057029e9 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar8,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xdebe8d80) &&
          (bVar4 = System_String__op_Equality(name,"Raycast",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057029f3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Raycast_b__16_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057029f3 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicColliderBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__AttachedArticulationBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody (const MethodInfo* method);
// 0x3de1aa0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttachedArticul);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ContactOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset (const MethodInfo* method);
// 0x3de1b40

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContactOffset_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ContactOffset_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x3de1c20

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ExcludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers (const MethodInfo* method);
// 0x3de1d00

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ExcludeLayers_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ExcludeLayers_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IncludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers (const MethodInfo* method);
// 0x3de1de0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IncludeLayers_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IncludeLayers_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IsTrigger
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger (const MethodInfo* method);
// 0x3de1ec0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsTrigger_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsTrigger_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x3de1fa0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ProvidesContacts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts (const MethodInfo* method);
// 0x3de2040

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicColliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ProvidesContact);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ProvidesContacts);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicColliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__MaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName (const MethodInfo* method);
// 0x3de2120

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaterialName_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__SharedMaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName (const MethodInfo* method);
// 0x3de21c0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SharedMaterialN);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x3de2260

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__GameObjectTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform (const MethodInfo* method);
// 0x3de2300

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GameObjectTrans);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object);
    DAT_057029f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x3de23a0

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPoint_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPointOnBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds (const MethodInfo* method);
// 0x3de24f0

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPointOnBou);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__Raycast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast (const MethodInfo* method);
// 0x3de2640

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Raycast_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3de2790

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3de28e0

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3de2a30

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *__this;
  
  if (DAT_057029f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029f6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicColliderBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3de2b80

void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057029f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"ExcludeLayers");
    il2cpp_init_method_metadata(&"GameObjectTransform");
    il2cpp_init_method_metadata(&"ClosestPoint");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"IncludeLayers");
    il2cpp_init_method_metadata(&"ContactOffset");
    il2cpp_init_method_metadata(&"ClosestPointOnBounds");
    il2cpp_init_method_metadata(&"ProvidesContacts");
    il2cpp_init_method_metadata(&"MaterialName");
    il2cpp_init_method_metadata(&"IsTrigger");
    il2cpp_init_method_metadata(&"Enabled");
    il2cpp_init_method_metadata(&"SharedMaterialName");
    il2cpp_init_method_metadata(&"AttachedArticulationBody");
    il2cpp_init_method_metadata(&"Raycast");
    DAT_057029f7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"AttachedArticulationBody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ContactOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Enabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ExcludeLayers",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IncludeLayers",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsTrigger",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Center",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ProvidesContacts",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaterialName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SharedMaterialName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Transform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GameObjectTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClosestPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClosestPointOnBounds",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Raycast",MethodInfo_Boolean_Add);
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


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__AttachedArticulationBody>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de2e80

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__AttachedArticulationBody>g____getter_2_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (__i == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_057029da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_057029da = '\x01';
  }
  __this = (__i->fields).collider;
  if (__this != (UnityEngine_Collider_o *)0x0) {
    __this_00 = UnityEngine_Collider__get_attachedRigidbody(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____getter_3_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de2ea0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ContactOffset>g____getter_3_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__get_contactOffset(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____setter_3_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de2ee0

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ContactOffset>g____setter_3_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  float value;
  
  if (DAT_057029f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029f8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_contactOffset(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de2f60

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____getter_4_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de2fa0

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____setter_4_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  uint uVar1;
  
  if (DAT_057029f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029f9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_enabled(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____getter_5_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de3020

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ExcludeLayers>g____getter_5_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o mask;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    mask = UnityEngine_Collider__get_excludeLayers(__this,(MethodInfo *)0x0);
    UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____setter_5_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de3060

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ExcludeLayers>g____setter_5_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (DAT_057029fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029fa = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_excludeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____getter_6_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de30f0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__IncludeLayers>g____getter_6_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o mask;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    mask = UnityEngine_Collider__get_includeLayers(__this,(MethodInfo *)0x0);
    UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____setter_6_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de3130

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__IncludeLayers>g____setter_6_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (DAT_057029fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029fb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_includeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____getter_7_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de31c0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__IsTrigger>g____getter_7_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Collider__get_isTrigger(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____setter_7_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de3200

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__IsTrigger>g____setter_7_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  uint uVar1;
  
  if (DAT_057029fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029fc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_isTrigger(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_8_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de3280

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__Center>g____getter_8_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (DAT_057029db == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_057029db = '\x01';
    }
    __this = (__i->fields).collider;
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_20,__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.z = local_20.fields.m_Center.fields.z;
      value.fields.x = local_20.fields.m_Center.fields.x;
      value.fields.y = local_20.fields.m_Center.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____getter_9_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de3310

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ProvidesContacts>g____getter_9_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Collider__get_providesContacts(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____setter_9_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de3350

void CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__ProvidesContacts>g____setter_9_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  uint uVar1;
  
  if (DAT_057029fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029fd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_providesContacts(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__MaterialName>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__MaterialName_g____getter_10_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de33d0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__MaterialName>g____getter_10_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)UnityEngine_Collider__get_material(__this,(MethodInfo *)0x0)
    ;
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__SharedMaterialName>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__SharedMaterialName_g____getter_11_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de3400

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__SharedMaterialName>g____getter_11_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Collider__get_sharedMaterial(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_12_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de3430

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__Transform>g____getter_12_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Component_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (DAT_057029dc == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_057029dc = '\x01';
    }
    __this = (UnityEngine_Component_o *)(__i->fields).collider;
    if (__this != (UnityEngine_Component_o *)0x0) {
      transform = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__GameObjectTransform>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__GameObjectTransform_g____getter_13_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x3de34a0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings__<__CreatePropertyBinding__GameObjectTransform>g____getter_13_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0640

void CustomLogic_CustomLogicColliderBuiltin___ctor
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057029d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057029d8 = '\x01';
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


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x3de06b0

void CustomLogic_CustomLogicColliderBuiltin___ctor
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *pUVar2;
  Il2CppClass *pIVar3;
  
  if (DAT_057029d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Collider);
    DAT_057029d9 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pIVar3 = TypeInfo_Collider;
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (UnityEngine_Collider_o *)parameters->m_Items[0];
  if (pUVar2 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_Collider->_2).naturalAligment;
    if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Collider)) {
      (__this->fields).collider = pUVar2;
      if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).naturalAligment) &&
         ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
      goto LAB_03de0772;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar2,pIVar3);
  }
  (__this->fields).collider = (UnityEngine_Collider_o *)0x0;
LAB_03de0772:
  il2cpp_runtime_glue(&(__this->fields).collider);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_AttachedArticulationBody
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0790

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (DAT_057029da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_057029da = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = UnityEngine_Collider__get_attachedRigidbody(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ContactOffset
// il2cpp: float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0810

float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset
                (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    fVar1 = UnityEngine_Collider__get_contactOffset(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ContactOffset
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3de0830

void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_contactOffset(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0850

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_Enabled
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de0870

void CustomLogic_CustomLogicColliderBuiltin__set_Enabled
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ExcludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0890

int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o mask;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    mask = UnityEngine_Collider__get_excludeLayers(__this_00,(MethodInfo *)0x0);
    iVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ExcludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de08b0

void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit(value,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_excludeLayers(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IncludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de08e0

int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o mask;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    mask = UnityEngine_Collider__get_includeLayers(__this_00,(MethodInfo *)0x0);
    iVar1 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IncludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3de0900

void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit(value,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_includeLayers(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsTrigger
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0930

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IsTrigger
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de0950

void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_isTrigger(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Center
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__get_Center (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0970

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Center
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o local_20;
  
  if (DAT_057029db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_057029db = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__get_bounds(&local_20,__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = local_20.fields.m_Center.fields.z;
    value.fields.x = local_20.fields.m_Center.fields.x;
    value.fields.y = local_20.fields.m_Center.fields.y;
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ProvidesContacts
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0a00

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_providesContacts(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ProvidesContacts
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3de0a20

void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_providesContacts(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_MaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_MaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0a40

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_MaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Collider__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_SharedMaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0a70

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Collider__get_sharedMaterial(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_Transform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0aa0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Transform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (DAT_057029dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_057029dc = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    transform = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_GameObjectTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0b10

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (DAT_057029dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_057029dd = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      transform = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPoint (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3de0b90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPoint
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
    v = UnityEngine_Collider__ClosestPoint
                  (__this_00,(position->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPointOnBounds
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3de0bc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
    v = UnityEngine_Collider__ClosestPointOnBounds
                  (__this_00,(position->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$Raycast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__Raycast (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x3de0bf0

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__Raycast
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,System_String_o *collideWith,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  int32_t iVar5;
  UnityEngine_LayerMask_o UVar6;
  bool_conflict bVar7;
  UnityEngine_Collider_o *pUVar8;
  CustomLogic_BuiltinClassInstance_o *pCVar9;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  System_Object_array *parameters;
  long lVar11;
  undefined8 uVar12;
  CustomLogic_BuiltinClassInstance_o *pCVar13;
  bool bVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar16;
  UnityEngine_Vector3_o start_00;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar18 [16];
  undefined4 in_stack_ffffffffffffff78;
  float fVar19;
  undefined8 uVar20;
  Il2CppMethodPointer pIVar21;
  float fVar22;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_06;
  
  if (DAT_057029de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_057029de = '\x01';
  }
  pIVar21 = (Il2CppMethodPointer)0x0;
  fVar22 = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar12._0_4_ = (start->fields).Value.fields.x;
    uVar12._4_4_ = (start->fields).Value.fields.y;
    uVar20 = 0;
    fVar15 = (start->fields).Value.fields.z;
    uVar1 = (end->fields).Value.fields.x;
    uVar2 = (end->fields).Value.fields.y;
    UVar17.fields.y = (float)uVar2;
    UVar17.fields.x = (float)uVar1;
    fVar19 = (end->fields).Value.fields.z;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar5 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar6 = Utility_PhysicsLayer__CopyMask(iVar5,(MethodInfo *)0x0);
    iVar5 = UnityEngine_LayerMask__get_value
                      ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff80,
                       (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    start_00.fields.z = fVar15;
    start_00.fields.x = (float)(int)uVar12;
    start_00.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
    UVar17.fields.z = fVar19;
    bVar7 = UnityEngine_Physics__Linecast
                      (start_00,UVar17,(UnityEngine_RaycastHit_o *)&stack0xffffffffffffff98,iVar5,
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_00.fields.m_Point.fields.y = fVar15;
      __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
      __this_00.fields.m_Point.fields.z = (float)UVar6.fields.m_Mask;
      __this_00.fields.m_Normal.fields.x = fVar19;
      __this_00.fields.m_Normal.fields.y = (float)(int)uVar12;
      __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
      __this_00.fields.m_FaceID = (int)uVar20;
      __this_00.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
      __this_00.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
      __this_00.fields.m_Collider = (int32_t)fVar22;
      pUVar8 = UnityEngine_RaycastHit__get_collider
                         (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
      pCVar9 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar8,(MethodInfo *)0x0);
      if (pCVar9 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_05 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_05,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
        pCVar13 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if ((bVar3 <= (pCVar9->klass->_2).naturalAligment) &&
           (pCVar13 = (CustomLogic_BuiltinClassInstance_o *)0x0,
           (pCVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
          pCVar13 = pCVar9;
        }
        if (__this_05 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          bVar14 = false;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_05,(uint)(pCVar13 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar3 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          if (bVar3 <= (pCVar9->klass->_2).naturalAligment) {
            bVar14 = (pCVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicMapObjectBuiltin;
          }
          *(bool *)((long)&(__this_05->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               bVar14;
          __this_01.fields.m_Point.fields.y = fVar15;
          __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_01.fields.m_Point.fields.z = (float)UVar6.fields.m_Mask;
          __this_01.fields.m_Normal.fields.x = fVar19;
          __this_01.fields.m_Normal.fields.y = (float)(int)uVar12;
          __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
          __this_01.fields.m_FaceID = (int)uVar20;
          __this_01.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_01.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_01.fields.m_Collider = (int32_t)fVar22;
          UVar17 = UnityEngine_RaycastHit__get_point
                             (__this_01,(MethodInfo *)&stack0xffffffffffffff98);
          fVar15 = UVar17.fields.z;
          uVar12 = UVar17.fields._0_8_;
          auVar18._8_4_ = extraout_XMM0_Dc;
          auVar18._0_8_ = uVar12;
          auVar18._12_4_ = extraout_XMM0_Dd;
          uVar20 = auVar18._8_8_;
          pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.z = fVar15;
          value.fields.x = (float)(int)uVar12;
          value.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar10,value,(MethodInfo *)0x0);
          (__this_05->fields)._Point_k__BackingField = pCVar10;
          il2cpp_runtime_glue(&(__this_05->fields)._Point_k__BackingField);
          __this_02.fields.m_Point.fields.y = fVar15;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_02.fields.m_Point.fields.z = (float)UVar6.fields.m_Mask;
          __this_02.fields.m_Normal.fields.x = fVar19;
          __this_02.fields.m_Normal.fields.y = (float)(int)uVar12;
          __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
          __this_02.fields.m_FaceID = (int)uVar20;
          __this_02.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_02.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_02.fields.m_Collider = (int32_t)fVar22;
          UVar17 = UnityEngine_RaycastHit__get_normal
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff98);
          fVar16 = UVar17.fields.z;
          uVar12 = UVar17.fields._0_8_;
          auVar4._8_4_ = extraout_XMM0_Dc_00;
          auVar4._0_8_ = uVar12;
          auVar4._12_4_ = extraout_XMM0_Dd_00;
          uVar20 = auVar4._8_8_;
          pCVar10 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.z = fVar16;
          value_00.fields.x = (float)(int)uVar12;
          value_00.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar10,value_00,(MethodInfo *)0x0);
          (__this_05->fields)._Normal_k__BackingField = pCVar10;
          il2cpp_runtime_glue(&(__this_05->fields)._Normal_k__BackingField,pCVar10);
          __this_03.fields.m_Point.fields.y = fVar16;
          __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_03.fields.m_Point.fields.z = (float)UVar6.fields.m_Mask;
          __this_03.fields.m_Normal.fields.x = fVar19;
          __this_03.fields.m_Normal.fields.y = (float)(int)uVar12;
          __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
          __this_03.fields.m_FaceID = (int)uVar20;
          __this_03.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_03.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_03.fields.m_Collider = (int32_t)fVar22;
          fVar15 = UnityEngine_RaycastHit__get_distance
                             (__this_03,(MethodInfo *)&stack0xffffffffffffff98);
          (__this_05->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar15;
          (__this_05->fields)._Collider_k__BackingField = pCVar9;
          il2cpp_runtime_glue(&(__this_05->fields)._Collider_k__BackingField,pCVar9);
          parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_04.fields.m_Point.fields.y = fVar16;
          __this_04.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_04.fields.m_Point.fields.z = (float)UVar6.fields.m_Mask;
          __this_04.fields.m_Normal.fields.x = fVar19;
          __this_04.fields.m_Normal.fields.y = (float)(int)uVar12;
          __this_04.fields.m_Normal.fields.z = (float)(int)((ulong)uVar12 >> 0x20);
          __this_04.fields.m_FaceID = (int)uVar20;
          __this_04.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_04.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_04.fields.m_Collider = (int32_t)fVar22;
          pUVar8 = UnityEngine_RaycastHit__get_collider
                             (__this_04,(MethodInfo *)&stack0xffffffffffffff98);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar8 != (UnityEngine_Collider_o *)0x0) &&
               (lVar11 = il2cpp_runtime_glue(pUVar8,(((parameters->obj).klass)->_1).element_class),
               lVar11 == 0)) {
              uVar12 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar12,0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar8;
              il2cpp_runtime_glue(parameters->m_Items,pUVar8);
              auVar18 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
              __this_06 = auVar18._0_8_;
              CustomLogic_CustomLogicColliderBuiltin___ctor(__this_06,parameters,auVar18._8_8_);
              (__this_05->fields)._ColliderInfo_k__BackingField = __this_06;
              il2cpp_runtime_glue(&(__this_05->fields)._ColliderInfo_k__BackingField,__this_06);
              return __this_05;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        goto LAB_03de0f95;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
LAB_03de0f95:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicColliderBuiltin__Copy (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de0fb0

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicColliderBuiltin__Copy
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *pUVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (DAT_057029df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_057029df = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar1 = (__this->fields).collider;
  if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pUVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) {
      uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pUVar1;
    il2cpp_runtime_glue(parameters->m_Items,pUVar1);
    auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor(auVar4._0_8_,parameters,auVar4._8_8_);
    return (CustomLogic_BuiltinClassInstance_o *)auVar4._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin____Copy__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de1080

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin____Copy__
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *pUVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (DAT_057029e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_057029e0 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar1 = (__this->fields).collider;
  if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pUVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) {
      uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pUVar1;
    il2cpp_runtime_glue(parameters->m_Items,pUVar1);
    auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor(auVar4._0_8_,parameters,auVar4._8_8_);
    return (Il2CppObject *)auVar4._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin____Eq__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3de1150

bool_conflict
CustomLogic_CustomLogicColliderBuiltin____Eq__
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057029e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057029e1 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColliderBuiltin->_2).naturalAligment;
    if (bVar1 <= (self->klass->_2).naturalAligment) {
      pIVar3 = (Il2CppObject *)0x0;
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColliderBuiltin) {
        pIVar3 = self;
      }
      if ((((other != (Il2CppObject *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).naturalAligment)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColliderBuiltin)) {
        x = pIVar3[3].klass;
        y = other[3].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColliderBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de1220

int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_057029e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057029e2 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).collider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  pUVar1 = (__this->fields).collider;
  if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_ClassName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de12b0

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057029e3 == '\0') {
    il2cpp_init_method_metadata(&"Collider");
    DAT_057029e3 = '\x01';
  }
  return "Collider";
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de12e0

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsStatic (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de12f0

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_IsStatic
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x3de1300

bool_conflict
CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


