// Type: CustomLogic.CustomLogicLodBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLodBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLodBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLodBuiltin_o* CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ded040

CustomLogic_CustomLogicLodBuiltin_o *
CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicLodBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702a7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLodBuiltin);
    DAT_05702a7c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLodBuiltin);
      (__this->fields)._detailPriority = 1.0;
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLodBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLodBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ded140

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  System_Action_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_05702a7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"DetailPriority");
    il2cpp_init_method_metadata(&"DistanceThreshold");
    DAT_05702a7d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"DistanceThreshold",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"DetailPriority",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLodBuiltin not found");
      pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
      System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar3);
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a7f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLodBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetailPriority);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetailPriority_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLodBuiltin__object);
      DAT_05702a7f = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLodBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLodBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702a7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLodBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DistanceThresho);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DistanceThreshold);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLodBuiltin__object);
    DAT_05702a7e = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLodBuiltin__object);
  System_Func<object__object>___ctor();
  pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLodBuiltin__object);
  System_Action<object__object>___ctor();
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DistanceThreshold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold (const MethodInfo* method);
// 0x3ded280

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this;
  
  if (DAT_05702a7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLodBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DistanceThresho);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DistanceThreshold);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLodBuiltin__object);
    DAT_05702a7e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLodBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLodBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DetailPriority
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority (const MethodInfo* method);
// 0x3ded360

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this;
  
  if (DAT_05702a7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLodBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetailPriority);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetailPriority_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLodBuiltin__object);
    DAT_05702a7f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLodBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLodBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ded440

void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"DetailPriority");
    il2cpp_init_method_metadata(&"DistanceThreshold");
    DAT_05702a80 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"DistanceThreshold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DetailPriority",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x3ded530

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings__<__CreatePropertyBinding__DistanceThreshold>g____getter_2_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this;
  UnityEngine_LOD_array *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LODGroup_o *)0x0)) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length != 0) {
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
        return pIVar2;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ded580

void CustomLogic_CustomLogicLodBuiltin_Bindings__<__CreatePropertyBinding__DistanceThreshold>g____setter_2_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (DAT_05702a81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a81 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,(MethodInfo_24AB990 *)MethodInfo_Single_ConvertTo_Single)
  ;
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x3ded600

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings__<__CreatePropertyBinding__DetailPriority>g____getter_3_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ded630

void CustomLogic_CustomLogicLodBuiltin_Bindings__<__CreatePropertyBinding__DetailPriority>g____setter_3_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  uint uVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (DAT_05702a82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a82 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i == (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05702a79 = '\x01';
  }
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  fVar6 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
  (__i->fields)._detailPriority = fVar6;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) &&
     (__this = (__i->fields).Owner, __this != (UnityEngine_GameObject_o *)0x0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if ((float)iVar1 <= fVar6) {
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar4->max_length;
        if ((int)uVar3 < 1) {
          return;
        }
        uVar5 = 0;
        while (uVar5 < uVar3) {
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0
             ) goto LAB_03decfd0;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],1,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
          if ((int)uVar3 <= (int)uVar5) {
            return;
          }
        }
LAB_03decfd5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (uint)pSVar4->max_length;
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (uVar3 <= uVar5) goto LAB_03decfd5;
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0
             ) goto LAB_03decfd0;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],0,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
        } while ((int)uVar5 < (int)uVar3);
      }
      return;
    }
  }
LAB_03decfd0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3decb20

void CustomLogic_CustomLogicLodBuiltin___ctor
               (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields)._detailPriority = 1.0;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x3decb30

