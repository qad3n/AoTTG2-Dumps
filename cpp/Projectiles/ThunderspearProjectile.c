// Type: Projectiles.ThunderspearProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/ThunderspearProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// --------------------------------

// Projectiles.ThunderspearProjectile$$SetupSettings
// il2cpp: void Projectiles_ThunderspearProjectile__SetupSettings (Projectiles_ThunderspearProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x4209860

void Projectiles_ThunderspearProjectile__SetupSettings
               (Projectiles_ThunderspearProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  System_Object_array *pSVar14;
  long lVar15;
  UnityEngine_Rigidbody_o *pUVar16;
  System_Collections_Generic_List_Collider__o *__this_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_ContactPoint_o __this_05;
  UnityEngine_ContactPoint_o __this_06;
  UnityEngine_ContactPoint_o __this_07;
  UnityEngine_ContactPoint_o __this_08;
  undefined1 auVar19 [16];
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_00;
  bool_conflict bVar20;
  float *pfVar21;
  undefined1 *puVar22;
  UnityEngine_Transform_o *pUVar23;
  Projectiles_ThunderspearProjectile_o *pPVar24;
  Projectiles_ThunderspearProjectile_o *__this_09;
  _union_249689 item;
  _union_249689 item_00;
  Photon_Pun_PhotonView_o *pPVar25;
  UnityEngine_ContactPoint_array *pUVar26;
  UnityEngine_Object_o *x;
  long *plVar27;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *pMVar28;
  undefined8 *unaff_RBP;
  _union_249689 _Var29;
  Projectiles_ThunderspearProjectile_o *pPVar30;
  Projectiles_ThunderspearProjectile_o *__this_10;
  _union_249689 unaff_R12;
  UnityEngine_Transform_o *unaff_R15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Quaternion_o value_03;
  undefined1 auVar38 [12];
  float in_stack_fffffffffffffe08;
  float in_stack_fffffffffffffe0c;
  float in_stack_fffffffffffffe10;
  float in_stack_fffffffffffffe14;
  float in_stack_fffffffffffffe18;
  float in_stack_fffffffffffffe1c;
  float in_stack_fffffffffffffe20;
  float in_stack_fffffffffffffe24;
  float in_stack_fffffffffffffe28;
  float in_stack_fffffffffffffe2c;
  undefined8 in_stack_fffffffffffffe30;
  float local_1c8;
  float fStack_1c4;
  undefined1 local_1a8 [40];
  Il2CppType *pIStack_180;
  UnityEngine_Collider_o *local_178;
  Il2CppRGCTXData *pIStack_170;
  _union_249689 _Stack_168;
  Projectiles_ThunderspearProjectile_o *pPStack_160;
  Projectiles_ThunderspearProjectile_o *pPStack_158;
  UnityEngine_Transform_o *pUStack_150;
  undefined8 *puStack_148;
  UnityEngine_ParticleSystem_MainModule_Fields local_100;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_f8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_c0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_80;
  System_Object_array *pSStack_48;
  
  pPVar30 = __this;
  fVar10 = in_stack_fffffffffffffe1c;
  if (g_data_057ad8f5 == '\0') {
    pPVar30 = (Projectiles_ThunderspearProjectile_o *)&TypeInfo_Color;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8f5 = '\x01';
    method = extraout_RDX;
    fVar10 = in_stack_fffffffffffffe1c;
  }
  if (settings == (System_Object_array *)0x0) goto label_0420999f;
  if ((int)settings->max_length == 0) {
label_042099a4:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pPVar30 = (Projectiles_ThunderspearProjectile_o *)settings->m_Items[0];
    if (pPVar30 == (Projectiles_ThunderspearProjectile_o *)0x0) {
label_0420999f:
      il2cpp_runtime_helper_022b2c90();
      goto label_042099a4;
    }
    unaff_R15 = (UnityEngine_Transform_o *)&g_data_057b9b70;
    if ((((System_Collections_Generic_List_object__c *)pPVar30->klass)->_1).element_class ==
        *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
      pfVar21 = (float *)il2cpp_runtime_helper_02305440(pPVar30,g_data_057b9be8,method);
      (__this->fields)._radius = *pfVar21;
      if ((uint)settings->max_length < 2) goto label_042099a4;
      pPVar30 = (Projectiles_ThunderspearProjectile_o *)settings->m_Items[1];
      if (pPVar30 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        if ((((System_Collections_Generic_List_object__c *)pPVar30->klass)->_1).element_class !=
            *(Il2CppClass **)(TypeInfo_Color + 0x40)) goto label_042099a9;
        pfVar21 = (float *)il2cpp_runtime_helper_02305440();
        uVar7._0_4_ = pfVar21[1];
        uVar7._4_4_ = pfVar21[2];
        auVar36._0_4_ = pfVar21[3];
        (__this->fields)._color.fields.r = *pfVar21;
        (__this->fields)._color.fields.g = (float)uVar7;
        (__this->fields)._color.fields.b = uVar7._4_4_;
        (__this->fields)._color.fields.a = auVar36._0_4_;
        if ((uint)settings->max_length < 3) goto label_042099a4;
        pPVar30 = (Projectiles_ThunderspearProjectile_o *)settings->m_Items[2];
        if (pPVar30 != (Projectiles_ThunderspearProjectile_o *)0x0) {
          if ((((System_Collections_Generic_List_object__c *)pPVar30->klass)->_1).element_class !=
              *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_042099a9;
          puVar22 = (undefined1 *)il2cpp_runtime_helper_02305440();
          *(undefined1 *)&(__this->fields)._isAA = *puVar22;
          pPVar30 = __this;
          pUVar23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
            UVar37 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = (float)(int)UVar37.fields._0_8_;
            (__this->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar37.fields._0_8_ >> 0x20);
            (__this->fields)._lastPosition.fields.z = UVar37.fields.z;
            pPVar30 = __this;
            pUVar23 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
              UVar37 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
              (__this->fields)._embedPosition.fields.y = (float)(int)UVar37.fields._0_8_;
              (__this->fields)._embedPosition.fields.z = (float)(int)((ulong)UVar37.fields._0_8_ >> 0x20);
              (__this->fields)._startPosition.fields.x = UVar37.fields.z;
              return;
            }
          }
        }
      }
      goto label_0420999f;
    }
  }
label_042099a9:
  il2cpp_runtime_helper_022b2fd0();
  pSStack_48 = settings;
  if (g_data_057ad8f6 == '\0') {
    puStack_148 = (undefined8 *)0x42099d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    puStack_148 = (undefined8 *)0x42099e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_148 = (undefined8 *)0x42099f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    puStack_148 = (undefined8 *)0x42099fd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    puStack_148 = (undefined8 *)0x4209a09;
    il2cpp_runtime_helper_023445d0(&"Flame");
    puStack_148 = (undefined8 *)0x4209a15;
    il2cpp_runtime_helper_023445d0(&"ThunderspearModel");
    puStack_148 = (undefined8 *)0x4209a21;
    il2cpp_runtime_helper_023445d0(&"Trail");
    g_data_057ad8f6 = '\x01';
  }
  local_100.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  _Var29.genericMethod = (Il2CppClass *)0x0;
  puStack_148 = (undefined8 *)0x4209a3b;
  __this_10 = pPVar30;
  pPVar24 = (Projectiles_ThunderspearProjectile_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar30,(MethodInfo *)0x0);
  if (pPVar24 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    puStack_148 = (undefined8 *)0x4209a58;
    _Var29 = "Trail";
    pUVar23 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pPVar24,"Trail".genericMethod,(MethodInfo *)0x0);
    __this_10 = pPVar24;
    if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
      settings = (System_Object_array *)&MethodInfo_ParticleSystem_GetComponent_ParticleSystem;
      puStack_148 = (undefined8 *)0x4209a73;
      unaff_R15 = (UnityEngine_Transform_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar23,MethodInfo_ParticleSystem_GetComponent_ParticleSystem)
      ;
      _Var29.genericMethod = (Il2CppClass *)0x0;
      puStack_148 = (undefined8 *)0x4209a80;
      __this_10 = pPVar30;
      pPVar24 = (Projectiles_ThunderspearProjectile_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar30,(MethodInfo *)0x0);
      if (pPVar24 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        puStack_148 = (undefined8 *)0x4209a9d;
        _Var29 = "Flame";
        pUVar23 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pPVar24,"Flame".genericMethod,(MethodInfo *)0x0);
        __this_10 = pPVar24;
        if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
          puStack_148 = (undefined8 *)0x4209ab1;
          __this = (Projectiles_ThunderspearProjectile_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar23,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
          _Var29.genericMethod = (Il2CppClass *)0x0;
          puStack_148 = (undefined8 *)0x4209abe;
          __this_10 = pPVar30;
          pPVar24 = (Projectiles_ThunderspearProjectile_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar30,(MethodInfo *)0x0)
          ;
          if (pPVar24 != (Projectiles_ThunderspearProjectile_o *)0x0) {
            puStack_148 = (undefined8 *)0x4209adb;
            _Var29 = "ThunderspearModel";
            __this_09 = (Projectiles_ThunderspearProjectile_o *)
                        UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pPVar24,"ThunderspearModel".genericMethod,
                                   (MethodInfo *)0x0);
            __this_10 = pPVar24;
            if (__this_09 != (Projectiles_ThunderspearProjectile_o *)0x0) {
              _Var29.genericMethod = (Il2CppClass *)0x0;
              puStack_148 = (undefined8 *)0x4209aee;
              item.genericMethod =
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              __this_10 = __this_09;
              if (__this != (Projectiles_ThunderspearProjectile_o *)0x0) {
                settings = (System_Object_array *)(pPVar30->fields)._hideObjects;
                _Var29.genericMethod = (Il2CppClass *)0x0;
                puStack_148 = (undefined8 *)0x4209b0b;
                __this_10 = __this;
                item_00.genericMethod =
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                lVar15 = MethodInfo_Void_Add;
                unaff_R12.genericMethod = item.genericMethod;
                if ((Il2CppRGCTXData *)settings != (Il2CppRGCTXData *)0x0) {
                  unaff_RBP = &MethodInfo_Void_Add;
                  *(int32_t *)((long)settings + 0x1c) = *(int32_t *)((long)settings + 0x1c) + 1;
                  pMVar28 = ((Il2CppRGCTXData *)((long)settings + 0x10))->method;
                  if (pMVar28 != (MethodInfo *)0x0) {
                    uVar13 = *(uint *)((long)settings + 0x18);
                    if (uVar13 < *(uint *)&pMVar28->name) {
                      *(uint *)((long)settings + 0x18) = uVar13 + 1;
                      ((_union_249689 *)(&pMVar28->klass + (int)uVar13))->genericMethod = (void *)item_00;
                      puStack_148 = (undefined8 *)0x4209b54;
                      il2cpp_runtime_helper_022b4080(&pMVar28->klass + (int)uVar13);
                      __this_10 = (Projectiles_ThunderspearProjectile_o *)(pPVar30->fields)._hideObjects;
                      _Var29 = item_00;
                      lVar15 = MethodInfo_Void_Add;
                    }
                    else {
                      puStack_148 = (undefined8 *)0x4209b7f;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)settings,item_00.genericMethod,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      __this_10 = (Projectiles_ThunderspearProjectile_o *)(pPVar30->fields)._hideObjects;
                      _Var29 = item_00;
                      lVar15 = MethodInfo_Void_Add;
                    }
                    MethodInfo_Void_Add = lVar15;
                    if (__this_10 != (Projectiles_ThunderspearProjectile_o *)0x0) {
                      piVar1 = (int32_t *)((long)&(__this_10->fields).m_CancellationTokenSource + 4);
                      *piVar1 = *piVar1 + 1;
                      pSVar14 = (System_Object_array *)(__this_10->fields).m_CachedPtr;
                      if (pSVar14 != (System_Object_array *)0x0) {
                        uVar13 = *(uint *)&(__this_10->fields).m_CancellationTokenSource;
                        _Var29.genericMethod = item.genericMethod;
                        if (uVar13 < (uint)pSVar14->max_length) {
                          *(uint *)&(__this_10->fields).m_CancellationTokenSource = uVar13 + 1;
                          __this_10 = (Projectiles_ThunderspearProjectile_o *)(pSVar14->m_Items + (int)uVar13)
                          ;
                          ((_union_249689 *)(pSVar14->m_Items + (int)uVar13))->genericMethod = (void *)item;
                          puStack_148 = (undefined8 *)0x4209bc8;
                          il2cpp_runtime_helper_022b4080();
                        }
                        else {
                          puStack_148 = (undefined8 *)0x4209be1;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_10,item.genericMethod
                                     ,*(MethodInfo_362C220 **)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                        if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x50), lVar15 != 0)) {
                          if (*(char *)(lVar15 + 0x11) == '\0') {
                            return;
                          }
                          if (unaff_R15 != (UnityEngine_Transform_o *)0x0) {
                            puStack_148 = (undefined8 *)0x4209c29;
                            local_100.m_ParticleSystem =
                                 (UnityEngine_ParticleSystem_o *)
                                 UnityEngine_ParticleSystem__get_main
                                           ((UnityEngine_ParticleSystem_o *)unaff_R15,(MethodInfo *)0x0);
                            puStack_148 = (undefined8 *)0x4209c4c;
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_f8,
                                       (UnityEngine_Color_o)(pPVar30->fields)._color.fields,(MethodInfo *)0x0)
                            ;
                            local_80.m_ColorMax.fields.b = local_f8.m_ColorMax.fields.b;
                            local_80.m_ColorMax.fields.a = local_f8.m_ColorMax.fields.a;
                            local_80.m_ColorMin.fields.b = local_f8.m_ColorMin.fields.b;
                            local_80.m_ColorMin.fields.a = local_f8.m_ColorMin.fields.a;
                            local_80.m_ColorMax.fields.r = local_f8.m_ColorMax.fields.r;
                            local_80.m_ColorMax.fields.g = local_f8.m_ColorMax.fields.g;
                            local_80.m_GradientMax = local_f8.m_GradientMax;
                            local_80.m_ColorMin.fields.r = local_f8.m_ColorMin.fields.r;
                            local_80.m_ColorMin.fields.g = local_f8.m_ColorMin.fields.g;
                            local_80.m_Mode = local_f8.m_Mode;
                            local_80._4_4_ = local_f8._4_4_;
                            local_80.m_GradientMin = local_f8.m_GradientMin;
                            puStack_148 = (undefined8 *)0x4209cc2;
                            value.fields.m_GradientMin = local_f8.m_GradientMin;
                            value.fields.m_Mode = local_f8.m_Mode;
                            value.fields._4_4_ = local_f8._4_4_;
                            value.fields.m_GradientMax = local_f8.m_GradientMax;
                            value.fields.m_ColorMin.fields.r = local_f8.m_ColorMin.fields.r;
                            value.fields.m_ColorMin.fields.g = local_f8.m_ColorMin.fields.g;
                            value.fields.m_ColorMin.fields.b = local_f8.m_ColorMin.fields.b;
                            value.fields.m_ColorMin.fields.a = local_f8.m_ColorMin.fields.a;
                            value.fields.m_ColorMax.fields.r = local_f8.m_ColorMax.fields.r;
                            value.fields.m_ColorMax.fields.g = local_f8.m_ColorMax.fields.g;
                            value.fields.m_ColorMax.fields.b = local_f8.m_ColorMax.fields.b;
                            value.fields.m_ColorMax.fields.a = local_f8.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      ((UnityEngine_ParticleSystem_MainModule_o)&local_100,value,
                                       (MethodInfo *)0x0);
                            puStack_148 = (undefined8 *)0x4209ccc;
                            local_100.m_ParticleSystem =
                                 (UnityEngine_ParticleSystem_o *)
                                 UnityEngine_ParticleSystem__get_main
                                           ((UnityEngine_ParticleSystem_o *)__this,(MethodInfo *)0x0);
                            puStack_148 = (undefined8 *)0x4209cef;
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_f8,
                                       (UnityEngine_Color_o)(pPVar30->fields)._color.fields,(MethodInfo *)0x0)
                            ;
                            local_c0.m_ColorMax.fields.b = local_f8.m_ColorMax.fields.b;
                            local_c0.m_ColorMax.fields.a = local_f8.m_ColorMax.fields.a;
                            local_c0.m_ColorMin.fields.b = local_f8.m_ColorMin.fields.b;
                            local_c0.m_ColorMin.fields.a = local_f8.m_ColorMin.fields.a;
                            local_c0.m_ColorMax.fields.r = local_f8.m_ColorMax.fields.r;
                            local_c0.m_ColorMax.fields.g = local_f8.m_ColorMax.fields.g;
                            local_c0.m_GradientMax = local_f8.m_GradientMax;
                            local_c0.m_ColorMin.fields.r = local_f8.m_ColorMin.fields.r;
                            local_c0.m_ColorMin.fields.g = local_f8.m_ColorMin.fields.g;
                            local_c0.m_Mode = local_f8.m_Mode;
                            local_c0._4_4_ = local_f8._4_4_;
                            local_c0.m_GradientMin = local_f8.m_GradientMin;
                            puStack_148 = (undefined8 *)0x4209d60;
                            value_00.fields.m_GradientMin = local_f8.m_GradientMin;
                            value_00.fields.m_Mode = local_f8.m_Mode;
                            value_00.fields._4_4_ = local_f8._4_4_;
                            value_00.fields.m_GradientMax = local_f8.m_GradientMax;
                            value_00.fields.m_ColorMin.fields.r = local_f8.m_ColorMin.fields.r;
                            value_00.fields.m_ColorMin.fields.g = local_f8.m_ColorMin.fields.g;
                            value_00.fields.m_ColorMin.fields.b = local_f8.m_ColorMin.fields.b;
                            value_00.fields.m_ColorMin.fields.a = local_f8.m_ColorMin.fields.a;
                            value_00.fields.m_ColorMax.fields.r = local_f8.m_ColorMax.fields.r;
                            value_00.fields.m_ColorMax.fields.g = local_f8.m_ColorMax.fields.g;
                            value_00.fields.m_ColorMax.fields.b = local_f8.m_ColorMax.fields.b;
                            value_00.fields.m_ColorMax.fields.a = local_f8.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      ((UnityEngine_ParticleSystem_MainModule_o)&local_100,value_00,
                                       (MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puStack_148 = (undefined8 *)0x4209d77;
  il2cpp_runtime_helper_022b2c90();
  pIStack_170 = (Il2CppRGCTXData *)settings;
  _Stack_168 = unaff_R12;
  pPStack_160 = pPVar30;
  pPStack_158 = __this;
  pUStack_150 = unaff_R15;
  puStack_148 = unaff_RBP;
  if (g_data_057ad8f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMax");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeTotal");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMin");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"Embed1Time");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"AATriggerRange");
    g_data_057ad8f7 = '\x01';
  }
  local_1a8._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_1a8._8_8_ = (Il2CppType *)0x0;
  local_1a8._16_8_ = (UnityEngine_Collider_o *)0x0;
  pPVar25 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this_10,(MethodInfo *)0x0);
  if (pPVar25 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar25->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    if ((char)(__this_10->fields).Disabled != '\0') {
      return;
    }
    unaff_R15 = (UnityEngine_Transform_o *)&TypeInfo_SettingsManager;
    lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x58), lVar15 != 0)) &&
       (lVar15 = *(long *)(lVar15 + 0x48), lVar15 != 0)) {
      if (*(char *)(lVar15 + 0x11) != '\0') {
        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x60), lVar15 == 0)) goto label_0420a85a;
        if (*(char *)(lVar15 + 0x11) != '\0') {
          pUVar16 = (__this_10->fields)._rigidbody;
          if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
            UVar37 = UnityEngine_Rigidbody__get_velocity(pUVar16,(MethodInfo *)0x0);
            in_stack_fffffffffffffe08 = UVar37.fields.z;
            in_stack_fffffffffffffe18 = UVar37.fields.x;
            fVar10 = UVar37.fields.y;
            in_stack_fffffffffffffe20 = extraout_XMM0_Dc;
            in_stack_fffffffffffffe24 = extraout_XMM0_Dd;
            if ((_Var29.genericMethod != (Il2CppClass *)0x0) &&
               (pUVar26 = UnityEngine_Collision__get_contacts(_Var29.genericMethod,(MethodInfo *)0x0),
               pUVar26 != (UnityEngine_ContactPoint_array *)0x0)) {
              if ((int)pUVar26->max_length == 0) goto label_0420a85f;
              __this_05.fields.m_Point.fields.y = in_stack_fffffffffffffe0c;
              __this_05.fields.m_Point.fields.x = in_stack_fffffffffffffe08;
              __this_05.fields.m_Point.fields.z = in_stack_fffffffffffffe10;
              __this_05.fields.m_Normal.fields.x = in_stack_fffffffffffffe14;
              __this_05.fields.m_Normal.fields.y = in_stack_fffffffffffffe18;
              __this_05.fields.m_Normal.fields.z = fVar10;
              __this_05.fields.m_Impulse.fields.x = in_stack_fffffffffffffe20;
              __this_05.fields.m_Impulse.fields.y = in_stack_fffffffffffffe24;
              __this_05.fields.m_Impulse.fields.z = in_stack_fffffffffffffe28;
              __this_05.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe2c;
              __this_05.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe30;
              __this_05.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
              UVar37 = UnityEngine_ContactPoint__get_normal(__this_05,(MethodInfo *)pUVar26->m_Items);
              pUVar16 = (__this_10->fields)._rigidbody;
              if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
                uVar7._0_4_ = (in_stack_fffffffffffffe08 * UVar37.fields.z +
                              fVar10 * UVar37.fields.y + in_stack_fffffffffffffe18 * UVar37.fields.x) * -2.0;
                value_01.fields.y = ((float)uVar7 * UVar37.fields.y + fVar10) * 0.8;
                value_01.fields.x = ((float)uVar7 * UVar37.fields.x + in_stack_fffffffffffffe18) * 0.8;
                value_01.fields.z = ((float)uVar7 * UVar37.fields.z + in_stack_fffffffffffffe08) * 0.8;
                UnityEngine_Rigidbody__set_velocity(pUVar16,value_01,(MethodInfo *)0x0);
                pUVar16 = (__this_10->fields)._rigidbody;
                if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
                  UVar37 = UnityEngine_Rigidbody__get_velocity(pUVar16,(MethodInfo *)0x0);
                  (__this_10->fields)._velocity.fields.x = (float)(int)UVar37.fields._0_8_;
                  (__this_10->fields)._velocity.fields.y = (float)(int)((ulong)UVar37.fields._0_8_ >> 0x20);
                  (__this_10->fields)._velocity.fields.z = UVar37.fields.z;
                  return;
                }
              }
            }
          }
          goto label_0420a85a;
        }
      }
      *(undefined1 *)&(__this_10->fields)._wasImpact = 1;
      pUVar16 = (__this_10->fields)._rigidbody;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
        unaff_R12.genericMethod = &TypeInfo_Vector3;
        UnityEngine_Rigidbody__set_velocity
                  (pUVar16,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        __this_00 = (__this_10->fields)._colliders;
        if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)(local_1a8 + 0x20),
                     (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
          local_1a8._16_8_ = local_178;
          local_1a8._0_8_ = local_1a8._32_8_;
          local_1a8._8_8_ = pIStack_180;
          while( true ) {
            __this_01.fields._list._4_4_ = in_stack_fffffffffffffe0c;
            __this_01.fields._list._0_4_ = in_stack_fffffffffffffe08;
            __this_01.fields._index = (int32_t)in_stack_fffffffffffffe10;
            __this_01.fields._version = (int32_t)in_stack_fffffffffffffe14;
            __this_01.fields._current._0_4_ = in_stack_fffffffffffffe18;
            __this_01.fields._current._4_4_ = fVar10;
            bVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)local_1a8);
            if ((char)bVar20 == '\0') {
              __this_02.fields._list._4_4_ = in_stack_fffffffffffffe0c;
              __this_02.fields._list._0_4_ = in_stack_fffffffffffffe08;
              __this_02.fields._index = (int32_t)in_stack_fffffffffffffe10;
              __this_02.fields._version = (int32_t)in_stack_fffffffffffffe14;
              __this_02.fields._current._0_4_ = in_stack_fffffffffffffe18;
              __this_02.fields._current._4_4_ = fVar10;
              pMVar28 = MethodInfo_Void_Dispose;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)local_1a8);
              goto label_0420a0cd;
            }
            if ((UnityEngine_Collider_o *)local_1a8._16_8_ == (UnityEngine_Collider_o *)0x0) break;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)local_1a8._16_8_,0,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
label_0420a85a:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0420a85f:
    do {
      do {
        do {
          auVar38 = il2cpp_runtime_helper_022b2ca0();
          if (auVar38._8_4_ != 1) {
label_0420a8b5:
            __this_04.fields._list._4_4_ = in_stack_fffffffffffffe0c;
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffe08;
            __this_04.fields._index = (int32_t)in_stack_fffffffffffffe10;
            __this_04.fields._version = (int32_t)in_stack_fffffffffffffe14;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffe18;
            __this_04.fields._current._4_4_ = fVar10;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)local_1a8);
            _Unwind_Resume(auVar38._0_8_);
          }
          plVar27 = (long *)__cxa_begin_catch(auVar38._0_8_);
          lVar15 = *plVar27;
          __cxa_end_catch();
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffe0c;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffe08;
          __this_03.fields._index = (int32_t)in_stack_fffffffffffffe10;
          __this_03.fields._version = (int32_t)in_stack_fffffffffffffe14;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffe18;
          __this_03.fields._current._4_4_ = fVar10;
          pMVar28 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)local_1a8);
          if (lVar15 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar15);
            goto label_0420a8b5;
          }
