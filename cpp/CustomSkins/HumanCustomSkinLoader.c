// Type: CustomSkins.HumanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HumanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8___ctor (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5960400

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8___ctor
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_IDisposable_Dispose (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x5961620

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_IDisposable_Dispose
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$MoveNext
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__MoveNext (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x5961630

bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__MoveNext
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  CustomSkins_HumanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  Il2CppObject *obj;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  bool bVar8;
  int32_t *piVar9;
  System_String_array *pSVar10;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_02;
  UnityEngine_Coroutine_o *pUVar11;
  Characters_Human_o *x;
  Characters_HumanSetup_o *__this_03;
  MethodInfo *method_00;
  uint uVar12;
  MethodInfo *method_01;
  float *result;
  System_String_o *pSVar13;
  
  if (Il2CppMethodInitialized_07545920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07545920 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    goto label_05961a2c;
  }
  if (iVar1 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  pSVar3 = (__this->fields).data;
  if (pSVar3 == (System_Object_array *)0x0) goto label_05961aba;
  if ((int)pSVar3->max_length == 0) {
label_05961abf:
    ThrowIndexOutOfRangeException();
  }
  if ((__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) ||
     (obj = pSVar3->m_Items[0], obj == (Il2CppObject *)0x0)) goto label_05961aba;
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05961764:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar9 = il2cpp_vm_Object_Unbox(obj);
  (__this_00->fields)._horseViewId = *piVar9;
  pSVar3 = (__this->fields).data;
  if (pSVar3 == (System_Object_array *)0x0) goto label_05961aba;
  if ((pSVar3->max_length & 0xfffffffe) == 0) goto label_05961abf;
  pSVar13 = (System_String_o *)pSVar3->m_Items[1];
  if (pSVar13 == (System_String_o *)0x0) goto label_05961aba;
  if (pSVar13->klass != g_data_07556758) goto label_05961764;
  uVar12 = 0;
  pSVar10 = System_String__Split(pSVar13,0x2c,0,(MethodInfo *)0x0);
  (__this->fields)._skinUrls_5__2 = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._skinUrls_5__2);
  (__this->fields)._partId_5__3 = 0;
label_05961a34:
  if (0x16 < (int)uVar12) goto label_05961a4d;
  pSVar10 = (__this->fields)._skinUrls_5__2;
  if (pSVar10 == (System_String_array *)0x0) goto label_05961aba;
  uVar2 = (uint)pSVar10->max_length;
  if ((int)uVar2 <= (int)uVar12) goto label_05961a4d;
  if (0x12 < uVar12) goto switchD_05961782_caseD_1;
  switch((ulong)uVar12) {
  case 0:
    if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
      if (-1 < (__this_00->fields)._horseViewId) goto label_0596184a;
      goto label_05961a2c;
    }
    goto label_05961aba;
  case 10:
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if ((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
       ((pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0 ||
        (pSVar6 = (pSVar5->fields).GasEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0)))) goto label_05961aba;
    if ((pSVar6->fields)._value == false) goto label_05961a2c;
    break;
  case 0xc:
    if ((__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) ||
       (pUVar7 = (__this_00->fields)._owner, pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_05961aba;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar7,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) goto label_0596184a;
    if (x == (Characters_Human_o *)0x0) goto label_05961aba;
    bVar8 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
    if ((bVar8) &&
       (bVar8 = (*(x->klass->vtable)._74_IsMine.methodPtr)(x,(x->klass->vtable)._74_IsMine.method), !bVar8))
    goto label_05961a2c;
    goto label_0596184a;
  case 0xf:
    if (0xf < uVar2) {
      if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
        pSVar13 = pSVar10->m_Items[0xf];
        result = &(__this_00->fields)._hookLTiling;
        goto label_05961a25;
      }
      goto label_05961aba;
    }
    goto label_05961abf;
  case 0x10:
  case 0x12:
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
        (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
       (pSVar6 = (pSVar5->fields).HookEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_05961aba;
    if ((pSVar6->fields)._value == false) goto label_05961a2c;
    if (uVar12 == 0x11) goto switchD_05961782_caseD_11;
    break;
  case 0x11:
switchD_05961782_caseD_11:
    if (uVar12 < uVar2) {
      if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
        pSVar13 = pSVar10->m_Items[uVar12];
        result = &(__this_00->fields)._hookRTiling;
label_05961a25:
        System_Single__TryParse(pSVar13,result,(MethodInfo *)0x0);
        goto label_05961a2c;
      }
      goto label_05961aba;
    }
    goto label_05961abf;
  }
switchD_05961782_caseD_1:
  if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_05961aba;
label_0596184a:
  __this_01 = (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                        (__this_00,(__this->fields)._partId_5__3,
                         (__this_00->klass->vtable)._6_GetCustomSkinPart.method);
  if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
    pSVar10 = (__this->fields)._skinUrls_5__2;
    if (pSVar10 == (System_String_array *)0x0) goto label_05961aba;
    uVar12 = (__this->fields)._partId_5__3;
    if ((uint)pSVar10->max_length <= uVar12) goto label_05961abf;
    method_01 = (MethodInfo *)0x0;
    bVar8 = System_String__IsNullOrEmpty(pSVar10->m_Items[(int)uVar12],(MethodInfo *)0x0);
    if (bVar8) {
      CustomSkins_BaseCustomSkinPart__ResetToDefault(__this_01,method_01);
    }
    else {
      pSVar10 = (__this->fields)._skinUrls_5__2;
      if (pSVar10 == (System_String_array *)0x0) goto label_05961aba;
      uVar12 = (__this->fields)._partId_5__3;
      if ((uint)pSVar10->max_length <= uVar12) goto label_05961abf;
      bVar8 = CustomSkins_BaseCustomSkinPart__LoadCache(__this_01,pSVar10->m_Items[(int)uVar12],method_00);
      if (!bVar8) {
        pSVar10 = (__this->fields)._skinUrls_5__2;
        if (pSVar10 == (System_String_array *)0x0) goto label_05961aba;
        uVar12 = (__this->fields)._partId_5__3;
        if (uVar12 < (uint)pSVar10->max_length) {
          pSVar13 = pSVar10->m_Items[(int)uVar12];
          if (Il2CppMethodInitialized_07545932 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
            Il2CppMethodInitialized_07545932 = '\x01';
          }
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          (__this_02->fields).__1__state = 0;
          (__this_02->fields).__4__this = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
          (__this_02->fields).url = pSVar13;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).url);
          pUVar11 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                              ((UnityEngine_MonoBehaviour_o *)__this_00,
                               (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar11;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 1;
          return true;
        }
        goto label_05961abf;
      }
    }
  }
label_05961a2c:
  uVar12 = (__this->fields)._partId_5__3 + 1;
  (__this->fields)._partId_5__3 = uVar12;
  goto label_05961a34;
label_05961a4d:
  if ((__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) &&
     (pUVar7 = (__this_00->fields)._owner, pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    __this_03 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar7,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (__this_03 == (Characters_HumanSetup_o *)0x0) goto label_05961aba;
      Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts(__this_03,(MethodInfo *)0x0);
    }
    (__this_00->fields).Finished = true;
    return false;
  }
label_05961aba:
  ThrowNullReferenceException();
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x5961cd0

Il2CppObject *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_Reset (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x5961ce0

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_Reset
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x5961d20

Il2CppObject *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x59601e0

System_String_o *
CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754591b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    Il2CppMethodInitialized_0754591b = '\x01';
  }
  return "human";
}


// CustomSkins.HumanCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x5960210

bool CustomSkins_HumanCustomSkinLoader__get_AllowLocalFileTextures
               (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Characters_DummyHuman_o *x;
  Characters_Human_o *x_00;
  
  if (Il2CppMethodInitialized_0754591c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754591c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0596036f;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return true;
    }
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_00 = (Characters_Human_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0596036f;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x_00 == (Characters_Human_o *)0x0) {
label_0596036f:
      ThrowNullReferenceException();
    }
    bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x_00,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = (*(x_00->klass->vtable)._74_IsMine.methodPtr)(x_00,(x_00->klass->vtable)._74_IsMine.method);
      return bVar3;
    }
  }
  return false;
}


