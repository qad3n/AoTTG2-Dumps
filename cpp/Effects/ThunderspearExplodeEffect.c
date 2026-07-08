// Type: Effects.ThunderspearExplodeEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Effects/ThunderspearExplodeEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs  [CHANGED since prior version]
// --------------------------------

// Effects.ThunderspearExplodeEffect$$Setup
// il2cpp: void Effects_ThunderspearExplodeEffect__Setup (Effects_ThunderspearExplodeEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x423e6c0

void Effects_ThunderspearExplodeEffect__Setup
               (Effects_ThunderspearExplodeEffect_o *__this,Photon_Realtime_Player_o *owner,
               float liveTime,System_Object_array *settings,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  undefined8 *puVar6;
  undefined4 *puVar7;
  UnityEngine_ParticleSystem_MainModule_o main;
  Il2CppObject *arg0;
  System_String_o *n;
  UnityEngine_AudioSource_o *__this_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o color;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_b8;
  UnityEngine_ParticleSystem_MinMaxGradient_o UStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_Gradient_o *pUStack_60;
  UnityEngine_Gradient_o *pUStack_58;
  UnityEngine_Color_Fields UStack_50;
  UnityEngine_Color_Fields UStack_40;
  
  if (DAT_05705195 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TSKillType);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearExplodeEffect);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearProjectile);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"TSHitTitan{0}");
    il2cpp_init_method_metadata(&"TSKill{0}");
    il2cpp_init_method_metadata(&"OldExplodeEffect");
    il2cpp_init_method_metadata(&"TSAir{0}");
    il2cpp_init_method_metadata(&"TSArmor{0}");
    DAT_05705195 = '\x01';
  }
  UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  __this_00 = (UnityEngine_ParticleSystem_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
     (__this_00 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_0423ec66;
  if (*(char *)(lVar4 + 0x11) == '\0') {
    main = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ThunderspearExplodeEffect + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar9 = **(float **)(TypeInfo_ThunderspearExplodeEffect + 0xb8);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_Util__ScaleParticleStartSize(main,fVar9,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_ParticleSystem__Stop(__this_00,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem__Clear(__this_00,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar5 = UnityEngine_Transform__Find(pUVar5,"OldExplodeEffect",(MethodInfo *)0x0),
        pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
       ((__this_00 = (UnityEngine_ParticleSystem_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem),
        __this_00 == (UnityEngine_ParticleSystem_o *)0x0 ||
        (__this_01 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_GameObject_o *)0x0)))) goto LAB_0423ec66;
    UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
  }
  if (settings == (System_Object_array *)0x0) goto LAB_0423ec66;
  if ((int)settings->max_length == 0) goto LAB_0423ec6b;
  if (settings->m_Items[0] == (Il2CppObject *)0x0) goto LAB_0423ec66;
  if ((settings->m_Items[0]->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Color + 0x40))
  goto LAB_0423ec70;
  puVar6 = (undefined8 *)il2cpp_glue_022c7330();
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) goto LAB_0423ec66;
  uVar1 = *puVar6;
  uStack_78 = puVar6[1];
  uStack_70 = 0;
  if (*(char *)(lVar4 + 0x11) == '\0') {
    fVar9 = (float)((ulong)uStack_78 >> 0x20);
    if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
      il2cpp_init_class();
      fVar9 = uStack_78._4_4_;
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 8);
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 0x10);
    fVar10 = (float)uVar1 - (float)uVar2;
    fVar11 = (float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
    fVar8 = (float)uStack_78 - (float)uVar3;
    fVar9 = fVar9 - (float)((ulong)uVar3 >> 0x20);
    if (fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 < 9.9999994e-11)
    goto LAB_0423e98b;
  }
  else {
LAB_0423e98b:
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0423ec66;
    UStack_b8.m_ParticleSystem =
         (UnityEngine_ParticleSystem_o *)
         UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
    fVar9 = uStack_78._4_4_;
    if (uStack_78._4_4_ <= 0.5) {
      fVar9 = 0.5;
    }
    color.fields.a = fVar9;
    color.fields.b = (float)uStack_78;
    color.fields.r = (float)(int)uVar1;
    color.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&UStack_b0,color,(MethodInfo *)0x0);
    UStack_40.b = UStack_b0.fields.m_ColorMax.fields.b;
    UStack_40.a = UStack_b0.fields.m_ColorMax.fields.a;
    value.fields._4_4_ = UStack_b0.fields._4_4_;
    value.fields.m_Mode = UStack_b0.fields.m_Mode;
    UStack_50.b = UStack_b0.fields.m_ColorMin.fields.b;
    UStack_50.a = UStack_b0.fields.m_ColorMin.fields.a;
    UStack_40.r = UStack_b0.fields.m_ColorMax.fields.r;
    UStack_40.g = UStack_b0.fields.m_ColorMax.fields.g;
    pUStack_58 = UStack_b0.fields.m_GradientMax;
    UStack_50.r = UStack_b0.fields.m_ColorMin.fields.r;
    UStack_50.g = UStack_b0.fields.m_ColorMin.fields.g;
    pUStack_60 = UStack_b0.fields.m_GradientMin;
    value.fields.m_GradientMin = UStack_b0.fields.m_GradientMin;
    value.fields.m_GradientMax = UStack_b0.fields.m_GradientMax;
    value.fields.m_ColorMin.fields.r = UStack_b0.fields.m_ColorMin.fields.r;
    value.fields.m_ColorMin.fields.g = UStack_b0.fields.m_ColorMin.fields.g;
    value.fields.m_ColorMin.fields.b = UStack_b0.fields.m_ColorMin.fields.b;
    value.fields.m_ColorMin.fields.a = UStack_b0.fields.m_ColorMin.fields.a;
    value.fields.m_ColorMax.fields.r = UStack_b0.fields.m_ColorMax.fields.r;
    value.fields.m_ColorMax.fields.g = UStack_b0.fields.m_ColorMax.fields.g;
    value.fields.m_ColorMax.fields.b = UStack_b0.fields.m_ColorMax.fields.b;
    value.fields.m_ColorMax.fields.a = UStack_b0.fields.m_ColorMax.fields.a;
    UnityEngine_ParticleSystem_MainModule__set_startColor
              ((UnityEngine_ParticleSystem_MainModule_o)&UStack_b8,value,(MethodInfo *)0x0);
  }
  if ((uint)settings->max_length < 2) {
LAB_0423ec6b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (settings->m_Items[1] != (Il2CppObject *)0x0) {
    if ((settings->m_Items[1]->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_TSKillType + 0x40)) {
LAB_0423ec70:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    puVar7 = (undefined4 *)il2cpp_glue_022c7330();
    switch(*puVar7) {
    default:
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UStack_b0.fields.m_Mode = UnityEngine_Random__Range(1,2,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&UStack_b0);
      puVar6 = &"TSAir{0}";
      break;
    case 1:
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UStack_b0.fields.m_Mode = UnityEngine_Random__Range(1,2,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&UStack_b0);
      puVar6 = &"TSHitTitan{0}";
      break;
    case 2:
    case 4:
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UStack_b0.fields.m_Mode = UnityEngine_Random__Range(1,2,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&UStack_b0);
      puVar6 = &"TSKill{0}";
      break;
    case 3:
    case 5:
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      UStack_b0.fields.m_Mode = UnityEngine_Random__Range(1,2,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&UStack_b0);
      puVar6 = &"TSArmor{0}";
    }
    n = System_String__Format((System_String_o *)*puVar6,arg0,(MethodInfo *)0x0);
    if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
        (pUVar5 = UnityEngine_Transform__Find(pUVar5,n,(MethodInfo *)0x0),
        pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
       (__this_02 = (UnityEngine_AudioSource_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar5,MethodInfo_AudioSource_GetComponent_AudioSource),
       __this_02 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Play(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0423ec66:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.ThunderspearExplodeEffect$$.ctor
// il2cpp: void Effects_ThunderspearExplodeEffect___ctor (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x423ec80

void Effects_ThunderspearExplodeEffect___ctor
               (Effects_ThunderspearExplodeEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.cctor
// il2cpp: void Effects_ThunderspearExplodeEffect___cctor (const MethodInfo* method);
// 0x423ec90

void Effects_ThunderspearExplodeEffect___cctor(MethodInfo *method)

{
  if (DAT_05705196 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearExplodeEffect);
    DAT_05705196 = '\x01';
  }
  **(undefined4 **)(TypeInfo_ThunderspearExplodeEffect + 0xb8) = 0x3f8ccccd;
  return;
}