void CustomLogic_CustomLogicLodBuiltin___ctor
               (CustomLogic_CustomLogicLodBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LODGroup_o *pUVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *lods;
  float in_XMM1_Da;
  UnityEngine_LOD_o __this_01;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  if (DAT_05702a78 == '\0') {
    uStack_20 = (void *)0x3decb4f;
    il2cpp_init_method_metadata(&MethodInfo_LODGroup_GetOrAddComponent_LODGroup);
    uStack_20 = (void *)0x3decb5b;
    il2cpp_init_method_metadata(&TypeInfo_LODGroup);
    DAT_05702a78 = '\x01';
  }
  (__this->fields)._detailPriority = 1.0;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    uStack_20 = (void *)0x3decb92;
    pUVar6 = (UnityEngine_Component_o *)
             CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
                       ((pMVar2->fields).GameObject,MethodInfo_LODGroup_GetOrAddComponent_LODGroup);
    uStack_20 = (void *)0x3decb9f;
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,pUVar6,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    uStack_20 = (void *)0x3decbaf;
    il2cpp_runtime_glue(&(__this->fields).OwnerMapObject,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar2->fields).GameObject;
      uStack_20 = (void *)0x3decbcd;
      il2cpp_runtime_glue(&(__this->fields).Owner);
      pIVar4 = TypeInfo_LODGroup;
      pUVar6 = (__this->fields).Component;
      if (pUVar6 != (UnityEngine_Component_o *)0x0) {
        bVar1 = (TypeInfo_LODGroup->_2).naturalAligment;
        if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
           ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_LODGroup)) {
          (__this->fields).Value = (UnityEngine_LODGroup_o *)pUVar6;
          if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
             ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) goto LAB_03decc2f;
        }
                    /* WARNING: Subroutine does not return */
        uStack_20 = &UNK_03decc58;
        il2cpp_unwind_resume(pUVar6,pIVar4);
      }
      (__this->fields).Value = (UnityEngine_LODGroup_o *)0x0;
LAB_03decc2f:
      uStack_20 = (void *)0x3decc34;
      il2cpp_runtime_glue(&(__this->fields).Value);
      if (DAT_05702a7a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
        il2cpp_init_method_metadata(&TypeInfo_LOD);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05702a7a = '\x01';
      }
      x = (UnityEngine_Object_o *)(__this->fields).Value;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        __this_00 = (__this->fields).Owner;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          renderers = (UnityEngine_Renderer_array *)
                      UnityEngine_GameObject__GetComponentsInChildren<object>
                                (__this_00,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
          lods = (UnityEngine_LOD_array *)il2cpp_glue_02274930(TypeInfo_LOD,1);
          local_28 = (undefined1  [8])0x0;
          uStack_20 = (void *)0x0;
          __this_01.fields.renderers = (UnityEngine_Renderer_array *)local_28;
          __this_01.fields.screenRelativeTransitionHeight = 1.0;
          __this_01.fields.fadeTransitionWidth = 0.0;
          UnityEngine_LOD___ctor(__this_01,in_XMM1_Da,renderers,(MethodInfo *)0x0);
          if (lods != (UnityEngine_LOD_array *)0x0) {
            if ((int)lods->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            lods->m_Items[0].fields.screenRelativeTransitionHeight = (float)local_28._0_4_;
            lods->m_Items[0].fields.fadeTransitionWidth = (float)local_28._4_4_;
            *(undefined4 *)&lods->m_Items[0].fields.renderers = (undefined4)uStack_20;
            *(undefined4 *)((long)&lods->m_Items[0].fields.renderers + 4) = uStack_20._4_4_;
            il2cpp_runtime_glue(&lods->m_Items[0].fields.renderers,0);
            pUVar3 = (__this->fields).Value;
            if (pUVar3 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__SetLODs(pUVar3,lods,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).Value;
              if (pUVar3 != (UnityEngine_LODGroup_o *)0x0) {
                UnityEngine_LODGroup__set_fadeMode(pUVar3,0,(MethodInfo *)0x0);
                pUVar3 = (__this->fields).Value;
                if (pUVar3 != (UnityEngine_LODGroup_o *)0x0) {
                  UnityEngine_LODGroup__set_animateCrossFading(pUVar3,0,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields).Value;
                  if (pUVar3 != (UnityEngine_LODGroup_o *)0x0) {
                    UnityEngine_LODGroup__RecalculateBounds(pUVar3,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_20 = (void *)0x3decc4d;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DistanceThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3decdb0

float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this_00;
  UnityEngine_LOD_array *pUVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LODGroup_o *)0x0) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length != 0) {
        return pUVar1->m_Items[0].fields.screenRelativeTransitionHeight;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$set_DistanceThreshold
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3decde0

void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LODGroup_o *pUVar1;
  UnityEngine_LOD_array *lods;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
    lods = UnityEngine_LODGroup__GetLODs(pUVar1,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if (lods->max_length == 0) {
        return;
      }
      if ((int)lods->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lods->m_Items[0].fields.screenRelativeTransitionHeight = value;
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DetailPriority
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3dece60

float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._detailPriority;
}


// CustomLogic.CustomLogicLodBuiltin$$set_DetailPriority
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dece70

void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  uint uVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  float fVar6;
  
  if (DAT_05702a79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05702a79 = '\x01';
  }
  fVar6 = 1.0;
  if (value <= 1.0) {
    fVar6 = value;
  }
  fVar6 = (float)(-(uint)(0.0 <= value) & (uint)fVar6);
  (__this->fields)._detailPriority = fVar6;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) &&
     (__this_00 = (__this->fields).Owner, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_00,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if ((float)iVar1 <= fVar6) {
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar4->max_length;
        if ((int)uVar3 < 1) {
          return;
        }
        uVar5 = 0;
        while (uVar5 < uVar3) {
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0
             ) goto LAB_03decfd0;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],1,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
          if ((int)uVar3 <= (int)uVar5) {
            return;
          }
        }
LAB_03decfd5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (uint)pSVar4->max_length;
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (uVar3 <= uVar5) goto LAB_03decfd5;
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0
             ) goto LAB_03decfd0;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],0,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
        } while ((int)uVar5 < (int)uVar3);
      }
      return;
    }
  }