label_0420a0cd:
          lVar15 = *(long *)((long)unaff_R15->klass->static_fields + 0x50);
          if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x58), lVar15 == 0)) ||
             (lVar15 = *(long *)(lVar15 + 0x48), lVar15 == 0)) goto label_0420a85a;
          if ((*(char *)(lVar15 + 0x11) != '\0') || ((char)(__this_10->fields)._isAA == '\0')) {
            Projectiles_ThunderspearProjectile__Explode(__this_10,pMVar28);
            return;
          }
          *(undefined1 *)((long)&(__this_10->fields)._wasImpact + 2) = 1;
          uVar7._0_4_ = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this_10->fields)._startPosition.fields.z = (float)uVar7;
          if ((_Var29.genericMethod == (Il2CppClass *)0x0) ||
             (pUVar26 = UnityEngine_Collision__get_contacts(_Var29.genericMethod,(MethodInfo *)0x0),
             pUVar26 == (UnityEngine_ContactPoint_array *)0x0)) goto label_0420a85a;
        } while ((int)pUVar26->max_length == 0);
        __this_06.fields.m_Point.fields.y = in_stack_fffffffffffffe0c;
        __this_06.fields.m_Point.fields.x = in_stack_fffffffffffffe08;
        __this_06.fields.m_Point.fields.z = in_stack_fffffffffffffe10;
        __this_06.fields.m_Normal.fields.x = in_stack_fffffffffffffe14;
        __this_06.fields.m_Normal.fields.y = in_stack_fffffffffffffe18;
        __this_06.fields.m_Normal.fields.z = fVar10;
        __this_06.fields.m_Impulse.fields.x = in_stack_fffffffffffffe20;
        __this_06.fields.m_Impulse.fields.y = in_stack_fffffffffffffe24;
        __this_06.fields.m_Impulse.fields.z = in_stack_fffffffffffffe28;
        __this_06.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe2c;
        __this_06.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe30;
        __this_06.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
        UVar37 = UnityEngine_ContactPoint__get_normal(__this_06,(MethodInfo *)pUVar26->m_Items);
        in_stack_fffffffffffffe28 = UVar37.fields.z;
        uVar7._0_4_ = (__this_10->fields)._velocity.fields.x;
        uVar7._4_4_ = (__this_10->fields)._velocity.fields.y;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar7;
        in_stack_fffffffffffffe18 = (__this_10->fields)._velocity.fields.z;
        in_stack_fffffffffffffe10 = 0.0;
        in_stack_fffffffffffffe14 = 0.0;
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar34._4_4_ = uVar7._4_4_;
          auVar34._0_4_ = (float)uVar7;
          auVar34._8_4_ = in_stack_fffffffffffffe10;
          auVar34._12_4_ = in_stack_fffffffffffffe14;
          g_data_057a6845 = '\x01';
        }
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          auVar34._4_4_ = uVar7._4_4_;
          auVar34._0_4_ = (float)uVar7;
          auVar34._8_4_ = in_stack_fffffffffffffe10;
          auVar34._12_4_ = in_stack_fffffffffffffe14;
        }
        uVar31 = 0;
        uVar32 = 0;
        auVar36._0_4_ =
             in_stack_fffffffffffffe18 * in_stack_fffffffffffffe18 +
             auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
        if (auVar36._0_4_ < 0.0) {
          auVar36._0_4_ = sqrtf(auVar36._0_4_);
          auVar34._4_4_ = uVar7._4_4_;
          auVar34._0_4_ = (float)uVar7;
          auVar34._8_4_ = in_stack_fffffffffffffe10;
          auVar34._12_4_ = in_stack_fffffffffffffe14;
          uVar31 = extraout_XMM0_Dc_01;
          uVar32 = extraout_XMM0_Dd_01;
          if (1e-05 < auVar36._0_4_) goto label_0420a22f;
label_0420a245:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          auVar35._8_8_ = 0;
          auVar35._0_8_ = **(ulong **)(*(long *)unaff_R12.genericMethod + 0xb8);
          fVar4 = *(float *)(*(ulong **)(*(long *)unaff_R12.genericMethod + 0xb8) + 1);
        }
        else {
          auVar36._0_4_ = SQRT(auVar36._0_4_);
          if (auVar36._0_4_ <= 1e-05) goto label_0420a245;
label_0420a22f:
          fVar4 = in_stack_fffffffffffffe18 / auVar36._0_4_;
          auVar18._4_4_ = auVar36._0_4_;
          auVar18._0_4_ = auVar36._0_4_;
          auVar18._8_4_ = uVar31;
          auVar18._12_4_ = uVar32;
          auVar35 = divps(auVar34,auVar18);
        }
        if (g_data_057a6845 == '\0') {
          uVar7._0_4_ = auVar35._0_4_;
          uVar7._4_4_ = auVar35._4_4_;
          in_stack_fffffffffffffe10 = auVar35._8_4_;
          in_stack_fffffffffffffe14 = auVar35._12_4_;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar35._4_4_ = uVar7._4_4_;
          auVar35._0_4_ = (float)uVar7;
          auVar35._8_4_ = in_stack_fffffffffffffe10;
          auVar35._12_4_ = in_stack_fffffffffffffe14;
          g_data_057a6845 = '\x01';
          in_stack_fffffffffffffe18 = fVar4;
        }
        local_1c8 = UVar37.fields.x;
        fStack_1c4 = UVar37.fields.y;
        auVar36._0_4_ = auVar35._0_4_ - local_1c8;
        auVar36._4_4_ = auVar35._4_4_ - fStack_1c4;
        auVar36._8_4_ = auVar35._8_4_ - extraout_XMM0_Dc_00;
        auVar36._12_4_ = auVar35._12_4_ - extraout_XMM0_Dd_00;
        fVar4 = fVar4 - in_stack_fffffffffffffe28;
        in_stack_fffffffffffffe08 = (float)uVar7;
        in_stack_fffffffffffffe0c = uVar7._4_4_;
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_fffffffffffffe08 = auVar36._0_4_;
          in_stack_fffffffffffffe0c = auVar36._4_4_;
          in_stack_fffffffffffffe10 = auVar36._8_4_;
          in_stack_fffffffffffffe14 = auVar36._12_4_;
          in_stack_fffffffffffffe18 = fVar4;
        }
        uVar7._4_4_ = auVar36._0_4_;
        uVar31 = 0;
        uVar32 = 0;
        uVar7._0_4_ = fVar4 * fVar4 + auVar36._4_4_ * auVar36._4_4_ + uVar7._4_4_ * uVar7._4_4_;
        if ((float)uVar7 < 0.0) {
          in_stack_fffffffffffffe10 = auVar36._8_4_;
          in_stack_fffffffffffffe14 = auVar36._12_4_;
          uVar7._0_4_ = sqrtf((float)uVar7);
          auVar36._0_4_ = uVar7._4_4_;
          auVar36._8_4_ = in_stack_fffffffffffffe10;
          auVar36._12_4_ = in_stack_fffffffffffffe14;
          uVar31 = extraout_XMM0_Dc_02;
          uVar32 = extraout_XMM0_Dd_02;
          in_stack_fffffffffffffe08 = uVar7._4_4_;
          in_stack_fffffffffffffe0c = auVar36._4_4_;
          in_stack_fffffffffffffe18 = fVar4;
          if (1e-05 < (float)uVar7) goto label_0420a32b;
label_0420a338:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar33 = **(undefined8 **)(*(long *)unaff_R12.genericMethod + 0xb8);
          fVar4 = *(float *)(*(undefined8 **)(*(long *)unaff_R12.genericMethod + 0xb8) + 1);
        }
        else {
          uVar7._0_4_ = SQRT((float)uVar7);
          if ((float)uVar7 <= 1e-05) goto label_0420a338;
label_0420a32b:
          fVar4 = fVar4 / (float)uVar7;
          auVar17._4_4_ = (float)uVar7;
          auVar17._0_4_ = (float)uVar7;
          auVar17._8_4_ = uVar31;
          auVar17._12_4_ = uVar32;
          auVar36 = divps(auVar36,auVar17);
          uVar33 = auVar36._0_8_;
        }
        (__this_10->fields)._velocity.fields.x = (float)(int)uVar33;
        (__this_10->fields)._velocity.fields.y = (float)(int)((ulong)uVar33 >> 0x20);
        (__this_10->fields)._velocity.fields.z = fVar4;
        pUVar23 = UnityEngine_Collision__get_transform(_Var29.genericMethod,(MethodInfo *)0x0);
        *(UnityEngine_Transform_o **)&(__this_10->fields)._wasMaxRange = pUVar23;
        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._wasMaxRange);
        pUVar23 = UnityEngine_Collision__get_transform(_Var29.genericMethod,(MethodInfo *)0x0);
        if ((pUVar23 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar23 = UnityEngine_Transform__get_root(pUVar23,(MethodInfo *)0x0),
           pUVar23 == (UnityEngine_Transform_o *)0x0)) goto label_0420a85a;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar23,MethodInfo_BaseTitan_GetComponent_BaseTitan);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 == '\0') {
          in_stack_fffffffffffffe08 = 0.1;
        }
        else {
          in_stack_fffffffffffffe08 = 0.5;
        }
        in_stack_fffffffffffffe0c = 0.0;
        in_stack_fffffffffffffe10 = 0.0;
        in_stack_fffffffffffffe14 = 0.0;
        unaff_R15 = UnityEngine_Collision__get_transform(_Var29.genericMethod,(MethodInfo *)0x0);
        pUVar26 = UnityEngine_Collision__get_contacts(_Var29.genericMethod,(MethodInfo *)0x0);
        if (pUVar26 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
      } while ((int)pUVar26->max_length == 0);
      __this_07.fields.m_Point.fields.y = in_stack_fffffffffffffe0c;
      __this_07.fields.m_Point.fields.x = in_stack_fffffffffffffe08;
      __this_07.fields.m_Point.fields.z = in_stack_fffffffffffffe10;
      __this_07.fields.m_Normal.fields.x = in_stack_fffffffffffffe14;
      __this_07.fields.m_Normal.fields.y = in_stack_fffffffffffffe18;
      __this_07.fields.m_Normal.fields.z = fVar10;
      __this_07.fields.m_Impulse.fields.x = in_stack_fffffffffffffe20;
      __this_07.fields.m_Impulse.fields.y = in_stack_fffffffffffffe24;
      __this_07.fields.m_Impulse.fields.z = in_stack_fffffffffffffe28;
      __this_07.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe2c;
      __this_07.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe30;
      __this_07.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
      UVar37 = UnityEngine_ContactPoint__get_point(__this_07,(MethodInfo *)pUVar26->m_Items);
      if (unaff_R15 == (UnityEngine_Transform_o *)0x0) goto label_0420a85a;
      uVar2 = (__this_10->fields)._velocity.fields.x;
      uVar8 = (__this_10->fields)._velocity.fields.y;
      position.fields.x = UVar37.fields.x + (float)uVar2 * in_stack_fffffffffffffe08;
      position.fields.y = UVar37.fields.y + (float)uVar8 * in_stack_fffffffffffffe08;
      position.fields.z = UVar37.fields.z + (__this_10->fields)._velocity.fields.z * in_stack_fffffffffffffe08
      ;
      in_stack_fffffffffffffe18 = in_stack_fffffffffffffe08;
      fVar10 = in_stack_fffffffffffffe08;
      in_stack_fffffffffffffe20 = in_stack_fffffffffffffe10;
      in_stack_fffffffffffffe24 = in_stack_fffffffffffffe14;
      UVar37 = UnityEngine_Transform__InverseTransformPoint(unaff_R15,position,(MethodInfo *)0x0);
      (__this_10->fields)._embedParent = UVar37.fields._0_8_;
      (__this_10->fields)._embedPosition.fields.x = UVar37.fields.z;
      unaff_R15 = (__this_10->fields)._transform;
      pUVar26 = UnityEngine_Collision__get_contacts(_Var29.genericMethod,(MethodInfo *)0x0);
      if (pUVar26 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
    } while ((int)pUVar26->max_length == 0);
    __this_08.fields.m_Point.fields.y = in_stack_fffffffffffffe0c;
    __this_08.fields.m_Point.fields.x = in_stack_fffffffffffffe08;
    __this_08.fields.m_Point.fields.z = in_stack_fffffffffffffe10;
    __this_08.fields.m_Normal.fields.x = in_stack_fffffffffffffe14;
    __this_08.fields.m_Normal.fields.y = in_stack_fffffffffffffe18;
    __this_08.fields.m_Normal.fields.z = fVar10;
    __this_08.fields.m_Impulse.fields.x = in_stack_fffffffffffffe20;
    __this_08.fields.m_Impulse.fields.y = in_stack_fffffffffffffe24;
    __this_08.fields.m_Impulse.fields.z = in_stack_fffffffffffffe28;
    __this_08.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe2c;
    __this_08.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe30;
    __this_08.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
    UVar37 = UnityEngine_ContactPoint__get_point(__this_08,(MethodInfo *)pUVar26->m_Items);
    if (unaff_R15 != (UnityEngine_Transform_o *)0x0) {
      uVar3 = (__this_10->fields)._velocity.fields.x;
      uVar9 = (__this_10->fields)._velocity.fields.y;
      value_02.fields.x = UVar37.fields.x + in_stack_fffffffffffffe18 * (float)uVar3;
      value_02.fields.y = UVar37.fields.y + fVar10 * (float)uVar9;
      value_02.fields.z = UVar37.fields.z + in_stack_fffffffffffffe08 * (__this_10->fields)._velocity.fields.z
      ;
      UnityEngine_Transform__set_position(unaff_R15,value_02,(MethodInfo *)0x0);
      pUVar23 = (__this_10->fields)._transform;
      value_03 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)(__this_10->fields)._velocity.fields,(MethodInfo *)0x0);
      if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar23,value_03,(MethodInfo *)0x0);
        pUVar23 = (__this_10->fields)._transform;
        if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
          fVar4 = (__this_10->fields)._embedPosition.fields.y;
          fVar10 = (__this_10->fields)._embedPosition.fields.z;
          in_stack_fffffffffffffe20 = 0.0;
          in_stack_fffffffffffffe24 = 0.0;
          uVar7._0_4_ = (__this_10->fields)._startPosition.fields.x;
          UVar37 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
          uVar7._4_4_ = UVar37.fields.z;
          pMVar28 = extraout_RDX_00;
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            pMVar28 = extraout_RDX_01;
          }
          auVar19._4_4_ = fVar10;
          auVar19._0_4_ = fVar4;
          auVar19._8_4_ = in_stack_fffffffffffffe20;
          auVar19._12_4_ = in_stack_fffffffffffffe24;
          fVar4 = fVar4 - UVar37.fields.x;
          auVar36._0_4_ = fVar10 - UVar37.fields.y;
          uVar7._0_4_ = (float)uVar7 - uVar7._4_4_;
          pPVar30 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            in_stack_fffffffffffffe30 = auVar19._8_8_;
            in_stack_fffffffffffffe2c = fVar10;
            il2cpp_runtime_helper_02337ed0();
            pMVar28 = extraout_RDX_02;
          }
          in_stack_fffffffffffffe18 =
               (float)uVar7 * (float)uVar7 + auVar36._0_4_ * auVar36._0_4_ + fVar4 * fVar4;
          if (in_stack_fffffffffffffe18 < 0.0) {
            in_stack_fffffffffffffe18 = sqrtf(in_stack_fffffffffffffe18);
            pMVar28 = extraout_RDX_03;
          }
          else {
            in_stack_fffffffffffffe18 = SQRT(in_stack_fffffffffffffe18);
          }
          in_stack_fffffffffffffe08 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed1Time",pMVar28);
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed1TimeMultiplier",method_00);
          pMVar28 = extraout_RDX_04;
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
            pMVar28 = extraout_RDX_05;
          }
          uVar7._4_4_ = (__this_10->fields).InitialPlayerVelocity.fields.x;
          uVar5 = (__this_10->fields).InitialPlayerVelocity.fields.y;
          uVar11 = (__this_10->fields).InitialPlayerVelocity.fields.z;
          pPVar30 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar28 = extraout_RDX_06;
          }
          uVar7._4_4_ = (float)uVar11 * (float)uVar11 +
                        uVar7._4_4_ * uVar7._4_4_ + (float)uVar5 * (float)uVar5;
          if (uVar7._4_4_ < 0.0) {
            uVar7._4_4_ = sqrtf(uVar7._4_4_);
            pMVar28 = extraout_RDX_07;
          }
          else {
            uVar7._4_4_ = SQRT(uVar7._4_4_);
          }
          in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 + (float)uVar7 * uVar7._4_4_;
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed1TimeMax",pMVar28);
          if ((float)uVar7 <= in_stack_fffffffffffffe08) {
            in_stack_fffffffffffffe08 = (float)uVar7;
          }
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed1TimeMin",method_01);
          if (in_stack_fffffffffffffe08 <= (float)uVar7) {
            in_stack_fffffffffffffe08 = (float)uVar7;
          }
          in_stack_fffffffffffffe28 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed2TimeTotal",method_02);
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar30,"Embed2TimeMultiplier",method_03);
          uVar7._0_4_ = in_stack_fffffffffffffe28 - in_stack_fffffffffffffe18 * (float)uVar7;
          if ((float)uVar7 <= 0.0) {
            uVar7._0_4_ = 0.0;
          }
          (__this_10->fields)._timeLeft = (float)uVar7 + in_stack_fffffffffffffe08;
          pUVar23 = (__this_10->fields)._transform;
          if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
            UVar37 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
            uVar7._0_4_ = UVar37.fields.z;
            uVar33 = UVar37.fields._0_8_;
            uVar6 = (__this_10->fields)._embedPosition.fields.y;
            uVar12 = (__this_10->fields)._embedPosition.fields.z;
            fVar10 = (__this_10->fields)._startPosition.fields.x;
            pMVar28 = extraout_RDX_08;
            if (g_data_057a68cb == '\0') {
              uVar7._4_4_ = UVar37.fields.x;
              auVar36._0_4_ = UVar37.fields.y;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              uVar33 = CONCAT44(auVar36._0_4_,uVar7._4_4_);
              g_data_057a68cb = '\x01';
              pMVar28 = extraout_RDX_09;
            }
            uVar7._4_4_ = (float)((ulong)uVar33 >> 0x20) - (float)uVar12;
            uVar7._0_4_ = (float)uVar7 - fVar10;
            fVar10 = (float)uVar33 - (float)uVar6;
            pPVar30 = TypeInfo_Math;
            if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar28 = extraout_RDX_10;
            }
            fVar10 = fVar10 * fVar10 + uVar7._4_4_ * uVar7._4_4_ + (float)uVar7 * (float)uVar7;
            if (fVar10 < 0.0) {
              fVar10 = sqrtf(fVar10);
              pMVar28 = extraout_RDX_11;
            }
            else {
              fVar10 = SQRT(fVar10);
            }
            uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar30,"AATriggerRange",pMVar28);
            if (fVar10 < (float)uVar7) {
              *(undefined1 *)&(__this_10->fields)._startPosition.fields.y = 1;
            }
            return;
          }
        }
      }
    }
  } while( true );
}


// Projectiles.ThunderspearProjectile$$RegisterObjects
// il2cpp: void Projectiles_ThunderspearProjectile__RegisterObjects (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x42099b0

void Projectiles_ThunderspearProjectile__RegisterObjects
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  System_Object_array *pSVar14;
  long lVar15;
  UnityEngine_Rigidbody_o *pUVar16;
  System_Collections_Generic_List_Collider__o *__this_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_ContactPoint_o __this_05;
  UnityEngine_ContactPoint_o __this_06;
  UnityEngine_ContactPoint_o __this_07;
  UnityEngine_ContactPoint_o __this_08;
  undefined1 auVar19 [16];
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_00;
  bool_conflict bVar20;
  Projectiles_ThunderspearProjectile_o *pPVar21;
  UnityEngine_Transform_o *pUVar22;
  Projectiles_ThunderspearProjectile_o *__this_09;
  _union_249689 item;
  _union_249689 item_00;
  Photon_Pun_PhotonView_o *pPVar23;
  UnityEngine_ContactPoint_array *pUVar24;
  UnityEngine_Object_o *x;
  long *plVar25;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *pMVar26;
  Il2CppRGCTXData *unaff_RBX;
  undefined8 *unaff_RBP;
  _union_249689 _Var27;
  Projectiles_ThunderspearProjectile_o *__this_10;
  _union_249689 unaff_R12;
  Projectiles_ThunderspearProjectile_o *unaff_R14;
  UnityEngine_Transform_o *unaff_R15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Quaternion_o value_03;
  undefined1 auVar35 [12];
  float in_stack_fffffffffffffe20;
  float in_stack_fffffffffffffe24;
  float in_stack_fffffffffffffe28;
  float in_stack_fffffffffffffe2c;
  float in_stack_fffffffffffffe30;
  float in_stack_fffffffffffffe34;
  float in_stack_fffffffffffffe38;
  float in_stack_fffffffffffffe3c;
  float in_stack_fffffffffffffe40;
  float in_stack_fffffffffffffe44;
  undefined8 in_stack_fffffffffffffe48;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 auStack_190 [40];
  Il2CppType *pIStack_168;
  UnityEngine_Collider_o *pUStack_160;
  Il2CppRGCTXData *pIStack_158;
  _union_249689 _Stack_150;
  Projectiles_ThunderspearProjectile_o *pPStack_148;
  Projectiles_ThunderspearProjectile_o *pPStack_140;
  UnityEngine_Transform_o *pUStack_138;
  undefined8 *puStack_130;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_e8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_e0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_a8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_68;
  
  fVar10 = in_stack_fffffffffffffe34;
  if (g_data_057ad8f6 == '\0') {
    puStack_130 = (undefined8 *)0x42099d9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    puStack_130 = (undefined8 *)0x42099e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_130 = (undefined8 *)0x42099f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    puStack_130 = (undefined8 *)0x42099fd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    puStack_130 = (undefined8 *)0x4209a09;
    il2cpp_runtime_helper_023445d0(&"Flame");
    puStack_130 = (undefined8 *)0x4209a15;
    il2cpp_runtime_helper_023445d0(&"ThunderspearModel");
    puStack_130 = (undefined8 *)0x4209a21;
    il2cpp_runtime_helper_023445d0(&"Trail");
    g_data_057ad8f6 = '\x01';
    fVar10 = in_stack_fffffffffffffe34;
  }
  UStack_e8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  _Var27.genericMethod = (Il2CppClass *)0x0;
  puStack_130 = (undefined8 *)0x4209a3b;
  __this_10 = __this;
  pPVar21 = (Projectiles_ThunderspearProjectile_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pPVar21 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    puStack_130 = (undefined8 *)0x4209a58;
    _Var27 = "Trail";
    pUVar22 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pPVar21,"Trail".genericMethod,(MethodInfo *)0x0);
    __this_10 = pPVar21;
    if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
      unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_ParticleSystem_GetComponent_ParticleSystem;
      puStack_130 = (undefined8 *)0x4209a73;
      unaff_R15 = (UnityEngine_Transform_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar22,MethodInfo_ParticleSystem_GetComponent_ParticleSystem)
      ;
      _Var27.genericMethod = (Il2CppClass *)0x0;
      puStack_130 = (undefined8 *)0x4209a80;
      __this_10 = __this;
      pPVar21 = (Projectiles_ThunderspearProjectile_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pPVar21 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        puStack_130 = (undefined8 *)0x4209a9d;
        _Var27 = "Flame";
        pUVar22 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pPVar21,"Flame".genericMethod,(MethodInfo *)0x0);
        __this_10 = pPVar21;
        if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
          puStack_130 = (undefined8 *)0x4209ab1;
          unaff_R14 = (Projectiles_ThunderspearProjectile_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar22,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
          _Var27.genericMethod = (Il2CppClass *)0x0;
          puStack_130 = (undefined8 *)0x4209abe;
          __this_10 = __this;
          pPVar21 = (Projectiles_ThunderspearProjectile_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pPVar21 != (Projectiles_ThunderspearProjectile_o *)0x0) {
            puStack_130 = (undefined8 *)0x4209adb;
            _Var27 = "ThunderspearModel";
            __this_09 = (Projectiles_ThunderspearProjectile_o *)
                        UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pPVar21,"ThunderspearModel".genericMethod,
                                   (MethodInfo *)0x0);
            __this_10 = pPVar21;
            if (__this_09 != (Projectiles_ThunderspearProjectile_o *)0x0) {
              _Var27.genericMethod = (Il2CppClass *)0x0;
              puStack_130 = (undefined8 *)0x4209aee;
              item.genericMethod =
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              __this_10 = __this_09;
              if (unaff_R14 != (Projectiles_ThunderspearProjectile_o *)0x0) {
                unaff_RBX = (Il2CppRGCTXData *)(__this->fields)._hideObjects;
                _Var27.genericMethod = (Il2CppClass *)0x0;
                puStack_130 = (undefined8 *)0x4209b0b;
                __this_10 = unaff_R14;
                item_00.genericMethod =
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)unaff_R14,(MethodInfo *)0x0);
                lVar15 = MethodInfo_Void_Add;
                unaff_R12.genericMethod = item.genericMethod;
                if (unaff_RBX != (Il2CppRGCTXData *)0x0) {
                  unaff_RBP = &MethodInfo_Void_Add;
                  *(int32_t *)((long)unaff_RBX + 0x1c) = *(int32_t *)((long)unaff_RBX + 0x1c) + 1;
                  pMVar26 = unaff_RBX[2].method;
                  if (pMVar26 != (MethodInfo *)0x0) {
                    uVar13 = *(uint *)(unaff_RBX + 3);
                    if (uVar13 < *(uint *)&pMVar26->name) {
                      *(uint *)(unaff_RBX + 3) = uVar13 + 1;
                      ((_union_249689 *)(&pMVar26->klass + (int)uVar13))->genericMethod = (void *)item_00;
                      puStack_130 = (undefined8 *)0x4209b54;
                      il2cpp_runtime_helper_022b4080(&pMVar26->klass + (int)uVar13);
                      __this_10 = (Projectiles_ThunderspearProjectile_o *)(__this->fields)._hideObjects;
                      _Var27 = item_00;
                      lVar15 = MethodInfo_Void_Add;
                    }
                    else {
                      puStack_130 = (undefined8 *)0x4209b7f;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)unaff_RBX,item_00.genericMethod,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      __this_10 = (Projectiles_ThunderspearProjectile_o *)(__this->fields)._hideObjects;
                      _Var27 = item_00;
                      lVar15 = MethodInfo_Void_Add;
                    }
                    MethodInfo_Void_Add = lVar15;
                    if (__this_10 != (Projectiles_ThunderspearProjectile_o *)0x0) {
                      piVar1 = (int32_t *)((long)&(__this_10->fields).m_CancellationTokenSource + 4);
                      *piVar1 = *piVar1 + 1;
                      pSVar14 = (System_Object_array *)(__this_10->fields).m_CachedPtr;
                      if (pSVar14 != (System_Object_array *)0x0) {
                        uVar13 = *(uint *)&(__this_10->fields).m_CancellationTokenSource;
                        _Var27.genericMethod = item.genericMethod;
                        if (uVar13 < (uint)pSVar14->max_length) {
                          *(uint *)&(__this_10->fields).m_CancellationTokenSource = uVar13 + 1;
                          __this_10 = (Projectiles_ThunderspearProjectile_o *)(pSVar14->m_Items + (int)uVar13)
                          ;
                          ((_union_249689 *)(pSVar14->m_Items + (int)uVar13))->genericMethod = (void *)item;
                          puStack_130 = (undefined8 *)0x4209bc8;
                          il2cpp_runtime_helper_022b4080();
                        }
                        else {
                          puStack_130 = (undefined8 *)0x4209be1;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_10,item.genericMethod
                                     ,*(MethodInfo_362C220 **)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                        if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x50), lVar15 != 0)) {
                          if (*(char *)(lVar15 + 0x11) == '\0') {
                            return;
                          }
                          if (unaff_R15 != (UnityEngine_Transform_o *)0x0) {
                            puStack_130 = (undefined8 *)0x4209c29;
                            UStack_e8.m_ParticleSystem =
                                 (UnityEngine_ParticleSystem_o *)
                                 UnityEngine_ParticleSystem__get_main
                                           ((UnityEngine_ParticleSystem_o *)unaff_R15,(MethodInfo *)0x0);
                            puStack_130 = (undefined8 *)0x4209c4c;
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_e0,
                                       (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0);
                            UStack_68.m_ColorMax.fields.b = UStack_e0.m_ColorMax.fields.b;
                            UStack_68.m_ColorMax.fields.a = UStack_e0.m_ColorMax.fields.a;
                            UStack_68.m_ColorMin.fields.b = UStack_e0.m_ColorMin.fields.b;
                            UStack_68.m_ColorMin.fields.a = UStack_e0.m_ColorMin.fields.a;
                            UStack_68.m_ColorMax.fields.r = UStack_e0.m_ColorMax.fields.r;
                            UStack_68.m_ColorMax.fields.g = UStack_e0.m_ColorMax.fields.g;
                            UStack_68.m_GradientMax = UStack_e0.m_GradientMax;
                            UStack_68.m_ColorMin.fields.r = UStack_e0.m_ColorMin.fields.r;
                            UStack_68.m_ColorMin.fields.g = UStack_e0.m_ColorMin.fields.g;
                            UStack_68.m_Mode = UStack_e0.m_Mode;
                            UStack_68._4_4_ = UStack_e0._4_4_;
                            UStack_68.m_GradientMin = UStack_e0.m_GradientMin;
                            puStack_130 = (undefined8 *)0x4209cc2;
                            value.fields.m_GradientMin = UStack_e0.m_GradientMin;
                            value.fields.m_Mode = UStack_e0.m_Mode;
                            value.fields._4_4_ = UStack_e0._4_4_;
                            value.fields.m_GradientMax = UStack_e0.m_GradientMax;
                            value.fields.m_ColorMin.fields.r = UStack_e0.m_ColorMin.fields.r;
                            value.fields.m_ColorMin.fields.g = UStack_e0.m_ColorMin.fields.g;
                            value.fields.m_ColorMin.fields.b = UStack_e0.m_ColorMin.fields.b;
                            value.fields.m_ColorMin.fields.a = UStack_e0.m_ColorMin.fields.a;
                            value.fields.m_ColorMax.fields.r = UStack_e0.m_ColorMax.fields.r;
                            value.fields.m_ColorMax.fields.g = UStack_e0.m_ColorMax.fields.g;
                            value.fields.m_ColorMax.fields.b = UStack_e0.m_ColorMax.fields.b;
                            value.fields.m_ColorMax.fields.a = UStack_e0.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      ((UnityEngine_ParticleSystem_MainModule_o)&UStack_e8,value,
                                       (MethodInfo *)0x0);
                            puStack_130 = (undefined8 *)0x4209ccc;
                            UStack_e8.m_ParticleSystem =
                                 (UnityEngine_ParticleSystem_o *)
                                 UnityEngine_ParticleSystem__get_main
                                           ((UnityEngine_ParticleSystem_o *)unaff_R14,(MethodInfo *)0x0);
                            puStack_130 = (undefined8 *)0x4209cef;
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_e0,
                                       (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0);
                            UStack_a8.m_ColorMax.fields.b = UStack_e0.m_ColorMax.fields.b;
                            UStack_a8.m_ColorMax.fields.a = UStack_e0.m_ColorMax.fields.a;
                            UStack_a8.m_ColorMin.fields.b = UStack_e0.m_ColorMin.fields.b;
                            UStack_a8.m_ColorMin.fields.a = UStack_e0.m_ColorMin.fields.a;
                            UStack_a8.m_ColorMax.fields.r = UStack_e0.m_ColorMax.fields.r;
                            UStack_a8.m_ColorMax.fields.g = UStack_e0.m_ColorMax.fields.g;
                            UStack_a8.m_GradientMax = UStack_e0.m_GradientMax;
                            UStack_a8.m_ColorMin.fields.r = UStack_e0.m_ColorMin.fields.r;
                            UStack_a8.m_ColorMin.fields.g = UStack_e0.m_ColorMin.fields.g;
                            UStack_a8.m_Mode = UStack_e0.m_Mode;
                            UStack_a8._4_4_ = UStack_e0._4_4_;
                            UStack_a8.m_GradientMin = UStack_e0.m_GradientMin;
                            puStack_130 = (undefined8 *)0x4209d60;
                            value_00.fields.m_GradientMin = UStack_e0.m_GradientMin;
                            value_00.fields.m_Mode = UStack_e0.m_Mode;
                            value_00.fields._4_4_ = UStack_e0._4_4_;
                            value_00.fields.m_GradientMax = UStack_e0.m_GradientMax;
                            value_00.fields.m_ColorMin.fields.r = UStack_e0.m_ColorMin.fields.r;
                            value_00.fields.m_ColorMin.fields.g = UStack_e0.m_ColorMin.fields.g;
                            value_00.fields.m_ColorMin.fields.b = UStack_e0.m_ColorMin.fields.b;
                            value_00.fields.m_ColorMin.fields.a = UStack_e0.m_ColorMin.fields.a;
                            value_00.fields.m_ColorMax.fields.r = UStack_e0.m_ColorMax.fields.r;
                            value_00.fields.m_ColorMax.fields.g = UStack_e0.m_ColorMax.fields.g;
                            value_00.fields.m_ColorMax.fields.b = UStack_e0.m_ColorMax.fields.b;
                            value_00.fields.m_ColorMax.fields.a = UStack_e0.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      ((UnityEngine_ParticleSystem_MainModule_o)&UStack_e8,value_00,
                                       (MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puStack_130 = (undefined8 *)0x4209d77;
  il2cpp_runtime_helper_022b2c90();
  pIStack_158 = unaff_RBX;
  _Stack_150 = unaff_R12;
  pPStack_148 = __this;
  pPStack_140 = unaff_R14;
  pUStack_138 = unaff_R15;
  puStack_130 = unaff_RBP;
  if (g_data_057ad8f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMax");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeTotal");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMin");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"Embed1Time");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"AATriggerRange");
    g_data_057ad8f7 = '\x01';
  }
  auStack_190._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_190._8_8_ = (Il2CppType *)0x0;
  auStack_190._16_8_ = (UnityEngine_Collider_o *)0x0;
  pPVar23 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this_10,(MethodInfo *)0x0);
  if (pPVar23 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar23->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    if ((char)(__this_10->fields).Disabled != '\0') {
      return;
    }
    unaff_R15 = (UnityEngine_Transform_o *)&TypeInfo_SettingsManager;
    lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x58), lVar15 != 0)) &&
       (lVar15 = *(long *)(lVar15 + 0x48), lVar15 != 0)) {
      if (*(char *)(lVar15 + 0x11) != '\0') {
        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x60), lVar15 == 0)) goto label_0420a85a;
        if (*(char *)(lVar15 + 0x11) != '\0') {
          pUVar16 = (__this_10->fields)._rigidbody;
          if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
            UVar34 = UnityEngine_Rigidbody__get_velocity(pUVar16,(MethodInfo *)0x0);
            in_stack_fffffffffffffe20 = UVar34.fields.z;
            in_stack_fffffffffffffe30 = UVar34.fields.x;
            fVar10 = UVar34.fields.y;
            in_stack_fffffffffffffe38 = extraout_XMM0_Dc;
            in_stack_fffffffffffffe3c = extraout_XMM0_Dd;
            if ((_Var27.genericMethod != (Il2CppClass *)0x0) &&
               (pUVar24 = UnityEngine_Collision__get_contacts(_Var27.genericMethod,(MethodInfo *)0x0),
               pUVar24 != (UnityEngine_ContactPoint_array *)0x0)) {
              if ((int)pUVar24->max_length == 0) goto label_0420a85f;
              __this_05.fields.m_Point.fields.y = in_stack_fffffffffffffe24;
              __this_05.fields.m_Point.fields.x = in_stack_fffffffffffffe20;
              __this_05.fields.m_Point.fields.z = in_stack_fffffffffffffe28;
              __this_05.fields.m_Normal.fields.x = in_stack_fffffffffffffe2c;
              __this_05.fields.m_Normal.fields.y = in_stack_fffffffffffffe30;
              __this_05.fields.m_Normal.fields.z = fVar10;
              __this_05.fields.m_Impulse.fields.x = in_stack_fffffffffffffe38;
              __this_05.fields.m_Impulse.fields.y = in_stack_fffffffffffffe3c;
              __this_05.fields.m_Impulse.fields.z = in_stack_fffffffffffffe40;
              __this_05.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe44;
              __this_05.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe48;
              __this_05.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe48 >> 0x20);
              UVar34 = UnityEngine_ContactPoint__get_normal(__this_05,(MethodInfo *)pUVar24->m_Items);
              pUVar16 = (__this_10->fields)._rigidbody;
              if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
                uVar7._0_4_ = (in_stack_fffffffffffffe20 * UVar34.fields.z +
                              fVar10 * UVar34.fields.y + in_stack_fffffffffffffe30 * UVar34.fields.x) * -2.0;
                value_01.fields.y = ((float)uVar7 * UVar34.fields.y + fVar10) * 0.8;
                value_01.fields.x = ((float)uVar7 * UVar34.fields.x + in_stack_fffffffffffffe30) * 0.8;
                value_01.fields.z = ((float)uVar7 * UVar34.fields.z + in_stack_fffffffffffffe20) * 0.8;
                UnityEngine_Rigidbody__set_velocity(pUVar16,value_01,(MethodInfo *)0x0);
                pUVar16 = (__this_10->fields)._rigidbody;
                if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
                  UVar34 = UnityEngine_Rigidbody__get_velocity(pUVar16,(MethodInfo *)0x0);
                  (__this_10->fields)._velocity.fields.x = (float)(int)UVar34.fields._0_8_;
                  (__this_10->fields)._velocity.fields.y = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                  (__this_10->fields)._velocity.fields.z = UVar34.fields.z;
                  return;
                }
              }
            }
          }
          goto label_0420a85a;
        }
      }
      *(undefined1 *)&(__this_10->fields)._wasImpact = 1;
      pUVar16 = (__this_10->fields)._rigidbody;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
        unaff_R12.genericMethod = &TypeInfo_Vector3;
        UnityEngine_Rigidbody__set_velocity
                  (pUVar16,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        __this_00 = (__this_10->fields)._colliders;
        if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_190 + 0x20),
                     (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
          auStack_190._16_8_ = pUStack_160;
          auStack_190._0_8_ = auStack_190._32_8_;
          auStack_190._8_8_ = pIStack_168;
          while( true ) {
            __this_01.fields._list._4_4_ = in_stack_fffffffffffffe24;
            __this_01.fields._list._0_4_ = in_stack_fffffffffffffe20;
            __this_01.fields._index = (int32_t)in_stack_fffffffffffffe28;
            __this_01.fields._version = (int32_t)in_stack_fffffffffffffe2c;
            __this_01.fields._current._0_4_ = in_stack_fffffffffffffe30;
            __this_01.fields._current._4_4_ = fVar10;
            bVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)auStack_190);
            if ((char)bVar20 == '\0') {
              __this_02.fields._list._4_4_ = in_stack_fffffffffffffe24;
              __this_02.fields._list._0_4_ = in_stack_fffffffffffffe20;
              __this_02.fields._index = (int32_t)in_stack_fffffffffffffe28;
              __this_02.fields._version = (int32_t)in_stack_fffffffffffffe2c;
              __this_02.fields._current._0_4_ = in_stack_fffffffffffffe30;
              __this_02.fields._current._4_4_ = fVar10;
              pMVar26 = MethodInfo_Void_Dispose;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)auStack_190);
              goto label_0420a0cd;
            }
            if ((UnityEngine_Collider_o *)auStack_190._16_8_ == (UnityEngine_Collider_o *)0x0) break;
            UnityEngine_Collider__set_enabled
                      ((UnityEngine_Collider_o *)auStack_190._16_8_,0,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
label_0420a85a:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0420a85f:
    do {
      do {
        do {
          auVar35 = il2cpp_runtime_helper_022b2ca0();
          if (auVar35._8_4_ != 1) {
label_0420a8b5:
            __this_04.fields._list._4_4_ = in_stack_fffffffffffffe24;
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffe20;
            __this_04.fields._index = (int32_t)in_stack_fffffffffffffe28;
            __this_04.fields._version = (int32_t)in_stack_fffffffffffffe2c;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffe30;
            __this_04.fields._current._4_4_ = fVar10;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)auStack_190);
            _Unwind_Resume(auVar35._0_8_);
          }
          plVar25 = (long *)__cxa_begin_catch(auVar35._0_8_);
          lVar15 = *plVar25;
          __cxa_end_catch();
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffe24;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffe20;
          __this_03.fields._index = (int32_t)in_stack_fffffffffffffe28;
          __this_03.fields._version = (int32_t)in_stack_fffffffffffffe2c;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffe30;
          __this_03.fields._current._4_4_ = fVar10;
          pMVar26 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)auStack_190);
          if (lVar15 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar15);
            goto label_0420a8b5;
          }
