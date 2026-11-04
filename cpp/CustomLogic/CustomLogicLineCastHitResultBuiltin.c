// Type: CustomLogic.CustomLogicLineCastHitResultBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineCastHitResultBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicLineCastHitResultBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicLineCastHitResultBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed8f70

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineCastHitResultBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3d30

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345197 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee28e0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__9_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2b10

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__10_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppClass *__this_01;
  bool bVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181ee2c1b:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) goto label_181ee2c1b;
  pIVar4 = __a->m_Items[0];
  pIVar2 = __a->m_Items[1];
  if (Il2CppMethodInitialized_184345188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    Il2CppMethodInitialized_184345188 = '\x01';
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar4->klass->_2).typeHierarchyDepth) &&
        ((pIVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin)) &&
       (pIVar2 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
         ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin)) {
        __this_00 = pIVar4[3].monitor;
        if (__this_00 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_181ee2c1b;
        bVar3 = CustomLogic_CustomLogicVector3Builtin____Eq__
                          (__this_00,(Il2CppObject *)__this_00,pIVar2[3].monitor,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = pIVar4[4].klass;
          if (__this_01 == (Il2CppClass *)0x0) goto label_181ee2c1b;
          local_res18[0] =
               CustomLogic_CustomLogicVector3Builtin____Eq__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this_01,(Il2CppObject *)__this_01,
                          (Il2CppObject *)pIVar2[4].klass,(MethodInfo *)0x0);
          goto label_181ee2bfb;
        }
      }
    }
  }
  local_res18[0] = false;