LAB_03decfd0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$SetupSingleLod
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod (CustomLogic_CustomLogicLodBuiltin_o* __this, float threshold, const MethodInfo* method);
// 0x3decc60

void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float threshold,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LODGroup_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *lods;
  float in_XMM1_Da;
  UnityEngine_LOD_o __this_01;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  if (DAT_05702a7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_LOD);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702a7a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Value;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  __this_00 = (__this->fields).Owner;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    renderers = (UnityEngine_Renderer_array *)
                UnityEngine_GameObject__GetComponentsInChildren<object>(__this_00,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    lods = (UnityEngine_LOD_array *)il2cpp_glue_02274930(TypeInfo_LOD,1);
    auStack_28 = (undefined1  [8])0x0;
    uStack_20 = (void *)0x0;
    __this_01.fields.fadeTransitionWidth = 0.0;
    __this_01.fields.screenRelativeTransitionHeight = threshold;
    __this_01.fields.renderers = (UnityEngine_Renderer_array *)auStack_28;
    UnityEngine_LOD___ctor(__this_01,in_XMM1_Da,renderers,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if ((int)lods->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lods->m_Items[0].fields.screenRelativeTransitionHeight = (float)auStack_28._0_4_;
      lods->m_Items[0].fields.fadeTransitionWidth = (float)auStack_28._4_4_;
      *(undefined4 *)&lods->m_Items[0].fields.renderers = (undefined4)uStack_20;
      *(undefined4 *)((long)&lods->m_Items[0].fields.renderers + 4) = uStack_20._4_4_;
      il2cpp_runtime_glue(&lods->m_Items[0].fields.renderers,0);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__set_fadeMode(pUVar1,0,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).Value;
          if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
            UnityEngine_LODGroup__set_animateCrossFading(pUVar1,0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).Value;
            if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLodBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLodBuiltin__get_ClassName (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3decfe0

System_String_o *
CustomLogic_CustomLogicLodBuiltin__get_ClassName
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a7b == '\0') {
    il2cpp_init_method_metadata(&"LodBuiltin");
    DAT_05702a7b = '\x01';
  }
  return "LodBuiltin";
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsAbstract (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3ded010

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsStatic (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3ded020

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLodBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x3ded030

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


