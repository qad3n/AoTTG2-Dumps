// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchUiSounds.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play (int32_t kind, const MethodInfo* method);
// 0x18190ff70

void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(int32_t kind,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_AudioClip_o *clip;
  UnityEngine_AudioSource_o *__this;
  float volumeScale;
  
  if (Il2CppMethodInitialized_184342289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342289 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    iVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame;
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind == kind) {
        return;
      }
    }
  }
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame = iVar3;
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastKind = kind;
  clip = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(kind,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    __this = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source((MethodInfo *)0x0);
    if (kind == 2) {
      volumeScale = 0.4;
    }
    else {
      volumeScale = 0.6;
    }
    if (__this == (UnityEngine_AudioSource_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_AudioSource__PlayOneShot_2eb41e0(__this,clip,volumeScale,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Clip
// il2cpp: UnityEngine_AudioClip_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip (int32_t kind, const MethodInfo* method);
// 0x18190fc70

UnityEngine_AudioClip_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(int32_t kind,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AudioClip_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434228a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonForwardSound");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonBackSound");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Sounds/ButtonHoverSound");
    Il2CppMethodInitialized_18434228a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonForwardSound",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward,pUVar2);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonBackSound",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back,pUVar2);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  pUVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Sounds/ButtonHoverSound",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover,pUVar2);
  }
  if (kind != 1) {
    if (kind != 2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_forward;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_hover;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_back;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Source
// il2cpp: UnityEngine_AudioSource_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source (const MethodInfo* method);
// 0x181910100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819102f3: mov rax, qword ptr [rip + 0x2776c56]  ; TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds

UnityEngine_AudioSource_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_AudioSource_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434228b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Sounds");
    Il2CppMethodInitialized_18434228b = '\x01';
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
  if (!bVar1) {
    pUVar2 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject)
    ;
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar2,"AoTTG UI Sounds",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_hideFlags(pUVar2,0x3d,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
      }
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar2,
                          (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source = pUVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source,pUVar3);
      pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
      if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_playOnAwake(pUVar3,false,(MethodInfo *)0x0);
        pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
        if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_spatialBlend(pUVar3,0.0,(MethodInfo *)0x0);
          pUVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
          if (pUVar3 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar3,false,(MethodInfo *)0x0);
            goto label_1819102fa;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
  }
label_1819102fa:
  return TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_source;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Volume
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume (int32_t kind, const MethodInfo* method);
// 0x181910310

float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume(int32_t kind,MethodInfo *method)

{
  if (kind == 2) {
    return 0.4;
  }
  return 0.6;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds___cctor (const MethodInfo* method);
// 0x181910330

void Gisketch_Aottg2UI_Actions_GisketchUiSounds___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434228c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_18434228c = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->static_fields->_lastFrame = -1;
  return;
}