// CustomSkins.HumanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_HumanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x5960380

System_Collections_IEnumerator_o *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_HumanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_0754591d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8);
    Il2CppMethodInitialized_0754591d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPartPublic
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x5960420

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinPart_o *pCVar1;
  
  pCVar1 = (*(__this->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                     (__this,partId,(__this->klass->vtable)._6_GetCustomSkinPart.method);
  return pCVar1;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x5960440

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Characters_HumanSetupMeshes_o *__this_00;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_HookUseable_o *pCVar4;
  Characters_HumanSetupTextures_o *__this_01;
  bool bVar5;
  Characters_DummyHuman_o *x;
  Characters_Human_o *pCVar6;
  Characters_HumanSetup_o *pCVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_Renderer__o *renderers;
  Photon_Pun_PhotonView_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_GameObject_o *pUVar9;
  CustomSkins_BaseCustomSkinLoader_o *pCVar10;
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_04;
  CustomSkins_WeaponTrailCustomSkinPart_o *__this_05;
  System_Collections_Generic_List_Renderer__o *pSVar11;
  CustomSkins_HookCustomSkinPart_o *__this_06;
  CustomSkins_HumanCostumeCustomSkinPart_c **ppCVar12;
  System_String_o *pSVar13;
  CustomSkins_BaseCustomSkinPart_c **ppCVar14;
  CustomSkins_BaseCustomSkinPart_o *__this_07;
  System_String_o *str1;
  CustomSkins_HumanHairCustomSkinPart_o *__this_08;
  uint *method_00;
  System_String_o **ppSVar15;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CustomSkins_HumanCustomSkinLoader_o *pCVar16;
  Characters_HumanSetup_o *__this_09;
  int32_t iVar17;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffb0;
  int32_t iStack_44;
  CustomSkins_HumanCustomSkinLoader_o *pCStack_40;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754591e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HookCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HumanCostumeCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HumanHairCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_WeaponTrailCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&"Could not find HumanSetup component on ");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_smoke");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"char_cap");
    Il2CppMethodInitialized_0754591e = '\x01';
  }
  pUVar9 = (__this->fields)._owner;
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_059614ba;
  x = UnityEngine_GameObject__GetComponent_object_
                (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (x == (Characters_DummyHuman_o *)0x0) goto label_059614ba;
    pCVar7 = (x->fields).Setup;
  }
  else {
    pUVar9 = (__this->fields)._owner;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_059614ba;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_059614ba;
      pCVar7 = (pCVar6->fields).Setup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pCVar7 = (pCVar6->fields).Setup;
        goto label_0596064a;
      }
    }
    pUVar9 = (__this->fields)._owner;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_059614ba;
    pCVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup
                       );
  }
