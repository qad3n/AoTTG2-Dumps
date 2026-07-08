// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchUiSounds.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play (int32_t kind, const MethodInfo* method);
// 0x3b1dfc0

void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(int32_t kind,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *clip;
  UnityEngine_AudioSource_o *__this;
  MethodInfo *method_00;
  
  if (DAT_057015f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015f2 = '\x01';
  }
  clip = (MethodInfo *)Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(kind,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = clip;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(method_00);
    if (__this != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__PlayOneShot
                (__this,(UnityEngine_AudioClip_o *)clip,
                 *(float *)(&DAT_00cd0d20 + (ulong)(kind == 2) * 4),(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Clip
// il2cpp: UnityEngine_AudioClip_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip (int32_t kind, const MethodInfo* method);
// 0x3b30270

UnityEngine_AudioClip_o *
Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(int32_t kind,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  
  if (DAT_057015f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiSounds);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_AudioClip_Load_AudioClip);
    il2cpp_init_method_metadata(&"GisketchUI/Sounds/ButtonForwardSound");
    il2cpp_init_method_metadata(&"GisketchUI/Sounds/ButtonBackSound");
    il2cpp_init_method_metadata(&"GisketchUI/Sounds/ButtonHoverSound");
    DAT_057015f3 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load<object>("GisketchUI/Sounds/ButtonForwardSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 8) = pIVar4;
    il2cpp_runtime_glue(lVar2 + 8);
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load<object>("GisketchUI/Sounds/ButtonBackSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 0x10) = pIVar4;
    il2cpp_runtime_glue(lVar2 + 0x10);
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load<object>("GisketchUI/Sounds/ButtonHoverSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 0x18) = pIVar4;
    il2cpp_runtime_glue(lVar2 + 0x18,pIVar4);
  }
  if (kind == 1) {
    puVar5 = (undefined8 *)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x10);
  }
  else if (kind == 2) {
    puVar5 = (undefined8 *)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x18);
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 8);
  }
  return (UnityEngine_AudioClip_o *)*puVar5;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Source
// il2cpp: UnityEngine_AudioSource_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source (const MethodInfo* method);
// 0x3b30450

UnityEngine_AudioSource_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057015f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_AddComponent_AudioSource);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiSounds);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AoTTG UI Sounds");
    DAT_057015f4 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar3,"AoTTG UI Sounds",(MethodInfo *)0x0)
    ;
    if (pUVar3 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_hideFlags(pUVar3,0x3d,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
        bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar1 = (char)bVar2;
      }
      else {
        bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar1 = (char)bVar2;
      }
      if (cVar1 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DontDestroyOnLoad(pUVar3,(MethodInfo *)0x0);
      }
      pIVar4 = UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_AudioSource_AddComponent_AudioSource);
      **(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) = pIVar4;
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchUiSounds + 0xb8));
      if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
          (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_playOnAwake
                  ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0,
                   (MethodInfo *)0x0);
        if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
            (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_spatialBlend
                    ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0.0,
                     (MethodInfo *)0x0);
          if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
              (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_ignoreListenerVolume
                      ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0,
                       (MethodInfo *)0x0);
            goto LAB_03b305f9;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03b305f9:
  return (UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Volume
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume (int32_t kind, const MethodInfo* method);
// 0x3b30620

float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume(int32_t kind,MethodInfo *method)

{
  return *(float *)(&DAT_00cd0d20 + (ulong)(kind == 2) * 4);
}