label_181ee2bfb:
  pIVar4 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar4;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2fd0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__11_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  uint uVar2;
  int32_t iVar3;
  int32_t iVar4;
  uint uVar5;
  int32_t iVar6;
  int32_t iVar7;
  Il2CppObject *pIVar8;
  uint local_res10 [6];
  
  if ((__c != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._Point_k__BackingField, pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)
     ) {
    uVar2 = System_Single__GetHashCode((float *)&(pCVar1->fields).Value,(MethodInfo *)0x0);
    iVar3 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.y,(MethodInfo *)0x0);
    iVar4 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.z,(MethodInfo *)0x0);
    pCVar1 = (__c->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar5 = System_Single__GetHashCode((float *)&(pCVar1->fields).Value,(MethodInfo *)0x0);
      iVar6 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.y,(MethodInfo *)0x0);
      iVar7 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.z,(MethodInfo *)0x0);
      local_res10[0] = iVar7 >> 2 ^ iVar6 * 4 ^ uVar5 ^ iVar4 >> 2 ^ iVar3 * 4 ^ uVar2;
      pIVar8 = il2cpp_value_box(g_data_184354e08,local_res10);
      return pIVar8;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebef80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_18434518b == '\0') {
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
    Il2CppMethodInitialized_18434518b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x624ce79f) {
    if (uVar3 < 0x32b1316e) {
      if (uVar3 == 0x2cfc1e5d) {
        bVar2 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345191 == '\0') {
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
            Il2CppMethodInitialized_184345191 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Collider_g
          ;
          goto label_181ebf84b;
        }
      }
      else if (uVar3 == 0x32b1316d) {
        bVar2 = System_String__op_Equality(name,"ColliderInfo",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345192 == '\0') {
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
            Il2CppMethodInitialized_184345192 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__ColliderInfo_g
          ;
          goto label_181ebf84b;
        }
      }
    }
    else if (uVar3 == 0x549f4d10) {
      bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345193 == '\0') {
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
          Il2CppMethodInitialized_184345193 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Copy___b__9
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->
                      __9__9_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x58de2772) {
      bVar2 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345190 == '\0') {
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
          Il2CppMethodInitialized_184345190 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Normal_g____ge
        ;
        goto label_181ebf84b;
      }
    }
    else if (uVar3 == 0x624ce79e) {
      bVar2 = System_String__op_Equality(name,"IsMapObject",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434518d == '\0') {
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
          Il2CppMethodInitialized_18434518d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsMapObject_g
        ;
        goto label_181ebf84b;
      }
    }
  }
  else if (uVar3 < 0x91efe6d8) {
    if (uVar3 == 0x792a6491) {
      bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345195 == '\0') {
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
          Il2CppMethodInitialized_184345195 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__11_0
        ;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Hash___b__11
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__11_0 =
               (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->
                      __9__11_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x91efe6d7) {
      bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345194 == '\0') {
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
          Il2CppMethodInitialized_184345194 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__10_0
        ;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Eq___b__10_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__10_0 =
               (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->
                      __9__10_0,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 == 0xd3d96082) {
    bVar2 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434518e == '\0') {
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
        Il2CppMethodInitialized_18434518e = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Distance_g;
label_181ebf84b:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar3 == 0xeaa8ef31) {
    bVar2 = System_String__op_Equality(name,"Point",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434518f == '\0') {
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
        Il2CppMethodInitialized_18434518f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Point_g____get
      ;
      goto label_181ebf84b;
    }
  }
  else if (uVar3 == 0xf5ca12e0) {
    bVar2 = System_String__op_Equality(name,"IsCharacter",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434518c == '\0') {
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
        Il2CppMethodInitialized_18434518c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsCharacter_g
      ;
      goto label_181ebf84b;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineCastHitResultBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_CreateMemberBinding
                     );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar7);
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter (const MethodInfo* method);
// 0x181ecaec0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsCharacter
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434518c == '\0') {
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
    Il2CppMethodInitialized_18434518c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsCharacter_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__IsMapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject (const MethodInfo* method);
// 0x181ecaf60

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__IsMapObject
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434518d == '\0') {
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
    Il2CppMethodInitialized_18434518d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__IsMapObject_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Distance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance (const MethodInfo* method);
// 0x181ecab00

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Distance
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434518e == '\0') {
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
    Il2CppMethodInitialized_18434518e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Distance_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Point
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point (const MethodInfo* method);
// 0x181ecb460

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Point(MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434518f == '\0') {
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
    Il2CppMethodInitialized_18434518f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Point_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x181ecb280

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345190 == '\0') {
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
    Il2CppMethodInitialized_184345190 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Normal_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x181eca880

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__Collider
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345191 == '\0') {
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
    Il2CppMethodInitialized_184345191 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__Collider_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreatePropertyBinding__ColliderInfo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo (const MethodInfo* method);
// 0x181eca7e0

CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreatePropertyBinding__ColliderInfo
          (MethodInfo *method)

{
  System_Func_CustomLogicLineCastHitResultBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345192 == '\0') {
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
    Il2CppMethodInitialized_184345192 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___CreatePropertyBinding__ColliderInfo_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ec8f30

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345193 == '\0') {
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
    Il2CppMethodInitialized_184345193 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Copy___b__9
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__9_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181ec9600

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345194 == '\0') {
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
    Il2CppMethodInitialized_184345194 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Eq___b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__10_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181ec9a90

CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345195 == '\0') {
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
    Il2CppMethodInitialized_184345195 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicLineCastHitResultBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c___CreateMethodBinding____Hash___b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicLineCastHitResultBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_c->static_fields->__9__11_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLineCastHitResultBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecc770

void CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345196 == '\0') {
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
    Il2CppMethodInitialized_184345196 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCharacter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Distance",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Point",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Collider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColliderInfo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsCharacter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3dc0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsCharacter_g____getter_2_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__IsMapObject>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3df0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__IsMapObject_g____getter_3_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._IsMapObject_k__BackingField;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Distance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3a70

Il2CppObject*
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Distance_g____getter_4_0(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = (__i->fields)._value.fields.y;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Point>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3fd0

Il2CppObject*
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Point_g____getter_5_0(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, MethodInfo* method)

{
  if (__i != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._rigidBody;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Normal>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3f30

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Normal_g____getter_6_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._Normal_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3930

Il2CppObject*
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_7_0(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, MethodInfo* method)

{
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields).OwnerBuiltin;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin.Bindings$$<__CreatePropertyBinding__ColliderInfo>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0 (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3910

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin_Bindings_____CreatePropertyBinding__ColliderInfo_g____getter_8_0
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._ColliderInfo_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsCharacter
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0600

bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  Il2CppObject *local_res8 [4];
  
  if (Il2CppMethodInitialized_184345185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_184345185 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  local_res8[0] = (Il2CppObject *)0x0;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)"IsCharacter",local_res8,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
  if ((bVar1) && (local_res8[0] != (Il2CppObject *)0x0)) {
    pIVar2 = (Il2CppObject *)0x0;
    if (local_res8[0]->klass == g_data_184354de8) {
      pIVar2 = local_res8[0];
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((local_res8[0]->klass->_1).element_class == (g_data_184354de8->_1).element_class) {
        puVar3 = il2cpp_object_unbox(local_res8[0]);
        return (bool)*puVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception(local_res8[0],g_data_184354de8);
    }
  }
  return false;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsCharacter
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181ed06b0

void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,bool value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value_00;
  undefined1 local_res10 [24];
  
  if (Il2CppMethodInitialized_184345186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_184345186 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  local_res10[0] = value;
  value_00 = il2cpp_value_box(g_data_184354de8,local_res10);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)"IsCharacter",value_00,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsMapObject
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x180acdd00

bool
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsMapObject(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsMapObject_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_IsMapObject
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x180ace1a0

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsMapObject(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsMapObject_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Distance
// il2cpp: float CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x1816ef890

float
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Distance(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._Distance_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Distance
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1816ef940

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Distance(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, float value, MethodInfo* method)

{
  *(float *)&(__this->fields).field_0x24 = value;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Point
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x180c8eec0

CustomLogic_CustomLogicVector3Builtin_o*
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Point(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._Point_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Point
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x1818be8a0

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Point(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, MethodInfo* method)

{
  (__this->fields)._Point_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Normal
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x1805853c0

CustomLogic_CustomLogicVector3Builtin_o*
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Normal(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Normal
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x180e8f700

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Normal(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)
   &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position = value;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position,value)
  ;
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_Collider
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x180c7fb50

CustomLogic_BuiltinClassInstance_o*
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_Collider(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_Collider
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* value, const MethodInfo* method);
// 0x180f1db10

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_Collider(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* value, MethodInfo* method)

{
  (__this->fields)._Current_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Current_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ColliderInfo
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x1805853d0

CustomLogic_CustomLogicColliderBuiltin_o*
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ColliderInfo(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$set_ColliderInfo
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* value, const MethodInfo* method);
// 0x180f1d7f0

void
CustomLogic_CustomLogicLineCastHitResultBuiltin__set_ColliderInfo(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields = value;
  Il2CppCodeGenWriteBarrier((void **)(__this + 1),value);
  return;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x181ed01c0

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicColliderBuiltin_o *value_00;
  bool bVar2;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_01;
  Il2CppObject *value_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  undefined1 local_res18 [8];
  
  if (Il2CppMethodInitialized_184345187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345187 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
  if (Il2CppMethodInitialized_18434518a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434518a = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  bVar2 = CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsCharacter(__this,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345186 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
      il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
      Il2CppMethodInitialized_184345186 = '\x01';
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields).Variables;
    local_res18[0] = bVar2;
    value_01 = il2cpp_value_box(g_data_184354de8,local_res18);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)"IsCharacter",value_01,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    (__this_01->fields)._IsMapObject_k__BackingField = (__this->fields)._IsMapObject_k__BackingField;
    pCVar3 = (__this->fields)._Point_k__BackingField;
    if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar3,(MethodInfo *)0x0);
      if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
        if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
        }
      }
      (__this_01->fields)._Point_k__BackingField = pCVar3;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Point_k__BackingField,pCVar3);
      pCVar3 = (__this->fields)._Normal_k__BackingField;
      if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicVector3Builtin____Copy__(pCVar3,(MethodInfo *)0x0);
        if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
          if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
          }
        }
        (__this_01->fields)._Normal_k__BackingField = pCVar3;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Normal_k__BackingField,pCVar3);
        (__this_01->fields)._Distance_k__BackingField = (__this->fields)._Distance_k__BackingField;
        value = (__this->fields)._Collider_k__BackingField;
        (__this_01->fields)._Collider_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Collider_k__BackingField,value);
        value_00 = (__this->fields)._ColliderInfo_k__BackingField;
        (__this_01->fields)._ColliderInfo_k__BackingField = value_00;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._ColliderInfo_k__BackingField,value_00);
        return (CustomLogic_BuiltinClassInstance_o *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x181ed03e0

Il2CppObject *
CustomLogic_CustomLogicLineCastHitResultBuiltin____Copy__
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicLineCastHitResultBuiltin__Copy(__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__ (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed03f0

bool CustomLogic_CustomLogicLineCastHitResultBuiltin____Eq__
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,Il2CppObject *self,
               Il2CppObject *other,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  Il2CppClass *__this_01;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    Il2CppMethodInitialized_184345188 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin)) &&
       (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin)) {
        __this_00 = self[3].monitor;
        if (__this_00 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          bVar2 = CustomLogic_CustomLogicVector3Builtin____Eq__
                            (__this_00,(Il2CppObject *)__this_00,other[3].monitor,(MethodInfo *)0x0);
          if (!bVar2) {
            return false;
          }
          __this_01 = self[4].klass;
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
// 0x181ed04d0

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
  
  pCVar1 = (__this->fields)._Point_k__BackingField;
  if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar2 = System_Single__GetHashCode((float *)&(pCVar1->fields).Value,(MethodInfo *)0x0);
    iVar3 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.y,(MethodInfo *)0x0);
    iVar4 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.z,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._Normal_k__BackingField;
    if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar5 = System_Single__GetHashCode((float *)&(pCVar1->fields).Value,(MethodInfo *)0x0);
      iVar6 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.y,(MethodInfo *)0x0);
      iVar7 = System_Single__GetHashCode(&(pCVar1->fields).Value.fields.z,(MethodInfo *)0x0);
      return iVar7 >> 2 ^ iVar6 * 4 ^ uVar5 ^ iVar4 >> 2 ^ iVar3 * 4 ^ uVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x181ed05d0

System_String_o *
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_ClassName
          (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastHitResult");
    Il2CppMethodInitialized_184345189 = '\x01';
  }
  return "LineCastHitResult";
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsAbstract(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_IsStatic(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineCastHitResultBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineCastHitResultBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor (CustomLogic_CustomLogicLineCastHitResultBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0580

void CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor
               (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434518a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434518a = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