label_0420a0cd:
          lVar15 = *(long *)((long)unaff_R15->klass->static_fields + 0x50);
          if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x58), lVar15 == 0)) ||
             (lVar15 = *(long *)(lVar15 + 0x48), lVar15 == 0)) goto label_0420a85a;
          if ((*(char *)(lVar15 + 0x11) != '\0') || ((char)(__this_10->fields)._isAA == '\0')) {
            Projectiles_ThunderspearProjectile__Explode(__this_10,pMVar26);
            return;
          }
          *(undefined1 *)((long)&(__this_10->fields)._wasImpact + 2) = 1;
          uVar7._0_4_ = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this_10->fields)._startPosition.fields.z = (float)uVar7;
          if ((_Var27.genericMethod == (Il2CppClass *)0x0) ||
             (pUVar24 = UnityEngine_Collision__get_contacts(_Var27.genericMethod,(MethodInfo *)0x0),
             pUVar24 == (UnityEngine_ContactPoint_array *)0x0)) goto label_0420a85a;
        } while ((int)pUVar24->max_length == 0);
        __this_06.fields.m_Point.fields.y = in_stack_fffffffffffffe24;
        __this_06.fields.m_Point.fields.x = in_stack_fffffffffffffe20;
        __this_06.fields.m_Point.fields.z = in_stack_fffffffffffffe28;
        __this_06.fields.m_Normal.fields.x = in_stack_fffffffffffffe2c;
        __this_06.fields.m_Normal.fields.y = in_stack_fffffffffffffe30;
        __this_06.fields.m_Normal.fields.z = fVar10;
        __this_06.fields.m_Impulse.fields.x = in_stack_fffffffffffffe38;
        __this_06.fields.m_Impulse.fields.y = in_stack_fffffffffffffe3c;
        __this_06.fields.m_Impulse.fields.z = in_stack_fffffffffffffe40;
        __this_06.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe44;
        __this_06.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe48;
        __this_06.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe48 >> 0x20);
        UVar34 = UnityEngine_ContactPoint__get_normal(__this_06,(MethodInfo *)pUVar24->m_Items);
        in_stack_fffffffffffffe40 = UVar34.fields.z;
        uVar7._0_4_ = (__this_10->fields)._velocity.fields.x;
        uVar7._4_4_ = (__this_10->fields)._velocity.fields.y;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar7;
        in_stack_fffffffffffffe30 = (__this_10->fields)._velocity.fields.z;
        in_stack_fffffffffffffe28 = 0.0;
        in_stack_fffffffffffffe2c = 0.0;
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar33._4_4_ = uVar7._4_4_;
          auVar33._0_4_ = (float)uVar7;
          auVar33._8_4_ = in_stack_fffffffffffffe28;
          auVar33._12_4_ = in_stack_fffffffffffffe2c;
          g_data_057a6845 = '\x01';
        }
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          auVar33._4_4_ = uVar7._4_4_;
          auVar33._0_4_ = (float)uVar7;
          auVar33._8_4_ = in_stack_fffffffffffffe28;
          auVar33._12_4_ = in_stack_fffffffffffffe2c;
        }
        uVar28 = 0;
        uVar29 = 0;
        auVar32._0_4_ =
             in_stack_fffffffffffffe30 * in_stack_fffffffffffffe30 +
             auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
        if (auVar32._0_4_ < 0.0) {
          auVar32._0_4_ = sqrtf(auVar32._0_4_);
          auVar33._4_4_ = uVar7._4_4_;
          auVar33._0_4_ = (float)uVar7;
          auVar33._8_4_ = in_stack_fffffffffffffe28;
          auVar33._12_4_ = in_stack_fffffffffffffe2c;
          uVar28 = extraout_XMM0_Dc_01;
          uVar29 = extraout_XMM0_Dd_01;
          if (1e-05 < auVar32._0_4_) goto label_0420a22f;
label_0420a245:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          auVar31._8_8_ = 0;
          auVar31._0_8_ = **(ulong **)(*(long *)unaff_R12.genericMethod + 0xb8);
          fVar4 = *(float *)(*(ulong **)(*(long *)unaff_R12.genericMethod + 0xb8) + 1);
        }
        else {
          auVar32._0_4_ = SQRT(auVar32._0_4_);
          if (auVar32._0_4_ <= 1e-05) goto label_0420a245;
label_0420a22f:
          fVar4 = in_stack_fffffffffffffe30 / auVar32._0_4_;
          auVar18._4_4_ = auVar32._0_4_;
          auVar18._0_4_ = auVar32._0_4_;
          auVar18._8_4_ = uVar28;
          auVar18._12_4_ = uVar29;
          auVar31 = divps(auVar33,auVar18);
        }
        if (g_data_057a6845 == '\0') {
          uVar7._0_4_ = auVar31._0_4_;
          uVar7._4_4_ = auVar31._4_4_;
          in_stack_fffffffffffffe28 = auVar31._8_4_;
          in_stack_fffffffffffffe2c = auVar31._12_4_;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar31._4_4_ = uVar7._4_4_;
          auVar31._0_4_ = (float)uVar7;
          auVar31._8_4_ = in_stack_fffffffffffffe28;
          auVar31._12_4_ = in_stack_fffffffffffffe2c;
          g_data_057a6845 = '\x01';
          in_stack_fffffffffffffe30 = fVar4;
        }
        fStack_1b0 = UVar34.fields.x;
        fStack_1ac = UVar34.fields.y;
        auVar32._0_4_ = auVar31._0_4_ - fStack_1b0;
        auVar32._4_4_ = auVar31._4_4_ - fStack_1ac;
        auVar32._8_4_ = auVar31._8_4_ - extraout_XMM0_Dc_00;
        auVar32._12_4_ = auVar31._12_4_ - extraout_XMM0_Dd_00;
        fVar4 = fVar4 - in_stack_fffffffffffffe40;
        in_stack_fffffffffffffe20 = (float)uVar7;
        in_stack_fffffffffffffe24 = uVar7._4_4_;
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_fffffffffffffe20 = auVar32._0_4_;
          in_stack_fffffffffffffe24 = auVar32._4_4_;
          in_stack_fffffffffffffe28 = auVar32._8_4_;
          in_stack_fffffffffffffe2c = auVar32._12_4_;
          in_stack_fffffffffffffe30 = fVar4;
        }
        uVar7._4_4_ = auVar32._0_4_;
        uVar28 = 0;
        uVar29 = 0;
        uVar7._0_4_ = fVar4 * fVar4 + auVar32._4_4_ * auVar32._4_4_ + uVar7._4_4_ * uVar7._4_4_;
        if ((float)uVar7 < 0.0) {
          in_stack_fffffffffffffe28 = auVar32._8_4_;
          in_stack_fffffffffffffe2c = auVar32._12_4_;
          uVar7._0_4_ = sqrtf((float)uVar7);
          auVar32._0_4_ = uVar7._4_4_;
          auVar32._8_4_ = in_stack_fffffffffffffe28;
          auVar32._12_4_ = in_stack_fffffffffffffe2c;
          uVar28 = extraout_XMM0_Dc_02;
          uVar29 = extraout_XMM0_Dd_02;
          in_stack_fffffffffffffe20 = uVar7._4_4_;
          in_stack_fffffffffffffe24 = auVar32._4_4_;
          in_stack_fffffffffffffe30 = fVar4;
          if (1e-05 < (float)uVar7) goto label_0420a32b;
label_0420a338:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar30 = **(undefined8 **)(*(long *)unaff_R12.genericMethod + 0xb8);
          fVar4 = *(float *)(*(undefined8 **)(*(long *)unaff_R12.genericMethod + 0xb8) + 1);
        }
        else {
          uVar7._0_4_ = SQRT((float)uVar7);
          if ((float)uVar7 <= 1e-05) goto label_0420a338;
label_0420a32b:
          fVar4 = fVar4 / (float)uVar7;
          auVar17._4_4_ = (float)uVar7;
          auVar17._0_4_ = (float)uVar7;
          auVar17._8_4_ = uVar28;
          auVar17._12_4_ = uVar29;
          auVar33 = divps(auVar32,auVar17);
          uVar30 = auVar33._0_8_;
        }
        (__this_10->fields)._velocity.fields.x = (float)(int)uVar30;
        (__this_10->fields)._velocity.fields.y = (float)(int)((ulong)uVar30 >> 0x20);
        (__this_10->fields)._velocity.fields.z = fVar4;
        pUVar22 = UnityEngine_Collision__get_transform(_Var27.genericMethod,(MethodInfo *)0x0);
        *(UnityEngine_Transform_o **)&(__this_10->fields)._wasMaxRange = pUVar22;
        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._wasMaxRange);
        pUVar22 = UnityEngine_Collision__get_transform(_Var27.genericMethod,(MethodInfo *)0x0);
        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar22 = UnityEngine_Transform__get_root(pUVar22,(MethodInfo *)0x0),
           pUVar22 == (UnityEngine_Transform_o *)0x0)) goto label_0420a85a;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar22,MethodInfo_BaseTitan_GetComponent_BaseTitan);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 == '\0') {
          in_stack_fffffffffffffe20 = 0.1;
        }
        else {
          in_stack_fffffffffffffe20 = 0.5;
        }
        in_stack_fffffffffffffe24 = 0.0;
        in_stack_fffffffffffffe28 = 0.0;
        in_stack_fffffffffffffe2c = 0.0;
        unaff_R15 = UnityEngine_Collision__get_transform(_Var27.genericMethod,(MethodInfo *)0x0);
        pUVar24 = UnityEngine_Collision__get_contacts(_Var27.genericMethod,(MethodInfo *)0x0);
        if (pUVar24 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
      } while ((int)pUVar24->max_length == 0);
      __this_07.fields.m_Point.fields.y = in_stack_fffffffffffffe24;
      __this_07.fields.m_Point.fields.x = in_stack_fffffffffffffe20;
      __this_07.fields.m_Point.fields.z = in_stack_fffffffffffffe28;
      __this_07.fields.m_Normal.fields.x = in_stack_fffffffffffffe2c;
      __this_07.fields.m_Normal.fields.y = in_stack_fffffffffffffe30;
      __this_07.fields.m_Normal.fields.z = fVar10;
      __this_07.fields.m_Impulse.fields.x = in_stack_fffffffffffffe38;
      __this_07.fields.m_Impulse.fields.y = in_stack_fffffffffffffe3c;
      __this_07.fields.m_Impulse.fields.z = in_stack_fffffffffffffe40;
      __this_07.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe44;
      __this_07.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe48;
      __this_07.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe48 >> 0x20);
      UVar34 = UnityEngine_ContactPoint__get_point(__this_07,(MethodInfo *)pUVar24->m_Items);
      if (unaff_R15 == (UnityEngine_Transform_o *)0x0) goto label_0420a85a;
      uVar2 = (__this_10->fields)._velocity.fields.x;
      uVar8 = (__this_10->fields)._velocity.fields.y;
      position.fields.x = UVar34.fields.x + (float)uVar2 * in_stack_fffffffffffffe20;
      position.fields.y = UVar34.fields.y + (float)uVar8 * in_stack_fffffffffffffe20;
      position.fields.z = UVar34.fields.z + (__this_10->fields)._velocity.fields.z * in_stack_fffffffffffffe20
      ;
      in_stack_fffffffffffffe30 = in_stack_fffffffffffffe20;
      fVar10 = in_stack_fffffffffffffe20;
      in_stack_fffffffffffffe38 = in_stack_fffffffffffffe28;
      in_stack_fffffffffffffe3c = in_stack_fffffffffffffe2c;
      UVar34 = UnityEngine_Transform__InverseTransformPoint(unaff_R15,position,(MethodInfo *)0x0);
      (__this_10->fields)._embedParent = UVar34.fields._0_8_;
      (__this_10->fields)._embedPosition.fields.x = UVar34.fields.z;
      unaff_R15 = (__this_10->fields)._transform;
      pUVar24 = UnityEngine_Collision__get_contacts(_Var27.genericMethod,(MethodInfo *)0x0);
      if (pUVar24 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
    } while ((int)pUVar24->max_length == 0);
    __this_08.fields.m_Point.fields.y = in_stack_fffffffffffffe24;
    __this_08.fields.m_Point.fields.x = in_stack_fffffffffffffe20;
    __this_08.fields.m_Point.fields.z = in_stack_fffffffffffffe28;
    __this_08.fields.m_Normal.fields.x = in_stack_fffffffffffffe2c;
    __this_08.fields.m_Normal.fields.y = in_stack_fffffffffffffe30;
    __this_08.fields.m_Normal.fields.z = fVar10;
    __this_08.fields.m_Impulse.fields.x = in_stack_fffffffffffffe38;
    __this_08.fields.m_Impulse.fields.y = in_stack_fffffffffffffe3c;
    __this_08.fields.m_Impulse.fields.z = in_stack_fffffffffffffe40;
    __this_08.fields.m_ThisColliderInstanceID = (int32_t)in_stack_fffffffffffffe44;
    __this_08.fields.m_OtherColliderInstanceID = (int)in_stack_fffffffffffffe48;
    __this_08.fields.m_Separation = (float)(int)((ulong)in_stack_fffffffffffffe48 >> 0x20);
    UVar34 = UnityEngine_ContactPoint__get_point(__this_08,(MethodInfo *)pUVar24->m_Items);
    if (unaff_R15 != (UnityEngine_Transform_o *)0x0) {
      uVar3 = (__this_10->fields)._velocity.fields.x;
      uVar9 = (__this_10->fields)._velocity.fields.y;
      value_02.fields.x = UVar34.fields.x + in_stack_fffffffffffffe30 * (float)uVar3;
      value_02.fields.y = UVar34.fields.y + fVar10 * (float)uVar9;
      value_02.fields.z = UVar34.fields.z + in_stack_fffffffffffffe20 * (__this_10->fields)._velocity.fields.z
      ;
      UnityEngine_Transform__set_position(unaff_R15,value_02,(MethodInfo *)0x0);
      pUVar22 = (__this_10->fields)._transform;
      value_03 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)(__this_10->fields)._velocity.fields,(MethodInfo *)0x0);
      if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar22,value_03,(MethodInfo *)0x0);
        pUVar22 = (__this_10->fields)._transform;
        if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
          fVar4 = (__this_10->fields)._embedPosition.fields.y;
          fVar10 = (__this_10->fields)._embedPosition.fields.z;
          in_stack_fffffffffffffe38 = 0.0;
          in_stack_fffffffffffffe3c = 0.0;
          uVar7._0_4_ = (__this_10->fields)._startPosition.fields.x;
          UVar34 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0);
          uVar7._4_4_ = UVar34.fields.z;
          pMVar26 = extraout_RDX;
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            pMVar26 = extraout_RDX_00;
          }
          auVar19._4_4_ = fVar10;
          auVar19._0_4_ = fVar4;
          auVar19._8_4_ = in_stack_fffffffffffffe38;
          auVar19._12_4_ = in_stack_fffffffffffffe3c;
          fVar4 = fVar4 - UVar34.fields.x;
          auVar32._0_4_ = fVar10 - UVar34.fields.y;
          uVar7._0_4_ = (float)uVar7 - uVar7._4_4_;
          pPVar21 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            in_stack_fffffffffffffe48 = auVar19._8_8_;
            in_stack_fffffffffffffe44 = fVar10;
            il2cpp_runtime_helper_02337ed0();
            pMVar26 = extraout_RDX_01;
          }
          in_stack_fffffffffffffe30 =
               (float)uVar7 * (float)uVar7 + auVar32._0_4_ * auVar32._0_4_ + fVar4 * fVar4;
          if (in_stack_fffffffffffffe30 < 0.0) {
            in_stack_fffffffffffffe30 = sqrtf(in_stack_fffffffffffffe30);
            pMVar26 = extraout_RDX_02;
          }
          else {
            in_stack_fffffffffffffe30 = SQRT(in_stack_fffffffffffffe30);
          }
          in_stack_fffffffffffffe20 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1Time",pMVar26);
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMultiplier",method_00);
          pMVar26 = extraout_RDX_03;
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
            pMVar26 = extraout_RDX_04;
          }
          uVar7._4_4_ = (__this_10->fields).InitialPlayerVelocity.fields.x;
          uVar5 = (__this_10->fields).InitialPlayerVelocity.fields.y;
          uVar11 = (__this_10->fields).InitialPlayerVelocity.fields.z;
          pPVar21 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar26 = extraout_RDX_05;
          }
          uVar7._4_4_ = (float)uVar11 * (float)uVar11 +
                        uVar7._4_4_ * uVar7._4_4_ + (float)uVar5 * (float)uVar5;
          if (uVar7._4_4_ < 0.0) {
            uVar7._4_4_ = sqrtf(uVar7._4_4_);
            pMVar26 = extraout_RDX_06;
          }
          else {
            uVar7._4_4_ = SQRT(uVar7._4_4_);
          }
          in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 + (float)uVar7 * uVar7._4_4_;
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMax",pMVar26);
          if ((float)uVar7 <= in_stack_fffffffffffffe20) {
            in_stack_fffffffffffffe20 = (float)uVar7;
          }
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMin",method_01);
          if (in_stack_fffffffffffffe20 <= (float)uVar7) {
            in_stack_fffffffffffffe20 = (float)uVar7;
          }
          in_stack_fffffffffffffe40 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed2TimeTotal",method_02);
          uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed2TimeMultiplier",method_03);
          uVar7._0_4_ = in_stack_fffffffffffffe40 - in_stack_fffffffffffffe30 * (float)uVar7;
          if ((float)uVar7 <= 0.0) {
            uVar7._0_4_ = 0.0;
          }
          (__this_10->fields)._timeLeft = (float)uVar7 + in_stack_fffffffffffffe20;
          pUVar22 = (__this_10->fields)._transform;
          if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
            UVar34 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0);
            uVar7._0_4_ = UVar34.fields.z;
            uVar30 = UVar34.fields._0_8_;
            uVar6 = (__this_10->fields)._embedPosition.fields.y;
            uVar12 = (__this_10->fields)._embedPosition.fields.z;
            fVar10 = (__this_10->fields)._startPosition.fields.x;
            pMVar26 = extraout_RDX_07;
            if (g_data_057a68cb == '\0') {
              uVar7._4_4_ = UVar34.fields.x;
              auVar32._0_4_ = UVar34.fields.y;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              uVar30 = CONCAT44(auVar32._0_4_,uVar7._4_4_);
              g_data_057a68cb = '\x01';
              pMVar26 = extraout_RDX_08;
            }
            uVar7._4_4_ = (float)((ulong)uVar30 >> 0x20) - (float)uVar12;
            uVar7._0_4_ = (float)uVar7 - fVar10;
            fVar10 = (float)uVar30 - (float)uVar6;
            pPVar21 = TypeInfo_Math;
            if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar26 = extraout_RDX_09;
            }
            fVar10 = fVar10 * fVar10 + uVar7._4_4_ * uVar7._4_4_ + (float)uVar7 * (float)uVar7;
            if (fVar10 < 0.0) {
              fVar10 = sqrtf(fVar10);
              pMVar26 = extraout_RDX_10;
            }
            else {
              fVar10 = SQRT(fVar10);
            }
            uVar7._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"AATriggerRange",pMVar26);
            if (fVar10 < (float)uVar7) {
              *(undefined1 *)&(__this_10->fields)._startPosition.fields.y = 1;
            }
            return;
          }
        }
      }
    }
  } while( true );
}


