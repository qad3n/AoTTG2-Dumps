// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchUiSounds.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Play
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play (int32_t kind, const MethodInfo* method);
// 0x3b9cda0

void Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(int32_t kind,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  MethodInfo *clip;
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  
  if (g_data_057a9f2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f2b = '\x01';
  }
  clip = (MethodInfo *)Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(kind,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = clip;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)clip,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  __this = Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(method_00);
  if (__this == (UnityEngine_AudioSource_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9f2c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiSounds);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_AudioClip_Load_AudioClip);
      il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonForwardSound");
      il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonBackSound");
      il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonHoverSound");
      g_data_057a9f2c = '\x01';
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonForwardSound",MethodInfo_AudioClip_Load_AudioClip);
      lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
      *(Il2CppObject **)(lVar2 + 8) = pIVar4;
      il2cpp_runtime_helper_022b4080(lVar2 + 8);
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonBackSound",MethodInfo_AudioClip_Load_AudioClip);
      lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
      *(Il2CppObject **)(lVar2 + 0x10) = pIVar4;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonHoverSound",MethodInfo_AudioClip_Load_AudioClip);
      lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
      *(Il2CppObject **)(lVar2 + 0x18) = pIVar4;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pIVar4);
    }
    return;
  }
  UnityEngine_AudioSource__PlayOneShot_4daa3b0
            (__this,(UnityEngine_AudioClip_o *)clip,*(float *)(&g_data_00d1d3b0 + (ulong)(kind == 2) * 4),
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Clip
// il2cpp: UnityEngine_AudioClip_o* Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip (int32_t kind, const MethodInfo* method);
// 0x3b9ce30

UnityEngine_AudioClip_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Clip(int32_t kind,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  
  if (g_data_057a9f2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioClip_Load_AudioClip);
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonForwardSound");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonBackSound");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Sounds/ButtonHoverSound");
    g_data_057a9f2c = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonForwardSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 8) = pIVar4;
    il2cpp_runtime_helper_022b4080(lVar2 + 8);
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonBackSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 0x10) = pIVar4;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchUiSounds + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pIVar4 = UnityEngine_Resources__Load_object_("GisketchUI/Sounds/ButtonHoverSound",MethodInfo_AudioClip_Load_AudioClip);
    lVar2 = *(long *)(TypeInfo_GisketchUiSounds + 0xb8);
    *(Il2CppObject **)(lVar2 + 0x18) = pIVar4;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pIVar4);
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
// 0x3b9d010

UnityEngine_AudioSource_o * Gisketch_Aottg2UI_Actions_GisketchUiSounds__Source(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *__this;
  Il2CppObject *pIVar3;
  int iVar4;
  UnityEngine_Object_o *pUVar5;
  
  if (g_data_057a9f2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_AddComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Sounds");
    g_data_057a9f2d = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    pUVar5 = __this;
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this,"AoTTG UI Sounds",(MethodInfo *)0x0);
    iVar4 = (int)pUVar5;
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_hideFlags(__this,0x3d,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar1 = (char)bVar2;
      }
      else {
        bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar1 = (char)bVar2;
      }
      if (cVar1 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
      }
      pIVar3 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this,MethodInfo_AudioSource_AddComponent_AudioSource);
      **(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) = pIVar3;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchUiSounds + 0xb8));
      iVar4 = 0;
      if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
          (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__set_playOnAwake
                  ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0,(MethodInfo *)0x0);
        iVar4 = 0;
        if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
            (UnityEngine_AudioSource_o *)0x0) {
          UnityEngine_AudioSource__set_spatialBlend
                    ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0.0,(MethodInfo *)0x0
                    );
          iVar4 = 0;
          if ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8) !=
              (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_ignoreListenerVolume
                      ((UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8),0,(MethodInfo *)0x0
                      );
            goto label_03b9d1b9;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (UnityEngine_AudioSource_o *)(ulong)(iVar4 == 2);
  }
label_03b9d1b9:
  return (UnityEngine_AudioSource_o *)**(undefined8 **)(TypeInfo_GisketchUiSounds + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchUiSounds$$Volume
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume (int32_t kind, const MethodInfo* method);
// 0x3b9d1e0

float Gisketch_Aottg2UI_Actions_GisketchUiSounds__Volume(int32_t kind,MethodInfo *method)

{
  return *(float *)(&g_data_00d1d3b0 + (ulong)(kind == 2) * 4);
}


