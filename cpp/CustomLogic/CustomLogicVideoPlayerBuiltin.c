// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVideoPlayerBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVideoPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVideoPlayerBuiltin_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f56b00

CustomLogic_CustomLogicVideoPlayerBuiltin_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin);
    Il2CppMethodInitialized_184345538 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVideoPlayerBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f59d40

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434554e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_18434554e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58e20

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59320

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Prepare>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59350

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__StepForward>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f599c0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59ae0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f2ca60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Frame");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameRate");
    il2cpp_codegen_initialize_runtime_metadata(&"Prepare");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPaused");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaybackSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    il2cpp_codegen_initialize_runtime_metadata(&"StepForward");
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    il2cpp_codegen_initialize_runtime_metadata(&"IsLooping");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"Stop");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPrepared");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameCount");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_184345539 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x4b7f7706) {
    if (uVar3 < 0x14b5b196) {
      if (uVar3 == 0x170e53d) {
        bVar2 = System_String__op_Equality(name,"IsLooping",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f2d93b;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434553d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
          Il2CppMethodInitialized_18434553d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette
        ;
        goto label_181f2ceb2;
      }
      if (uVar3 == 0x202277c) {
        bVar2 = System_String__op_Equality(name,"StepForward",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345547 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345547 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__15_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__15_0 =
                 (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->
                        __9__15_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f2d93b;
      }
      if (uVar3 != 0x14b5b195) goto label_181f2d93b;
      bVar2 = System_String__op_Equality(name,"FrameCount",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f2d93b;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434553b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
        ;
        Il2CppMethodInitialized_18434553b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
      ;
    }
    else {
      if (0x3eeb76a4 < uVar3) {
        if (uVar3 == 0x44f9bf2d) {
          bVar2 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345544 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345544 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__12_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__12_0 =
                   (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->
                          __9__12_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x4b7f7705) {
          bVar2 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345548 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345548 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__16_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__16_0 =
                   (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->
                          __9__16_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181f2d93b:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVideoPlayerBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      if (uVar3 == 0x29ab6f83) {
        bVar2 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345545 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345545 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__13_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__13_0 =
                 (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->
                        __9__13_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f2d93b;
      }
      if (uVar3 != 0x3eeb76a4) goto label_181f2d93b;
      bVar2 = System_String__op_Equality(name,"FrameRate",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f2d93b;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434553c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
        ;
        Il2CppMethodInitialized_18434553c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
      ;
    }
  }
  else if (uVar3 < 0xcc5e1936) {
    if (uVar3 < 0x7ea7e87c) {
      if (uVar3 == 0x5e7ac146) {
        bVar2 = System_String__op_Equality(name,"Frame",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f2d93b;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434553a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
          Il2CppMethodInitialized_18434553a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2
        ;
        goto label_181f2ceb2;
      }
      if (uVar3 != 0x7ea7e87b) goto label_181f2d93b;
      bVar2 = System_String__op_Equality(name,"IsPaused",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f2d93b;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434553e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
        ;
        Il2CppMethodInitialized_18434553e = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
      ;
    }
    else {
      if (uVar3 == 0x9e978e07) {
        bVar2 = System_String__op_Equality(name,"PlaybackSpeed",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f2d93b;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345542 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
          Il2CppMethodInitialized_184345542 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s
        ;
label_181f2ceb2:
        System_Action_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        goto label_181f2d916;
      }
      if (uVar3 != 0xcc5e1935) goto label_181f2d93b;
      bVar2 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f2d93b;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345541 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
        ;
        Il2CppMethodInitialized_184345541 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
      ;
    }
  }
  else if (uVar3 < 0xdfe4e405) {
    if (uVar3 != 0xd5463178) {
      if (uVar3 != 0xdfe4e404) goto label_181f2d93b;
      bVar2 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f2d93b;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345543 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
        ;
        Il2CppMethodInitialized_184345543 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11
      ;
      goto label_181f2ceb2;
    }
    bVar2 = System_String__op_Equality(name,"IsPrepared",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f2d93b;
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345540 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      Il2CppMethodInitialized_184345540 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
    ;
  }
  else {
    if (uVar3 != 0xe4b35065) {
      if (uVar3 == 0xf222bf7c) {
        bVar2 = System_String__op_Equality(name,"Prepare",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345546 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345546 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__14_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__14_0 =
                 (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->
                        __9__14_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f2d93b;
    }
    bVar2 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f2d93b;
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434553f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
      Il2CppMethodInitialized_18434553f = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
    ;
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
label_181f2d916:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Frame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame (const MethodInfo* method);
// 0x181f47c00

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434553a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount (const MethodInfo* method);
// 0x181f47ac0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434553b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate (const MethodInfo* method);
// 0x181f47b60

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434553c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsLooping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping (const MethodInfo* method);
// 0x181f49500

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434553d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPaused
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused (const MethodInfo* method);
// 0x181f497d0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434553e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x181f49870

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434553f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_18434553f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPrepared
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared (const MethodInfo* method);
// 0x181f49910

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_184345540 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Length
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length (const MethodInfo* method);
// 0x181f49cd0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_184345541 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__PlaybackSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed (const MethodInfo* method);
// 0x181f4a8b0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_184345542 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x181f4bdf0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345543 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_184345543 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x181f43a70

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345544 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345544 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__12_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x181f43f00

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345545 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345545 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__13_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Prepare
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare (const MethodInfo* method);
// 0x181f44020

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345546 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345546 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__14_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__StepForward
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward (const MethodInfo* method);
// 0x181f45860

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345547 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345547 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__15_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x181f45ab0

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345548 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9__16_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f4c5c0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345549 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Frame");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameRate");
    il2cpp_codegen_initialize_runtime_metadata(&"Prepare");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPaused");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaybackSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    il2cpp_codegen_initialize_runtime_metadata(&"StepForward");
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    il2cpp_codegen_initialize_runtime_metadata(&"IsLooping");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"Stop");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPrepared");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameCount");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_184345549 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Frame",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameCount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameRate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsLooping",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPaused",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPrepared",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Length",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaybackSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Time",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Play",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Prepare",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StepForward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b490

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int64_t iVar1;
  Il2CppObject *pIVar2;
  undefined4 local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    iVar1 = UnityEngine_Video_VideoPlayer__get_frame(__this,(MethodInfo *)0x0);
    local_res8[0] = (undefined4)iVar1;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b4d0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434554a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434554a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_frame(__this,(longlong)iVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameCount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b410

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  uint64_t local_res8 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_frameCount(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e30,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameRate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b450

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_frameRate(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cbe0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_isLooping(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3cc20

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_18434554b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434554b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPaused>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cd80

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_isPaused(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cdc0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_isPlaying(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPrepared>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ce00

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_isPrepared(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Length>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d1c0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  double local_res8 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_length(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e40,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3de30

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    local_res8[0] = UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3de70

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434554c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434554c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f910

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  double dVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dVar2 = UnityEngine_Video_VideoPlayer__get_time(__this,(MethodInfo *)0x0);
    local_res8[0] = (float)dVar2;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f960

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float fVar1;
  
  if (Il2CppMethodInitialized_18434554d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434554d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time(__this,(double)fVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Video_VideoPlayer_o* videoPlayer, const MethodInfo* method);
// 0x181f56820

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor_1f56820
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Video_VideoPlayer_o *videoPlayer,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Video_VideoPlayer_o *value;
  
  if (Il2CppMethodInitialized_184345536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Video_VideoPlayer);
    Il2CppMethodInitialized_184345536 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)videoPlayer,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(__this->fields).Component;
  value = (UnityEngine_Video_VideoPlayer_o *)0x0;
  if (pUVar1 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Video_VideoPlayer_o *)0x0;
  }
  else {
    pUVar2 = value;
    if (pUVar1->klass == TypeInfo_UnityEngine_Video_VideoPlayer) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_Video_VideoPlayer);
    }
    (__this->fields).Value = pUVar2;
    if (pUVar1->klass == TypeInfo_UnityEngine_Video_VideoPlayer) {
      value = pUVar1;
    }
    if (value == (UnityEngine_Video_VideoPlayer_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_Video_VideoPlayer);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Frame
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f56a60

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_frame(__this_00,(longlong)value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Frame
// il2cpp: int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56950

int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame
                  (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  int64_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    iVar1 = UnityEngine_Video_VideoPlayer__get_frame(__this_00,(MethodInfo *)0x0);
    return (int32_t)iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameCount
// il2cpp: uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56910

uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount
                   (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  uint64_t uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    uVar1 = UnityEngine_Video_VideoPlayer__get_frameCount(__this_00,(MethodInfo *)0x0);
    return uVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameRate
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56930

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar1 = UnityEngine_Video_VideoPlayer__get_frameRate(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_IsLooping
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56a90

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsLooping
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56970

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPaused
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56990

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f569b0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPrepared
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f569d0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Length
// il2cpp: double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f569f0

double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length
                 (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  double dVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar1 = UnityEngine_Video_VideoPlayer__get_length(__this_00,(MethodInfo *)0x0);
    return dVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_PlaybackSpeed
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f56ab0

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_PlaybackSpeed
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56a10

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    fVar1 = UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f56ad0

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(__this_00,(double)value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56a30

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  double dVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    dVar1 = UnityEngine_Video_VideoPlayer__get_time(__this_00,(MethodInfo *)0x0);
    return (float)dVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56780

void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Play (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f567a0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Play
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Prepare
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f567c0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$StepForward
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f567e0

void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f56800

void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f568e0

System_String_o *
CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_184345537 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract(CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic(CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