// Projectiles.ThunderspearProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_ThunderspearProjectile__OnCollisionEnter (Projectiles_ThunderspearProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x4209d80

void Projectiles_ThunderspearProjectile__OnCollisionEnter
               (Projectiles_ThunderspearProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  UnityEngine_Rigidbody_o *pUVar13;
  System_Collections_Generic_List_Collider__o *__this_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_ContactPoint_o __this_05;
  UnityEngine_ContactPoint_o __this_06;
  UnityEngine_ContactPoint_o __this_07;
  UnityEngine_ContactPoint_o __this_08;
  undefined1 auVar16 [16];
  bool_conflict bVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  UnityEngine_ContactPoint_array *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Object_o *x;
  long *plVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *pMVar22;
  Projectiles_ThunderspearProjectile_o *pPVar23;
  long *unaff_R12;
  UnityEngine_Transform_o *unaff_R15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o value_01;
  undefined1 auVar31 [12];
  float in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff4c;
  float in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff54;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  float in_stack_ffffffffffffff60;
  float in_stack_ffffffffffffff64;
  float in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff6c;
  undefined8 in_stack_ffffffffffffff70;
  float fStack_88;
  float fStack_84;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Collider_o *pUStack_58;
  undefined1 auStack_48 [16];
  UnityEngine_Collider_o *pUStack_38;
  
  fVar9 = in_stack_ffffffffffffff5c;
  if (g_data_057ad8f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMax");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeTotal");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMin");
    il2cpp_runtime_helper_023445d0(&"Embed2TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"Embed1Time");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMultiplier");
    il2cpp_runtime_helper_023445d0(&"AATriggerRange");
    g_data_057ad8f7 = '\x01';
    fVar9 = in_stack_ffffffffffffff5c;
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Collider_o *)0x0;
  pPVar18 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar18 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar18->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    if ((char)(__this->fields).Disabled != '\0') {
      return;
    }
    unaff_R15 = (UnityEngine_Transform_o *)&TypeInfo_SettingsManager;
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x58), lVar12 != 0)) &&
       (lVar12 = *(long *)(lVar12 + 0x48), lVar12 != 0)) {
      if (*(char *)(lVar12 + 0x11) != '\0') {
        lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0)) goto label_0420a85a;
        if (*(char *)(lVar12 + 0x11) != '\0') {
          pUVar13 = (__this->fields)._rigidbody;
          if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
            UVar30 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
            in_stack_ffffffffffffff48 = UVar30.fields.z;
            in_stack_ffffffffffffff58 = UVar30.fields.x;
            fVar9 = UVar30.fields.y;
            in_stack_ffffffffffffff60 = extraout_XMM0_Dc;
            in_stack_ffffffffffffff64 = extraout_XMM0_Dd;
            if ((collision != (UnityEngine_Collision_o *)0x0) &&
               (pUVar19 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
               pUVar19 != (UnityEngine_ContactPoint_array *)0x0)) {
              if ((int)pUVar19->max_length == 0) goto label_0420a85f;
              __this_05.fields.m_Point.fields.y = in_stack_ffffffffffffff4c;
              __this_05.fields.m_Point.fields.x = in_stack_ffffffffffffff48;
              __this_05.fields.m_Point.fields.z = in_stack_ffffffffffffff50;
              __this_05.fields.m_Normal.fields.x = in_stack_ffffffffffffff54;
              __this_05.fields.m_Normal.fields.y = in_stack_ffffffffffffff58;
              __this_05.fields.m_Normal.fields.z = fVar9;
              __this_05.fields.m_Impulse.fields.x = in_stack_ffffffffffffff60;
              __this_05.fields.m_Impulse.fields.y = in_stack_ffffffffffffff64;
              __this_05.fields.m_Impulse.fields.z = in_stack_ffffffffffffff68;
              __this_05.fields.m_ThisColliderInstanceID = (int32_t)in_stack_ffffffffffffff6c;
              __this_05.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
              __this_05.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
              UVar30 = UnityEngine_ContactPoint__get_normal(__this_05,(MethodInfo *)pUVar19->m_Items);
              pUVar13 = (__this->fields)._rigidbody;
              if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
                uVar6._0_4_ = (in_stack_ffffffffffffff48 * UVar30.fields.z +
                              fVar9 * UVar30.fields.y + in_stack_ffffffffffffff58 * UVar30.fields.x) * -2.0;
                value.fields.y = ((float)uVar6 * UVar30.fields.y + fVar9) * 0.8;
                value.fields.x = ((float)uVar6 * UVar30.fields.x + in_stack_ffffffffffffff58) * 0.8;
                value.fields.z = ((float)uVar6 * UVar30.fields.z + in_stack_ffffffffffffff48) * 0.8;
                UnityEngine_Rigidbody__set_velocity(pUVar13,value,(MethodInfo *)0x0);
                pUVar13 = (__this->fields)._rigidbody;
                if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
                  UVar30 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
                  (__this->fields)._velocity.fields.x = (float)(int)UVar30.fields._0_8_;
                  (__this->fields)._velocity.fields.y = (float)(int)((ulong)UVar30.fields._0_8_ >> 0x20);
                  (__this->fields)._velocity.fields.z = UVar30.fields.z;
                  return;
                }
              }
            }
          }
          goto label_0420a85a;
        }
      }
      *(undefined1 *)&(__this->fields)._wasImpact = 1;
      pUVar13 = (__this->fields)._rigidbody;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
        unaff_R12 = &TypeInfo_Vector3;
        UnityEngine_Rigidbody__set_velocity
                  (pUVar13,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        __this_00 = (__this->fields)._colliders;
        if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                     (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
          pUStack_58 = pUStack_38;
          pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIStack_60 = (Il2CppType *)auStack_48._8_8_;
          while( true ) {
            __this_01.fields._list._4_4_ = in_stack_ffffffffffffff4c;
            __this_01.fields._list._0_4_ = in_stack_ffffffffffffff48;
            __this_01.fields._index = (int32_t)in_stack_ffffffffffffff50;
            __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
            __this_01.fields._current._0_4_ = in_stack_ffffffffffffff58;
            __this_01.fields._current._4_4_ = fVar9;
            bVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)&pSStack_68);
            if ((char)bVar17 == '\0') {
              __this_02.fields._list._4_4_ = in_stack_ffffffffffffff4c;
              __this_02.fields._list._0_4_ = in_stack_ffffffffffffff48;
              __this_02.fields._index = (int32_t)in_stack_ffffffffffffff50;
              __this_02.fields._version = (int32_t)in_stack_ffffffffffffff54;
              __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
              __this_02.fields._current._4_4_ = fVar9;
              pMVar22 = MethodInfo_Void_Dispose;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_02,(MethodInfo_321A1C0 *)&pSStack_68);
              goto label_0420a0cd;
            }
            if (pUStack_58 == (UnityEngine_Collider_o *)0x0) break;
            UnityEngine_Collider__set_enabled(pUStack_58,0,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
  }
label_0420a85a:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0420a85f:
    do {
      do {
        do {
          auVar31 = il2cpp_runtime_helper_022b2ca0();
          if (auVar31._8_4_ != 1) {
label_0420a8b5:
            __this_04.fields._list._4_4_ = in_stack_ffffffffffffff4c;
            __this_04.fields._list._0_4_ = in_stack_ffffffffffffff48;
            __this_04.fields._index = (int32_t)in_stack_ffffffffffffff50;
            __this_04.fields._version = (int32_t)in_stack_ffffffffffffff54;
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
            __this_04.fields._current._4_4_ = fVar9;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&pSStack_68);
            _Unwind_Resume(auVar31._0_8_);
          }
          plVar21 = (long *)__cxa_begin_catch(auVar31._0_8_);
          lVar12 = *plVar21;
          __cxa_end_catch();
          __this_03.fields._list._4_4_ = in_stack_ffffffffffffff4c;
          __this_03.fields._list._0_4_ = in_stack_ffffffffffffff48;
          __this_03.fields._index = (int32_t)in_stack_ffffffffffffff50;
          __this_03.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
          __this_03.fields._current._4_4_ = fVar9;
          pMVar22 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&pSStack_68);
          if (lVar12 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar12);
            goto label_0420a8b5;
          }
label_0420a0cd:
          lVar12 = *(long *)((long)unaff_R15->klass->static_fields + 0x50);
          if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) ||
             (lVar12 = *(long *)(lVar12 + 0x48), lVar12 == 0)) goto label_0420a85a;
          if ((*(char *)(lVar12 + 0x11) != '\0') || ((char)(__this->fields)._isAA == '\0')) {
            Projectiles_ThunderspearProjectile__Explode(__this,pMVar22);
            return;
          }
          *(undefined1 *)((long)&(__this->fields)._wasImpact + 2) = 1;
          uVar6._0_4_ = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this->fields)._startPosition.fields.z = (float)uVar6;
          if ((collision == (UnityEngine_Collision_o *)0x0) ||
             (pUVar19 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
             pUVar19 == (UnityEngine_ContactPoint_array *)0x0)) goto label_0420a85a;
        } while ((int)pUVar19->max_length == 0);
        __this_06.fields.m_Point.fields.y = in_stack_ffffffffffffff4c;
        __this_06.fields.m_Point.fields.x = in_stack_ffffffffffffff48;
        __this_06.fields.m_Point.fields.z = in_stack_ffffffffffffff50;
        __this_06.fields.m_Normal.fields.x = in_stack_ffffffffffffff54;
        __this_06.fields.m_Normal.fields.y = in_stack_ffffffffffffff58;
        __this_06.fields.m_Normal.fields.z = fVar9;
        __this_06.fields.m_Impulse.fields.x = in_stack_ffffffffffffff60;
        __this_06.fields.m_Impulse.fields.y = in_stack_ffffffffffffff64;
        __this_06.fields.m_Impulse.fields.z = in_stack_ffffffffffffff68;
        __this_06.fields.m_ThisColliderInstanceID = (int32_t)in_stack_ffffffffffffff6c;
        __this_06.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
        __this_06.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
        UVar30 = UnityEngine_ContactPoint__get_normal(__this_06,(MethodInfo *)pUVar19->m_Items);
        in_stack_ffffffffffffff68 = UVar30.fields.z;
        uVar6._0_4_ = (__this->fields)._velocity.fields.x;
        uVar6._4_4_ = (__this->fields)._velocity.fields.y;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar6;
        in_stack_ffffffffffffff58 = (__this->fields)._velocity.fields.z;
        in_stack_ffffffffffffff50 = 0.0;
        in_stack_ffffffffffffff54 = 0.0;
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar29._4_4_ = uVar6._4_4_;
          auVar29._0_4_ = (float)uVar6;
          auVar29._8_4_ = in_stack_ffffffffffffff50;
          auVar29._12_4_ = in_stack_ffffffffffffff54;
          g_data_057a6845 = '\x01';
        }
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          auVar29._4_4_ = uVar6._4_4_;
          auVar29._0_4_ = (float)uVar6;
          auVar29._8_4_ = in_stack_ffffffffffffff50;
          auVar29._12_4_ = in_stack_ffffffffffffff54;
        }
        uVar24 = 0;
        uVar25 = 0;
        auVar28._0_4_ =
             in_stack_ffffffffffffff58 * in_stack_ffffffffffffff58 +
             auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
        if (auVar28._0_4_ < 0.0) {
          auVar28._0_4_ = sqrtf(auVar28._0_4_);
          auVar29._4_4_ = uVar6._4_4_;
          auVar29._0_4_ = (float)uVar6;
          auVar29._8_4_ = in_stack_ffffffffffffff50;
          auVar29._12_4_ = in_stack_ffffffffffffff54;
          uVar24 = extraout_XMM0_Dc_01;
          uVar25 = extraout_XMM0_Dd_01;
          if (1e-05 < auVar28._0_4_) goto label_0420a22f;
label_0420a245:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          auVar27._8_8_ = 0;
          auVar27._0_8_ = **(ulong **)(*unaff_R12 + 0xb8);
          fVar3 = *(float *)(*(ulong **)(*unaff_R12 + 0xb8) + 1);
        }
        else {
          auVar28._0_4_ = SQRT(auVar28._0_4_);
          if (auVar28._0_4_ <= 1e-05) goto label_0420a245;
label_0420a22f:
          fVar3 = in_stack_ffffffffffffff58 / auVar28._0_4_;
          auVar15._4_4_ = auVar28._0_4_;
          auVar15._0_4_ = auVar28._0_4_;
          auVar15._8_4_ = uVar24;
          auVar15._12_4_ = uVar25;
          auVar27 = divps(auVar29,auVar15);
        }
        if (g_data_057a6845 == '\0') {
          uVar6._0_4_ = auVar27._0_4_;
          uVar6._4_4_ = auVar27._4_4_;
          in_stack_ffffffffffffff50 = auVar27._8_4_;
          in_stack_ffffffffffffff54 = auVar27._12_4_;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          auVar27._4_4_ = uVar6._4_4_;
          auVar27._0_4_ = (float)uVar6;
          auVar27._8_4_ = in_stack_ffffffffffffff50;
          auVar27._12_4_ = in_stack_ffffffffffffff54;
          g_data_057a6845 = '\x01';
          in_stack_ffffffffffffff58 = fVar3;
        }
        fStack_88 = UVar30.fields.x;
        fStack_84 = UVar30.fields.y;
        auVar28._0_4_ = auVar27._0_4_ - fStack_88;
        auVar28._4_4_ = auVar27._4_4_ - fStack_84;
        auVar28._8_4_ = auVar27._8_4_ - extraout_XMM0_Dc_00;
        auVar28._12_4_ = auVar27._12_4_ - extraout_XMM0_Dd_00;
        fVar3 = fVar3 - in_stack_ffffffffffffff68;
        in_stack_ffffffffffffff48 = (float)uVar6;
        in_stack_ffffffffffffff4c = uVar6._4_4_;
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_ffffffffffffff48 = auVar28._0_4_;
          in_stack_ffffffffffffff4c = auVar28._4_4_;
          in_stack_ffffffffffffff50 = auVar28._8_4_;
          in_stack_ffffffffffffff54 = auVar28._12_4_;
          in_stack_ffffffffffffff58 = fVar3;
        }
        uVar6._4_4_ = auVar28._0_4_;
        uVar24 = 0;
        uVar25 = 0;
        uVar6._0_4_ = fVar3 * fVar3 + auVar28._4_4_ * auVar28._4_4_ + uVar6._4_4_ * uVar6._4_4_;
        if ((float)uVar6 < 0.0) {
          in_stack_ffffffffffffff50 = auVar28._8_4_;
          in_stack_ffffffffffffff54 = auVar28._12_4_;
          uVar6._0_4_ = sqrtf((float)uVar6);
          auVar28._0_4_ = uVar6._4_4_;
          auVar28._8_4_ = in_stack_ffffffffffffff50;
          auVar28._12_4_ = in_stack_ffffffffffffff54;
          uVar24 = extraout_XMM0_Dc_02;
          uVar25 = extraout_XMM0_Dd_02;
          in_stack_ffffffffffffff48 = uVar6._4_4_;
          in_stack_ffffffffffffff4c = auVar28._4_4_;
          in_stack_ffffffffffffff58 = fVar3;
          if (1e-05 < (float)uVar6) goto label_0420a32b;
label_0420a338:
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar26 = **(undefined8 **)(*unaff_R12 + 0xb8);
          fVar3 = *(float *)(*(undefined8 **)(*unaff_R12 + 0xb8) + 1);
        }
        else {
          uVar6._0_4_ = SQRT((float)uVar6);
          if ((float)uVar6 <= 1e-05) goto label_0420a338;
label_0420a32b:
          fVar3 = fVar3 / (float)uVar6;
          auVar14._4_4_ = (float)uVar6;
          auVar14._0_4_ = (float)uVar6;
          auVar14._8_4_ = uVar24;
          auVar14._12_4_ = uVar25;
          auVar29 = divps(auVar28,auVar14);
          uVar26 = auVar29._0_8_;
        }
        (__this->fields)._velocity.fields.x = (float)(int)uVar26;
        (__this->fields)._velocity.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
        (__this->fields)._velocity.fields.z = fVar3;
        pUVar20 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
        *(UnityEngine_Transform_o **)&(__this->fields)._wasMaxRange = pUVar20;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._wasMaxRange);
        pUVar20 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
        if ((pUVar20 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar20 = UnityEngine_Transform__get_root(pUVar20,(MethodInfo *)0x0),
           pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_0420a85a;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar20,MethodInfo_BaseTitan_GetComponent_BaseTitan);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar17 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar17 == '\0') {
          in_stack_ffffffffffffff48 = 0.1;
        }
        else {
          in_stack_ffffffffffffff48 = 0.5;
        }
        in_stack_ffffffffffffff4c = 0.0;
        in_stack_ffffffffffffff50 = 0.0;
        in_stack_ffffffffffffff54 = 0.0;
        unaff_R15 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
        pUVar19 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
      } while ((int)pUVar19->max_length == 0);
      __this_07.fields.m_Point.fields.y = in_stack_ffffffffffffff4c;
      __this_07.fields.m_Point.fields.x = in_stack_ffffffffffffff48;
      __this_07.fields.m_Point.fields.z = in_stack_ffffffffffffff50;
      __this_07.fields.m_Normal.fields.x = in_stack_ffffffffffffff54;
      __this_07.fields.m_Normal.fields.y = in_stack_ffffffffffffff58;
      __this_07.fields.m_Normal.fields.z = fVar9;
      __this_07.fields.m_Impulse.fields.x = in_stack_ffffffffffffff60;
      __this_07.fields.m_Impulse.fields.y = in_stack_ffffffffffffff64;
      __this_07.fields.m_Impulse.fields.z = in_stack_ffffffffffffff68;
      __this_07.fields.m_ThisColliderInstanceID = (int32_t)in_stack_ffffffffffffff6c;
      __this_07.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
      __this_07.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      UVar30 = UnityEngine_ContactPoint__get_point(__this_07,(MethodInfo *)pUVar19->m_Items);
      if (unaff_R15 == (UnityEngine_Transform_o *)0x0) goto label_0420a85a;
      uVar1 = (__this->fields)._velocity.fields.x;
      uVar7 = (__this->fields)._velocity.fields.y;
      position.fields.x = UVar30.fields.x + (float)uVar1 * in_stack_ffffffffffffff48;
      position.fields.y = UVar30.fields.y + (float)uVar7 * in_stack_ffffffffffffff48;
      position.fields.z = UVar30.fields.z + (__this->fields)._velocity.fields.z * in_stack_ffffffffffffff48;
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff48;
      fVar9 = in_stack_ffffffffffffff48;
      in_stack_ffffffffffffff60 = in_stack_ffffffffffffff50;
      in_stack_ffffffffffffff64 = in_stack_ffffffffffffff54;
      UVar30 = UnityEngine_Transform__InverseTransformPoint(unaff_R15,position,(MethodInfo *)0x0);
      (__this->fields)._embedParent = UVar30.fields._0_8_;
      (__this->fields)._embedPosition.fields.x = UVar30.fields.z;
      unaff_R15 = (__this->fields)._transform;
      pUVar19 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
      if (pUVar19 == (UnityEngine_ContactPoint_array *)0x0) goto label_0420a85a;
    } while ((int)pUVar19->max_length == 0);
    __this_08.fields.m_Point.fields.y = in_stack_ffffffffffffff4c;
    __this_08.fields.m_Point.fields.x = in_stack_ffffffffffffff48;
    __this_08.fields.m_Point.fields.z = in_stack_ffffffffffffff50;
    __this_08.fields.m_Normal.fields.x = in_stack_ffffffffffffff54;
    __this_08.fields.m_Normal.fields.y = in_stack_ffffffffffffff58;
    __this_08.fields.m_Normal.fields.z = fVar9;
    __this_08.fields.m_Impulse.fields.x = in_stack_ffffffffffffff60;
    __this_08.fields.m_Impulse.fields.y = in_stack_ffffffffffffff64;
    __this_08.fields.m_Impulse.fields.z = in_stack_ffffffffffffff68;
    __this_08.fields.m_ThisColliderInstanceID = (int32_t)in_stack_ffffffffffffff6c;
    __this_08.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
    __this_08.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
    UVar30 = UnityEngine_ContactPoint__get_point(__this_08,(MethodInfo *)pUVar19->m_Items);
    if (unaff_R15 != (UnityEngine_Transform_o *)0x0) {
      uVar2 = (__this->fields)._velocity.fields.x;
      uVar8 = (__this->fields)._velocity.fields.y;
      value_00.fields.x = UVar30.fields.x + in_stack_ffffffffffffff58 * (float)uVar2;
      value_00.fields.y = UVar30.fields.y + fVar9 * (float)uVar8;
      value_00.fields.z = UVar30.fields.z + in_stack_ffffffffffffff48 * (__this->fields)._velocity.fields.z;
      UnityEngine_Transform__set_position(unaff_R15,value_00,(MethodInfo *)0x0);
      pUVar20 = (__this->fields)._transform;
      value_01 = UnityEngine_Quaternion__LookRotation_4debb20
                           ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0);
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar20,value_01,(MethodInfo *)0x0);
        pUVar20 = (__this->fields)._transform;
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          fVar3 = (__this->fields)._embedPosition.fields.y;
          fVar9 = (__this->fields)._embedPosition.fields.z;
          in_stack_ffffffffffffff60 = 0.0;
          in_stack_ffffffffffffff64 = 0.0;
          uVar6._0_4_ = (__this->fields)._startPosition.fields.x;
          UVar30 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
          uVar6._4_4_ = UVar30.fields.z;
          pMVar22 = extraout_RDX;
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            pMVar22 = extraout_RDX_00;
          }
          auVar16._4_4_ = fVar9;
          auVar16._0_4_ = fVar3;
          auVar16._8_4_ = in_stack_ffffffffffffff60;
          auVar16._12_4_ = in_stack_ffffffffffffff64;
          fVar3 = fVar3 - UVar30.fields.x;
          auVar28._0_4_ = fVar9 - UVar30.fields.y;
          uVar6._0_4_ = (float)uVar6 - uVar6._4_4_;
          pPVar23 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            in_stack_ffffffffffffff70 = auVar16._8_8_;
            in_stack_ffffffffffffff6c = fVar9;
            il2cpp_runtime_helper_02337ed0();
            pMVar22 = extraout_RDX_01;
          }
          in_stack_ffffffffffffff58 =
               (float)uVar6 * (float)uVar6 + auVar28._0_4_ * auVar28._0_4_ + fVar3 * fVar3;
          if (in_stack_ffffffffffffff58 < 0.0) {
            in_stack_ffffffffffffff58 = sqrtf(in_stack_ffffffffffffff58);
            pMVar22 = extraout_RDX_02;
          }
          else {
            in_stack_ffffffffffffff58 = SQRT(in_stack_ffffffffffffff58);
          }
          in_stack_ffffffffffffff48 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed1Time",pMVar22);
          uVar6._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed1TimeMultiplier",method_00);
          pMVar22 = extraout_RDX_03;
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
            pMVar22 = extraout_RDX_04;
          }
          uVar6._4_4_ = (__this->fields).InitialPlayerVelocity.fields.x;
          uVar4 = (__this->fields).InitialPlayerVelocity.fields.y;
          uVar10 = (__this->fields).InitialPlayerVelocity.fields.z;
          pPVar23 = TypeInfo_Math;
          if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar22 = extraout_RDX_05;
          }
          uVar6._4_4_ = (float)uVar10 * (float)uVar10 +
                        uVar6._4_4_ * uVar6._4_4_ + (float)uVar4 * (float)uVar4;
          if (uVar6._4_4_ < 0.0) {
            uVar6._4_4_ = sqrtf(uVar6._4_4_);
            pMVar22 = extraout_RDX_06;
          }
          else {
            uVar6._4_4_ = SQRT(uVar6._4_4_);
          }
          in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 + (float)uVar6 * uVar6._4_4_;
          uVar6._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed1TimeMax",pMVar22);
          if ((float)uVar6 <= in_stack_ffffffffffffff48) {
            in_stack_ffffffffffffff48 = (float)uVar6;
          }
          uVar6._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed1TimeMin",method_01);
          if (in_stack_ffffffffffffff48 <= (float)uVar6) {
            in_stack_ffffffffffffff48 = (float)uVar6;
          }
          in_stack_ffffffffffffff68 =
               Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed2TimeTotal",method_02);
          uVar6._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar23,"Embed2TimeMultiplier",method_03);
          uVar6._0_4_ = in_stack_ffffffffffffff68 - in_stack_ffffffffffffff58 * (float)uVar6;
          if ((float)uVar6 <= 0.0) {
            uVar6._0_4_ = 0.0;
          }
          (__this->fields)._timeLeft = (float)uVar6 + in_stack_ffffffffffffff48;
          pUVar20 = (__this->fields)._transform;
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            UVar30 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
            uVar6._0_4_ = UVar30.fields.z;
            uVar26 = UVar30.fields._0_8_;
            uVar5 = (__this->fields)._embedPosition.fields.y;
            uVar11 = (__this->fields)._embedPosition.fields.z;
            fVar9 = (__this->fields)._startPosition.fields.x;
            pMVar22 = extraout_RDX_07;
            if (g_data_057a68cb == '\0') {
              uVar6._4_4_ = UVar30.fields.x;
              auVar28._0_4_ = UVar30.fields.y;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              uVar26 = CONCAT44(auVar28._0_4_,uVar6._4_4_);
              g_data_057a68cb = '\x01';
              pMVar22 = extraout_RDX_08;
            }
            uVar6._4_4_ = (float)((ulong)uVar26 >> 0x20) - (float)uVar11;
            uVar6._0_4_ = (float)uVar6 - fVar9;
            fVar9 = (float)uVar26 - (float)uVar5;
            pPVar23 = TypeInfo_Math;
            if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar22 = extraout_RDX_09;
            }
            fVar9 = fVar9 * fVar9 + uVar6._4_4_ * uVar6._4_4_ + (float)uVar6 * (float)uVar6;
            if (fVar9 < 0.0) {
              fVar9 = sqrtf(fVar9);
              pMVar22 = extraout_RDX_10;
            }
            else {
              fVar9 = SQRT(fVar9);
            }
            uVar6._0_4_ = Projectiles_ThunderspearProjectile__GetStat(pPVar23,"AATriggerRange",pMVar22);
            if (fVar9 < (float)uVar6) {
              *(undefined1 *)&(__this->fields)._startPosition.fields.y = 1;
            }
            return;
          }
        }
      }
    }
  } while( true );
}


