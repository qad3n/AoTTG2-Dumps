// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchUiSounds.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play (int32_t kind, const MethodInfo* method);
// 0x53aa530
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53aa55d: jmp 0x53aa615
// asm:   0x53aa5f8: jmp 0x53aa6b8

void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(int32_t kind,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_GisketchUiSounds_StaticFields *pGVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_AudioClip_o *clip;
  UnityEngine_AudioSource_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchUiSounds_c *method_00;
  
  if (Il2CppMethodInitialized_07542c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c08 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (bVar4) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame;
    iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar2 == iVar5) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind;
      }
      else {
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind;
      }
      if (iVar2 == kind) {
        return;
      }
    }
  }
  iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields;
  pGVar3->_lastFrame = iVar5;
  pGVar3->_lastKind = kind;
  clip = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(kind,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds;
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  __this = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source((MethodInfo *)method_00);
  if (__this == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__PlayOneShot_68b0790
            (__this,clip,*(float *)(&g_data_0100aae8 + (ulong)(kind == 2) * 4),(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Clip
// il2cpp: UnityEngine_AudioClip_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip (int32_t kind, const MethodInfo* method);
// 0x53aae30

UnityEngine_AudioClip_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchUiSounds_StaticFields *pGVar1;
  bool bVar2;
  UnityEngine_AudioClip_o *pUVar3;
  UnityEngine_AudioClip_o **ppUVar4;
  
  if (Il2CppMethodInitialized_07542c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonForwardSound");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonBackSound");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonHoverSound");
    Il2CppMethodInitialized_07542c09 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonForwardSound",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields;
    pGVar1->_forward = pUVar3;
    Il2CppCodeGenWriteBarrier(&pGVar1->_forward);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonBackSound",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields;
    pGVar1->_back = pUVar3;
    Il2CppCodeGenWriteBarrier(&pGVar1->_back);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonHoverSound",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields;
    pGVar1->_hover = pUVar3;
    Il2CppCodeGenWriteBarrier(&pGVar1->_hover);
  }
  if (kind == 2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    ppUVar4 = &TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover;
  }
  else if (kind == 1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    ppUVar4 = &TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    ppUVar4 = &TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward;
  }
  return *ppUVar4;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Source
// il2cpp: UnityEngine_AudioSource_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source (const MethodInfo* method);
// 0x53ab0d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53ab1f0: jmp 0x53ab21d

UnityEngine_AudioSource_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_AudioSource_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Sounds");
    Il2CppMethodInitialized_07542c0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar2 = (UnityEngine_Object_o *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    goto label_053ab2b4;
  }
  pUVar2 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar2,"AoTTG UI Sounds",(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Object_o *)0x0) goto label_053ab2c7;
  UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) goto label_053ab202;
  }
  else {
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
label_053ab202:
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
    }
  }
  pUVar3 = UnityEngine_GameObject__AddComponent_object_
                     ((UnityEngine_GameObject_o *)pUVar2,
                      (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source = pUVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source);
  pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
  if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_playOnAwake(pUVar3,false,(MethodInfo *)0x0);
    pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
    if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__set_spatialBlend(pUVar3,0.0,(MethodInfo *)0x0);
      pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
      if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar3,false,(MethodInfo *)0x0);
label_053ab2b4:
        return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
      }
    }
  }
label_053ab2c7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Volume
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume (int32_t kind, const MethodInfo* method);
// 0x53ab2d0

float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume(int32_t kind,MethodInfo *method)

{
  return *(float *)(&g_data_0100aae8 + (ulong)(kind == 2) * 4);
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds___cctor (const MethodInfo* method);
// 0x53ab2f0

void Gisketch_Aottg2UI_Actions_GisketchUiSounds___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542c0b = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame = -1;
  return;
}


