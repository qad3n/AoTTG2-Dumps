// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVideoPlayerBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicVideoPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVideoPlayerBuiltin_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3df70c0

CustomLogic_CustomLogicVideoPlayerBuiltin_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702b05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVideoPlayerBuiltin);
    DAT_05702b05 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVideoPlayerBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicVideoPlayerBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicVideoPlayerBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3df8cd0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702b1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b1b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3df8d40

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__12_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df8d50

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__Pause>b__12_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Play_b__13_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df8d70

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__Play>b__13_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Prepare>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Prepare_b__14_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df8d90

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__Prepare>b__14_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__StepForward>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__StepForward_b__15_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df8db0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__StepForward>b__15_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__16_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicVideoPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df8dd0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_<>c__<__CreateMethodBinding__Stop>b__16_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVideoPlayerBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3df71b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702b06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Frame");
    il2cpp_init_method_metadata(&"FrameRate");
    il2cpp_init_method_metadata(&"Prepare");
    il2cpp_init_method_metadata(&"IsPaused");
    il2cpp_init_method_metadata(&"PlaybackSpeed");
    il2cpp_init_method_metadata(&"Play");
    il2cpp_init_method_metadata(&"StepForward");
    il2cpp_init_method_metadata(&"Time");
    il2cpp_init_method_metadata(&"IsLooping");
    il2cpp_init_method_metadata(&"Length");
    il2cpp_init_method_metadata(&"Stop");
    il2cpp_init_method_metadata(&"IsPrepared");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"FrameCount");
    il2cpp_init_method_metadata(&"IsPlaying");
    DAT_05702b06 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x4b7f7706) {
    if (uVar3 < 0x14b5b196) {
      if (uVar3 == 0x170e53d) {
        bVar4 = System_String__op_Equality(name,"IsLooping",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b0a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsLooping_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsLooping_g____se);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
            DAT_05702b0a = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x202277c) {
        bVar4 = System_String__op_Equality(name,"StepForward",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b14 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StepForward_b__15);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b14 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x14b5b195) &&
              (bVar4 = System_String__op_Equality(name,"FrameCount",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b08 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameCount_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          DAT_05702b08 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x3eeb76a5) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b12 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Play_b__13_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b12 = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x3eeb76a4) &&
              (bVar4 = System_String__op_Equality(name,"FrameRate",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b09 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameRate_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          DAT_05702b09 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x44f9bf2d) {
      bVar4 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b11 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pause_b__12_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b11 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x4b7f7705) &&
            (bVar4 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b15 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Stop_b__16_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702b15 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xcc5e1936) {
    if (uVar3 < 0x7ea7e87c) {
      if (uVar3 == 0x5e7ac146) {
        bVar4 = System_String__op_Equality(name,"Frame",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b07 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Frame_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Frame_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
            DAT_05702b07 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x7ea7e87b) &&
              (bVar4 = System_String__op_Equality(name,"IsPaused",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b0b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPaused_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          DAT_05702b0b = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x9e978e07) {
      bVar4 = System_String__op_Equality(name,"PlaybackSpeed",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b0f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlaybackSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PlaybackSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          DAT_05702b0f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xcc5e1935) &&
            (bVar4 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b0e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Length_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        DAT_05702b0e = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xdfe4e405) {
    if (uVar3 == 0xd5463178) {
      bVar4 = System_String__op_Equality(name,"IsPrepared",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b0d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPrepared_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
          DAT_05702b0d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xdfe4e404) &&
            (bVar4 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b10 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Time_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Time_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        DAT_05702b10 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xe4b35065) {
    bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b0c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPlaying_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
        DAT_05702b0c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf222bf7c) &&
          (bVar4 = System_String__op_Equality(name,"Prepare",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702b13 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Prepare_b__14_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702b13 = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicVideoPlayerBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Frame
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame (const MethodInfo* method);
// 0x3df77d0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Frame
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Frame_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Frame_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b07 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount (const MethodInfo* method);
// 0x3df78b0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameCount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameCount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b08 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__FrameRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate (const MethodInfo* method);
// 0x3df7950

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__FrameRate
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameRate_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b09 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsLooping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping (const MethodInfo* method);
// 0x3df79f0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsLooping
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsLooping_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsLooping_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPaused
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused (const MethodInfo* method);
// 0x3df7ad0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPaused
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPaused_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x3df7b70

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPlaying
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPlaying_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsPrepared
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared (const MethodInfo* method);
// 0x3df7c10

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__IsPrepared
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPrepared_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Length
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length (const MethodInfo* method);
// 0x3df7cb0

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Length
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Length_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__PlaybackSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed (const MethodInfo* method);
// 0x3df7d50

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__PlaybackSpeed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PlaybackSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PlaybackSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b0f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x3df7e30

CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreatePropertyBinding__Time
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Time_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Time_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
    DAT_05702b10 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicVideoPlayerBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicVideoPlayerBuilti);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x3df7f10

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pause_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b11 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x3df8060

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Play_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b12 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Prepare
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare (const MethodInfo* method);
// 0x3df81b0

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Prepare
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Prepare_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b13 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__StepForward
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward (const MethodInfo* method);
// 0x3df8300

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__StepForward
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StepForward_b__15);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b14 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x3df8450

CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *__this;
  
  if (DAT_05702b15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Stop_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b15 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicVideoPlayerBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicVideoPlayerBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicVideoPlayerBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicVideoPlayerBuiltin);
  return __this;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3df85a0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702b16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Frame");
    il2cpp_init_method_metadata(&"FrameRate");
    il2cpp_init_method_metadata(&"Prepare");
    il2cpp_init_method_metadata(&"IsPaused");
    il2cpp_init_method_metadata(&"PlaybackSpeed");
    il2cpp_init_method_metadata(&"Play");
    il2cpp_init_method_metadata(&"StepForward");
    il2cpp_init_method_metadata(&"Time");
    il2cpp_init_method_metadata(&"IsLooping");
    il2cpp_init_method_metadata(&"Length");
    il2cpp_init_method_metadata(&"Stop");
    il2cpp_init_method_metadata(&"IsPrepared");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"FrameCount");
    il2cpp_init_method_metadata(&"IsPlaying");
    DAT_05702b16 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Frame",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FrameCount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FrameRate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsLooping",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPaused",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlaying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPrepared",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Length",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlaybackSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Time",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Play",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Prepare",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StepForward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stop",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____getter_2_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8840

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__Frame>g____getter_2_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_frame(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Frame>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Frame_g____setter_2_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df8880

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__Frame>g____setter_2_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  int32_t iVar1;
  
  if (DAT_05702b17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b17 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_frame(__this,(long)iVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameCount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameCount_g____getter_3_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8900

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__FrameCount>g____getter_3_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  uint64_t uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = UnityEngine_Video_VideoPlayer__get_frameCount(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711090,&uStack_8);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__FrameRate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__FrameRate_g____getter_4_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8940

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__FrameRate>g____getter_4_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_frameRate(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____getter_5_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8980

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsLooping>g____getter_5_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsLooping>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsLooping_g____setter_5_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df89c0

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsLooping>g____setter_5_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  uint uVar1;
  
  if (DAT_05702b18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b18 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_isLooping(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPaused>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPaused_g____getter_6_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8a40

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsPaused>g____getter_6_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_7_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8a80

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsPlaying>g____getter_7_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsPrepared>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__IsPrepared_g____getter_8_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8ac0

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__IsPrepared>g____getter_8_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Length>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Length_g____getter_9_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8b00

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__Length>g____getter_9_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  double dStack_8;
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    dStack_8 = UnityEngine_Video_VideoPlayer__get_length(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&dStack_8);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____getter_10_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8b40

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__PlaybackSpeed>g____getter_10_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_playbackSpeed(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__PlaybackSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__PlaybackSpeed_g____setter_10_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df8b80

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__PlaybackSpeed>g____setter_10_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float value;
  
  if (DAT_05702b19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b19 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_11_0 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x3df8c00

Il2CppObject *
CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__Time>g____getter_11_0
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__get_time(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_11_1 (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df8c40

void CustomLogic_CustomLogicVideoPlayerBuiltin_Bindings__<__CreatePropertyBinding__Time>g____setter_11_1
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this;
  float fVar1;
  
  if (DAT_05702b1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b1a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicVideoPlayerBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Video_VideoPlayer_o *)0x0)) {
    UnityEngine_Video_VideoPlayer__set_time(__this,(double)fVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6d60

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Video_VideoPlayer_o* videoPlayer, const MethodInfo* method);
// 0x3df6d70

void CustomLogic_CustomLogicVideoPlayerBuiltin___ctor
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Video_VideoPlayer_o *videoPlayer,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  UnityEngine_Component_c *pUVar2;
  
  if (DAT_05702b03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_VideoPlayer);
    DAT_05702b03 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)videoPlayer
             ,(MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_VideoPlayer;
  pUVar1 = (UnityEngine_Video_VideoPlayer_o *)(__this->fields).Component;
  if (pUVar1 == (UnityEngine_Video_VideoPlayer_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Video_VideoPlayer_o *)0x0;
  }
  else if (((UnityEngine_Component_c *)pUVar1->klass != TypeInfo_VideoPlayer) ||
          ((__this->fields).Value = pUVar1, (UnityEngine_Component_c *)pUVar1->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar1,pUVar2);
  }
  il2cpp_runtime_glue(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Frame
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3df6e00

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Frame
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,int32_t value,MethodInfo *method
               )

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_frame(__this_00,(long)value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Frame
// il2cpp: int32_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_Frame (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6e20

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameCount
// il2cpp: uint64_t CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameCount (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6e40

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_FrameRate
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_FrameRate (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6e60

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_IsLooping
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df6e80

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_IsLooping
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_isLooping(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsLooping
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6ea0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsLooping
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isLooping(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPaused
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6ec0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPaused
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPaused(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6ee0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPlaying
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsPrepared
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6f00

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsPrepared
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPrepared(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Length
// il2cpp: double CustomLogic_CustomLogicVideoPlayerBuiltin__get_Length (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6f20

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_PlaybackSpeed
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df6f40

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_PlaybackSpeed
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_playbackSpeed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_PlaybackSpeed
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_PlaybackSpeed (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6f60

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df6f80

void CustomLogic_CustomLogicVideoPlayerBuiltin__set_Time
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_time(__this_00,(double)value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicVideoPlayerBuiltin__get_Time (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6fa0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6fc0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Pause
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Pause(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Play (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df6fe0

void CustomLogic_CustomLogicVideoPlayerBuiltin__Play
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Prepare
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df7000

void CustomLogic_CustomLogicVideoPlayerBuiltin__Prepare
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$StepForward
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df7020

void CustomLogic_CustomLogicVideoPlayerBuiltin__StepForward
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__StepForward(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df7040

void CustomLogic_CustomLogicVideoPlayerBuiltin__Stop
               (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df7060

System_String_o *
CustomLogic_CustomLogicVideoPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702b04 == '\0') {
    il2cpp_init_method_metadata(&"VideoPlayer");
    DAT_05702b04 = '\x01';
  }
  return "VideoPlayer";
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df7090

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df70a0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_IsStatic
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicVideoPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicVideoPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x3df70b0

bool_conflict
CustomLogic_CustomLogicVideoPlayerBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicVideoPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