label_0596064a:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
    if (pUVar1 != (UnityEngine_Object_o *)0x0) {
      pSVar8 = UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_52f0320("Could not find HumanSetup component on ",pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      return (CustomSkins_BaseCustomSkinPart_o *)0x0;
    }
    goto label_059614ba;
  }
  pCStack_40 = __this;
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  pSVar11 = renderers;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  pCVar16 = pCStack_40;
  __this_07 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  method_00 = &switchD_05960705::switchdataD_010a574c;
  switch(partId) {
  case 0:
    iVar17 = (pCStack_40->fields)._horseViewId;
    if (-1 < iVar17) {
      __this_02 = Photon_Pun_PhotonView__Find(iVar17,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (__this_02 == (Photon_Pun_PhotonView_o *)0x0) goto label_059614ba;
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this_02,renderers,pUVar9,"Body",
                   in_R8);
      }
    }
    iStack_44 = 0;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = false;
    goto label_0596132b;
  case 1:
    if (pCVar7 != (Characters_HumanSetup_o *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_hair,
                 (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_hair_1,
                 (MethodInfo *)method_00);
      pCVar16 = pCStack_40;
      __this_00 = (pCVar7->fields)._meshes;
      if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar8 = Characters_HumanSetupMeshes__GetHairMesh(__this_00,(MethodInfo *)0x0);
        bVar5 = System_String__op_Equality
                          (pSVar8,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
        ;
        if (bVar5) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          __this_01 = (pCVar7->fields)._textures;
          if (__this_01 == (Characters_HumanSetupTextures_o *)0x0) goto label_059614ba;
          pSVar8 = Characters_HumanSetupTextures__GetHairTexture(__this_01,(MethodInfo *)0x0);
        }
        iStack_44 = 1;
        pSVar13 = (*(pCVar16->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                            (pCVar16,(pCVar16->klass->vtable)._4_get_RendererIdPrefix.method);
        str1 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
        pSVar13 = System_String__Concat_52f0320(pSVar13,str1,(MethodInfo *)0x0);
        __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HumanHairCustomSkinPart);
        CustomSkins_BaseCustomSkinPart___ctor
                  ((CustomSkins_BaseCustomSkinPart_o *)__this_08,(CustomSkins_BaseCustomSkinLoader_o *)pCVar16
                   ,renderers,pSVar13,1000000,(System_Nullable_Vector2__o)ZEXT812(0),true,
                   in_stack_ffffffffffffffb0);
        (__this_08->fields)._hairTexture = pSVar8;
        Il2CppCodeGenWriteBarrier(&(__this_08->fields)._hairTexture);
        (__this_08->fields)._setup = pCVar7;
        Il2CppCodeGenWriteBarrier(&(__this_08->fields)._setup);
        return (CustomSkins_BaseCustomSkinPart_o *)__this_08;
      }
    }
    goto label_059614ba;
  case 2:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_eye,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 2;
    goto label_059608ca;
  case 3:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_glass,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 3;
    goto label_059608ca;
  case 4:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_face,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 4;
label_059608ca:
    pCVar16 = pCStack_40;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCStack_40->klass)->vtable)._4_unknown.methodPtr)
                       (pCStack_40);
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = true;
    iVar17 = 500000;
    break;
  case 5:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_hand_l,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_hand_r,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_head,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_chest,
               (MethodInfo *)method_00);
    pCVar16 = pCStack_40;
    iStack_44 = 5;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCStack_40->klass)->vtable)._4_unknown.methodPtr)
                       (pCStack_40);
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    ppCVar14 = (CustomSkins_BaseCustomSkinPart_c **)&TypeInfo_CustomSkins_HumanCostumeCustomSkinPart;
    goto label_0596130a;
  case 6:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_arm_l,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_arm_r,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_leg,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_chest_2,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_chest_3,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_upper_body,
               (MethodInfo *)method_00);
    pCVar16 = pCStack_40;
    iStack_44 = 6;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCStack_40->klass)->vtable)._4_unknown.methodPtr)
                       (pCStack_40);
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = (CustomSkins_BaseCustomSkinPart_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HumanCostumeCustomSkinPart);
    bVar5 = true;
    iVar17 = 2000000;
    break;
  case 7:
    if (((pCVar7 == (Characters_HumanSetup_o *)0x0) ||
        (pSVar2 = (pCVar7->fields).CustomSet, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).Cape, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_059614ba;
    if ((pSVar3->fields)._value != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_cape,
                 (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    }
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_brand_1,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_brand_2,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_brand_3,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_brand_4,
               (MethodInfo *)method_00);
    iStack_44 = 7;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = true;
    iVar17 = 500000;
    break;
  case 8:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_3dmg,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_belt,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_gas_l,
               (MethodInfo *)method_00);
    pCVar16 = pCStack_40;
    if ((pCVar7->fields).Weapon != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_blade_l,
                 (MethodInfo *)method_00);
    }
    iStack_44 = 8;
    goto label_059612d1;
  case 9:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_gas_r,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    pCVar16 = pCStack_40;
    if ((pCVar7->fields).Weapon != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_blade_r,
                 (MethodInfo *)method_00);
    }
    iStack_44 = 9;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    ppCVar12 = (CustomSkins_HumanCostumeCustomSkinPart_c **)&TypeInfo_CustomSkins_BaseCustomSkinPart;
    goto label_0596127a;
  case 10:
    pUVar9 = (pCStack_40->fields)._owner;
    if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_03 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       __this_03 == (UnityEngine_Transform_o *)0x0)) goto label_059614ba;
    ppSVar15 = &"3dmg_smoke";
    pCVar10 = (CustomSkins_BaseCustomSkinLoader_o *)
              UnityEngine_Transform__Find(__this_03,"3dmg_smoke",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar10 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto label_059614ba;
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists(pCVar10,renderers,pUVar9,(MethodInfo *)ppSVar15);
    }
    iStack_44 = 10;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = false;
    goto label_05960e40;
  case 0xb:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    pUVar1 = (UnityEngine_Object_o *)(pCVar7->fields)._part_chest_1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar1 = (UnityEngine_Object_o *)(pCVar7->fields)._part_chest_1;
      if ((pUVar1 == (UnityEngine_Object_o *)0x0) ||
         (pCVar10 = (CustomSkins_BaseCustomSkinLoader_o *)
                    UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0),
         pCVar10 == (CustomSkins_BaseCustomSkinLoader_o *)0x0)) goto label_059614ba;
      ppSVar15 = &"char_cap";
      bVar5 = System_String__Contains((System_String_o *)pCVar10,"char_cap",(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  (pCVar10,renderers,(pCVar7->fields)._part_chest_1,(MethodInfo *)ppSVar15);
      }
    }
    iStack_44 = 0xb;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = true;