// Projectiles.ThunderspearProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_ThunderspearProjectile__OnExceedLiveTime (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420af90

void Projectiles_ThunderspearProjectile__OnExceedLiveTime
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  *(undefined1 *)((long)&(__this->fields)._wasImpact + 1) = 1;
  if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
    vtableDispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._17_DestroySelf.method,in_RDX,vtableDispatch);
    return;
  }
  Projectiles_ThunderspearProjectile__Explode(__this,method);
  return;
}


// Projectiles.ThunderspearProjectile$$Explode
// il2cpp: void Projectiles_ThunderspearProjectile__Explode (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420a8f0

void Projectiles_ThunderspearProjectile__Explode
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  System_String_o *name;
  code *vtableDispatch;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *settings;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  Projectiles_ThunderspearProjectile_o *pPVar8;
  long *plVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  System_String_o **__this_00;
  Projectiles_ThunderspearProjectile_o *pPVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  float local_98;
  
  __this_00 = (System_String_o **)__this;
  if (g_data_057ad8f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TSKillType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearProjectile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMax");
    il2cpp_runtime_helper_023445d0(&"RestrictAngleEmbed1");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"RadiusEmbed2Multiplier");
    il2cpp_runtime_helper_023445d0(&"Embed1TimeMin");
    il2cpp_runtime_helper_023445d0(&"RestrictAngleEmbed2");
    il2cpp_runtime_helper_023445d0(&"RadiusEmbed1Multiplier");
    il2cpp_runtime_helper_023445d0(&"Embed1Time");
    __this_00 = &"Embed1TimeMultiplier";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8f8 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pMVar10 = "RestrictAngle";
  local_98 = Projectiles_ThunderspearProjectile__GetStat
                       ((Projectiles_ThunderspearProjectile_o *)__this_00,(System_String_o *)"RestrictAngle",
                        in_RDX);
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) ||
     (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) {
label_0420ae91:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
        pPVar13 = (Projectiles_ThunderspearProjectile_o *)0x0;
        fVar14 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
        fVar17 = (__this->fields)._startPosition.fields.z;
        fVar18 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"Embed1Time",method_00);
        fVar15 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"Embed1TimeMultiplier",method_01);
        pMVar10 = extraout_RDX_00;
        if (g_data_057a6841 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          pMVar10 = extraout_RDX_01;
        }
        fVar16 = (__this->fields).InitialPlayerVelocity.fields.x;
        uVar1 = (__this->fields).InitialPlayerVelocity.fields.y;
        uVar2 = (__this->fields).InitialPlayerVelocity.fields.z;
        pPVar13 = TypeInfo_Math;
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar10 = extraout_RDX_02;
        }
        fVar16 = (float)uVar2 * (float)uVar2 + fVar16 * fVar16 + (float)uVar1 * (float)uVar1;
        if (fVar16 < 0.0) {
          fVar16 = sqrtf(fVar16);
          pMVar10 = extraout_RDX_03;
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        fVar18 = fVar18 + fVar15 * fVar16;
        fVar15 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"Embed1TimeMax",pMVar10);
        if (fVar15 <= fVar18) {
          fVar18 = fVar15;
        }
        fVar15 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"Embed1TimeMin",method_02);
        if (fVar18 <= fVar15) {
          fVar18 = fVar15;
        }
        fVar15 = (__this->fields)._radius;
        if (fVar14 - fVar17 <= fVar18) {
          fVar17 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"RadiusEmbed1Multiplier",method_03);
          (__this->fields)._radius = fVar15 * fVar17;
          pMVar10 = "RestrictAngleEmbed1";
          local_98 = Projectiles_ThunderspearProjectile__GetStat
                               (pPVar13,(System_String_o *)"RestrictAngleEmbed1",method_05);
          if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
        }
        else {
          fVar17 = Projectiles_ThunderspearProjectile__GetStat(pPVar13,"RadiusEmbed2Multiplier",method_03);
          (__this->fields)._radius = fVar15 * fVar17;
          pMVar10 = "RestrictAngleEmbed2";
          local_98 = Projectiles_ThunderspearProjectile__GetStat
                               (pPVar13,(System_String_o *)"RestrictAngleEmbed2",method_04);
        }
      }
      fVar17 = (__this->fields)._radius;
      fVar18 = fVar17 * 4.0;
    }
    else {
      fVar17 = (__this->fields)._radius;
      fVar18 = fVar17 + fVar17;
    }
    Projectiles_ThunderspearProjectile__KillPlayersInRadius(__this,fVar17,pMVar10);
    Projectiles_ThunderspearProjectile__KillTitansInRadius(__this,(__this->fields)._radius,local_98,pMVar10);
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0420ae91;
    position = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0420ae91;
    rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
    settings = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color);
    if (settings == (System_Object_array *)0x0) goto label_0420ae91;
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
    goto label_0420ae9b;
    if ((int)settings->max_length != 0) {
      settings->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(settings->m_Items,pIVar5);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_TSKillType);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_0420ae9b;
      if (1 < (uint)settings->max_length) {
        settings->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(settings->m_Items + 1,pIVar5);
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_0420ae9b;
        if (2 < (uint)settings->max_length) {
          settings->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(settings->m_Items + 2,pIVar5);
          pMVar10 = (MethodInfo *)0x1;
          Effects_EffectSpawner__Spawn(name,position,rotation,fVar18,1,settings,(MethodInfo *)0x0);
          Projectiles_ThunderspearProjectile__StunMyHuman(__this,pMVar10);
          (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                    (__this,(__this->klass->vtable)._17_DestroySelf.method);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0420ae9b:
  uVar7 = il2cpp_runtime_helper_0231b270();
  pMVar11 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2b10(uVar7);
  pMVar10 = pMVar11;
  if (g_data_057ad8fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fe = '\x01';
    iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar13 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar12 = "Thunderspear";
  }
  else {
    pPVar13 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar12 = "Thunderspear";
  }
  "Thunderspear" = pMVar12;
  if (((pPVar13 != (Projectiles_ThunderspearProjectile_o *)0x0) &&
      (pPVar8 = (Projectiles_ThunderspearProjectile_o *)
                (*(pPVar13->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                          (pPVar13,pMVar12,(pPVar13->klass->vtable)._7_ReceiveCustomStream.method),
      pMVar10 = pMVar12, pPVar8 != (Projectiles_ThunderspearProjectile_o *)0x0)) &&
     (plVar9 = (long *)(*(pPVar8->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                 (pPVar8,pMVar11,(pPVar8->klass->vtable)._7_ReceiveCustomStream.method),
     pMVar10 = pMVar11, pPVar13 = pPVar8, plVar9 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar9 + 0x388);
    (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x390),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pPVar13->fields)._wasImpact + 1) = 1;
  if (*(char *)((long)&(pPVar13->fields)._wasImpact + 2) != '\0') {
    (*(pPVar13->klass->vtable)._17_DestroySelf.methodPtr)();
    return;
  }
  Projectiles_ThunderspearProjectile__Explode(pPVar13,pMVar10);
  return;
}


// Projectiles.ThunderspearProjectile$$StunMyHuman
// il2cpp: void Projectiles_ThunderspearProjectile__StunMyHuman (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420c100

void Projectiles_ThunderspearProjectile__StunMyHuman
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  System_Action_Hashtable__o *pSVar3;
  undefined4 uVar4;
  float fVar5;
  byte bVar6;
  Characters_BaseCharacter_o *pCVar7;
  long lVar8;
  System_String_o *x;
  Photon_Pun_PhotonView_o *pPVar9;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Object_o *x_00;
  undefined1 auVar10 [16];
  UnityEngine_RaycastHit_o __this_01;
  bool_conflict bVar11;
  int32_t layerMask;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_List_ParticleSystem__o *__this_04;
  long *plVar12;
  UnityEngine_Transform_o *pUVar13;
  Projectiles_ThunderspearProjectile_o *pPVar14;
  Projectiles_ThunderspearProjectile_o *pPVar15;
  MethodInfo *method_00;
  Projectiles_ThunderspearProjectile_o *__this_05;
  long *unaff_R14;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Quaternion_o value;
  undefined4 in_stack_fffffffffffffeb0;
  float fVar26;
  undefined1 auStack_120 [28];
  float fStack_104;
  float fStack_100;
  undefined8 uStack_fc;
  Projectiles_ThunderspearProjectile_o *pPStack_f0;
  Characters_Human_o *pCStack_e8;
  float local_58;
  float fStack_54;
  
  if (g_data_057ad8f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"StunRange");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8f9 = '\x01';
  }
  pCVar7 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar11 != '\0') ||
     (pCVar7 = (__this->fields)._owner, pCVar7 == (Characters_BaseCharacter_o *)0x0)) {
    return;
  }
  bVar6 = (TypeInfo_Human->_2).naturalAligment;
  if ((pCVar7->klass->_2).naturalAligment < bVar6) {
    return;
  }
  if ((pCVar7->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_Human) {
    return;
  }
  bVar11 = Characters_BaseCharacter__IsMainCharacter(pCVar7,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) ||
     (lVar8 = *(long *)(lVar8 + 0x48), lVar8 == 0)) {
label_0420c43d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar8 + 0x11) != '\0') {
      return;
    }
    unaff_R14 = &TypeInfo_CharacterData;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar12 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    if (((plVar12 == (long *)0x0) ||
        (plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                     (plVar12,"Thunderspear",*(undefined8 *)(*plVar12 + 0x1b0)),
        plVar12 == (long *)0x0)) ||
       (plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                    (plVar12,"StunRange",*(undefined8 *)(*plVar12 + 0x1b0)),
       plVar12 == (long *)0x0)) goto label_0420c43d;
    fVar16 = (float)(**(code **)(*plVar12 + 0x388))(plVar12);
    pCVar7 = (__this->fields)._owner;
    if (((pCVar7 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar8 = *(long *)&(pCVar7->fields).Dead, lVar8 == 0)) ||
       (pUVar13 = *(UnityEngine_Transform_o **)(lVar8 + 0x10), pUVar13 == (UnityEngine_Transform_o *)0x0))
    goto label_0420c43d;
    UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420c43d;
    UVar25 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    if (g_data_057a68cb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
    }
    local_58 = UVar24.fields.x;
    fStack_54 = UVar24.fields.y;
    fStack_54 = fStack_54 - UVar25.fields.y;
    fVar22 = UVar24.fields.z - UVar25.fields.z;
    local_58 = local_58 - UVar25.fields.x;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar22 = local_58 * local_58 + fStack_54 * fStack_54 + fVar22 * fVar22;
    if (fVar22 < 0.0) {
      fVar22 = sqrtf(fVar22);
    }
    else {
      fVar22 = SQRT(fVar22);
    }
    if (fVar16 <= fVar22) {
      return;
    }
    unaff_R14 = (long *)(__this->fields)._owner;
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar13 == (UnityEngine_Transform_o *)0x0) ||
       (UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0),
       (Characters_Human_o *)unaff_R14 == (Characters_Human_o *)0x0)) goto label_0420c43d;
    bVar6 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar6 <= (((Characters_Human_o *)unaff_R14)->klass->_2).naturalAligment) &&
       ((((Characters_Human_o *)unaff_R14)->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_Human)) {
      Characters_Human__GetStunnedByTS((Characters_Human_o *)unaff_R14,UVar24,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fc = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_0420c505;
label_0420c47b:
    __this_05 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_0420c47b;
label_0420c505:
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((__this_05 != (Projectiles_ThunderspearProjectile_o *)0x0) &&
      (pPVar14 = (Projectiles_ThunderspearProjectile_o *)
                 (*(__this_05->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                           (__this_05,"Thunderspear",(__this_05->klass->vtable)._7_ReceiveCustomStream.method),
      pPVar14 != (Projectiles_ThunderspearProjectile_o *)0x0)) &&
     (pPVar15 = (Projectiles_ThunderspearProjectile_o *)
                (*(pPVar14->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                          (pPVar14,"DamageMultiplier",(pPVar14->klass->vtable)._7_ReceiveCustomStream.method),
     __this_05 = pPVar14, pPVar15 != (Projectiles_ThunderspearProjectile_o *)0x0)) {
    (**(code **)&pPVar15->klass[1]._2.thread_static_fields_offset)();
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    __this_05 = pPVar15;
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0)) && (*(long *)(lVar8 + 0x48) != 0)) {
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar16 = *(float *)((long)&(((Characters_Human_o *)unaff_R14)->fields).OutlineComponent + 4);
      pSVar3 = (((Characters_Human_o *)unaff_R14)->fields).OnPlayerPropertiesChanged;
      fVar22 = SUB84(pSVar3,0);
      fVar2 = (float)((ulong)pSVar3 >> 0x20);
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar16 = fVar2 * fVar2 + fVar16 * fVar16 + fVar22 * fVar22;
      if (fVar16 < 0.0) {
        sqrtf(fVar16);
      }
      x = (((Characters_Human_o *)unaff_R14)->fields).Team;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar14 = __this_05;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this_05,(MethodInfo *)0x0);
  pPVar9 = (__this_05->fields)._photonView;
  if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar9->fields)._IsMine_k__BackingField != '\0') {
      fVar16 = (__this_05->fields)._timeLeft;
      pPVar14 = (Projectiles_ThunderspearProjectile_o *)0x0;
      fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar16 = fVar16 - fVar22;
      (__this_05->fields)._timeLeft = fVar16;
      if (fVar16 <= 0.0) {
        pPVar14 = __this_05;
        (*(__this_05->klass->vtable)._16_OnExceedLiveTime.methodPtr)();
      }
    }
    pPVar9 = (__this_05->fields)._photonView;
    if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((char)(pPVar9->fields)._IsMine_k__BackingField == '\0') {
        return;
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar16 = (__this_05->fields)._velocity.fields.x;
      uVar1 = (__this_05->fields)._velocity.fields.y;
      uVar4 = (__this_05->fields)._velocity.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar16 = (float)uVar4 * (float)uVar4 + fVar16 * fVar16 + (float)uVar1 * (float)uVar1;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      if (fVar16 <= 0.0) {
        return;
      }
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      pPVar14 = (Projectiles_ThunderspearProjectile_o *)0x0;
      value = UnityEngine_Quaternion__LookRotation_4debb20
                        ((UnityEngine_Vector3_o)(__this_05->fields)._velocity.fields,(MethodInfo *)0x0);
      unaff_R14 = (long *)0x0;
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar13,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plVar12 = (long *)pPVar14;
  pPStack_f0 = __this_05;
  pCStack_e8 = (Characters_Human_o *)unaff_R14;
  if (g_data_057ad8fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar12 = &TypeInfo_ThunderspearProjectile;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8fd = '\x01';
  }
  fStack_100 = 0.0;
  uStack_fc = 0;
  auStack_120._16_8_ = 0;
  auStack_120._24_4_ = 0;
  fStack_104 = 0.0;
  auStack_120._0_8_ = (Projectiles_ThunderspearProjectile_c *)0x0;
  auStack_120._8_8_ = (void *)0x0;
  pPVar9 = (pPVar14->fields)._photonView;
  if (pPVar9 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420cc7c;
  if ((char)(pPVar9->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  if (*(char *)((long)&(pPVar14->fields)._wasImpact + 2) != '\0') {
    __this_00 = (pPVar14->fields)._rigidbody;
    if (g_data_057a65d5 == '\0') {
      plVar12 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_velocity
                (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      x_00 = *(UnityEngine_Object_o **)&(pPVar14->fields)._wasMaxRange;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
label_0420c982:
        pCVar7 = (pPVar14->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (*(char *)&(pPVar14->fields)._startPosition.fields.y == '\0') {
          return;
        }
        Projectiles_ThunderspearProjectile__Explode(pPVar14,method_00);
        return;
      }
      plVar12 = *(long **)&(pPVar14->fields)._wasMaxRange;
      if ((Projectiles_ThunderspearProjectile_o *)plVar12 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        pUVar13 = (pPVar14->fields)._transform;
        UVar24 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)plVar12,
                            *(UnityEngine_Vector3_Fields *)&(pPVar14->fields)._embedParent,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar13,UVar24,(MethodInfo *)0x0);
          goto label_0420c982;
        }
      }
    }
    goto label_0420cc7c;
  }
  plVar12 = (long *)pPVar14;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
  if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
  UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
  fVar22 = UVar24.fields.z;
  auVar21._0_8_ = UVar24.fields._0_8_;
  auVar21._8_4_ = extraout_XMM0_Dc;
  auVar21._12_4_ = extraout_XMM0_Dd;
  fVar2 = (pPVar14->fields)._lastPosition.fields.x;
  fVar5 = (pPVar14->fields)._lastPosition.fields.y;
  fVar16 = (pPVar14->fields)._lastPosition.fields.z;
  fVar26 = 0.0;
  if (g_data_057a6845 == '\0') {
    auVar20._0_8_ = auVar21._8_8_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar21._8_8_ = auVar20._0_8_;
    g_data_057a6845 = '\x01';
  }
  auVar20._0_8_ = CONCAT44(auVar21._4_4_ - fVar5,auVar21._0_4_ - fVar2);
  auVar20._8_4_ = auVar21._8_4_ - fVar26;
  auVar20._12_4_ = auVar21._12_4_ - 0.0;
  fVar22 = fVar22 - fVar16;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auVar21._0_8_ = auVar20._8_8_;
    il2cpp_runtime_helper_02337ed0();
    auVar20._8_8_ = auVar21._0_8_;
  }
  fVar23 = fVar22 * fVar22 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
  if (fVar23 < 0.0) {
    auVar21._0_8_ = auVar20._0_8_;
    auVar20._0_8_ = auVar20._8_8_;
    fVar17 = sqrtf(fVar23);
    auVar20._8_8_ = auVar20._0_8_;
    auVar20._0_8_ = auVar21._0_8_;
    uVar18 = extraout_XMM0_Dc_00;
    uVar19 = extraout_XMM0_Dd_00;
    if (1e-05 < fVar17) goto label_0420cb2f;
label_0420cab0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar21._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar22 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar20._0_8_ = 0;
  }
  else {
    uVar18 = 0;
    uVar19 = 0;
    fVar17 = SQRT(fVar23);
    if (fVar17 <= 1e-05) goto label_0420cab0;
label_0420cb2f:
    fVar22 = fVar22 / fVar17;
    auVar10._4_4_ = fVar17;
    auVar10._0_4_ = fVar17;
    auVar10._8_4_ = uVar18;
    auVar10._12_4_ = uVar19;
    auVar21 = divps(auVar20,auVar10);
    auVar20._0_8_ = auVar21._8_8_;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (fVar23 < 0.0) goto label_0420cb98;
label_0420cb7c:
    fVar23 = SQRT(fVar23);
  }
  else {
    if (0.0 <= fVar23) goto label_0420cb7c;
label_0420cb98:
    fVar23 = sqrtf(fVar23);
  }
  if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar24.fields.y = fVar5;
  UVar24.fields.x = fVar2;
  UVar24.fields.z = fVar16;
  UVar25.fields.z = fVar22;
  UVar25.fields.x = (float)(int)auVar21._0_8_;
  UVar25.fields.y = (float)(int)((ulong)auVar21._0_8_ >> 0x20);
  bVar11 = UnityEngine_Physics__SphereCast_4e78cf0
                     (UVar24,0.5,UVar25,(UnityEngine_RaycastHit_o *)auStack_120,fVar23,layerMask,
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
    plVar12 = (long *)auStack_120;
    __this_01.fields.m_Point.fields.y = fVar23;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffeb0;
    __this_01.fields.m_Point.fields.z = fVar22;
    __this_01.fields.m_Normal.fields.x = fVar16;
    __this_01.fields.m_Normal.fields.y = (float)(int)auVar21._0_8_;
    __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)auVar21._0_8_ >> 0x20);
    __this_01.fields.m_FaceID = (int)auVar20._0_8_;
    __this_01.fields.m_Distance = (float)(int)((ulong)auVar20._0_8_ >> 0x20);
    __this_01.fields.m_UV.fields.x = fVar2;
    __this_01.fields.m_UV.fields.y = fVar5;
    __this_01.fields.m_Collider = (int32_t)fVar26;
    UVar24 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)plVar12);
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
    UnityEngine_Transform__set_position(pUVar13,UVar24,(MethodInfo *)0x0);
  }
  plVar12 = (long *)pPVar14;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    (pPVar14->fields)._lastPosition.fields.x = (float)(int)UVar24.fields._0_8_;
    (pPVar14->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
    (pPVar14->fields)._lastPosition.fields.z = UVar24.fields.z;
    return;
  }
label_0420cc7c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._embedParent =
       (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._embedPosition.fields.x = fVar16;
  auVar21._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._embedPosition.fields.y =
       (float)(int)auVar21._0_8_;
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._embedPosition.fields.z =
       (float)(int)((ulong)auVar21._0_8_ >> 0x20);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._startPosition.fields.x = fVar16;
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._hideObjects = __this_02;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._hideObjects,__this_02);
  __this_03 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Collider);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._colliders = __this_03;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._colliders,__this_03);
  __this_04 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._fadeTrails = __this_04;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar12)->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)plVar12,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$KillTitansInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, float restrictAngle, const MethodInfo* method);
// 0x420b8c0

int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,float restrictAngle,
                  MethodInfo *method)

