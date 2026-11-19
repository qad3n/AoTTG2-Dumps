// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicVideoPlayerBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVideoPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVideoPlayerBuiltin_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a09ce0

CustomLogic_CustomLogicVideoPlayerBuiltin_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin);
    Il2CppMethodInitialized_07545ef0 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVideoPlayerBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a0b8a0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545f06 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a0b910

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a0b920

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a0b940

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Prepare>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a0b960

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__StepForward>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a0b980

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a0b9a0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a09dd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545ef1 == '\0') {
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
    Il2CppMethodInitialized_07545ef1 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x4b7f7706) {
    if (uVar2 < 0x14b5b196) {
      if (uVar2 == 0x170e53d) {
        bVar1 = System_String__op_Equality(name,"IsLooping",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x202277c) {
        bVar1 = System_String__op_Equality(name,"StepForward",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
            pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
          pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x14b5b195) {
        bVar1 = System_String__op_Equality(name,"FrameCount",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x3eeb76a5) {
      if (uVar2 == 0x29ab6f83) {
        bVar1 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x3eeb76a4) {
        bVar1 = System_String__op_Equality(name,"FrameRate",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x44f9bf2d) {
      bVar1 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x4b7f7705) {
      bVar1 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xcc5e1936) {
    if (uVar2 < 0x7ea7e87c) {
      if (uVar2 == 0x5e7ac146) {
        bVar1 = System_String__op_Equality(name,"Frame",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7ea7e87b) {
        bVar1 = System_String__op_Equality(name,"IsPaused",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9e978e07) {
      bVar1 = System_String__op_Equality(name,"PlaybackSpeed",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xcc5e1935) {
      bVar1 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdfe4e405) {
    if (uVar2 == 0xd5463178) {
      bVar1 = System_String__op_Equality(name,"IsPrepared",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdfe4e404) {
      bVar1 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe4b35065) {
    bVar1 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf222bf7c) {
    bVar1 = System_String__op_Equality(name,"Prepare",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVideoPlayerBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Frame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame (const MethodInfo* method);
// 0x5a0a3f0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ef2 == '\0') {
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
    Il2CppMethodInitialized_07545ef2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Frame_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount (const MethodInfo* method);
// 0x5a0a4d0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameCount_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate (const MethodInfo* method);
// 0x5a0a570

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__FrameRate_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsLooping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping (const MethodInfo* method);
// 0x5a0a610

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ef5 == '\0') {
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
    Il2CppMethodInitialized_07545ef5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsLooping_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPaused
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused (const MethodInfo* method);
// 0x5a0a6f0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPaused_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x5a0a790

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPrepared
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared (const MethodInfo* method);
// 0x5a0a830

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__IsPrepared_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Length
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length (const MethodInfo* method);
// 0x5a0a8d0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object);
    Il2CppMethodInitialized_07545ef9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Length_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__PlaybackSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed (const MethodInfo* method);
// 0x5a0a970

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545efa == '\0') {
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
    Il2CppMethodInitialized_07545efa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__PlaybackSpeed_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x5a0aa50

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_CustomLogicVideoPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicVideoPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545efb == '\0') {
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
    Il2CppMethodInitialized_07545efb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_11
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVideoPlayerBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_11
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x5a0ab30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0ab65: jmp 0x5a0abd5

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545efc == '\0') {
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
    Il2CppMethodInitialized_07545efc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Pause_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x5a0ac70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0aca5: jmp 0x5a0ad15

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545efd == '\0') {
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
    Il2CppMethodInitialized_07545efd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Play_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Prepare
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare (const MethodInfo* method);
// 0x5a0adb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0ade5: jmp 0x5a0ae55

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545efe == '\0') {
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
    Il2CppMethodInitialized_07545efe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Prepare_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__StepForward
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward (const MethodInfo* method);
// 0x5a0aef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0af25: jmp 0x5a0af95

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545eff == '\0') {
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
    Il2CppMethodInitialized_07545eff = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__StepForward_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x5a0b030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0b065: jmp 0x5a0b0d5

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f00 == '\0') {
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
    Il2CppMethodInitialized_07545f00 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicVideoPlayerBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVideoPlayerBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c___CreateMethodBinding__Stop_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a0b170

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545f01 == '\0') {
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
    Il2CppMethodInitialized_07545f01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Frame",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameCount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameRate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsLooping",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPaused",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPrepared",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Length",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaybackSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Time",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Play",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Prepare",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StepForward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b410

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__get_frame(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a0b450

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f02 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_frame(__this,(long)iVar1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameCount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b4d0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  uint64_t uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = UnityEngine_Video_VideoPlayer__get_frameCount(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556738,&uStack_8);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameRate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b510

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__get_frameRate(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b550

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a0b590

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_isLooping(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPaused>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b610

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b650

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPrepared>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b690

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Length>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b6d0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  double dStack_8;
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  dStack_8 = UnityEngine_Video_VideoPlayer__get_length(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556748,&dStack_8);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b710

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a0b750

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f04 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x5a0b7d0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__get_time(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a0b810

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float fVar1;
  
  if (Il2CppMethodInitialized_07545f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f05 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_time(__this,(double)fVar1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09980

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
// 0x5a09990

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor_5909990
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Video_VideoPlayer_o *videoPlayer,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Video_VideoPlayer_c *pUVar2;
  
  if (Il2CppMethodInitialized_07545eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Video_VideoPlayer);
    Il2CppMethodInitialized_07545eee = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)videoPlayer,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
  pUVar2 = TypeInfo_UnityEngine_Video_VideoPlayer;
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(__this->fields).Component;
  if (pUVar1 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Video_VideoPlayer_o *)0x0;
  }
  else if ((pUVar1->klass != TypeInfo_UnityEngine_Video_VideoPlayer) ||
          ((__this->fields).Value = pUVar1, pUVar1->klass != pUVar2)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar1,pUVar2);
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Frame
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a09a20

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_frame(__this_00,(long)value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Frame
// il2cpp: int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09a40

int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame
                  (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  int64_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Video_VideoPlayer__get_frame(__this_00,(MethodInfo *)0x0);
  return (int32_t)iVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameCount
// il2cpp: uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09a60

uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount
                   (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  uint64_t uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Video_VideoPlayer__get_frameCount(__this_00,(MethodInfo *)0x0);
  return uVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameRate
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09a80

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Video_VideoPlayer__get_frameRate(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_IsLooping
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a09aa0

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_isLooping(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsLooping
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09ac0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPaused
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09ae0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09b00

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPrepared
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09b20

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Length
// il2cpp: double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09b40

double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length
                 (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  double dVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  dVar1 = UnityEngine_Video_VideoPlayer__get_length(__this_00,(MethodInfo *)0x0);
  return dVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_PlaybackSpeed
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a09b60

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_PlaybackSpeed
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09b80

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a09ba0

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__set_time(__this_00,(double)value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09bc0

float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time
                (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  double dVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  dVar1 = UnityEngine_Video_VideoPlayer__get_time(__this_00,(MethodInfo *)0x0);
  return (float)dVar1;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09be0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Play (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09c00

void CustomLogic_CustomLogicVideoPlayerBuiltin__Play
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Prepare
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09c20

void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$StepForward
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09c40

void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09c60

void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09c80

System_String_o *
CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"VideoPlayer");
    Il2CppMethodInitialized_07545eef = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09cb0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09cc0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x5a09cd0

bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


