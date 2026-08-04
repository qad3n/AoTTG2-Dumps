// Type: Effects.ThunderspearExplodeEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/ThunderspearExplodeEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// --------------------------------

// Effects.ThunderspearExplodeEffect$$Setup
// il2cpp: void Effects_ThunderspearExplodeEffect__Setup (Effects_ThunderspearExplodeEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x4573050

void Effects_ThunderspearExplodeEffect__Setup
               (Effects_ThunderspearExplodeEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  Effects_ThunderspearExplodeEffect_o *pEVar5;
  Effects_ThunderspearExplodeEffect_o *pEVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  UnityEngine_ParticleSystem_MainModule_o main;
  Il2CppObject *arg0;
  System_String_o *n;
  UnityEngine_AudioSource_o *__this_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Color_o color;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_b8;
  UnityEngine_ParticleSystem_MinMaxGradient_o UStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_Gradient_o *pUStack_60;
  UnityEngine_Gradient_o *pUStack_58;
  UnityEngine_Color_Fields UStack_50;
  UnityEngine_Color_Fields UStack_40;
  
  if (g_data_057af088 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TSKillType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearExplodeEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearProjectile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"TSHitTitan{0}");
    il2cpp_runtime_helper_023445d0(&"TSKill{0}");
    il2cpp_runtime_helper_023445d0(&"OldExplodeEffect");
    il2cpp_runtime_helper_023445d0(&"TSAir{0}");
    il2cpp_runtime_helper_023445d0(&"TSArmor{0}");
    g_data_057af088 = '\x01';
  }
  UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_MainModule_Fields)__this;
  pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
     (pEVar5 == (Effects_ThunderspearExplodeEffect_o *)0x0)) {
label_045735f6:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar4 + 0x11) != '\0') {
      UnityEngine_ParticleSystem__Stop_4e72b10((UnityEngine_ParticleSystem_o *)pEVar5,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem__Clear_4e72ca0((UnityEngine_ParticleSystem_o *)pEVar5,(MethodInfo *)0x0);
      main.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_MainModule_Fields)__this;
      pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((pEVar5 != (Effects_ThunderspearExplodeEffect_o *)0x0) &&
          (pEVar6 = (Effects_ThunderspearExplodeEffect_o *)
                    UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pEVar5,"OldExplodeEffect",(MethodInfo *)0x0),
          main.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_MainModule_Fields)
               (UnityEngine_ParticleSystem_MainModule_Fields)pEVar5,
          pEVar6 != (Effects_ThunderspearExplodeEffect_o *)0x0)) &&
         ((pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pEVar6,MethodInfo_ParticleSystem_GetComponent_ParticleSystem),
          main.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_MainModule_Fields)
               (UnityEngine_ParticleSystem_MainModule_Fields)pEVar6,
          pEVar5 != (Effects_ThunderspearExplodeEffect_o *)0x0 &&
          ((main.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_MainModule_Fields)
                 (UnityEngine_ParticleSystem_MainModule_Fields)pEVar5,
           pEVar6 = (Effects_ThunderspearExplodeEffect_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pEVar5,(MethodInfo *)0x0)
           , pEVar6 != (Effects_ThunderspearExplodeEffect_o *)0x0 &&
           (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pEVar6,1,(MethodInfo *)0x0),
           main.fields.m_ParticleSystem =
                (UnityEngine_ParticleSystem_MainModule_Fields)
                (UnityEngine_ParticleSystem_MainModule_Fields)pEVar6, settings != (System_Object_array *)0x0))
          )))) goto label_0457322d;
      goto label_045735f6;
    }
    main = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)pEVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ThunderspearExplodeEffect + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar10 = **(float **)(TypeInfo_ThunderspearExplodeEffect + 0xb8);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_Util__ScaleParticleStartSize(main,fVar10,(MethodInfo *)0x0);
    if (settings == (System_Object_array *)0x0) goto label_045735f6;