{
  float fVar1;
  System_Action_Hashtable__o *pSVar2;
  float fVar3;
  byte bVar4;
  Characters_RechargeableUseable_o *__this_00;
  UI_InGameMenu_o *__this_01;
  Cameras_InGameCamera_c *pCVar5;
  UnityEngine_Object_o *pUVar6;
  void *pvVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar9 [16];
  UnityEngine_RaycastHit_o __this_03;
  byte bVar10;
  int32_t extraout_EAX;
  UnityEngine_LayerMask_o mask;
  int32_t iVar11;
  uint uVar12;
  int32_t extraout_EAX_00;
  int iVar13;
  int32_t extraout_EAX_01;
  bool_conflict bVar14;
  System_Collections_Generic_List_GameObject__o *__this_04;
  System_Collections_Generic_List_Collider__o *__this_05;
  System_Collections_Generic_List_ParticleSystem__o *__this_06;
  UnityEngine_Transform_o *pUVar15;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  Characters_BaseCharacter_o *pCVar18;
  System_String_o *pSVar19;
  undefined4 extraout_var;
  System_String_o *pSVar20;
  long *plVar21;
  Il2CppClass *extraout_RAX;
  Projectiles_ThunderspearProjectile_o *pPVar22;
  Projectiles_ThunderspearProjectile_o *pPVar23;
  Photon_Pun_PhotonView_o *extraout_RAX_00;
  Photon_Pun_PhotonView_o *pPVar24;
  Photon_Pun_PhotonView_o *extraout_RAX_01;
  Photon_Pun_PhotonView_o *extraout_RAX_02;
  ulong uVar25;
  MethodInfo *method_00;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  long *__this_07;
  MethodInfo *method_01;
  Characters_BaseCharacter_c *__this_08;
  Projectiles_ThunderspearProjectile_o *__this_09;
  long *unaff_R14;
  UnityEngine_Collider_array *pUVar29;
  long lVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Dd_03;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o origin;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_fffffffffffffe38;
  undefined1 auStack_198 [28];
  float fStack_17c;
  float fStack_178;
  undefined8 uStack_174;
  Projectiles_ThunderspearProjectile_o *pPStack_168;
  UnityEngine_Collider_array *pUStack_160;
  Characters_BaseCharacter_c *pCStack_158;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  UnityEngine_Transform_o *pUStack_128;
  UnityEngine_Collider_array *pUStack_120;
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  Characters_BaseCharacter_o *pCStack_100;
  Il2CppClass **ppIStack_f8;
  UnityEngine_Collider_array *pUStack_f0;
  Characters_BaseCharacter_c *apCStack_e8 [2];
  float fStack_d4;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [16];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  System_Int32_array *pSStack_90;
  UnityEngine_Collider_array *pUStack_88;
  System_Int32_array *pSStack_80;
  System_Int32_array *local_70;
  ulong local_68;
  float local_5c;
  UnityEngine_Collider_array *local_58;
  float local_50;
  float local_4c;
  undefined1 local_48 [16];
  
  local_70 = (System_Int32_array *)CONCAT44(local_70._4_4_,radius);
  local_4c = restrictAngle;
  if (g_data_057ad8fa == '\0') {
    pSStack_80 = (System_Int32_array *)0x420b8f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    pSStack_80 = (System_Int32_array *)0x420b902;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pSStack_80 = (System_Int32_array *)0x420b90e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    pSStack_80 = (System_Int32_array *)0x420b91a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    pSStack_80 = (System_Int32_array *)0x420b926;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    pSStack_80 = (System_Int32_array *)0x420b932;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pSStack_80 = (System_Int32_array *)0x420b93e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_80 = (System_Int32_array *)0x420b94a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pSStack_80 = (System_Int32_array *)0x420b956;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    pSStack_80 = (System_Int32_array *)0x420b962;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RechargeableUseable);
    pSStack_80 = (System_Int32_array *)0x420b96e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_80 = (System_Int32_array *)0x420b97a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    pSStack_80 = (System_Int32_array *)0x420b986;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_80 = (System_Int32_array *)0x420b992;
    il2cpp_runtime_helper_023445d0(&"TitanStun");
    pSStack_80 = (System_Int32_array *)0x420b99e;
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fa = '\x01';
  }
  pSStack_80 = (System_Int32_array *)0x420b9af;
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
    pSStack_80 = (System_Int32_array *)0x420b9c2;
    UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
    local_5c = UVar42.fields.z;
    local_48._8_4_ = extraout_XMM0_Dc;
    local_48._0_8_ = UVar42.fields._0_8_;
    local_48._12_4_ = extraout_XMM0_Dd;
    pSStack_80 = (System_Int32_array *)0x420b9e1;
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    __this_07 = &TypeInfo_PhysicsLayer;
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      pSStack_80 = (System_Int32_array *)0x420b9fd;
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length != 0) {
        layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
        pSStack_80 = (System_Int32_array *)0x420ba2b;
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        pSStack_80 = (System_Int32_array *)0x420ba34;
        iVar11 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          pSStack_80 = (System_Int32_array *)0x420ba4e;
          il2cpp_runtime_helper_02337ed0();
        }
        auVar40 = local_48;
        local_68 = 0;
        in_XMM1_Db = 0.0;
        in_XMM1_Dc = 0.0;
        in_XMM1_Dd = 0.0;
        pSStack_80 = (System_Int32_array *)0x420ba6f;
        UVar42.fields.z = local_5c;
        UVar42.fields.x = (float)local_48._0_4_;
        UVar42.fields.y = (float)local_48._4_4_;
        local_48 = auVar40;
        pUVar16 = UnityEngine_Physics__OverlapSphere_4e7aff0(UVar42,local_70._0_4_,iVar11,(MethodInfo *)0x0);
        if (pUVar16 == (UnityEngine_Collider_array *)0x0) goto label_0420c0cf;
        iVar28 = (int)pUVar16->max_length;
        if (iVar28 < 1) goto label_0420c0d4;
        layers = (System_Int32_array *)0x0;
        local_68 = 0;
        if (iVar28 != 0) {
          do {
            unaff_R14 = (long *)pUVar16->m_Items[(int)layers];
            if ((UnityEngine_Collider_array *)unaff_R14 == (UnityEngine_Collider_array *)0x0)
            goto label_0420c0cf;
            pSStack_80 = (System_Int32_array *)0x420bae3;
            pUVar15 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R14,(MethodInfo *)0x0);
            if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420c0cf;
            pSStack_80 = (System_Int32_array *)0x420baf6;
            pUVar15 = UnityEngine_Transform__get_root(pUVar15,(MethodInfo *)0x0);
            if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420c0cf;
            pSStack_80 = (System_Int32_array *)0x420bb09;
            pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
            if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_0420c0cf;
            pSStack_80 = (System_Int32_array *)0x420bb24;
            pCVar18 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_BaseTitan_GetComponent_BaseTitan);
            pSStack_80 = (System_Int32_array *)0x420bb31;
            pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)unaff_R14,(MethodInfo *)0x0);
            if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_0420c0cf;
            pSStack_80 = (System_Int32_array *)0x420bb4c;
            __this_07 = (long *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pSStack_80 = (System_Int32_array *)0x420bb67;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_80 = (System_Int32_array *)0x420bb73;
            bVar14 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pSStack_80 = (System_Int32_array *)0x420bc28;
                il2cpp_runtime_helper_02337ed0();
              }
              pSStack_80 = (System_Int32_array *)0x420bc34;
              bVar14 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar14 != '\0') {
                __this_07 = *(long **)(((System_Int32_array *)__this)->m_Items + 0x1e);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  pSStack_80 = (System_Int32_array *)0x420bc5b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSStack_80 = (System_Int32_array *)0x420bc68;
                bVar14 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)__this_07,
                                    (MethodInfo *)0x0);
                if ((char)bVar14 != '\0') {
                  __this_07 = *(long **)(((System_Int32_array *)__this)->m_Items + 0x22);
                  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                    pSStack_80 = (System_Int32_array *)0x420bc8f;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_80 = (System_Int32_array *)0x420bc9c;
                  bVar14 = GameManagers_TeamInfo__SameTeam_446ffa0
                                     (pCVar18,(System_String_o *)__this_07,(MethodInfo *)0x0);
                  if ((char)bVar14 == '\0') {
                    if (pCVar18 == (Characters_BaseCharacter_o *)0x0) goto label_0420c0cf;
                    if (*(char *)&(pCVar18->fields).FeedVictimName == '\0') {
                      pSVar2 = (pCVar18->fields).OnPlayerPropertiesChanged;
                      if (pSVar2 == (System_Action_Hashtable__o *)0x0) goto label_0420c0cf;
                      __this_07 = (long *)(pSVar2->fields).data;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        pSStack_80 = (System_Int32_array *)0x420bce4;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSStack_80 = (System_Int32_array *)0x420bcf1;
                      bVar14 = UnityEngine_Object__op_Equality
                                         ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)__this_07,
                                          (MethodInfo *)0x0);
                      if ((char)bVar14 != '\0') {
                        in_XMM1_Db = 0.0;
                        in_XMM1_Dc = 0.0;
                        in_XMM1_Dd = 0.0;
                        pSStack_80 = (System_Int32_array *)0x420bd1e;
                        bVar10 = (*(code *)pCVar18->klass[1].vtable._44_OnJoinRandomFailed.method)
                                           (local_48._0_4_,local_5c,pCVar18);
                        local_50 = (float)*(int *)&(pCVar18->fields).Cache;
                        __this_07 = *(long **)(((System_Int32_array *)__this)->m_Items + 0x1e);
                        local_70 = (System_Int32_array *)__this;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          pSStack_80 = (System_Int32_array *)0x420bd5a;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_80 = (System_Int32_array *)0x420bd66;
                        bVar14 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        __this = (Projectiles_ThunderspearProjectile_o *)local_70;
                        if (((char)bVar14 == '\0') && (*(long **)(local_70->m_Items + 0x1e) != (long *)0x0)) {
                          lVar30 = **(long **)(local_70->m_Items + 0x1e);
                          bVar4 = (TypeInfo_Human->_2).naturalAligment;
                          if ((*(byte *)(lVar30 + 0x130) < bVar4) ||
                             (*(Il2CppClass **)(*(long *)(lVar30 + 200) + -8 + (ulong)bVar4 * 8) !=
                              TypeInfo_Human)) goto label_0420bda9;
                          bVar4 = *(byte *)((long)local_70->m_Items + 0xee);
                          if ((~bVar4 & bVar10) != 0) {
                            pUVar29 = (UnityEngine_Collider_array *)0x0;
                            pSStack_80 = (System_Int32_array *)0x420beb0;
                            pSVar19 = UnityEngine_Object__get_name
                                                ((UnityEngine_Object_o *)unaff_R14,(MethodInfo *)0x0);
                            __this_07 = (long *)pCVar18->klass;
                            uVar26 = 0;
                            pSVar20 = "TitanStun";
                            goto label_0420bdd9;
                          }
                          if (bVar10 == 0) {
                            if (bVar4 == 0) {
                              plVar21 = *(long **)(local_70->m_Items + 0x1e);
                              unaff_R14 = (long *)&g_data_00000064;
                            }
                            else {
                              pSStack_80 = (System_Int32_array *)0x420c07a;
                              pSVar20 = UnityEngine_Object__get_name
                                                  ((UnityEngine_Object_o *)unaff_R14,(MethodInfo *)0x0);
                              __this_07 = (long *)pCVar18->klass;
                              pSStack_80 = (System_Int32_array *)0x420c0a7;
                              (*(((Characters_BaseCharacter_c *)__this_07)->vtable)._85_GetHit.methodPtr)
                                        (pCVar18,"Thunderspear",0,"TitanStun",pSVar20);
                              plVar21 = *(long **)(((System_Int32_array *)__this)->m_Items + 0x1e);
                              unaff_R14 = (long *)(UnityEngine_Collider_array *)0x0;
                            }
                          }
                          else {
                            pSStack_80 = (System_Int32_array *)0x420bef1;
                            iVar11 = Projectiles_ThunderspearProjectile__CalculateDamage
                                               ((Projectiles_ThunderspearProjectile_o *)local_70,0,
                                                (MethodInfo *)(ulong)bVar10);
                            local_58 = (UnityEngine_Collider_array *)CONCAT44(extraout_var,iVar11);
                            lVar30 = *(long *)(((System_Int32_array *)__this)->m_Items + 0x1e);
                            if (lVar30 == 0) goto label_0420c0cf;
                            if (*(char *)(lVar30 + 0x78) == '\0') {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                pSStack_80 = (System_Int32_array *)0x420bf29;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              __this = (Projectiles_ThunderspearProjectile_o *)local_70;
                              __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_0420c0cf;
                              bVar10 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((__this_01->klass->_2).naturalAligment < bVar10) ||
                                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_InGameMenu))
                              goto label_0420c0ed;
                              pSStack_80 = (System_Int32_array *)0x420bf8c;
                              UI_InGameMenu__ShowKillScore(__this_01,(int32_t)local_58,0,(MethodInfo *)0x0);
                              pSVar2 = (pCVar18->fields).OnPlayerPropertiesChanged;
                              if ((pSVar2 == (System_Action_Hashtable__o *)0x0) ||
                                 (pUVar15 = (UnityEngine_Transform_o *)(pSVar2->fields).method_code,
                                 pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_0420c0cf;
                              __this_07 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              pSStack_80 = (System_Int32_array *)0x420bfc5;
                              UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
                              if ((Characters_BaseCharacter_c *)__this_07 == (Characters_BaseCharacter_c *)0x0
                                 ) goto label_0420c0cf;
                              pCVar5 = (((Characters_BaseCharacter_c *)__this_07)->_1).image;
                              bVar10 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pCVar5->_2).naturalAligment < bVar10) ||
                                 ((pCVar5->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_InGameCamera))
                              goto label_0420c0f2;
                              pSStack_80 = (System_Int32_array *)0x420c010;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)__this_07,UVar42,(int32_t)local_58,
                                         (MethodInfo *)0x0);
                              lVar30 = *(long *)(((System_Int32_array *)__this)->m_Items + 0x1e);
                            }
                            pSStack_80 = (System_Int32_array *)0x420c021;
                            pSVar20 = UnityEngine_Object__get_name
                                                ((UnityEngine_Object_o *)unaff_R14,(MethodInfo *)0x0);
                            unaff_R14 = (long *)local_58;
                            __this_07 = (long *)pCVar18->klass;
                            pSStack_80 = (System_Int32_array *)0x420c04d;
                            (*(((Characters_BaseCharacter_c *)__this_07)->vtable)._84_GetHit.methodPtr)
                                      (pCVar18,lVar30,(ulong)local_58 & 0xffffffff,"Thunderspear",pSVar20);
                            plVar21 = *(long **)(local_70->m_Items + 0x1e);
                            __this = (Projectiles_ThunderspearProjectile_o *)local_70;
                          }
                        }
                        else {
label_0420bda9:
                          pSStack_80 = (System_Int32_array *)0x420bdb3;
                          pSVar19 = UnityEngine_Object__get_name
                                              ((UnityEngine_Object_o *)unaff_R14,(MethodInfo *)0x0);
                          __this_07 = (long *)pCVar18->klass;
                          pUVar29 = (UnityEngine_Collider_array *)&g_data_00000064;
                          uVar26 = 100;
                          pSVar20 = "Thunderspear";
label_0420bdd9:
                          pSStack_80 = (System_Int32_array *)0x420bde2;
                          (*(((Characters_BaseCharacter_c *)__this_07)->vtable)._85_GetHit.methodPtr)
                                    (pCVar18,"Thunderspear",uVar26,pSVar20,pSVar19);
                          plVar21 = *(long **)(local_70->m_Items + 0x1e);
                          unaff_R14 = (long *)pUVar29;
                          __this = (Projectiles_ThunderspearProjectile_o *)local_70;
                        }
                        if (plVar21 == (long *)0x0) goto label_0420c0cf;
                        bVar10 = (TypeInfo_Human->_2).naturalAligment;
                        if ((*(byte *)(*plVar21 + 0x130) < bVar10) ||
                           (*(Il2CppClass **)(*(long *)(*plVar21 + 200) + -8 + (ulong)bVar10 * 8) !=
                            TypeInfo_Human)) goto label_0420c0ed;
                        __this_00 = (Characters_RechargeableUseable_o *)plVar21[0x1f];
                        if (__this_00 != (Characters_RechargeableUseable_o *)0x0) {
                          bVar10 = (TypeInfo_RechargeableUseable->_2).naturalAligment;
                          if ((bVar10 <= (__this_00->klass->_2).naturalAligment) &&
                             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar10 - 1] == TypeInfo_RechargeableUseable)) {
                            pSStack_80 = (System_Int32_array *)0x420be66;
                            Characters_RechargeableUseable__ReduceCooldown(__this_00,(MethodInfo *)0x0);
                          }
                        }
                        iVar28 = (int)local_68;
                        if ((float)(int)unaff_R14 < local_50) {
                          bVar32 = SBORROW4(iVar28,2);
                          iVar13 = iVar28 + -2;
                          bVar31 = iVar28 == 2;
                          uVar25 = 3;
                        }
                        else {
                          bVar32 = SBORROW4(iVar28,1);
                          iVar13 = iVar28 + -1;
                          bVar31 = iVar13 == 0;
                          uVar25 = 2;
                        }
                        local_68 = local_68 & 0xffffffff;
                        if (bVar31 || bVar32 != iVar13 < 0) {
                          local_68 = uVar25;
                        }
                      }
                    }
                  }
                }
              }
              uVar27 = (int)layers + 1;
              uVar12 = (uint)pUVar16->max_length;
              if ((int)uVar12 <= (int)uVar27) goto label_0420c0d4;
            }
            else {
              pSStack_80 = (System_Int32_array *)0x420bb8d;
              local_70 = layers;
              iVar11 = Projectiles_ThunderspearProjectile__CalculateDamage(__this,0,method_00);
              pCVar18 = *(Characters_BaseCharacter_o **)(((System_Int32_array *)__this)->m_Items + 0x1e);
              if (pCVar18 == (Characters_BaseCharacter_o *)0x0) goto label_0420c0cf;
              pSVar20 = *(System_String_o **)&(pCVar18->fields)._disableKinematicTimeLeft;
              pSStack_80 = (System_Int32_array *)0x420bbb1;
              pUVar15 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420c0cf;
              pSStack_80 = (System_Int32_array *)0x420bbc4;
              UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
              if ((Characters_BaseCharacter_c *)__this_07 == (Characters_BaseCharacter_c *)0x0)
              goto label_0420c0cf;
              pSStack_80 = (System_Int32_array *)0x420bbeb;
              CustomLogic_CustomLogicCollisionHandler__GetHit
                        ((CustomLogic_CustomLogicCollisionHandler_o *)__this_07,pCVar18,pSVar20,iVar11,
                         "Thunderspear",UVar42,(MethodInfo *)0x0);
              uVar27 = (int)local_70 + 1;
              uVar12 = (uint)pUVar16->max_length;
              unaff_R14 = (long *)pUVar16;
              if ((int)uVar12 <= (int)uVar27) goto label_0420c0d4;
            }
            layers = (System_Int32_array *)(ulong)uVar27;
          } while (uVar27 < uVar12);
        }
      }
      pSStack_80 = (System_Int32_array *)0x420c0ed;
      il2cpp_runtime_helper_022b2ca0();
label_0420c0ed:
      pSStack_80 = (System_Int32_array *)0x420c0f2;
      il2cpp_runtime_helper_022b2fd0();
label_0420c0f2:
      pSStack_80 = (System_Int32_array *)0x420c0fa;
      __this_08 = (Characters_BaseCharacter_c *)__this_07;
      il2cpp_runtime_helper_022b2fd0();
      pSStack_90 = layers;
      pUStack_88 = (UnityEngine_Collider_array *)unaff_R14;
      pSStack_80 = (System_Int32_array *)__this;
      if (g_data_057ad8f9 == '\0') {
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c121;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c12d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c139;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c145;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c151;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c15d;
        il2cpp_runtime_helper_023445d0(&"StunRange");
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c169;
        il2cpp_runtime_helper_023445d0(&"Thunderspear");
        g_data_057ad8f9 = '\x01';
      }
      pUVar6 = (__this_08->_1).methods;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c18f;
        il2cpp_runtime_helper_02337ed0();
      }
      apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c19b;
      uVar12 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      plVar21 = (long *)(ulong)uVar12;
      if (((char)uVar12 != '\0') ||
         (pCVar18 = (__this_08->_1).methods, pCVar18 == (Characters_BaseCharacter_o *)0x0)) {
label_0420c433:
        return (int32_t)plVar21;
      }
      bVar10 = (TypeInfo_Human->_2).naturalAligment;
      plVar21 = (long *)TypeInfo_Human;
      if (((pCVar18->klass->_2).naturalAligment < bVar10) ||
         ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_Human)) goto label_0420c433;
      apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c1ec;
      uVar12 = Characters_BaseCharacter__IsMainCharacter(pCVar18,(MethodInfo *)0x0);
      plVar21 = (long *)(ulong)uVar12;
      if ((char)uVar12 == '\0') goto label_0420c433;
      lVar30 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x58), lVar30 == 0)) ||
         (plVar21 = *(long **)(lVar30 + 0x48), (Il2CppClass *)plVar21 == (Il2CppClass *)0x0))
      goto label_0420c43d;
      if (*(char *)((long)&(((Il2CppClass *)plVar21)->_1).name + 1) != '\0') goto label_0420c433;
      unaff_R14 = &TypeInfo_CharacterData;
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c24e;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar21 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
      if (plVar21 == (long *)0x0) {
label_0420c43d:
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c442;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c27e;
        plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                    (plVar21,"Thunderspear",*(undefined8 *)(*plVar21 + 0x1b0));
        if (plVar21 == (long *)0x0) goto label_0420c43d;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c2a4;
        plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                    (plVar21,"StunRange",*(undefined8 *)(*plVar21 + 0x1b0));
        if (plVar21 == (long *)0x0) goto label_0420c43d;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c2c0;
        fVar33 = (float)(**(code **)(*plVar21 + 0x388))(plVar21);
        pvVar7 = (__this_08->_1).methods;
        if (((pvVar7 == (void *)0x0) || (lVar30 = *(long *)((long)pvVar7 + 0x70), lVar30 == 0)) ||
           (pUVar15 = *(UnityEngine_Transform_o **)(lVar30 + 0x10), fStack_d4 = fVar33,
           pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_0420c43d;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c2f7;
        UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
        fStack_c0 = UVar42.fields.z;
        uStack_c8 = extraout_XMM0_Dc_00;
        auStack_d0 = UVar42.fields._0_8_;
        uStack_c4 = extraout_XMM0_Dd_00;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c30b;
        fStack_bc = in_XMM1_Db;
        fStack_b8 = in_XMM1_Dc;
        fStack_b4 = in_XMM1_Dd;
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0)
        ;
        if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420c43d;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c31e;
        UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
        fVar33 = UVar42.fields.x;
        uVar26._0_4_ = UVar42.fields.y;
        uVar26._4_4_ = UVar42.fields.z;
        if (g_data_057a68cb == '\0') {
          auStack_b0._8_4_ = extraout_XMM0_Dc_01;
          auStack_b0._0_8_ = UVar42.fields._0_8_;
          auStack_b0._12_4_ = extraout_XMM0_Dd_01;
          apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c33d;
          fStack_a0 = UVar42.fields.z;
          fStack_9c = in_XMM1_Db;
          fStack_98 = in_XMM1_Dc;
          fStack_94 = in_XMM1_Dd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a68cb = '\x01';
          fVar33 = (float)auStack_b0._0_4_;
          uVar26._0_4_ = (float)auStack_b0._4_4_;
          uVar26._4_4_ = fStack_a0;
          in_XMM1_Db = fStack_9c;
        }
        auVar37._4_4_ = auStack_d0._4_4_;
        auVar37._0_4_ = auStack_d0._4_4_;
        auVar37._8_4_ = uStack_c8;
        auVar37._12_4_ = uStack_c4;
        auVar40._4_12_ = auVar37._4_12_;
        auVar40._0_4_ = (float)auStack_d0._4_4_ - (float)uVar26;
        fVar33 = (float)auStack_d0._0_4_ - fVar33;
        in_XMM1_Db = fStack_bc - in_XMM1_Db;
        uVar26._0_4_ = (float)auStack_d0._4_4_ - (float)uVar26;
        plVar21 = &TypeInfo_Math;
        fVar1 = fStack_c0 - uVar26._4_4_;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c38f;
          _auStack_d0 = auVar40;
          fStack_c0 = fStack_c0 - uVar26._4_4_;
          fStack_bc = fVar33;
          fStack_b8 = in_XMM1_Db;
          fStack_b4 = (float)uVar26;
          plVar21 = (long *)il2cpp_runtime_helper_02337ed0();
          auVar40 = _auStack_d0;
          fVar1 = fStack_c0;
          fVar33 = fStack_bc;
        }
        fVar33 = fVar33 * fVar33 + auVar40._0_4_ * auVar40._0_4_ + fVar1 * fVar1;
        if (fVar33 < 0.0) {
          apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c3cd;
          fVar33 = sqrtf(fVar33);
          plVar21 = (long *)extraout_RAX;
          if (fStack_d4 <= fVar33) goto label_0420c433;
        }
        else if (fStack_d4 <= SQRT(fVar33)) goto label_0420c433;
        unaff_R14 = (__this_08->_1).methods;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c3e9;
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0)
        ;
        if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420c43d;
        apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c3f8;
        UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
        if ((UnityEngine_Collider_array *)unaff_R14 == (UnityEngine_Collider_array *)0x0) goto label_0420c43d;
        pIVar8 = (((UnityEngine_Collider_array *)unaff_R14)->obj).klass;
        bVar10 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar10 <= (pIVar8->_2).naturalAligment) &&
           ((pIVar8->_2).typeHierarchy[(ulong)bVar10 - 1] == TypeInfo_Human)) {
          Characters_Human__GetStunnedByTS((Characters_Human_o *)unaff_R14,UVar42,(MethodInfo *)0x0);
          return extraout_EAX_00;
        }
      }
      apCStack_e8[0] = (Characters_BaseCharacter_c *)0x420c44a;
      pUVar16 = (UnityEngine_Collider_array *)unaff_R14;
      il2cpp_runtime_helper_022b2fd0();
      ppIStack_f8 = &TypeInfo_Human;
      pUStack_f0 = (UnityEngine_Collider_array *)unaff_R14;
      apCStack_e8[0] = (Characters_BaseCharacter_c *)__this_07;
      if (g_data_057ad8fc == '\0') {
        pUStack_120 = (UnityEngine_Collider_array *)0x420c49f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4ab;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4b7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4c3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4cf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4db;
        il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
        pUStack_120 = (UnityEngine_Collider_array *)0x420c4e7;
        il2cpp_runtime_helper_023445d0(&"Thunderspear");
        g_data_057ad8fc = '\x01';
        if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_0420c47b;
label_0420c505:
        pUStack_120 = (UnityEngine_Collider_array *)0x420c50a;
        il2cpp_runtime_helper_02337ed0();
        __this_09 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
      }
      else {
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_0420c505;
label_0420c47b:
        __this_09 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
      }
      if (__this_09 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        pUStack_120 = (UnityEngine_Collider_array *)0x420c53a;
        pPVar22 = (Projectiles_ThunderspearProjectile_o *)
                  (*(__this_09->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                            (__this_09,"Thunderspear",(__this_09->klass->vtable)._7_ReceiveCustomStream.method);
        if (pPVar22 != (Projectiles_ThunderspearProjectile_o *)0x0) {
          pUStack_120 = (UnityEngine_Collider_array *)0x420c560;
          pPVar23 = (Projectiles_ThunderspearProjectile_o *)
                    (*(pPVar22->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                              (pPVar22,"DamageMultiplier",(pPVar22->klass->vtable)._7_ReceiveCustomStream.method);
          __this_09 = pPVar22;
          if (pPVar23 != (Projectiles_ThunderspearProjectile_o *)0x0) {
            pUStack_120 = (UnityEngine_Collider_array *)0x420c57c;
            fStack_10c = (float)(**(code **)&pPVar23->klass[1]._2.thread_static_fields_offset)();
            lVar30 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            __this_09 = pPVar23;
            if (((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x58), lVar30 != 0)) &&
               (lVar30 = *(long *)(lVar30 + 0x48), lVar30 != 0)) {
              if (*(char *)(lVar30 + 0x11) != '\0') {
                fStack_10c = 1.0;
              }
              if (g_data_057a6841 == '\0') {
                pUStack_120 = (UnityEngine_Collider_array *)0x420c5dd;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar33 = *(float *)((long)pUVar16->m_Items + 0xd4);
              pSVar2 = (System_Action_Hashtable__o *)pUVar16->m_Items[0x1b];
              uVar26._0_4_ = SUB84(pSVar2,0);
              uVar26._4_4_ = (float)((ulong)pSVar2 >> 0x20);
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                pCStack_100 = (Characters_BaseCharacter_o *)0x0;
                pUStack_120 = (UnityEngine_Collider_array *)0x420c619;
                fStack_110 = fVar33;
                uStack_108 = pSVar2;
                il2cpp_runtime_helper_02337ed0();
                uVar26._0_4_ = (float)uStack_108;
                uVar26._4_4_ = uStack_108._4_4_;
                fVar33 = fStack_110;
              }
              fVar33 = uVar26._4_4_ * uVar26._4_4_ + fVar33 * fVar33 + (float)uVar26 * (float)uVar26;
              if (fVar33 < 0.0) {
                pUStack_120 = (UnityEngine_Collider_array *)0x420c64a;
                fVar33 = sqrtf(fVar33);
              }
              else {
                fVar33 = SQRT(fVar33);
              }
              iVar13 = (int)(fStack_10c * fVar33 * 10.0);
              iVar28 = 10;
              if (9 < iVar13) {
                iVar28 = iVar13;
              }
              pSVar20 = (System_String_o *)pUVar16->m_Items[0xf];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_120 = (UnityEngine_Collider_array *)0x420c68a;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_120 = (UnityEngine_Collider_array *)0x420c696;
              bVar14 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (((char)bVar14 != '\0') &&
                 (pSVar20 = (System_String_o *)pUVar16->m_Items[0xf], pSVar20 != (System_String_o *)0x0)) {
                bVar10 = (TypeInfo_Human->_2).naturalAligment;
                if ((bVar10 <= (pSVar20->klass->_2).naturalAligment) &&
                   (((pSVar20->klass->_2).typeHierarchy[(ulong)bVar10 - 1] == TypeInfo_Human &&
                    (*(char *)((long)&pSVar20[4].monitor + 1) != '\0')))) {
                  iVar28 = *(int *)((long)&pSVar20[4].monitor + 4);
                }
              }
              return iVar28;
            }
          }
        }
      }
      pUStack_120 = (UnityEngine_Collider_array *)0x420c6ea;
      il2cpp_runtime_helper_022b2c90();
      pUStack_128 = (UnityEngine_Transform_o *)&TypeInfo_CharacterData;
      pCStack_158 = (Characters_BaseCharacter_c *)0x420c701;
      pPVar22 = __this_09;
      pUStack_120 = pUVar16;
      Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this_09,(MethodInfo *)0x0);
      pPVar24 = (__this_09->fields)._photonView;
      if (pPVar24 != (Photon_Pun_PhotonView_o *)0x0) {
        if ((char)(pPVar24->fields)._IsMine_k__BackingField != '\0') {
          fStack_140 = (__this_09->fields)._timeLeft;
          pPVar22 = (Projectiles_ThunderspearProjectile_o *)0x0;
          pCStack_158 = (Characters_BaseCharacter_c *)0x420c72c;
          fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_09->fields)._timeLeft = fStack_140 - fVar33;
          if (fStack_140 - fVar33 <= 0.0) {
            pCStack_158 = (Characters_BaseCharacter_c *)0x420c759;
            pPVar22 = __this_09;
            (*(__this_09->klass->vtable)._16_OnExceedLiveTime.methodPtr)();
          }
        }
        plVar21 = (long *)(__this_09->fields)._photonView;
        if ((Photon_Pun_PhotonView_o *)plVar21 != (Photon_Pun_PhotonView_o *)0x0) {
          if ((char)(((Photon_Pun_PhotonView_o *)plVar21)->fields)._IsMine_k__BackingField == '\0') {
label_0420c7ed:
            return (int32_t)plVar21;
          }
          if (g_data_057a6841 == '\0') {
            pCStack_158 = (Characters_BaseCharacter_c *)0x420c784;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
          }
          fVar33 = (__this_09->fields)._velocity.fields.x;
          uVar26._0_4_ = (__this_09->fields)._velocity.fields.y;
          uVar26._4_4_ = (__this_09->fields)._velocity.fields.z;
          plVar21 = &TypeInfo_Math;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            uStack_138._0_4_ = 0.0;
            uStack_138._4_4_ = 0;
            pCStack_158 = (Characters_BaseCharacter_c *)0x420c7be;
            fStack_144 = fVar33;
            _fStack_140 = uVar26;
            plVar21 = (long *)il2cpp_runtime_helper_02337ed0();
            uVar26._0_4_ = fStack_140;
            uVar26._4_4_ = fStack_13c;
            fVar33 = fStack_144;
          }
          fVar33 = uVar26._4_4_ * uVar26._4_4_ + fVar33 * fVar33 + (float)uVar26 * (float)uVar26;
          if (fVar33 < 0.0) {
            pCStack_158 = (Characters_BaseCharacter_c *)0x420c7fa;
            fVar33 = sqrtf(fVar33);
            plVar21 = (long *)extraout_RAX_00;
          }
          else {
            fVar33 = SQRT(fVar33);
          }
          if (fVar33 <= 0.0) goto label_0420c7ed;
          pCStack_158 = (Characters_BaseCharacter_c *)0x420c80c;
          pUVar15 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
          pPVar22 = (Projectiles_ThunderspearProjectile_o *)0x0;
          pCStack_158 = (Characters_BaseCharacter_c *)0x420c826;
          value = UnityEngine_Quaternion__LookRotation_4debb20
                            ((UnityEngine_Vector3_o)(__this_09->fields)._velocity.fields,(MethodInfo *)0x0);
          pUVar16 = (UnityEngine_Collider_array *)0x0;
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar15,value,(MethodInfo *)0x0);
            return extraout_EAX_01;
          }
        }
      }
      pCStack_158 = (Characters_BaseCharacter_c *)0x420c841;
      il2cpp_runtime_helper_022b2c90();
      plVar21 = (long *)pPVar22;
      pPStack_168 = __this_09;
      pUStack_160 = pUVar16;
      pCStack_158 = (Characters_BaseCharacter_c *)__this_07;
      if (g_data_057ad8fd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
        plVar21 = &TypeInfo_ThunderspearProjectile;
        il2cpp_runtime_helper_023445d0();
        g_data_057ad8fd = '\x01';
      }
      fStack_178 = 0.0;
      uStack_174 = 0;
      auStack_198._16_8_ = 0;
      auStack_198._24_4_ = 0;
      fStack_17c = 0.0;
      auStack_198._0_8_ = (Projectiles_ThunderspearProjectile_c *)0x0;
      auStack_198._8_8_ = (void *)0x0;
      pPVar24 = (pPVar22->fields)._photonView;
      if (pPVar24 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420cc7c;
      if ((char)(pPVar24->fields)._IsMine_k__BackingField == '\0') goto label_0420cc73;
      if (*(char *)((long)&(pPVar22->fields)._wasImpact + 2) != '\0') {
        __this_02 = (pPVar22->fields)._rigidbody;
        if (g_data_057a65d5 == '\0') {
          plVar21 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (__this_02 == (UnityEngine_Rigidbody_o *)0x0) goto label_0420cc7c;
        UnityEngine_Rigidbody__set_velocity
                  (__this_02,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        pUVar6 = *(UnityEngine_Object_o **)&(pPVar22->fields)._wasMaxRange;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          plVar21 = *(long **)&(pPVar22->fields)._wasMaxRange;
          if ((Projectiles_ThunderspearProjectile_o *)plVar21 == (Projectiles_ThunderspearProjectile_o *)0x0)
          goto label_0420cc7c;
          pUVar15 = (pPVar22->fields)._transform;
          UVar42 = UnityEngine_Transform__TransformPoint
                             ((UnityEngine_Transform_o *)plVar21,
                              *(UnityEngine_Vector3_Fields *)&(pPVar22->fields)._embedParent,(MethodInfo *)0x0
                             );
          if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
          UnityEngine_Transform__set_position(pUVar15,UVar42,(MethodInfo *)0x0);
        }
        pCVar18 = (pPVar22->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_01 = (MethodInfo *)0x0;
        uVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pPVar24 = (Photon_Pun_PhotonView_o *)(ulong)uVar12;
        if (((char)uVar12 != '\0') && (*(char *)&(pPVar22->fields)._startPosition.fields.y != '\0')) {
          Projectiles_ThunderspearProjectile__Explode(pPVar22,method_01);
          pPVar24 = extraout_RAX_01;
        }
        goto label_0420cc73;
      }
      plVar21 = (long *)pPVar22;
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar22,(MethodInfo *)0x0);
      if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
      UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      uVar26._0_4_ = UVar42.fields.z;
      auVar38._0_8_ = UVar42.fields._0_8_;
      auVar38._8_4_ = extraout_XMM0_Dc_02;
      auVar38._12_4_ = extraout_XMM0_Dd_02;
      fVar1 = (pPVar22->fields)._lastPosition.fields.x;
      fVar3 = (pPVar22->fields)._lastPosition.fields.y;
      fVar33 = (pPVar22->fields)._lastPosition.fields.z;
      uVar26._4_4_ = 0.0;
      if (g_data_057a6845 == '\0') {
        auVar39._0_8_ = auVar38._8_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar38._8_8_ = auVar39._0_8_;
        g_data_057a6845 = '\x01';
      }
      auVar39._0_8_ = CONCAT44(auVar38._4_4_ - fVar3,auVar38._0_4_ - fVar1);
      auVar39._8_4_ = auVar38._8_4_ - uVar26._4_4_;
      auVar39._12_4_ = auVar38._12_4_ - 0.0;
      uVar26._0_4_ = (float)uVar26 - fVar33;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        auVar38._0_8_ = auVar39._8_8_;
        il2cpp_runtime_helper_02337ed0();
        auVar39._8_8_ = auVar38._0_8_;
      }
      fVar41 = (float)uVar26 * (float)uVar26 + auVar39._4_4_ * auVar39._4_4_ + auVar39._0_4_ * auVar39._0_4_;
      if (fVar41 < 0.0) {
        auVar38._0_8_ = auVar39._0_8_;
        auVar39._0_8_ = auVar39._8_8_;
        fVar34 = sqrtf(fVar41);
        auVar39._8_8_ = auVar39._0_8_;
        auVar39._0_8_ = auVar38._0_8_;
        uVar35 = extraout_XMM0_Dc_03;
        uVar36 = extraout_XMM0_Dd_03;
        if (fVar34 <= 1e-05) goto label_0420cab0;
label_0420cb2f:
        uVar26._0_4_ = (float)uVar26 / fVar34;
        auVar9._4_4_ = fVar34;
        auVar9._0_4_ = fVar34;
        auVar9._8_4_ = uVar35;
        auVar9._12_4_ = uVar36;
        auVar40 = divps(auVar39,auVar9);
        auVar38._0_8_ = auVar40._0_8_;
        auVar39._0_8_ = auVar40._8_8_;
      }
      else {
        uVar35 = 0;
        uVar36 = 0;
        fVar34 = SQRT(fVar41);
        if (1e-05 < fVar34) goto label_0420cb2f;
label_0420cab0:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auVar38._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        uVar26._0_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        auVar39._0_8_ = 0;
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (0.0 <= fVar41) goto label_0420cb7c;
label_0420cb98:
        fVar41 = sqrtf(fVar41);
      }
      else {
        if (fVar41 < 0.0) goto label_0420cb98;
label_0420cb7c:
        fVar41 = SQRT(fVar41);
      }
      if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar11 = UnityEngine_LayerMask__op_Implicit
                         ((UnityEngine_LayerMask_o)
                          (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      origin.fields.y = fVar3;
      origin.fields.x = fVar1;
      origin.fields.z = fVar33;
      direction.fields.z = (float)uVar26;
      direction.fields.x = (float)(int)auVar38._0_8_;
      direction.fields.y = (float)(int)((ulong)auVar38._0_8_ >> 0x20);
      bVar14 = UnityEngine_Physics__SphereCast_4e78cf0
                         (origin,0.5,direction,(UnityEngine_RaycastHit_o *)auStack_198,fVar41,iVar11,
                          (MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar22,(MethodInfo *)0x0);
        plVar21 = (long *)auStack_198;
        __this_03.fields.m_Point.fields.y = fVar41;
        __this_03.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe38;
        __this_03.fields.m_Point.fields.z = (float)uVar26;
        __this_03.fields.m_Normal.fields.x = fVar33;
        __this_03.fields.m_Normal.fields.y = (float)(int)auVar38._0_8_;
        __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)auVar38._0_8_ >> 0x20);
        __this_03.fields.m_FaceID = (int)auVar39._0_8_;
        __this_03.fields.m_Distance = (float)(int)((ulong)auVar39._0_8_ >> 0x20);
        __this_03.fields.m_UV.fields.x = fVar1;
        __this_03.fields.m_UV.fields.y = fVar3;
        __this_03.fields.m_Collider = (int32_t)uVar26._4_4_;
        UVar42 = UnityEngine_RaycastHit__get_point(__this_03,(MethodInfo *)plVar21);
        if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
        UnityEngine_Transform__set_position(pUVar15,UVar42,(MethodInfo *)0x0);
      }
      plVar21 = (long *)pPVar22;
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar22,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
        UVar42 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
        (pPVar22->fields)._lastPosition.fields.x = (float)(int)UVar42.fields._0_8_;
        (pPVar22->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar42.fields._0_8_ >> 0x20);
        (pPVar22->fields)._lastPosition.fields.z = UVar42.fields.z;
        pPVar24 = extraout_RAX_02;
label_0420cc73:
        return (int32_t)pPVar24;
      }