label_05960e40:
    iVar17 = 500000;
    break;
  case 0xc:
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_04,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_ctor);
    pCVar16 = pCStack_40;
    if (pCVar7 != (Characters_HumanSetup_o *)0x0) {
      if ((pCVar7->fields).Weapon == 0) {
        if (__this_04 == (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) goto label_059614ba;
        il2cpp_runtime_helper_02fd3a00(__this_04,(pCVar7->fields).LeftTrail,
                     MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
        il2cpp_runtime_helper_02fd3a00(__this_04,(pCVar7->fields).RightTrail,
                     MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
      }
      iStack_44 = 0xc;
      pSVar8 = (*(pCVar16->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                         (pCVar16,(pCVar16->klass->vtable)._4_get_RendererIdPrefix.method);
      pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_WeaponTrailCustomSkinPart);
      CustomSkins_BaseCustomSkinPart___ctor
                ((CustomSkins_BaseCustomSkinPart_o *)__this_05,(CustomSkins_BaseCustomSkinLoader_o *)pCVar16,
                 (System_Collections_Generic_List_Renderer__o *)0x0,pSVar8,500000,
                 (System_Nullable_Vector2__o)ZEXT812(0),true,in_stack_ffffffffffffffb0);
      (__this_05->fields)._weaponTrails = __this_04;
      Il2CppCodeGenWriteBarrier(&(__this_05->fields)._weaponTrails);
      return (CustomSkins_BaseCustomSkinPart_o *)__this_05;
    }
label_059614ba:
    ThrowNullReferenceException();
  case 0xd:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    if ((pCVar7->fields).Weapon == 2) {
      pCVar10 = (CustomSkins_BaseCustomSkinLoader_o *)(pCVar7->fields)._part_blade_l;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  (pCVar10,renderers,(pCVar7->fields)._part_blade_l,(MethodInfo *)method_00);
      }
    }
    iStack_44 = 0xd;
    goto label_05961004;
  case 0xe:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    if ((pCVar7->fields).Weapon == 2) {
      pCVar10 = (CustomSkins_BaseCustomSkinLoader_o *)(pCVar7->fields)._part_blade_r;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  (pCVar10,renderers,(pCVar7->fields)._part_blade_r,(MethodInfo *)method_00);
      }
    }
    iStack_44 = 0xe;
label_05961004:
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = true;
    goto label_0596132b;
  default:
    goto switchD_05960705_caseD_f;
  case 0x10:
    pUVar9 = (pCStack_40->fields)._owner;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_059614ba;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_059614ba;
      bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pCVar6,(MethodInfo *)0x0);
      if ((bVar5) && (pCVar4 = (pCVar6->fields).HookLeft, pCVar4 != (Characters_HookUseable_o *)0x0)) {
        pSVar11 = Characters_HookUseable__GetRenderers(pCVar4,(MethodInfo *)0x0);
        pCVar16 = pCStack_40;
        pSVar8 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                           ((CustomSkins_BaseCustomSkinLoader_o *)pCStack_40,0x10,method_01);
        fStack_34 = (pCVar16->fields)._hookLTiling;
label_05961198:
        __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HookCustomSkinPart);
        goto label_059613e9;
      }
    }
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    pCVar16 = pCStack_40;
    pSVar8 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                       ((CustomSkins_BaseCustomSkinLoader_o *)pCStack_40,0x10,method_03);
    fStack_34 = (pCVar16->fields)._hookLTiling;
    goto label_059613bb;
  case 0x12:
    pUVar9 = (pCStack_40->fields)._owner;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_059614ba;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_059614ba;
      bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pCVar6,(MethodInfo *)0x0);
      if ((bVar5) && (pCVar4 = (pCVar6->fields).HookRight, pCVar4 != (Characters_HookUseable_o *)0x0)) {
        pSVar11 = Characters_HookUseable__GetRenderers(pCVar4,(MethodInfo *)0x0);
        pCVar16 = pCStack_40;
        pSVar8 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                           ((CustomSkins_BaseCustomSkinLoader_o *)pCStack_40,0x12,method_02);
        fStack_34 = (pCVar16->fields)._hookRTiling;
        goto label_05961198;
      }
    }
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    pCVar16 = pCStack_40;
    pSVar8 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                       ((CustomSkins_BaseCustomSkinLoader_o *)pCStack_40,0x12,method_04);
    fStack_34 = (pCVar16->fields)._hookRTiling;