label_0457322d:
    if ((int)settings->max_length != 0) {
      main.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)settings->m_Items[0];
      if (main.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_045735f6;
      if ((((System_String_c *)((Effects_ThunderspearExplodeEffect_o *)main.fields.m_ParticleSystem)->klass)->
          _1).element_class != *(Il2CppClass **)(TypeInfo_Color + 0x40)) goto label_04573600;
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02305440();
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
      if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) goto label_045735f6;
      uVar1 = *puVar7;
      uStack_78 = puVar7[1];
      uStack_70 = 0;
      if (*(char *)(lVar4 + 0x11) == '\0') {
        fVar10 = (float)((ulong)uStack_78 >> 0x20);
        if (*(int *)((long)&TypeInfo_ThunderspearProjectile[4].fields._owner + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar10 = uStack_78._4_4_;
        }
        lVar4 = *(long *)&TypeInfo_ThunderspearProjectile[3].fields._timeLeft;
        uVar2 = *(undefined8 *)(lVar4 + 8);
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
        fVar11 = (float)uVar1 - (float)uVar2;
        fVar12 = (float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
        fVar9 = (float)uStack_78 - (float)uVar3;
        fVar10 = fVar10 - (float)((ulong)uVar3 >> 0x20);
        main.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_MainModule_Fields)
             (UnityEngine_ParticleSystem_MainModule_Fields)TypeInfo_ThunderspearProjectile;
        if (fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9 < 9.9999994e-11)
        goto label_0457331b;
      }
      else {
label_0457331b:
        if (pEVar5 == (Effects_ThunderspearExplodeEffect_o *)0x0) goto label_045735f6;
        UStack_b8.m_ParticleSystem =
             (UnityEngine_ParticleSystem_o *)
             UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)pEVar5,(MethodInfo *)0x0);
        fVar10 = uStack_78._4_4_;
        if (uStack_78._4_4_ <= 0.5) {
          fVar10 = 0.5;
        }
        color.fields.a = fVar10;
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
        main.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)&UStack_b8;
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
        UnityEngine_ParticleSystem_MainModule__set_startColor(main,value,(MethodInfo *)0x0);
      }
      if (1 < (uint)settings->max_length) {
        main.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)settings->m_Items[1];
        if (main.fields.m_ParticleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
          if ((((System_String_c *)
               ((Effects_ThunderspearExplodeEffect_o *)main.fields.m_ParticleSystem)->klass)->_1).
              element_class != *(Il2CppClass **)(TypeInfo_TSKillType + 0x40)) goto label_04573600;
          puVar8 = (undefined4 *)il2cpp_runtime_helper_02305440();
          switch(*puVar8) {
          default:
            pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            UStack_b0.fields.m_Mode = UnityEngine_Random__Range_4df2410(1,2,(MethodInfo *)0x0);
            arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&UStack_b0);
            puVar7 = &"TSAir{0}";
            break;
          case 1:
            pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            UStack_b0.fields.m_Mode = UnityEngine_Random__Range_4df2410(1,2,(MethodInfo *)0x0);
            arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&UStack_b0);
            puVar7 = &"TSHitTitan{0}";
            break;
          case 2:
          case 4:
            pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            UStack_b0.fields.m_Mode = UnityEngine_Random__Range_4df2410(1,2,(MethodInfo *)0x0);
            arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&UStack_b0);
            puVar7 = &"TSKill{0}";
            break;
          case 3:
          case 5:
            pEVar5 = (Effects_ThunderspearExplodeEffect_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            UStack_b0.fields.m_Mode = UnityEngine_Random__Range_4df2410(1,2,(MethodInfo *)0x0);
            arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&UStack_b0);
            puVar7 = &"TSArmor{0}";
          }
          main.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)*puVar7;
          n = System_String__Format((System_String_o *)main.fields.m_ParticleSystem,arg0,(MethodInfo *)0x0);
          if (((pEVar5 != (Effects_ThunderspearExplodeEffect_o *)0x0) &&
              (pEVar6 = (Effects_ThunderspearExplodeEffect_o *)
                        UnityEngine_Transform__Find((UnityEngine_Transform_o *)pEVar5,n,(MethodInfo *)0x0),
              main.fields.m_ParticleSystem =
                   (UnityEngine_ParticleSystem_MainModule_Fields)
                   (UnityEngine_ParticleSystem_MainModule_Fields)pEVar5,
              pEVar6 != (Effects_ThunderspearExplodeEffect_o *)0x0)) &&
             (__this_00 = (UnityEngine_AudioSource_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pEVar6,MethodInfo_AudioSource_GetComponent_AudioSource),
             main.fields.m_ParticleSystem =
                  (UnityEngine_ParticleSystem_MainModule_Fields)
                  (UnityEngine_ParticleSystem_MainModule_Fields)pEVar6,
             __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
            UnityEngine_AudioSource__Play_4daa2c0(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_045735f6;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_04573600:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor
            ((UnityEngine_MonoBehaviour_o *)main.fields.m_ParticleSystem,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.ctor
// il2cpp: void Effects_ThunderspearExplodeEffect___ctor (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x4573610

void Effects_ThunderspearExplodeEffect___ctor(Effects_ThunderspearExplodeEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.cctor
// il2cpp: void Effects_ThunderspearExplodeEffect___cctor (const MethodInfo* method);
// 0x4573620

void Effects_ThunderspearExplodeEffect___cctor(MethodInfo *method)

{
  if (g_data_057af089 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearExplodeEffect);
    g_data_057af089 = '\x01';
  }
  **(undefined4 **)(TypeInfo_ThunderspearExplodeEffect + 0xb8) = 0x3f8ccccd;
  return;
}