label_0420cc7c:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._embedParent =
           (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._embedPosition.fields.x = fVar33;
      uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._embedPosition.fields.y = (float)(int)uVar26
      ;
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._embedPosition.fields.z =
           (float)(int)((ulong)uVar26 >> 0x20);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._startPosition.fields.x = fVar33;
      if (g_data_057ad8df == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
        g_data_057ad8df = '\x01';
      }
      __this_04 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_GameObject);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._hideObjects = __this_04;
      il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._hideObjects,__this_04);
      __this_05 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_UnityEngine_Collider);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._colliders = __this_05;
      il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._colliders,__this_05);
      __this_06 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_UnityEngine_ParticleSystem);
      (((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._fadeTrails = __this_06;
      il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar21)->fields)._fadeTrails);
      Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)plVar21,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
label_0420c0cf:
  pSStack_80 = (System_Int32_array *)0x420c0d4;
  il2cpp_runtime_helper_022b2c90();
label_0420c0d4:
  return (int32_t)local_68;
}


// Projectiles.ThunderspearProjectile$$KillPlayersInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x420afc0

int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  UI_InGameMenu_o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar5;
  int iVar6;
  uint uVar7;
  UnityEngine_Transform_o *pUVar8;
  long *plVar9;
  ulong uVar10;
  Characters_BaseCharacter_o *pCVar11;
  Characters_BaseCharacter_o *unaff_RBP;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Db;
  float fVar16;
  float in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar17;
  undefined1 auVar18 [12];
  ulong in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  undefined1 local_98 [36];
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  Characters_BaseCharacter_o *local_38;
  
  if (g_data_057ad8fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fb = '\x01';
  }
  local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (Characters_BaseCharacter_o *)0x0;
  pCVar11 = *(Characters_BaseCharacter_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
label_0420b65e:
    il2cpp_runtime_helper_022b2c90();
    fVar15 = in_stack_ffffffffffffff58;
  }
  else {
    UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    local_98._32_4_ = UVar17.fields.z;
    local_68._8_4_ = extraout_XMM0_Dc;
    local_68._0_8_ = UVar17.fields._0_8_;
    local_68._12_4_ = extraout_XMM0_Dd;
    fStack_74 = in_XMM1_Db;
    fStack_70 = in_XMM1_Dc;
    uStack_6c = in_XMM1_Dd;
    if (pCVar11 == (Characters_BaseCharacter_o *)0x0) goto label_0420b65e;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    fVar15 = in_stack_ffffffffffffff58;
    if ((bVar1 <= (pCVar11->klass->_2).naturalAligment) &&
       ((pCVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(pCVar11->fields).RichTextName;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_00,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        fStack_70 = fStack_74;
        local_98._16_8_ = local_38;
        local_98._0_8_ = local_48._0_8_;
        local_98._8_8_ = local_48._8_8_;
        fVar16 = (float)local_68._0_4_;
        fStack_74 = (float)local_68._0_4_;
        uStack_6c = local_68._4_4_;
        local_68._0_4_ = local_68._4_4_;
        in_stack_ffffffffffffff48 = 0;
label_0420b190:
        do {
          __this_02.fields._index = in_stack_ffffffffffffff50;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff48;
          __this_02.fields._version = (int32_t)radius;
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_3219C40 *)local_98);
          pCVar11 = (Characters_BaseCharacter_o *)local_98._16_8_;
          if ((char)bVar5 == '\0') goto label_0420b625;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (pCVar11 == (Characters_BaseCharacter_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_0420b654:
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              if (*(char *)&((Characters_BaseCharacter_Fields *)((long)pCVar11 + 0x10))->FeedVictimName !=
                  '\0') goto label_0420b190;
              lVar2 = *(long *)&((Characters_BaseCharacter_Fields *)((long)pCVar11 + 0x10))->Dead;
              if (lVar2 == 0) goto label_0420b654;
              pUVar8 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                in_stack_ffffffffffffff58 = UVar17.fields.z;
                local_58._8_4_ = extraout_XMM0_Dc_00;
                local_58._0_8_ = UVar17.fields._0_8_;
                local_58._12_4_ = extraout_XMM0_Dd_00;
                if (g_data_057a68cb == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a68cb = '\x01';
                  iVar6 = *(int *)(TypeInfo_Math + 0xe4);
                  in_stack_ffffffffffffff5c = fVar16;
                }
                else {
                  iVar6 = *(int *)(TypeInfo_Math + 0xe4);
                  in_stack_ffffffffffffff5c = fVar16;
                }
                if (iVar6 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                fVar15 = ((float)local_58._0_4_ - fStack_74) * ((float)local_58._0_4_ - fStack_74) +
                         ((float)local_58._4_4_ - (float)local_68._0_4_) *
                         ((float)local_58._4_4_ - (float)local_68._0_4_) +
                         (in_stack_ffffffffffffff58 - (float)local_98._32_4_) *
                         (in_stack_ffffffffffffff58 - (float)local_98._32_4_);
                if (fVar15 < 0.0) {
                  fVar15 = sqrtf(fVar15);
                  fVar16 = 0.0;
                  if (radius <= fVar15) goto label_0420b190;
                }
                else {
                  fVar16 = 0.0;
                  if (radius <= SQRT(fVar15)) goto label_0420b190;
                }
                fVar16 = 0.0;
                unaff_RBP = (__this->fields)._owner;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)unaff_RBP,
                                   (MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  unaff_RBP = (Characters_BaseCharacter_o *)(__this->fields)._team;
                  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar5 = GameManagers_TeamInfo__SameTeam_446ffa0
                                    (pCVar11,(System_String_o *)unaff_RBP,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    unaff_RBP = (__this->fields)._owner;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar5 = UnityEngine_Object__op_Equality
                                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (((char)bVar5 == '\0') &&
                       (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
                      pCVar4 = pCVar3->klass;
                      bVar1 = (TypeInfo_Human->_2).naturalAligment;
                      if (((pCVar4->_2).naturalAligment < bVar1) ||
                         ((pCVar4->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
                          TypeInfo_Human)) goto label_0420b364;
                      fVar15 = (float)Projectiles_ThunderspearProjectile__CalculateDamage
                                                (__this,0,(MethodInfo *)(ulong)bVar1);
                      unaff_RBP = (Characters_BaseCharacter_o *)(ulong)(uint)fVar15;
                      (*((*&pCVar11->klass)->vtable)._84_GetHit.methodPtr)
                                (pCVar11,(__this->fields)._owner,unaff_RBP,"Thunderspear","");
                      if ((char)((Characters_BaseCharacter_Fields *)((long)pCVar11 + 0x10))->CustomDamage ==
                          '\0') {
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_0420b696;
                        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
                        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
                           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu))
                        goto label_0420b682;
                        UI_InGameMenu__ShowKillScore(__this_01,(int32_t)fVar15,0,(MethodInfo *)0x0);
                        lVar2 = *(long *)&((Characters_BaseCharacter_Fields *)((long)pCVar11 + 0x10))->Dead;
                        if (lVar2 == 0) goto label_0420b67d;
                        pUVar8 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
                        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0420b678;
                        unaff_RBP = *(Characters_BaseCharacter_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                        UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                        if (unaff_RBP == (Characters_BaseCharacter_o *)0x0) goto label_0420b66b;
                        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
                        if (((unaff_RBP->klass->_2).naturalAligment < bVar1) ||
                           ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera))
                        goto label_0420b670;
                        Cameras_InGameCamera__TakeSnapshot
                                  ((Cameras_InGameCamera_o *)unaff_RBP,UVar17,(int32_t)fVar15,
                                   (MethodInfo *)0x0);
                        in_stack_ffffffffffffff58 = fVar15;
                      }
                    }
                    else {
label_0420b364:
                      (*((*&pCVar11->klass)->vtable)._85_GetHit.methodPtr)
                                (pCVar11,"",100,"Thunderspear","");
                    }
                    if (*(int *)&((Characters_BaseCharacter_Fields *)((long)pCVar11 + 0x10))->Cache < 1) {
                      pCVar11 = (__this->fields)._owner;
                      if (pCVar11 == (Characters_BaseCharacter_o *)0x0) goto label_0420b687;
                      lVar2 = *(long *)&(pCVar11->fields).Dead;
                      if (lVar2 == 0) goto label_0420b68c;
                      pUVar8 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
                      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0420b691;
                      UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                      in_stack_ffffffffffffff58 = UVar17.fields.z;
                      local_58._8_4_ = extraout_XMM0_Dc_01;
                      local_58._0_8_ = UVar17.fields._0_8_;
                      local_58._12_4_ = extraout_XMM0_Dd_01;
                      if (g_data_057a68cb == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                        g_data_057a68cb = '\x01';
                        iVar6 = *(int *)(TypeInfo_Math + 0xe4);
                        in_stack_ffffffffffffff5c = fVar16;
                      }
                      else {
                        iVar6 = *(int *)(TypeInfo_Math + 0xe4);
                        in_stack_ffffffffffffff5c = fVar16;
                      }
                      if (iVar6 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      fVar15 = (fStack_74 - (float)local_58._0_4_) * (fStack_74 - (float)local_58._0_4_) +
                               ((float)local_68._0_4_ - (float)local_58._4_4_) *
                               ((float)local_68._0_4_ - (float)local_58._4_4_) +
                               ((float)local_98._32_4_ - in_stack_ffffffffffffff58) *
                               ((float)local_98._32_4_ - in_stack_ffffffffffffff58);
                      if (fVar15 < 0.0) {
                        fVar15 = sqrtf(fVar15);
                        if (fVar15 < radius) goto label_0420b4c5;
                      }
                      else if (SQRT(fVar15) < radius) {
label_0420b4c5:
                        fVar16 = 0.0;
                        iVar6 = (int)in_stack_ffffffffffffff48;
                        bVar14 = SBORROW4(iVar6,3);
                        bVar13 = iVar6 + -3 < 0;
                        bVar12 = iVar6 == 3;
                        uVar10 = 4;
                        goto label_0420b4df;
                      }
                      fVar16 = 0.0;
                      uVar7 = (uint)in_stack_ffffffffffffff48;
                      if (*(char *)((long)&(__this->fields)._wasImpact + 1) != '\0') {
                        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff;
                        if (uVar7 < 6) {
                          in_stack_ffffffffffffff48 = 5;
                        }
                        goto label_0420b190;
                      }
                      bVar14 = SBORROW4(uVar7,1);
                      bVar13 = (int)(uVar7 - 1) < 0;
                      bVar12 = uVar7 == 1;
                      uVar10 = 2;
                    }
                    else {
                      iVar6 = (int)in_stack_ffffffffffffff48;
                      bVar14 = SBORROW4(iVar6,2);
                      bVar13 = iVar6 + -2 < 0;
                      bVar12 = iVar6 == 2;
                      uVar10 = 3;
                    }
label_0420b4df:
                    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff;
                    if (bVar12 || bVar14 != bVar13) {
                      in_stack_ffffffffffffff48 = uVar10;
                    }
                  }
                }
                goto label_0420b190;
              }
            }
            il2cpp_runtime_helper_022b2c90();
            break;
          }
        } while( true );
      }
      goto label_0420b65e;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pCVar11);
label_0420b66b:
  il2cpp_runtime_helper_022b2c90();
label_0420b670:
  il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_0420b678:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff58 = fVar15;
label_0420b67d:
  il2cpp_runtime_helper_022b2c90();
label_0420b682:
  il2cpp_runtime_helper_022b2fd0();
label_0420b687:
  il2cpp_runtime_helper_022b2c90();
label_0420b68c:
  il2cpp_runtime_helper_022b2c90();
label_0420b691:
  il2cpp_runtime_helper_022b2c90();
label_0420b696:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar2 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._index = in_stack_ffffffffffffff50;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff48;
    __this_04.fields._version = (int32_t)radius;
    __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)local_98);
    if (lVar2 == 0) {
label_0420b639:
      return (int32_t)in_stack_ffffffffffffff48;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._index = in_stack_ffffffffffffff50;
  __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff48;
  __this_05.fields._version = (int32_t)radius;
  __this_05.fields._current._0_4_ = in_stack_ffffffffffffff58;
  __this_05.fields._current._4_4_ = in_stack_ffffffffffffff5c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_05,(MethodInfo_3219C30 *)local_98);
  _Unwind_Resume(auVar18._0_8_);
label_0420b625:
  __this_03.fields._index = in_stack_ffffffffffffff50;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff48;
  __this_03.fields._version = (int32_t)radius;
  __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
  __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)local_98);
  goto label_0420b639;
}


// Projectiles.ThunderspearProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_ThunderspearProjectile__CalculateDamage (Projectiles_ThunderspearProjectile_o* __this, bool dmgOverride, const MethodInfo* method);
// 0x420c450

int32_t Projectiles_ThunderspearProjectile__CalculateDamage
                  (Projectiles_ThunderspearProjectile_o *__this,bool_conflict dmgOverride,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  byte bVar7;
  long lVar8;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *pCVar9;
  undefined1 auVar10 [16];
  UnityEngine_RaycastHit_o __this_01;
  int32_t extraout_EAX;
  int iVar11;
  int32_t extraout_EAX_00;
  bool_conflict bVar12;
  uint uVar13;
  int32_t layerMask;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_List_ParticleSystem__o *__this_04;
  Projectiles_ThunderspearProjectile_o *pPVar14;
  Projectiles_ThunderspearProjectile_o *pPVar15;
  long *plVar16;
  Photon_Pun_PhotonView_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar17;
  Photon_Pun_PhotonView_o *extraout_RAX_00;
  Photon_Pun_PhotonView_o *extraout_RAX_01;
  int iVar19;
  MethodInfo *method_00;
  Projectiles_ThunderspearProjectile_o *__this_05;
  float fVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_00;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff18;
  float fVar29;
  undefined1 local_b8 [28];
  float local_9c;
  float fStack_98;
  undefined8 uStack_94;
  Projectiles_ThunderspearProjectile_o *pPStack_88;
  Projectiles_ThunderspearProjectile_o *pPStack_80;
  Photon_Pun_PhotonView_o *pPVar18;
  
  if (g_data_057ad8fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fc = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_0420c47b;
label_0420c505:
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_0420c505;
label_0420c47b:
    __this_05 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((__this_05 != (Projectiles_ThunderspearProjectile_o *)0x0) &&
      (pPVar14 = (Projectiles_ThunderspearProjectile_o *)
                 (*(__this_05->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                           (__this_05,"Thunderspear",(__this_05->klass->vtable)._7_ReceiveCustomStream.method),
      pPVar14 != (Projectiles_ThunderspearProjectile_o *)0x0)) &&
     (pPVar15 = (Projectiles_ThunderspearProjectile_o *)
                (*(pPVar14->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                          (pPVar14,"DamageMultiplier",(pPVar14->klass->vtable)._7_ReceiveCustomStream.method),
     __this_05 = pPVar14, pPVar15 != (Projectiles_ThunderspearProjectile_o *)0x0)) {
    fVar24 = (float)(**(code **)&pPVar15->klass[1]._2.thread_static_fields_offset)();
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    __this_05 = pPVar15;
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x48), lVar8 != 0)) {
      if (*(char *)(lVar8 + 0x11) != '\0') {
        fVar24 = 1.0;
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar20 = (__this->fields).InitialPlayerVelocity.fields.x;
      uVar1 = (__this->fields).InitialPlayerVelocity.fields.y;
      uVar4 = (__this->fields).InitialPlayerVelocity.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar20 = (float)uVar4 * (float)uVar4 + fVar20 * fVar20 + (float)uVar1 * (float)uVar1;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      iVar11 = (int)(fVar24 * fVar20 * 10.0);
      iVar19 = 10;
      if (9 < iVar11) {
        iVar19 = iVar11;
      }
      pCVar9 = (__this->fields)._owner;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar12 != '\0') &&
         (pCVar9 = (__this->fields)._owner, pCVar9 != (Characters_BaseCharacter_o *)0x0)) {
        bVar7 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar7 <= (pCVar9->klass->_2).naturalAligment) &&
           (((pCVar9->klass->_2).typeHierarchy[(ulong)bVar7 - 1] == TypeInfo_Human &&
            (*(char *)((long)&(pCVar9->fields).FeedVictimName + 1) != '\0')))) {
          iVar19 = *(int *)((long)&(pCVar9->fields).FeedVictimName + 4);
        }
      }
      return iVar19;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar14 = __this_05;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this_05,(MethodInfo *)0x0);
  pPVar18 = (__this_05->fields)._photonView;
  if (pPVar18 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar18->fields)._IsMine_k__BackingField != '\0') {
      fVar24 = (__this_05->fields)._timeLeft;
      pPVar14 = (Projectiles_ThunderspearProjectile_o *)0x0;
      fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar24 = fVar24 - fVar20;
      (__this_05->fields)._timeLeft = fVar24;
      if (fVar24 <= 0.0) {
        pPVar14 = __this_05;
        (*(__this_05->klass->vtable)._16_OnExceedLiveTime.methodPtr)();
      }
    }
    plVar16 = (long *)(__this_05->fields)._photonView;
    if ((Photon_Pun_PhotonView_o *)plVar16 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((char)(((Photon_Pun_PhotonView_o *)plVar16)->fields)._IsMine_k__BackingField == '\0') {
label_0420c7ed:
        return (int32_t)plVar16;
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar24 = (__this_05->fields)._velocity.fields.x;
      uVar2 = (__this_05->fields)._velocity.fields.y;
      uVar5 = (__this_05->fields)._velocity.fields.z;
      plVar16 = &TypeInfo_Math;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        plVar16 = (long *)il2cpp_runtime_helper_02337ed0();
      }
      fVar24 = (float)uVar5 * (float)uVar5 + fVar24 * fVar24 + (float)uVar2 * (float)uVar2;
      if (fVar24 < 0.0) {
        fVar24 = sqrtf(fVar24);
        plVar16 = (long *)extraout_RAX;
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      if (fVar24 <= 0.0) goto label_0420c7ed;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      pPVar14 = (Projectiles_ThunderspearProjectile_o *)0x0;
      value = UnityEngine_Quaternion__LookRotation_4debb20
                        ((UnityEngine_Vector3_o)(__this_05->fields)._velocity.fields,(MethodInfo *)0x0);
      __this = (Projectiles_ThunderspearProjectile_o *)0x0;
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar17,value,(MethodInfo *)0x0);
        return extraout_EAX_00;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plVar16 = (long *)pPVar14;
  pPStack_88 = __this_05;
  pPStack_80 = __this;
  if (g_data_057ad8fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar16 = &TypeInfo_ThunderspearProjectile;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8fd = '\x01';
  }
  fStack_98 = 0.0;
  uStack_94 = 0;
  local_b8._16_8_ = 0;
  local_b8._24_4_ = 0;
  local_9c = 0.0;
  local_b8._0_8_ = (Projectiles_ThunderspearProjectile_c *)0x0;
  local_b8._8_8_ = (void *)0x0;
  pPVar18 = (pPVar14->fields)._photonView;
  if (pPVar18 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420cc7c;
  if ((char)(pPVar18->fields)._IsMine_k__BackingField == '\0') goto label_0420cc73;
  if (*(char *)((long)&(pPVar14->fields)._wasImpact + 2) != '\0') {
    __this_00 = (pPVar14->fields)._rigidbody;
    if (g_data_057a65d5 == '\0') {
      plVar16 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_0420cc7c;
    UnityEngine_Rigidbody__set_velocity
              (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    x = *(UnityEngine_Object_o **)&(pPVar14->fields)._wasMaxRange;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      plVar16 = *(long **)&(pPVar14->fields)._wasMaxRange;
      if ((Projectiles_ThunderspearProjectile_o *)plVar16 == (Projectiles_ThunderspearProjectile_o *)0x0)
      goto label_0420cc7c;
      pUVar17 = (pPVar14->fields)._transform;
      UVar28 = UnityEngine_Transform__TransformPoint
                         ((UnityEngine_Transform_o *)plVar16,
                          *(UnityEngine_Vector3_Fields *)&(pPVar14->fields)._embedParent,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
      UnityEngine_Transform__set_position(pUVar17,UVar28,(MethodInfo *)0x0);
    }
    pCVar9 = (pPVar14->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    uVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pPVar18 = (Photon_Pun_PhotonView_o *)(ulong)uVar13;
    if (((char)uVar13 != '\0') && (*(char *)&(pPVar14->fields)._startPosition.fields.y != '\0')) {
      Projectiles_ThunderspearProjectile__Explode(pPVar14,method_00);
      pPVar18 = extraout_RAX_00;
    }
    goto label_0420cc73;
  }
  plVar16 = (long *)pPVar14;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
  UVar28 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  fVar20 = UVar28.fields.z;
  auVar26._0_8_ = UVar28.fields._0_8_;
  auVar26._8_4_ = extraout_XMM0_Dc;
  auVar26._12_4_ = extraout_XMM0_Dd;
  fVar3 = (pPVar14->fields)._lastPosition.fields.x;
  fVar6 = (pPVar14->fields)._lastPosition.fields.y;
  fVar24 = (pPVar14->fields)._lastPosition.fields.z;
  fVar29 = 0.0;
  if (g_data_057a6845 == '\0') {
    auVar25._0_8_ = auVar26._8_8_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar26._8_8_ = auVar25._0_8_;
    g_data_057a6845 = '\x01';
  }
  auVar25._0_8_ = CONCAT44(auVar26._4_4_ - fVar6,auVar26._0_4_ - fVar3);
  auVar25._8_4_ = auVar26._8_4_ - fVar29;
  auVar25._12_4_ = auVar26._12_4_ - 0.0;
  fVar20 = fVar20 - fVar24;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auVar26._0_8_ = auVar25._8_8_;
    il2cpp_runtime_helper_02337ed0();
    auVar25._8_8_ = auVar26._0_8_;
  }
  fVar27 = fVar20 * fVar20 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
  if (fVar27 < 0.0) {
    auVar26._0_8_ = auVar25._0_8_;
    auVar25._0_8_ = auVar25._8_8_;
    fVar21 = sqrtf(fVar27);
    auVar25._8_8_ = auVar25._0_8_;
    auVar25._0_8_ = auVar26._0_8_;
    uVar22 = extraout_XMM0_Dc_00;
    uVar23 = extraout_XMM0_Dd_00;
    if (fVar21 <= 1e-05) goto label_0420cab0;
label_0420cb2f:
    fVar20 = fVar20 / fVar21;
    auVar10._4_4_ = fVar21;
    auVar10._0_4_ = fVar21;
    auVar10._8_4_ = uVar22;
    auVar10._12_4_ = uVar23;
    auVar26 = divps(auVar25,auVar10);
    auVar25._0_8_ = auVar26._8_8_;
  }
  else {
    uVar22 = 0;
    uVar23 = 0;
    fVar21 = SQRT(fVar27);
    if (1e-05 < fVar21) goto label_0420cb2f;
label_0420cab0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar26._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar25._0_8_ = 0;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (0.0 <= fVar27) goto label_0420cb7c;
label_0420cb98:
    fVar27 = sqrtf(fVar27);
  }
  else {
    if (fVar27 < 0.0) goto label_0420cb98;
label_0420cb7c:
    fVar27 = SQRT(fVar27);
  }
  if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar28.fields.y = fVar6;
  UVar28.fields.x = fVar3;
  UVar28.fields.z = fVar24;
  direction.fields.z = fVar20;
  direction.fields.x = (float)(int)auVar26._0_8_;
  direction.fields.y = (float)(int)((ulong)auVar26._0_8_ >> 0x20);
  bVar12 = UnityEngine_Physics__SphereCast_4e78cf0
                     (UVar28,0.5,direction,(UnityEngine_RaycastHit_o *)local_b8,fVar27,layerMask,
                      (MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
    plVar16 = (long *)local_b8;
    __this_01.fields.m_Point.fields.y = fVar27;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff18;
    __this_01.fields.m_Point.fields.z = fVar20;
    __this_01.fields.m_Normal.fields.x = fVar24;
    __this_01.fields.m_Normal.fields.y = (float)(int)auVar26._0_8_;
    __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)auVar26._0_8_ >> 0x20);
    __this_01.fields.m_FaceID = (int)auVar25._0_8_;
    __this_01.fields.m_Distance = (float)(int)((ulong)auVar25._0_8_ >> 0x20);
    __this_01.fields.m_UV.fields.x = fVar3;
    __this_01.fields.m_UV.fields.y = fVar6;
    __this_01.fields.m_Collider = (int32_t)fVar29;
    UVar28 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)plVar16);
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
    UnityEngine_Transform__set_position(pUVar17,UVar28,(MethodInfo *)0x0);
  }
  plVar16 = (long *)pPVar14;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    UVar28 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    (pPVar14->fields)._lastPosition.fields.x = (float)(int)UVar28.fields._0_8_;
    (pPVar14->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
    (pPVar14->fields)._lastPosition.fields.z = UVar28.fields.z;
    pPVar18 = extraout_RAX_01;
label_0420cc73:
    return (int32_t)pPVar18;
  }
label_0420cc7c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._embedParent =
       (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._embedPosition.fields.x = fVar24;
  auVar26._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._embedPosition.fields.y =
       (float)(int)auVar26._0_8_;
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._embedPosition.fields.z =
       (float)(int)((ulong)auVar26._0_8_ >> 0x20);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._startPosition.fields.x = fVar24;
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._hideObjects = __this_02;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._hideObjects,__this_02);
  __this_03 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Collider);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._colliders = __this_03;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._colliders,__this_03);
  __this_04 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._fadeTrails = __this_04;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)plVar16)->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)plVar16,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Projectiles.ThunderspearProjectile$$Update
