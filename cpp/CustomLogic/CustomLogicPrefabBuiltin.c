// Type: CustomLogic.CustomLogicPrefabBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrefabBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPrefabBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f7bc50
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f7be8c: xor edx, edx
// asm:   0x181f7be8e: mov rcx, rdi
// asm:   0x181f7be91: call 0x18209af90  ; CustomLogic_BuiltinClassInstance___ctor()
// asm:   0x181f7be96: mov rcx, qword ptr [rip + 0x214512b]  ; TypeInfo_Map_MapScriptSceneObject
// asm:   0x181f7be9d: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181f7bea2: xor edx, edx
// asm:   0x181f7bea4: mov rcx, rax
// asm:   0x181f7bea7: mov rbx, rax
// asm:   0x181f7beaa: call 0x181eda710  ; Map_MapScriptSceneObject___ctor()
// asm:   0x181f7beaf: lea rcx, [rdi + 0x30]
// asm:   0x181f7beb3: mov qword ptr [rdi + 0x30], rbx
// asm:   0x181f7beb7: mov rdx, rbx
// asm:   0x181f7beba: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181f7bebf: jmp 0x181f7be28

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicPrefabBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_String_o *pSVar4;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar5;
  System_String_array *value;
  Map_MapScriptSceneObject_o *pMVar6;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843457aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    Il2CppMethodInitialized_1843457aa = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
      if (Il2CppMethodInitialized_1843457a3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
        Il2CppMethodInitialized_1843457a3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
      pMVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
      Map_MapScriptSceneObject___ctor(pMVar6,(MethodInfo *)0x0);
      (pCVar5->fields).Value = pMVar6;
      Il2CppCodeGenWriteBarrier(&(pCVar5->fields).Value,pMVar6);
      return pCVar5;
    }
    if ((int)args->max_length != 2) {
      NullCheck(args);
      local_res8[0] = (int32_t)args->max_length;
      pSVar4 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPrefabBuiltin constructor found that takes ");
      pSVar4 = System_String__Concat_1969b70(str0,pSVar4,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
    }
    if ((int)args->max_length == 0) {
label_181f7bf54:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    bVar3 = false;
    uVar1 = (uint)args->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f7bf54;
      pIVar2 = args->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (pIVar2,(MethodInfo_66E400 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    if (Il2CppMethodInitialized_1843457a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_1843457a4 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      value = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
      pSVar4 = System_String__Join("",value,(MethodInfo *)0x0);
      pMVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
      Map_MapScriptSceneObject___ctor(pMVar6,(MethodInfo *)0x0);
      (pCVar5->fields).Value = pMVar6;
      Il2CppCodeGenWriteBarrier(&(pCVar5->fields).Value,pMVar6);
      pMVar6 = (pCVar5->fields).Value;
      if (pMVar6 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar6->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar6,pSVar4,(pMVar6->klass->vtable)._9_Deserialize.method);
        if (bVar3 == false) {
          return pCVar5;
        }
        CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(pCVar5,(MethodInfo *)0x0);
        return pCVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f807b0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843457c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPrefabBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearComponents>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0 (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPrefabBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cb60

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_____CreateMethodBinding__ClearComponents_b__14_0
          (CustomLogic_CustomLogicPrefabBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPrefabBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f5e520

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  uint32_t uVar2;
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_03;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843457ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetType");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearComponents");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_1843457ab = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x28528e12) {
    if (uVar2 < 0x18a43c5c) {
      if (uVar2 == 0x232777f) {
        bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457b3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
            Il2CppMethodInitialized_1843457b3 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
          ;
          goto label_181f5f110;
        }
      }
      else if (uVar2 == 0xfe07306) {
        bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457b1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
            Il2CppMethodInitialized_1843457b1 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
          ;
          goto label_181f5f110;
        }
      }
      else if (uVar2 == 0x18a43c5b) {
        bVar1 = System_String__op_Equality(name,"Static",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457af == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
            Il2CppMethodInitialized_1843457af = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
          ;
          goto label_181f5f110;
        }
      }
    }
    else if (uVar2 == 0x1f89134f) {
      bVar1 = System_String__op_Equality(name,"Active",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457ae == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457ae = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
        ;
        goto label_181f5f110;
      }
    }
    else if (uVar2 == 0x23922d03) {
      bVar1 = System_String__op_Equality(name,"AssetType",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457ac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457ac = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
        ;
        goto label_181f5f110;
      }
    }
    else if (uVar2 == 0x28528e11) {
      bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457b4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457b4 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
        ;
        goto label_181f5f110;
      }
    }
  }
  else if (uVar2 < 0x6f79efb7) {
    if (uVar2 == 0x384cf68a) {
      bVar1 = System_String__op_Equality(name,"CollideMode",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457b5 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
        ;
label_181f5f110:
        System_Action_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo *)0x0);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin)
        ;
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_03,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)__this_00,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_03;
      }
    }
    else if (uVar2 == 0x592a4941) {
      bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457b0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457b0 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
        ;
        goto label_181f5f110;
      }
    }
    else if (uVar2 == 0x6f79efb6) {
      bVar1 = System_String__op_Equality(name,"ClearComponents",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457b8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843457b8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this_01 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
          }
          object = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,object,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0 =
               (System_Func_CustomLogicPrefabBuiltin__object____object__o *)__this_01;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0,
                     __this_01);
        }
        __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (__this_02,(System_String_o *)__this_01,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_02;
      }
    }
  }
  else if (uVar2 < 0x94e7d8c2) {
    if (uVar2 == 0x829f123b) {
      bVar1 = System_String__op_Equality(name,"Asset",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457ad == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457ad = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
        ;
        goto label_181f5f110;
      }
    }
    else if (uVar2 == 0x94e7d8c1) {
      bVar1 = System_String__op_Equality(name,"CollideWith",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
          Il2CppMethodInitialized_1843457b6 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
        ;
        goto label_181f5f110;
      }
    }
  }
  else if (uVar2 == 0xa3dd2697) {
    bVar1 = System_String__op_Equality(name,"PhysicsMaterial",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        Il2CppMethodInitialized_1843457b7 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
      ;
      goto label_181f5f110;
    }
  }
  else if (uVar2 == 0xe27f342a) {
    bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457b2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
        Il2CppMethodInitialized_1843457b2 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
      ;
      goto label_181f5f110;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPrefabBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_04,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar4);
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__AssetType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType (const MethodInfo* method);
// 0x181f6af80

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__AssetType(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__AssetType_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Asset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset (const MethodInfo* method);
// 0x181f6b070

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Asset(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Asset_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Active
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active (const MethodInfo* method);
// 0x181f6ada0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Active(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457ae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Active_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Static
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static (const MethodInfo* method);
// 0x181f6dfa0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Static(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Static_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x181f6ec70

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Visible_g____setter_6_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x181f6c9c0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_7_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f6d190

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_8_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x181f6d6e0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_9_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x181f6daa0

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode (const MethodInfo* method);
// 0x181f6b570

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideMode(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideMode_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__CollideWith
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith (const MethodInfo* method);
// 0x181f6b660

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__CollideWith(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__CollideWith_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreatePropertyBinding__PhysicsMaterial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial (const MethodInfo* method);
// 0x181f6cf10

CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreatePropertyBinding__PhysicsMaterial(MethodInfo *method)

{
  System_Func_CustomLogicPrefabBuiltin__object__o *__this;
  System_Action_CustomLogicPrefabBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPrefabBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
    Il2CppMethodInitialized_1843457b7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPrefabBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings___CreatePropertyBinding__PhysicsMaterial_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPrefabBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$__CreateMethodBinding__ClearComponents
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o* CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents (const MethodInfo* method);
// 0x181f67f60

CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *
CustomLogic_CustomLogicPrefabBuiltin_Bindings____CreateMethodBinding__ClearComponents(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPrefabBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c___CreateMethodBinding__ClearComponents_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicPrefabBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPrefabBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f6ef40

void CustomLogic_CustomLogicPrefabBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843457b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetType");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"PersistsOwnership");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearComponents");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_1843457b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PersistsOwnership",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AssetType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Asset",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Active",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Static",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Visible",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollideMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollideWith",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PhysicsMaterial",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearComponents",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f62420

Il2CppObject*
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____getter_2_0(CustomLogic_CustomLogicPrefabBuiltin_o* __i, MethodInfo* method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    return (Il2CppObject *)(pSVar1->fields).ExperienceID;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__AssetType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62450

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__AssetType_g____setter_2_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Type = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Type,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f62510

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____getter_3_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).Asset;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Asset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62540

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Asset_g____setter_3_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Asset = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Asset,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f62290

Il2CppObject*
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____getter_4_0(CustomLogic_CustomLogicPrefabBuiltin_o* __i, MethodInfo* method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    local_res8[0] = (pSVar1->fields).LowerIsBetter;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Active>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62360

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Active_g____setter_4_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843457bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Active = bVar2;
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f66170

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____getter_5_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_res8[0] = (pMVar1->fields).Static;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Static>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f661b0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Static_g____setter_5_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843457bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Static = bVar2;
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f67240

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____getter_6_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_res8[0] = (pMVar1->fields).Visible;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Visible>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f67280

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Visible_g____setter_6_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843457be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Visible = bVar2;
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f643d0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64480

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_7_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).Name = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Name,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f64d60

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_8_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843457a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843457a5 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      pUVar3 = Map_MapScriptBaseObject__GetPosition
                         ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this,
                          (MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64ec0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_8_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843457c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
      (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (pCVar2->fields).Value.fields.x;
    local_18.y = (pCVar2->fields).Value.fields.y;
    local_18.z = (pCVar2->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f65630

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_9_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843457a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843457a6 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      pUVar3 = Map_MapScriptBaseObject__GetRotation
                         ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this,
                          (MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f657e0

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_9_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843457c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
      (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (pCVar2->fields).Value.fields.x;
    local_18.y = (pCVar2->fields).Value.fields.y;
    local_18.z = (pCVar2->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f65aa0

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_10_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843457a7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843457a7 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      pUVar3 = Map_MapScriptBaseObject__GetScale
                         ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this,
                          (MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65c40

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_10_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843457c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
      (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (pCVar2->fields).Value.fields.x;
    local_18.y = (pCVar2->fields).Value.fields.y;
    local_18.z = (pCVar2->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar3 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar3,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f62b30

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____getter_11_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideMode;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideMode>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62b60

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideMode_g____setter_11_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideMode = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideMode,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f62c20

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____getter_12_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).CollideWith;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__CollideWith>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62c50

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__CollideWith_g____setter_12_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).CollideWith = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideWith,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, const MethodInfo* method);
// 0x181f64b30

Il2CppObject *
CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____getter_13_0
          (CustomLogic_CustomLogicPrefabBuiltin_o *__i,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields).PhysicsMaterial;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin.Bindings$$<__CreatePropertyBinding__PhysicsMaterial>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1 (CustomLogic_CustomLogicPrefabBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f64b60

void CustomLogic_CustomLogicPrefabBuiltin_Bindings_____CreatePropertyBinding__PhysicsMaterial_g____setter_13_1
               (CustomLogic_CustomLogicPrefabBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843457c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457c5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    (pMVar1->fields).PhysicsMaterial = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).PhysicsMaterial,pSVar2);
    pMVar1 = (__i->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__i->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f797a0

void CustomLogic_CustomLogicPrefabBuiltin___ctor
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_1843457a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,__this_00);
  return;
}


// CustomLogic.CustomLogicPrefabBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin___ctor (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* prefabCSV, bool clearComponents, const MethodInfo* method);
// 0x181f79830

void CustomLogic_CustomLogicPrefabBuiltin___ctor_1f79830
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *prefabCSV,bool clearComponents
               ,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  Map_MapScriptSceneObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_1843457a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843457a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (prefabCSV != (System_String_o *)0x0) {
    value = System_String__Split(prefabCSV,10,0,(MethodInfo *)0x0);
    pSVar1 = System_String__Join("",value,(MethodInfo *)0x0);
    pMVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar2,(MethodInfo *)0x0);
    (__this->fields).Value = pMVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pMVar2);
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar2,pSVar1,(pMVar2->klass->vtable)._9_Deserialize.method);
      if (clearComponents) {
        CustomLogic_CustomLogicPrefabBuiltin__ClearComponents(__this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_AssetType
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79970

System_String_o*
CustomLogic_CustomLogicPrefabBuiltin__get_AssetType(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettingsBase_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettingsBase_o *)0x0) {
    return (pUVar1->fields).m_Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_AssetType
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79cb0

void CustomLogic_CustomLogicPrefabBuiltin__set_AssetType
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Type = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Type,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Asset
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79990

System_String_o*
CustomLogic_CustomLogicPrefabBuiltin__get_Asset(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  System_Xml_ValidatingReaderNodeData_o *pSVar1;
  
  pSVar1 = (__this->fields).Value;
  if (pSVar1 != (System_Xml_ValidatingReaderNodeData_o *)0x0) {
    return (pSVar1->fields).namespaceUri;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Asset
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Asset (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79d10

void CustomLogic_CustomLogicPrefabBuiltin__set_Asset
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Asset = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Asset,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Active
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79950

bool
CustomLogic_CustomLogicPrefabBuiltin__get_Active(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields).Value;
  if (pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0) {
    return (pSVar1->fields).LowerIsBetter;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Active
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Active (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f79c50

void CustomLogic_CustomLogicPrefabBuiltin__set_Active
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Active = value;
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Static
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79c10

bool CustomLogic_CustomLogicPrefabBuiltin__get_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).Static;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Static
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Static (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f7a070

void CustomLogic_CustomLogicPrefabBuiltin__set_Static
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Static = value;
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Visible
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79c30

bool CustomLogic_CustomLogicPrefabBuiltin__get_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).Visible;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Visible
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Visible (CustomLogic_CustomLogicPrefabBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f7a0d0

void CustomLogic_CustomLogicPrefabBuiltin__set_Visible
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Visible = value;
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79a20

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Name
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Name (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79e30

void CustomLogic_CustomLogicPrefabBuiltin__set_Name
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).Name = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Name,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79a60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Position
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843457a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843457a5 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    pUVar3 = Map_MapScriptBaseObject__GetPosition
                       ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this_00,
                        (MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Position (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f79ef0

void CustomLogic_CustomLogicPrefabBuiltin__set_Position
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79af0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Rotation
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843457a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843457a6 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    pUVar3 = Map_MapScriptBaseObject__GetRotation
                       ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this_00,
                        (MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f79f70

void CustomLogic_CustomLogicPrefabBuiltin__set_Rotation
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPrefabBuiltin__get_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79b80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPrefabBuiltin__get_Scale
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapScriptSceneObject_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843457a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843457a7 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    pUVar3 = Map_MapScriptBaseObject__GetScale
                       ((UnityEngine_Vector3_o *)local_28,(Map_MapScriptBaseObject_o *)__this_00,
                        (MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_Scale (CustomLogic_CustomLogicPrefabBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f79ff0

void CustomLogic_CustomLogicPrefabBuiltin__set_Scale
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (pMVar1 = (__this->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideMode
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f799e0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideMode
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideMode;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideMode
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79d70

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideMode
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideMode = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideMode,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_CollideWith
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79a00

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_CollideWith
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).CollideWith;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_CollideWith
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79dd0

void CustomLogic_CustomLogicPrefabBuiltin__set_CollideWith
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).CollideWith = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).CollideWith,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_PhysicsMaterial
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79a40

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_PhysicsMaterial
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    return (pMVar1->fields).PhysicsMaterial;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$set_PhysicsMaterial
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial (CustomLogic_CustomLogicPrefabBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f79e90

void CustomLogic_CustomLogicPrefabBuiltin__set_PhysicsMaterial
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar1->fields).PhysicsMaterial = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields).PhysicsMaterial,value);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
      pMVar1 = (__this->fields).Value;
      if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$ClearComponents
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f796b0

void CustomLogic_CustomLogicPrefabBuiltin__ClearComponents
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Map_MapScriptSceneObject_o *pMVar2;
  System_Collections_Generic_List_MapScriptComponent__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843457a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_Clear);
    Il2CppMethodInitialized_1843457a8 = '\x01';
  }
  pMVar2 = (__this->fields).Value;
  if ((pMVar2 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pSVar3 = (pMVar2->fields).Components,
     pSVar3 != (System_Collections_Generic_List_MapScriptComponent__o *)0x0)) {
    length = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar2 = (__this->fields).Value;
    if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
      pSVar4 = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
      pMVar2 = (__this->fields).Value;
      if (pMVar2 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar2,pSVar4,(pMVar2->klass->vtable)._9_Deserialize.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$Refresh
// il2cpp: void CustomLogic_CustomLogicPrefabBuiltin__Refresh (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f79750

void CustomLogic_CustomLogicPrefabBuiltin__Refresh
               (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  Map_MapScriptSceneObject_o *pMVar1;
  System_String_o *pSVar2;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
    pSVar2 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = (__this->fields).Value;
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,pSVar2,(pMVar1->klass->vtable)._9_Deserialize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin____Str__ (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181afadd0

System_String_o*
CustomLogic_CustomLogicPrefabBuiltin____Str__(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  System_Net_Sockets_NetworkStream_o *pSVar1;
  bool bVar2;
  
  pSVar1 = (__this->fields).Value;
  if (pSVar1 != (System_Net_Sockets_NetworkStream_o *)0x0) {
    bVar2 = (*(pSVar1->klass->vtable)._8_get_CanSeek.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._8_get_CanSeek.method);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPrefabBuiltin__get_ClassName (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x181f799b0

System_String_o *
CustomLogic_CustomLogicPrefabBuiltin__get_ClassName
          (CustomLogic_CustomLogicPrefabBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843457a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefab");
    Il2CppMethodInitialized_1843457a9 = '\x01';
  }
  return "Prefab";
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicPrefabBuiltin__get_IsAbstract(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicPrefabBuiltin__get_IsStatic(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicPrefabBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPrefabBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPrefabBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicPrefabBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