label_059613bb:
    __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HookCustomSkinPart);
label_059613e9:
    CustomSkins_BaseCustomSkinPart___ctor
              ((CustomSkins_BaseCustomSkinPart_o *)__this_06,(CustomSkins_BaseCustomSkinLoader_o *)pCVar16,
               pSVar11,pSVar8,500000,(System_Nullable_Vector2__o)ZEXT812(0),true,in_stack_ffffffffffffffb0);
    (__this_06->fields)._tiling = fStack_34;
    return (CustomSkins_BaseCustomSkinPart_o *)__this_06;
  case 0x13:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_hat,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 0x13;
    goto label_0596123b;
  case 0x14:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_head_decor,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 0x14;
    goto label_0596123b;
  case 0x15:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar11,renderers,(pCVar7->fields)._part_back,
               (MethodInfo *)&switchD_05960705::switchdataD_010a574c);
    iStack_44 = 0x15;
label_0596123b:
    pCVar16 = pCStack_40;
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCStack_40->klass)->vtable)._4_unknown.methodPtr)
                       (pCStack_40);
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    ppCVar12 = &TypeInfo_CustomSkins_HumanCostumeCustomSkinPart;
label_0596127a:
    __this_07 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_codegen_object_new((Il2CppClass *)*ppCVar12);