// il2cpp: void Projectiles_ThunderspearProjectile__Update (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420c6f0

void Projectiles_ThunderspearProjectile__Update
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *x_00;
  undefined1 auVar6 [16];
  UnityEngine_RaycastHit_o __this_01;
  bool_conflict bVar7;
  int32_t layerMask;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_List_ParticleSystem__o *__this_04;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *method_00;
  Projectiles_ThunderspearProjectile_o *__this_05;
  long *__this_06;
  undefined8 unaff_R14;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd_00;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff50;
  float fVar18;
  undefined1 auStack_80 [28];
  float fStack_64;
  float fStack_60;
  undefined8 uStack_5c;
  Projectiles_ThunderspearProjectile_o *pPStack_50;
  undefined8 uStack_48;
  
  __this_05 = __this;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar5 = (__this->fields)._photonView;
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar5->fields)._IsMine_k__BackingField != '\0') {
      fVar13 = (__this->fields)._timeLeft;
      __this_05 = (Projectiles_ThunderspearProjectile_o *)0x0;
      fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar13 = fVar13 - fVar9;
      (__this->fields)._timeLeft = fVar13;
      if (fVar13 <= 0.0) {
        __this_05 = __this;
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)();
      }
    }
    pPVar5 = (__this->fields)._photonView;
    if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') {
        return;
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar13 = (__this->fields)._velocity.fields.x;
      uVar1 = (__this->fields)._velocity.fields.y;
      uVar3 = (__this->fields)._velocity.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar13 = (float)uVar3 * (float)uVar3 + fVar13 * fVar13 + (float)uVar1 * (float)uVar1;
      if (fVar13 < 0.0) {
        fVar13 = sqrtf(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      if (fVar13 <= 0.0) {
        return;
      }
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_05 = (Projectiles_ThunderspearProjectile_o *)0x0;
      value = UnityEngine_Quaternion__LookRotation_4debb20
                        ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0);
      unaff_R14._0_4_ = 0.0;
      unaff_R14._4_4_ = 0.0;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar8,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_06 = (long *)__this_05;
  pPStack_50 = __this;
  uStack_48 = unaff_R14;
  if (g_data_057ad8fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    __this_06 = &TypeInfo_ThunderspearProjectile;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8fd = '\x01';
  }
  fStack_60 = 0.0;
  uStack_5c = 0;
  auStack_80._16_8_ = 0;
  auStack_80._24_4_ = 0;
  fStack_64 = 0.0;
  auStack_80._0_8_ = (Projectiles_ThunderspearProjectile_c *)0x0;
  auStack_80._8_8_ = (void *)0x0;
  pPVar5 = (__this_05->fields)._photonView;
  if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420cc7c;
  if ((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  if (*(char *)((long)&(__this_05->fields)._wasImpact + 2) != '\0') {
    __this_00 = (__this_05->fields)._rigidbody;
    if (g_data_057a65d5 == '\0') {
      __this_06 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_velocity
                (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      x = *(UnityEngine_Object_o **)&(__this_05->fields)._wasMaxRange;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
label_0420c982:
        x_00 = (__this_05->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (*(char *)&(__this_05->fields)._startPosition.fields.y == '\0') {
          return;
        }
        Projectiles_ThunderspearProjectile__Explode(__this_05,method_00);
        return;
      }
      __this_06 = *(long **)&(__this_05->fields)._wasMaxRange;
      if ((Projectiles_ThunderspearProjectile_o *)__this_06 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        pUVar8 = (__this_05->fields)._transform;
        UVar17 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)__this_06,
                            *(UnityEngine_Vector3_Fields *)&(__this_05->fields)._embedParent,(MethodInfo *)0x0
                           );
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar8,UVar17,(MethodInfo *)0x0);
          goto label_0420c982;
        }
      }
    }
    goto label_0420cc7c;
  }
  __this_06 = (long *)__this_05;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
  UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  fVar9 = UVar17.fields.z;
  auVar15._0_8_ = UVar17.fields._0_8_;
  auVar15._8_4_ = extraout_XMM0_Dc;
  auVar15._12_4_ = extraout_XMM0_Dd;
  fVar2 = (__this_05->fields)._lastPosition.fields.x;
  fVar4 = (__this_05->fields)._lastPosition.fields.y;
  fVar13 = (__this_05->fields)._lastPosition.fields.z;
  fVar18 = 0.0;
  if (g_data_057a6845 == '\0') {
    auVar14._0_8_ = auVar15._8_8_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar15._8_8_ = auVar14._0_8_;
    g_data_057a6845 = '\x01';
  }
  auVar14._0_8_ = CONCAT44(auVar15._4_4_ - fVar4,auVar15._0_4_ - fVar2);
  auVar14._8_4_ = auVar15._8_4_ - fVar18;
  auVar14._12_4_ = auVar15._12_4_ - 0.0;
  fVar9 = fVar9 - fVar13;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auVar15._0_8_ = auVar14._8_8_;
    il2cpp_runtime_helper_02337ed0();
    auVar14._8_8_ = auVar15._0_8_;
  }
  fVar16 = fVar9 * fVar9 + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
  if (fVar16 < 0.0) {
    auVar15._0_8_ = auVar14._0_8_;
    auVar14._0_8_ = auVar14._8_8_;
    fVar10 = sqrtf(fVar16);
    auVar14._8_8_ = auVar14._0_8_;
    auVar14._0_8_ = auVar15._0_8_;
    uVar11 = extraout_XMM0_Dc_00;
    uVar12 = extraout_XMM0_Dd_00;
    if (1e-05 < fVar10) goto label_0420cb2f;
label_0420cab0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar15._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar14._0_8_ = 0;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    fVar10 = SQRT(fVar16);
    if (fVar10 <= 1e-05) goto label_0420cab0;
label_0420cb2f:
    fVar9 = fVar9 / fVar10;
    auVar6._4_4_ = fVar10;
    auVar6._0_4_ = fVar10;
    auVar6._8_4_ = uVar11;
    auVar6._12_4_ = uVar12;
    auVar15 = divps(auVar14,auVar6);
    auVar14._0_8_ = auVar15._8_8_;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (fVar16 < 0.0) goto label_0420cb98;
label_0420cb7c:
    fVar16 = SQRT(fVar16);
  }
  else {
    if (0.0 <= fVar16) goto label_0420cb7c;
label_0420cb98:
    fVar16 = sqrtf(fVar16);
  }
  if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar17.fields.y = fVar4;
  UVar17.fields.x = fVar2;
  UVar17.fields.z = fVar13;
  direction.fields.z = fVar9;
  direction.fields.x = (float)(int)auVar15._0_8_;
  direction.fields.y = (float)(int)((ulong)auVar15._0_8_ >> 0x20);
  bVar7 = UnityEngine_Physics__SphereCast_4e78cf0
                    (UVar17,0.5,direction,(UnityEngine_RaycastHit_o *)auStack_80,fVar16,layerMask,
                     (MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    __this_06 = (long *)auStack_80;
    __this_01.fields.m_Point.fields.y = fVar16;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff50;
    __this_01.fields.m_Point.fields.z = fVar9;
    __this_01.fields.m_Normal.fields.x = fVar13;
    __this_01.fields.m_Normal.fields.y = (float)(int)auVar15._0_8_;
    __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)auVar15._0_8_ >> 0x20);
    __this_01.fields.m_FaceID = (int)auVar14._0_8_;
    __this_01.fields.m_Distance = (float)(int)((ulong)auVar14._0_8_ >> 0x20);
    __this_01.fields.m_UV.fields.x = fVar2;
    __this_01.fields.m_UV.fields.y = fVar4;
    __this_01.fields.m_Collider = (int32_t)fVar18;
    UVar17 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)__this_06);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
    UnityEngine_Transform__set_position(pUVar8,UVar17,(MethodInfo *)0x0);
  }
  __this_06 = (long *)__this_05;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    (__this_05->fields)._lastPosition.fields.x = (float)(int)UVar17.fields._0_8_;
    (__this_05->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar17.fields._0_8_ >> 0x20);
    (__this_05->fields)._lastPosition.fields.z = UVar17.fields.z;
    return;
  }
label_0420cc7c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._embedParent =
       (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._embedPosition.fields.x = fVar13;
  auVar15._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar13 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._embedPosition.fields.y =
       (float)(int)auVar15._0_8_;
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._embedPosition.fields.z =
       (float)(int)((ulong)auVar15._0_8_ >> 0x20);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._startPosition.fields.x = fVar13;
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._hideObjects = __this_02;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._hideObjects,__this_02);
  __this_03 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Collider);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._colliders = __this_03;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._colliders,__this_03);
  __this_04 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._fadeTrails = __this_04;
  il2cpp_runtime_helper_022b4080(&(((Projectiles_ThunderspearProjectile_o *)__this_06)->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$FixedUpdate
// il2cpp: void Projectiles_ThunderspearProjectile__FixedUpdate (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420c850

void Projectiles_ThunderspearProjectile__FixedUpdate
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *x_00;
  undefined1 auVar4 [16];
  UnityEngine_RaycastHit_o __this_01;
  bool_conflict bVar5;
  int32_t layerMask;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_List_ParticleSystem__o *__this_04;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *method_00;
  Projectiles_ThunderspearProjectile_o *__this_05;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff88;
  float fVar15;
  float fVar16;
  undefined1 auStack_48 [28];
  float fStack_2c;
  float fStack_28;
  undefined8 uStack_24;
  
  __this_05 = __this;
  if (g_data_057ad8fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    __this_05 = (Projectiles_ThunderspearProjectile_o *)&TypeInfo_ThunderspearProjectile;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8fd = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  auStack_48._16_8_ = 0;
  auStack_48._24_4_ = 0;
  fStack_2c = 0.0;
  auStack_48._0_8_ = (Projectiles_ThunderspearProjectile_c *)0x0;
  auStack_48._8_8_ = (void *)0x0;
  pPVar3 = (__this->fields)._photonView;
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420cc7c;
  if ((char)(pPVar3->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
    __this_00 = (__this->fields)._rigidbody;
    if (g_data_057a65d5 == '\0') {
      __this_05 = (Projectiles_ThunderspearProjectile_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_velocity
                (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      x = *(UnityEngine_Object_o **)&(__this->fields)._wasMaxRange;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
label_0420c982:
        x_00 = (__this->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        if (*(char *)&(__this->fields)._startPosition.fields.y == '\0') {
          return;
        }
        Projectiles_ThunderspearProjectile__Explode(__this,method_00);
        return;
      }
      __this_05 = *(Projectiles_ThunderspearProjectile_o **)&(__this->fields)._wasMaxRange;
      if (__this_05 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        pUVar6 = (__this->fields)._transform;
        UVar14 = UnityEngine_Transform__TransformPoint
                           ((UnityEngine_Transform_o *)__this_05,
                            *(UnityEngine_Vector3_Fields *)&(__this->fields)._embedParent,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar6,UVar14,(MethodInfo *)0x0);
          goto label_0420c982;
        }
      }
    }
    goto label_0420cc7c;
  }
  __this_05 = __this;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
  UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  fVar10 = UVar14.fields.z;
  auVar12._0_8_ = UVar14.fields._0_8_;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._12_4_ = extraout_XMM0_Dd;
  fVar1 = (__this->fields)._lastPosition.fields.x;
  fVar2 = (__this->fields)._lastPosition.fields.y;
  fVar15 = (__this->fields)._lastPosition.fields.z;
  fVar16 = 0.0;
  if (g_data_057a6845 == '\0') {
    auVar11._0_8_ = auVar12._8_8_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar12._8_8_ = auVar11._0_8_;
    g_data_057a6845 = '\x01';
  }
  auVar11._0_8_ = CONCAT44(auVar12._4_4_ - fVar2,auVar12._0_4_ - fVar1);
  auVar11._8_4_ = auVar12._8_4_ - fVar16;
  auVar11._12_4_ = auVar12._12_4_ - 0.0;
  fVar10 = fVar10 - fVar15;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auVar12._0_8_ = auVar11._8_8_;
    il2cpp_runtime_helper_02337ed0();
    auVar11._8_8_ = auVar12._0_8_;
  }
  fVar13 = fVar10 * fVar10 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if (fVar13 < 0.0) {
    auVar12._0_8_ = auVar11._0_8_;
    auVar11._0_8_ = auVar11._8_8_;
    fVar7 = sqrtf(fVar13);
    auVar11._8_8_ = auVar11._0_8_;
    auVar11._0_8_ = auVar12._0_8_;
    uVar8 = extraout_XMM0_Dc_00;
    uVar9 = extraout_XMM0_Dd_00;
    if (fVar7 <= 1e-05) goto label_0420cab0;
label_0420cb2f:
    fVar10 = fVar10 / fVar7;
    auVar4._4_4_ = fVar7;
    auVar4._0_4_ = fVar7;
    auVar4._8_4_ = uVar8;
    auVar4._12_4_ = uVar9;
    auVar12 = divps(auVar11,auVar4);
    auVar11._0_8_ = auVar12._8_8_;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    fVar7 = SQRT(fVar13);
    if (1e-05 < fVar7) goto label_0420cb2f;
label_0420cab0:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    auVar12._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar11._0_8_ = 0;
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (0.0 <= fVar13) goto label_0420cb7c;
label_0420cb98:
    fVar13 = sqrtf(fVar13);
  }
  else {
    if (fVar13 < 0.0) goto label_0420cb98;
label_0420cb7c:
    fVar13 = SQRT(fVar13);
  }
  if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar14.fields.y = fVar2;
  UVar14.fields.x = fVar1;
  UVar14.fields.z = fVar15;
  direction.fields.z = fVar10;
  direction.fields.x = (float)(int)auVar12._0_8_;
  direction.fields.y = (float)(int)((ulong)auVar12._0_8_ >> 0x20);
  bVar5 = UnityEngine_Physics__SphereCast_4e78cf0
                    (UVar14,0.5,direction,(UnityEngine_RaycastHit_o *)auStack_48,fVar13,layerMask,
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_05 = (Projectiles_ThunderspearProjectile_o *)auStack_48;
    __this_01.fields.m_Point.fields.y = fVar13;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88;
    __this_01.fields.m_Point.fields.z = fVar10;
    __this_01.fields.m_Normal.fields.x = fVar15;
    __this_01.fields.m_Normal.fields.y = (float)(int)auVar12._0_8_;
    __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)auVar12._0_8_ >> 0x20);
    __this_01.fields.m_FaceID = (int)auVar11._0_8_;
    __this_01.fields.m_Distance = (float)(int)((ulong)auVar11._0_8_ >> 0x20);
    __this_01.fields.m_UV.fields.x = fVar1;
    __this_01.fields.m_UV.fields.y = fVar2;
    __this_01.fields.m_Collider = (int32_t)fVar16;
    UVar14 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)__this_05);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0420cc7c;
    UnityEngine_Transform__set_position(pUVar6,UVar14,(MethodInfo *)0x0);
  }
  __this_05 = __this;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    (__this->fields)._lastPosition.fields.x = (float)(int)UVar14.fields._0_8_;
    (__this->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
    (__this->fields)._lastPosition.fields.z = UVar14.fields.z;
    return;
  }
label_0420cc7c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  fVar15 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this_05->fields)._embedParent = (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  (__this_05->fields)._embedPosition.fields.x = fVar15;
  auVar12._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar15 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this_05->fields)._embedPosition.fields.y = (float)(int)auVar12._0_8_;
  (__this_05->fields)._embedPosition.fields.z = (float)(int)((ulong)auVar12._0_8_ >> 0x20);
  (__this_05->fields)._startPosition.fields.x = fVar15;
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_05->fields)._hideObjects = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._hideObjects,__this_02);
  __this_03 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Collider);
  (__this_05->fields)._colliders = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._colliders,__this_03);
  __this_04 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_05->fields)._fadeTrails = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_05,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$GetStat
// il2cpp: float Projectiles_ThunderspearProjectile__GetStat (Projectiles_ThunderspearProjectile_o* __this, System_String_o* field, const MethodInfo* method);
// 0x420aeb0

float Projectiles_ThunderspearProjectile__GetStat
                (Projectiles_ThunderspearProjectile_o *__this,System_String_o *field,MethodInfo *method)

{
  int iVar1;
  code *vtableDispatch;
  Projectiles_ThunderspearProjectile_o *pPVar2;
  long *plVar3;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  Projectiles_ThunderspearProjectile_o *__this_00;
  float fVar6;
  float extraout_XMM0_Da;
  
  pMVar4 = (MethodInfo *)field;
  if (g_data_057ad8fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ad8fe = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar5 = "Thunderspear";
  }
  else {
    __this_00 = (Projectiles_ThunderspearProjectile_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar5 = "Thunderspear";
  }
  "Thunderspear" = pMVar5;
  if (((__this_00 != (Projectiles_ThunderspearProjectile_o *)0x0) &&
      (pPVar2 = (Projectiles_ThunderspearProjectile_o *)
                (*(__this_00->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                          (__this_00,pMVar5,(__this_00->klass->vtable)._7_ReceiveCustomStream.method),
      pMVar4 = pMVar5, pPVar2 != (Projectiles_ThunderspearProjectile_o *)0x0)) &&
     (plVar3 = (long *)(*(pPVar2->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                 (pPVar2,field,(pPVar2->klass->vtable)._7_ReceiveCustomStream.method),
     pMVar4 = (MethodInfo *)field, __this_00 = pPVar2, plVar3 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar3 + 0x388);
    fVar6 = (float)(*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x390),vtableDispatch);
    return fVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_00->fields)._wasImpact + 1) = 1;
  if (*(char *)((long)&(__this_00->fields)._wasImpact + 2) == '\0') {
    Projectiles_ThunderspearProjectile__Explode(__this_00,pMVar4);
    return extraout_XMM0_Da;
  }
  fVar6 = (float)(*(__this_00->klass->vtable)._17_DestroySelf.methodPtr)();
  return fVar6;
}


// Projectiles.ThunderspearProjectile$$.ctor
// il2cpp: void Projectiles_ThunderspearProjectile___ctor (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x420cc90

void Projectiles_ThunderspearProjectile___ctor
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  lVar3 = TypeInfo_Vector3;
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._embedParent = (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  (__this->fields)._embedPosition.fields.x = fVar1;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  (__this->fields)._embedPosition.fields.y = (float)(int)uVar2;
  (__this->fields)._embedPosition.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._startPosition.fields.x = fVar1;
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$.cctor
// il2cpp: void Projectiles_ThunderspearProjectile___cctor (const MethodInfo* method);
// 0x420cd00

void Projectiles_ThunderspearProjectile___cctor(MethodInfo *method)

{
  uint uVar1;
  System_String_Fields SVar2;
  long lVar3;
  UnityEngine_LayerMask_o UVar4;
  bool_conflict bVar5;
  System_Int32_array *layers;
  System_Int32_array *layers_00;
  System_String_o *value;
  int32_t iStack_34;
  System_Int32_array *pSStack_30;
  undefined8 *puStack_28;
  
  if (g_data_057ad8ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearProjectile);
    g_data_057ad8ff = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)((long)&TypeInfo_PhysicsLayer[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = TypeInfo_PhysicsLayer;
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      SVar2 = TypeInfo_PhysicsLayer[7].fields;
      layers->m_Items[0] = *(int32_t *)((long)SVar2 + 0x3c);
      if (((uVar1 != 1) && (layers->m_Items[1] = *(int32_t *)((long)SVar2 + 0x38), 2 < uVar1)) &&
         (layers->m_Items[2] = *(int32_t *)((long)SVar2 + 0x30), uVar1 != 3)) {
        layers->m_Items[3] = *(int32_t *)((long)SVar2 + 0x14);
        UVar4 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        layers = (System_Int32_array *)&TypeInfo_ThunderspearProjectile;
        (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask = (int32_t)UVar4.fields.m_Mask;
        value = TypeInfo_int;
        layers_00 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
        if (layers_00 == (System_Int32_array *)0x0) goto label_0420ce62;
        uVar1 = (uint)layers_00->max_length;
        if (uVar1 != 0) {
          SVar2 = TypeInfo_PhysicsLayer[7].fields;
          layers_00->m_Items[0] = *(int32_t *)((long)SVar2 + 0x3c);
          if (((uVar1 != 1) && (layers_00->m_Items[1] = *(int32_t *)((long)SVar2 + 0x38), 2 < uVar1)) &&
             ((layers_00->m_Items[2] = *(int32_t *)((long)SVar2 + 0x30), uVar1 != 3 &&
              (layers_00->m_Items[3] = *(int32_t *)((long)SVar2 + 0x14), 4 < uVar1)))) {
            layers_00->m_Items[4] = *(int32_t *)((long)SVar2 + 0xc);
            UVar4 = Utility_PhysicsLayer__GetMask(layers_00,(MethodInfo *)0x0);
            ((UnityEngine_LayerMask_Fields *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 4))->m_Mask =
                 (int32_t)UVar4.fields.m_Mask;
            lVar3 = *(long *)(TypeInfo_ThunderspearProjectile + 0xb8);
            *(undefined8 *)(lVar3 + 8) = 0x3f3333333ef33333;
            *(undefined8 *)(lVar3 + 0x10) = 0x3f8000003f800000;
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0420ce62:
  il2cpp_runtime_helper_022b2c90();
  puStack_28 = &TypeInfo_PhysicsLayer;
  pSStack_30 = layers;
  if (g_data_057ad900 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_CharacterEffectType);
    il2cpp_runtime_helper_023445d0(&"ToxicSurge");
    il2cpp_runtime_helper_023445d0(&"GlowOutline");
    il2cpp_runtime_helper_023445d0(&"PlasmaFlow");
    il2cpp_runtime_helper_023445d0(&"RoyalAura");
    il2cpp_runtime_helper_023445d0(&"FrostEdge");
    il2cpp_runtime_helper_023445d0(&"NeonPulse");
    il2cpp_runtime_helper_023445d0(&"ColorAmp");
    g_data_057ad900 = '\x01';
  }
  iStack_34 = 0;
  bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_Enum__TryParse_Int32Enum_(value,&iStack_34,MethodInfo_Boolean_TryParse_CharacterEffectType);
    if ((char)bVar5 != '\0') {
      return;
    }
  }
  bVar5 = System_String__op_Equality(value,"NeonPulse",(MethodInfo *)0x0);
  if ((((char)bVar5 == '\0') &&
      (bVar5 = System_String__op_Equality(value,"GlowOutline",(MethodInfo *)0x0), (char)bVar5 == '\0')) &&
     ((bVar5 = System_String__op_Equality(value,"PlasmaFlow",(MethodInfo *)0x0), (char)bVar5 == '\0' &&
      (((bVar5 = System_String__op_Equality(value,"ToxicSurge",(MethodInfo *)0x0), (char)bVar5 == '\0' &&
        (bVar5 = System_String__op_Equality(value,"FrostEdge",(MethodInfo *)0x0), (char)bVar5 == '\0')) &&
       (bVar5 = System_String__op_Equality(value,"RoyalAura",(MethodInfo *)0x0), (char)bVar5 == '\0')))))) {
    System_String__op_Equality(value,"ColorAmp",(MethodInfo *)0x0);
  }
  return;
}