label_05961328:
    bVar5 = true;
label_0596132b:
    iVar17 = 1000000;
    break;
  case 0x16:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_059614ba;
    __this_09 = pCVar7;
    bVar5 = Characters_HumanSetup__get_HasCloak(pCVar7,(MethodInfo *)0x0);
    pCVar16 = pCStack_40;
    if (bVar5) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this_09,renderers,(pCVar7->fields)._part_cape,
                 (MethodInfo *)method_00);
    }
    iStack_44 = 0x16;
label_059612d1:
    pSVar8 = (System_String_o *)
             (*(((CustomSkins_BaseCustomSkinLoader_c *)pCVar16->klass)->vtable)._4_unknown.methodPtr)(pCVar16)
    ;
    pSVar13 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar13,(MethodInfo *)0x0);
    ppCVar14 = &TypeInfo_CustomSkins_BaseCustomSkinPart;
label_0596130a:
    __this_07 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_codegen_object_new((Il2CppClass *)*ppCVar14);
    goto label_05961328;
  }
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_07,(CustomSkins_BaseCustomSkinLoader_o *)pCVar16,renderers,pSVar8,iVar17,
             (System_Nullable_Vector2__o)ZEXT812(0),bVar5,in_stack_ffffffffffffffb0);
switchD_05960705_caseD_f:
  return __this_07;
}


// CustomSkins.HumanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader___ctor (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x59615b0

void CustomSkins_HumanCustomSkinLoader___ctor(CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754591f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_0754591f = '\x01';
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


