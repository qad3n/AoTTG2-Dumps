// Type: Projectiles.ThunderspearProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/ThunderspearProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/ThunderspearProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.ThunderspearProjectile$$SetupSettings
// il2cpp: void Projectiles_ThunderspearProjectile__SetupSettings (Projectiles_ThunderspearProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3f1a770

void Projectiles_ThunderspearProjectile__SetupSettings
               (Projectiles_ThunderspearProjectile_o *__this,System_Object_array *settings,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_o UVar8;
  
  if (DAT_05703cd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    DAT_05703cd4 = '\x01';
    method = extraout_RDX;
  }
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
LAB_03f1a8b4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = settings->m_Items[0];
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40)) {
LAB_03f1a8b9:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pfVar5 = (float *)il2cpp_glue_022c7330(pIVar1,DAT_05711098,method);
      (__this->fields)._radius = *pfVar5;
      if ((uint)settings->max_length < 2) goto LAB_03f1a8b4;
      if (settings->m_Items[1] != (Il2CppObject *)0x0) {
        if ((settings->m_Items[1]->klass->_1).element_class !=
            *(Il2CppClass **)(TypeInfo_Color + 0x40)) goto LAB_03f1a8b9;
        pfVar5 = (float *)il2cpp_glue_022c7330();
        fVar2 = pfVar5[1];
        fVar3 = pfVar5[2];
        fVar4 = pfVar5[3];
        (__this->fields)._color.fields.r = *pfVar5;
        (__this->fields)._color.fields.g = fVar2;
        (__this->fields)._color.fields.b = fVar3;
        (__this->fields)._color.fields.a = fVar4;
        if ((uint)settings->max_length < 3) goto LAB_03f1a8b4;
        if (settings->m_Items[2] != (Il2CppObject *)0x0) {
          if ((settings->m_Items[2]->klass->_1).element_class !=
              *(Il2CppClass **)(DAT_05711048 + 0x40)) goto LAB_03f1a8b9;
          puVar6 = (undefined1 *)il2cpp_glue_022c7330();
          *(undefined1 *)&(__this->fields)._isAA = *puVar6;
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar8 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = (float)(int)UVar8.fields._0_8_;
            (__this->fields)._lastPosition.fields.y =
                 (float)(int)((ulong)UVar8.fields._0_8_ >> 0x20);
            (__this->fields)._lastPosition.fields.z = UVar8.fields.z;
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UVar8 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
              (__this->fields)._embedPosition.fields.y = (float)(int)UVar8.fields._0_8_;
              (__this->fields)._embedPosition.fields.z =
                   (float)(int)((ulong)UVar8.fields._0_8_ >> 0x20);
              (__this->fields)._startPosition.fields.x = UVar8.fields.z;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$RegisterObjects
// il2cpp: void Projectiles_ThunderspearProjectile__RegisterObjects (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1a8c0

void Projectiles_ThunderspearProjectile__RegisterObjects
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  long lVar5;
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_o *item_00;
  UnityEngine_ParticleSystem_MainModule_Fields UStack_e8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_e0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_a8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_68;
  
  if (DAT_05703cd5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Flame");
    il2cpp_init_method_metadata(&"ThunderspearModel");
    il2cpp_init_method_metadata(&"Trail");
    DAT_05703cd5 = '\x01';
  }
  UStack_e8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Trail",(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = (UnityEngine_ParticleSystem_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar6,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Flame",(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = (UnityEngine_Component_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar6,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar6 = UnityEngine_Transform__Find(pUVar6,"ThunderspearModel",(MethodInfo *)0x0),
          pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
         (item = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Component_o *)0x0)) {
        pSVar3 = (__this->fields)._hideObjects;
        item_00 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar3->fields)._items;
          if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = item_00;
              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,item_00);
              pSVar3 = (__this->fields)._hideObjects;
              lVar5 = MethodInfo_Void_Add;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00
                         ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                        );
              pSVar3 = (__this->fields)._hideObjects;
              lVar5 = MethodInfo_Void_Add;
            }
            MethodInfo_Void_Add = lVar5;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (pSVar3->fields)._items;
              if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = item;
                  il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,
                             (Il2CppObject *)item,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x50), lVar5 != 0)) {
                  if (*(char *)(lVar5 + 0x11) != '\0') {
                    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03f1ac82;
                    UStack_e8.m_ParticleSystem =
                         (UnityEngine_ParticleSystem_o *)
                         UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_e0,
                               (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0
                              );
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
                    UStack_e8.m_ParticleSystem =
                         (UnityEngine_ParticleSystem_o *)
                         UnityEngine_ParticleSystem__get_main
                                   ((UnityEngine_ParticleSystem_o *)__this_01,(MethodInfo *)0x0);
                    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_e0,
                               (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0
                              );
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
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f1ac82:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_ThunderspearProjectile__OnCollisionEnter (Projectiles_ThunderspearProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x3f1ac90

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
  UnityEngine_ContactPoint_o __this_03;
  UnityEngine_ContactPoint_o __this_04;
  UnityEngine_ContactPoint_o __this_05;
  UnityEngine_ContactPoint_o __this_06;
  bool_conflict bVar16;
  Photon_Pun_PhotonView_o *pPVar17;
  UnityEngine_ContactPoint_array *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Object_o *x;
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
  MethodInfo *pMVar20;
  Projectiles_ThunderspearProjectile_o *pPVar21;
  float fVar22;
  float fVar23;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
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
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uVar31;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 uVar32;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined8 in_stack_ffffffffffffff70;
  float fStack_88;
  float fStack_84;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Collider_o *pUStack_58;
  undefined1 auStack_48 [16];
  UnityEngine_Collider_o *pUStack_38;
  
  if (DAT_05703cd6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Embed1TimeMax");
    il2cpp_init_method_metadata(&"Embed2TimeTotal");
    il2cpp_init_method_metadata(&"Embed1TimeMin");
    il2cpp_init_method_metadata(&"Embed2TimeMultiplier");
    il2cpp_init_method_metadata(&"Embed1Time");
    il2cpp_init_method_metadata(&"Embed1TimeMultiplier");
    il2cpp_init_method_metadata(&"AATriggerRange");
    DAT_05703cd6 = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Collider_o *)0x0;
  pPVar17 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar17 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f1b76a;
  if ((char)(pPVar17->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) ||
     (lVar12 = *(long *)(lVar12 + 0x48), lVar12 == 0)) goto LAB_03f1b76a;
  if (*(char *)(lVar12 + 0x11) != '\0') {
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0)) goto LAB_03f1b76a;
    if (*(char *)(lVar12 + 0x11) != '\0') {
      pUVar13 = (__this->fields)._rigidbody;
      if (pUVar13 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f1b76a;
      UVar30 = UnityEngine_Rigidbody__get_velocity(pUVar13,(MethodInfo *)0x0);
      fVar22 = UVar30.fields.z;
      fVar3 = UVar30.fields.x;
      auVar29._0_4_ = UVar30.fields.y;
      if ((collision == (UnityEngine_Collision_o *)0x0) ||
         (uVar6._0_4_ = extraout_XMM0_Dc, uVar6._4_4_ = extraout_XMM0_Dd,
         pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
         pUVar18 == (UnityEngine_ContactPoint_array *)0x0)) goto LAB_03f1b76a;
      if ((int)pUVar18->max_length != 0) {
        __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff4c;
        __this_03.fields.m_Point.fields.x = fVar22;
        __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff50;
        __this_03.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff54;
        __this_03.fields.m_Normal.fields.y = fVar3;
        __this_03.fields.m_Normal.fields.z = auVar29._0_4_;
        __this_03.fields.m_Impulse.fields.x = (float)(undefined4)uVar6;
        __this_03.fields.m_Impulse.fields.y = (float)uVar6._4_4_;
        __this_03.fields.m_Impulse.fields.z = (float)in_stack_ffffffffffffff68;
        __this_03.fields.m_ThisColliderInstanceID = in_stack_ffffffffffffff6c;
        __this_03.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
        __this_03.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
        UVar30 = UnityEngine_ContactPoint__get_normal(__this_03,(MethodInfo *)pUVar18->m_Items);
        pUVar13 = (__this->fields)._rigidbody;
        if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
          fVar9 = (fVar22 * UVar30.fields.z +
                  auVar29._0_4_ * UVar30.fields.y + fVar3 * UVar30.fields.x) * -2.0;
          value.fields.y = (fVar9 * UVar30.fields.y + auVar29._0_4_) * 0.8;
          value.fields.x = (fVar9 * UVar30.fields.x + fVar3) * 0.8;
          value.fields.z = (fVar9 * UVar30.fields.z + fVar22) * 0.8;
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
        goto LAB_03f1b76a;
      }
      goto LAB_03f1b76f;
    }
  }
  *(undefined1 *)&(__this->fields)._wasImpact = 1;
  pUVar13 = (__this->fields)._rigidbody;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  if (pUVar13 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f1b76a;
  UnityEngine_Rigidbody__set_velocity
            (pUVar13,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
             (MethodInfo *)0x0);
  __this_00 = (__this->fields)._colliders;
  if (__this_00 == (System_Collections_Generic_List_Collider__o *)0x0) goto LAB_03f1b76a;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
  pUStack_58 = pUStack_38;
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIStack_60 = (Il2CppType *)auStack_48._8_8_;
  while (__this_01.fields._list._4_4_ = in_stack_ffffffffffffff4c,
        __this_01.fields._list._0_4_ = in_stack_ffffffffffffff48,
        __this_01.fields._index = in_stack_ffffffffffffff50,
        __this_01.fields._version = in_stack_ffffffffffffff54,
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff58,
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff5c,
        bVar16 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_01,(MethodInfo_3185E20 *)&pSStack_68), (char)bVar16 != '\0') {
    if (pUStack_58 == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Collider__set_enabled(pUStack_58,0,(MethodInfo *)0x0);
  }
  __this_02.fields._list._4_4_ = in_stack_ffffffffffffff4c;
  __this_02.fields._list._0_4_ = in_stack_ffffffffffffff48;
  __this_02.fields._index = in_stack_ffffffffffffff50;
  __this_02.fields._version = in_stack_ffffffffffffff54;
  __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
  __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
  pMVar20 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&pSStack_68);
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) ||
     (lVar12 = *(long *)(lVar12 + 0x48), lVar12 == 0)) goto LAB_03f1b76a;
  if ((*(char *)(lVar12 + 0x11) != '\0') || ((char)(__this->fields)._isAA == '\0')) {
    Projectiles_ThunderspearProjectile__Explode(__this,pMVar20);
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._wasImpact + 2) = 1;
  fVar22 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
  (__this->fields)._startPosition.fields.z = fVar22;
  if ((collision == (UnityEngine_Collision_o *)0x0) ||
     (pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
     pUVar18 == (UnityEngine_ContactPoint_array *)0x0)) goto LAB_03f1b76a;
  if ((int)pUVar18->max_length == 0) goto LAB_03f1b76f;
  __this_04.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff4c;
  __this_04.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
  __this_04.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff50;
  __this_04.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff54;
  __this_04.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff58;
  __this_04.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
  __this_04.fields.m_Impulse.fields.x = (float)in_stack_ffffffffffffff60;
  __this_04.fields.m_Impulse.fields.y = (float)in_stack_ffffffffffffff64;
  __this_04.fields.m_Impulse.fields.z = (float)in_stack_ffffffffffffff68;
  __this_04.fields.m_ThisColliderInstanceID = in_stack_ffffffffffffff6c;
  __this_04.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
  __this_04.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  UVar30 = UnityEngine_ContactPoint__get_normal(__this_04,(MethodInfo *)pUVar18->m_Items);
  fVar3 = UVar30.fields.z;
  uVar6._0_4_ = (__this->fields)._velocity.fields.x;
  uVar6._4_4_ = (__this->fields)._velocity.fields.y;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar6;
  fVar22 = (__this->fields)._velocity.fields.z;
  uVar31 = 0;
  uVar32 = 0;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    auVar27._4_4_ = uVar6._4_4_;
    auVar27._0_4_ = (undefined4)uVar6;
    auVar27._8_4_ = uVar31;
    auVar27._12_4_ = uVar32;
    DAT_056fde20 = '\x01';
  }
  if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
    il2cpp_init_class();
    auVar27._4_4_ = uVar6._4_4_;
    auVar27._0_4_ = (undefined4)uVar6;
    auVar27._8_4_ = uVar31;
    auVar27._12_4_ = uVar32;
  }
  uVar24 = 0;
  uVar25 = 0;
  auVar29._0_4_ = fVar22 * fVar22 + auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_;
  if (auVar29._0_4_ < 0.0) {
    auVar29._0_4_ = sqrtf(auVar29._0_4_);
    auVar27._4_4_ = uVar6._4_4_;
    auVar27._0_4_ = (undefined4)uVar6;
    auVar27._8_4_ = uVar31;
    auVar27._12_4_ = uVar32;
    uVar24 = extraout_XMM0_Dc_01;
    uVar25 = extraout_XMM0_Dd_01;
    if (auVar29._0_4_ <= 1e-05) goto LAB_03f1b155;
LAB_03f1b13f:
    fVar9 = fVar22 / auVar29._0_4_;
    auVar15._4_4_ = auVar29._0_4_;
    auVar15._0_4_ = auVar29._0_4_;
    auVar15._8_4_ = uVar24;
    auVar15._12_4_ = uVar25;
    auVar28 = divps(auVar27,auVar15);
  }
  else {
    auVar29._0_4_ = SQRT(auVar29._0_4_);
    if (1e-05 < auVar29._0_4_) goto LAB_03f1b13f;
LAB_03f1b155:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar28._8_8_ = 0;
    auVar28._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde20 == '\0') {
    uVar6._0_4_ = auVar28._0_4_;
    uVar6._4_4_ = auVar28._4_4_;
    uVar31 = auVar28._8_4_;
    uVar32 = auVar28._12_4_;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    auVar28._4_4_ = uVar6._4_4_;
    auVar28._0_4_ = (undefined4)uVar6;
    auVar28._8_4_ = uVar31;
    auVar28._12_4_ = uVar32;
    DAT_056fde20 = '\x01';
    fVar22 = fVar9;
  }
  fStack_88 = UVar30.fields.x;
  fStack_84 = UVar30.fields.y;
  auVar29._0_4_ = auVar28._0_4_ - fStack_88;
  auVar29._4_4_ = auVar28._4_4_ - fStack_84;
  auVar29._8_4_ = auVar28._8_4_ - extraout_XMM0_Dc_00;
  auVar29._12_4_ = auVar28._12_4_ - extraout_XMM0_Dd_00;
  fVar9 = fVar9 - fVar3;
  if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
    il2cpp_init_class();
    fVar22 = fVar9;
  }
  uVar6._0_4_ = 0;
  uVar6._4_4_ = 0;
  fVar23 = fVar9 * fVar9 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
  if (fVar23 < 0.0) {
    uVar6._0_4_ = auVar29._8_4_;
    uVar6._4_4_ = auVar29._12_4_;
    fVar23 = sqrtf(fVar23);
    auVar29._8_4_ = (float)(undefined4)uVar6;
    auVar29._12_4_ = (float)uVar6._4_4_;
    uVar6._0_4_ = extraout_XMM0_Dc_02;
    uVar6._4_4_ = extraout_XMM0_Dd_02;
    fVar22 = fVar9;
    if (fVar23 <= 1e-05) goto LAB_03f1b248;
LAB_03f1b23b:
    fVar9 = fVar9 / fVar23;
    auVar14._4_4_ = fVar23;
    auVar14._0_4_ = fVar23;
    auVar14._8_4_ = (undefined4)uVar6;
    auVar14._12_4_ = uVar6._4_4_;
    auVar29 = divps(auVar29,auVar14);
    uVar26 = auVar29._0_8_;
  }
  else {
    fVar23 = SQRT(fVar23);
    if (1e-05 < fVar23) goto LAB_03f1b23b;
LAB_03f1b248:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  (__this->fields)._velocity.fields.x = (float)(int)uVar26;
  (__this->fields)._velocity.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
  (__this->fields)._velocity.fields.z = fVar9;
  pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
  *(UnityEngine_Transform_o **)&(__this->fields)._wasMaxRange = pUVar19;
  il2cpp_runtime_glue(&(__this->fields)._wasMaxRange);
  pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
  if ((pUVar19 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar19 = UnityEngine_Transform__get_root(pUVar19,(MethodInfo *)0x0),
     pUVar19 != (UnityEngine_Transform_o *)0x0)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar19,MethodInfo_BaseTitan_GetComponent_BaseTitan)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar16 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar16 == '\0') {
      auVar29._0_4_ = 0.1;
    }
    else {
      auVar29._0_4_ = 0.5;
    }
    uVar6._0_4_ = 0;
    uVar6._4_4_ = 0;
    uVar31 = 0;
    pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
    pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
    if (pUVar18 != (UnityEngine_ContactPoint_array *)0x0) {
      if ((int)pUVar18->max_length == 0) {
LAB_03f1b76f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_05.fields.m_Point.fields.y = (float)(undefined4)uVar6;
      __this_05.fields.m_Point.fields.x = auVar29._0_4_;
      __this_05.fields.m_Point.fields.z = (float)uVar6._4_4_;
      __this_05.fields.m_Normal.fields.x = (float)uVar31;
      __this_05.fields.m_Normal.fields.y = fVar22;
      __this_05.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
      __this_05.fields.m_Impulse.fields.x = (float)in_stack_ffffffffffffff60;
      __this_05.fields.m_Impulse.fields.y = (float)in_stack_ffffffffffffff64;
      __this_05.fields.m_Impulse.fields.z = fVar3;
      __this_05.fields.m_ThisColliderInstanceID = in_stack_ffffffffffffff6c;
      __this_05.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
      __this_05.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      UVar30 = UnityEngine_ContactPoint__get_point(__this_05,(MethodInfo *)pUVar18->m_Items);
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = (__this->fields)._velocity.fields.x;
        uVar7 = (__this->fields)._velocity.fields.y;
        position.fields.x = UVar30.fields.x + (float)uVar1 * auVar29._0_4_;
        position.fields.y = UVar30.fields.y + (float)uVar7 * auVar29._0_4_;
        position.fields.z = UVar30.fields.z + (__this->fields)._velocity.fields.z * auVar29._0_4_;
        fVar22 = auVar29._0_4_;
        fVar9 = auVar29._0_4_;
        uVar32 = uVar6._4_4_;
        uVar24 = uVar31;
        UVar30 = UnityEngine_Transform__InverseTransformPoint(pUVar19,position,(MethodInfo *)0x0);
        (__this->fields)._embedParent = UVar30.fields._0_8_;
        (__this->fields)._embedPosition.fields.x = UVar30.fields.z;
        pUVar19 = (__this->fields)._transform;
        pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
        if (pUVar18 != (UnityEngine_ContactPoint_array *)0x0) {
          if ((int)pUVar18->max_length == 0) goto LAB_03f1b76f;
          __this_06.fields.m_Point.fields.y = (float)(undefined4)uVar6;
          __this_06.fields.m_Point.fields.x = auVar29._0_4_;
          __this_06.fields.m_Point.fields.z = (float)uVar6._4_4_;
          __this_06.fields.m_Normal.fields.x = (float)uVar31;
          __this_06.fields.m_Normal.fields.y = fVar22;
          __this_06.fields.m_Normal.fields.z = fVar9;
          __this_06.fields.m_Impulse.fields.x = (float)uVar32;
          __this_06.fields.m_Impulse.fields.y = (float)uVar24;
          __this_06.fields.m_Impulse.fields.z = fVar3;
          __this_06.fields.m_ThisColliderInstanceID = in_stack_ffffffffffffff6c;
          __this_06.fields.m_OtherColliderInstanceID = (int)in_stack_ffffffffffffff70;
          __this_06.fields.m_Separation = (float)(int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
          UVar30 = UnityEngine_ContactPoint__get_point(__this_06,(MethodInfo *)pUVar18->m_Items);
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            uVar2 = (__this->fields)._velocity.fields.x;
            uVar8 = (__this->fields)._velocity.fields.y;
            value_00.fields.x = UVar30.fields.x + fVar22 * (float)uVar2;
            value_00.fields.y = UVar30.fields.y + fVar9 * (float)uVar8;
            value_00.fields.z =
                 UVar30.fields.z + auVar29._0_4_ * (__this->fields)._velocity.fields.z;
            UnityEngine_Transform__set_position(pUVar19,value_00,(MethodInfo *)0x0);
            pUVar19 = (__this->fields)._transform;
            value_01 = UnityEngine_Quaternion__LookRotation
                                 ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,
                                  (MethodInfo *)0x0);
            if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_rotation(pUVar19,value_01,(MethodInfo *)0x0);
              pUVar19 = (__this->fields)._transform;
              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                fVar3 = (__this->fields)._embedPosition.fields.y;
                fVar9 = (__this->fields)._embedPosition.fields.z;
                fVar22 = (__this->fields)._startPosition.fields.x;
                UVar30 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                auVar29._0_4_ = UVar30.fields.z;
                pMVar20 = extraout_RDX;
                if (DAT_056fdea6 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Math);
                  DAT_056fdea6 = '\x01';
                  pMVar20 = extraout_RDX_00;
                }
                fVar3 = fVar3 - UVar30.fields.x;
                fVar9 = fVar9 - UVar30.fields.y;
                fVar22 = fVar22 - auVar29._0_4_;
                pPVar21 = TypeInfo_Math;
                if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
                  il2cpp_init_class();
                  pMVar20 = extraout_RDX_01;
                }
                fVar22 = fVar22 * fVar22 + fVar9 * fVar9 + fVar3 * fVar3;
                if (fVar22 < 0.0) {
                  fVar22 = sqrtf(fVar22);
                  pMVar20 = extraout_RDX_02;
                }
                else {
                  fVar22 = SQRT(fVar22);
                }
                fVar3 = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1Time",pMVar20);
                auVar29._0_4_ =
                     Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMultiplier",method_00);
                pMVar20 = extraout_RDX_03;
                if (DAT_056fde1c == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Math);
                  DAT_056fde1c = '\x01';
                  pMVar20 = extraout_RDX_04;
                }
                fVar9 = (__this->fields).InitialPlayerVelocity.fields.x;
                uVar4 = (__this->fields).InitialPlayerVelocity.fields.y;
                uVar10 = (__this->fields).InitialPlayerVelocity.fields.z;
                pPVar21 = TypeInfo_Math;
                if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
                  il2cpp_init_class();
                  pMVar20 = extraout_RDX_05;
                }
                fVar9 = (float)uVar10 * (float)uVar10 + fVar9 * fVar9 + (float)uVar4 * (float)uVar4;
                if (fVar9 < 0.0) {
                  fVar9 = sqrtf(fVar9);
                  pMVar20 = extraout_RDX_06;
                }
                else {
                  fVar9 = SQRT(fVar9);
                }
                fVar3 = fVar3 + auVar29._0_4_ * fVar9;
                auVar29._0_4_ =
                     Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMax",pMVar20);
                if (auVar29._0_4_ <= fVar3) {
                  fVar3 = auVar29._0_4_;
                }
                auVar29._0_4_ =
                     Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed1TimeMin",method_01);
                if (fVar3 <= auVar29._0_4_) {
                  fVar3 = auVar29._0_4_;
                }
                fVar9 = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed2TimeTotal",method_02);
                auVar29._0_4_ =
                     Projectiles_ThunderspearProjectile__GetStat(pPVar21,"Embed2TimeMultiplier",method_03);
                fVar9 = fVar9 - fVar22 * auVar29._0_4_;
                if (fVar9 <= 0.0) {
                  fVar9 = 0.0;
                }
                (__this->fields)._timeLeft = fVar9 + fVar3;
                pUVar19 = (__this->fields)._transform;
                if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                  UVar30 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                  fVar3 = UVar30.fields.z;
                  uVar26 = UVar30.fields._0_8_;
                  uVar5 = (__this->fields)._embedPosition.fields.y;
                  uVar11 = (__this->fields)._embedPosition.fields.z;
                  fVar22 = (__this->fields)._startPosition.fields.x;
                  pMVar20 = extraout_RDX_07;
                  if (DAT_056fdea6 == '\0') {
                    auVar29._0_4_ = UVar30.fields.x;
                    fVar9 = UVar30.fields.y;
                    il2cpp_init_method_metadata(&TypeInfo_Math);
                    uVar26 = CONCAT44(fVar9,auVar29._0_4_);
                    DAT_056fdea6 = '\x01';
                    pMVar20 = extraout_RDX_08;
                  }
                  auVar29._0_4_ = (float)((ulong)uVar26 >> 0x20) - (float)uVar11;
                  fVar3 = fVar3 - fVar22;
                  fVar22 = (float)uVar26 - (float)uVar5;
                  pPVar21 = TypeInfo_Math;
                  if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
                    il2cpp_init_class();
                    pMVar20 = extraout_RDX_09;
                  }
                  fVar22 = fVar22 * fVar22 + auVar29._0_4_ * auVar29._0_4_ + fVar3 * fVar3;
                  if (fVar22 < 0.0) {
                    fVar22 = sqrtf(fVar22);
                    pMVar20 = extraout_RDX_10;
                  }
                  else {
                    fVar22 = SQRT(fVar22);
                  }
                  fVar3 = Projectiles_ThunderspearProjectile__GetStat(pPVar21,"AATriggerRange",pMVar20);
                  if (fVar22 < fVar3) {
                    *(undefined1 *)&(__this->fields)._startPosition.fields.y = 1;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f1b76a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_ThunderspearProjectile__OnExceedLiveTime (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1bea0

void Projectiles_ThunderspearProjectile__OnExceedLiveTime
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  *(undefined1 *)((long)&(__this->fields)._wasImpact + 1) = 1;
  if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
    vtable_dispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._17_DestroySelf.method,in_RDX,vtable_dispatch);
    return;
  }
  Projectiles_ThunderspearProjectile__Explode(__this,method);
  return;
}


// Projectiles.ThunderspearProjectile$$Explode
// il2cpp: void Projectiles_ThunderspearProjectile__Explode (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1b800

void Projectiles_ThunderspearProjectile__Explode
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_String_o *name;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int32_t iVar6;
  int32_t iVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Object_array *settings;
  Il2CppObject *pIVar9;
  long lVar10;
  undefined8 uVar11;
  int32_t iVar12;
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
  int32_t iVar13;
  MethodInfo *pMVar14;
  System_String_o **__this_00;
  Projectiles_ThunderspearProjectile_o *pPVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Quaternion_o UVar20;
  undefined1 local_9d;
  float local_9c;
  undefined1 local_98 [16];
  float local_84;
  float local_80;
  int32_t local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  __this_00 = (System_String_o **)__this;
  if (DAT_05703cd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TSKillType);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearProjectile);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Embed1TimeMax");
    il2cpp_init_method_metadata(&"RestrictAngleEmbed1");
    il2cpp_init_method_metadata(&"RestrictAngle");
    il2cpp_init_method_metadata(&"RadiusEmbed2Multiplier");
    il2cpp_init_method_metadata(&"Embed1TimeMin");
    il2cpp_init_method_metadata(&"RestrictAngleEmbed2");
    il2cpp_init_method_metadata(&"RadiusEmbed1Multiplier");
    il2cpp_init_method_metadata(&"Embed1Time");
    __this_00 = &"Embed1TimeMultiplier";
    il2cpp_init_method_metadata();
    DAT_05703cd7 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pMVar14 = "RestrictAngle";
  fVar16 = Projectiles_ThunderspearProjectile__GetStat
                     ((Projectiles_ThunderspearProjectile_o *)__this_00,
                      (System_String_o *)"RestrictAngle",in_RDX);
  local_58._0_4_ = (__this->fields)._color.fields.r;
  local_58._4_4_ = (__this->fields)._color.fields.g;
  uStack_50._0_4_ = (__this->fields)._color.fields.b;
  uStack_50._4_4_ = (__this->fields)._color.fields.a;
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x58), lVar10 != 0)) &&
     (lVar10 = *(long *)(lVar10 + 0x48), lVar10 != 0)) {
    if (*(char *)(lVar10 + 0x11) == '\0') {
      if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
        pPVar15 = (Projectiles_ThunderspearProjectile_o *)0x0;
        local_9c = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
        local_84 = (__this->fields)._startPosition.fields.z;
        fVar16 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"Embed1Time",method_00);
        local_98._0_4_ = fVar16;
        fVar16 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"Embed1TimeMultiplier",method_01);
        local_68._0_4_ = fVar16;
        pMVar14 = extraout_RDX_00;
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
          pMVar14 = extraout_RDX_01;
        }
        auVar5 = local_78;
        fVar16 = (__this->fields).InitialPlayerVelocity.fields.x;
        fVar1 = (__this->fields).InitialPlayerVelocity.fields.y;
        fVar2 = (__this->fields).InitialPlayerVelocity.fields.z;
        local_78._4_4_ = fVar2;
        local_78._0_4_ = fVar1;
        pPVar15 = TypeInfo_Math;
        if ((TypeInfo_Math->fields)._color.fields.g == 0.0) {
          local_78._8_8_ = 0;
          local_80 = fVar16;
          il2cpp_init_class();
          pMVar14 = extraout_RDX_02;
          fVar1 = (float)local_78._0_4_;
          fVar2 = (float)local_78._4_4_;
          fVar16 = local_80;
          auVar5 = local_78;
        }
        local_78 = auVar5;
        fVar16 = fVar2 * fVar2 + fVar16 * fVar16 + fVar1 * fVar1;
        if (fVar16 < 0.0) {
          fVar16 = sqrtf(fVar16);
          pMVar14 = extraout_RDX_03;
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        local_98._0_4_ = (float)local_98._0_4_ + (float)local_68._0_4_ * fVar16;
        fVar16 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"Embed1TimeMax",pMVar14);
        if (fVar16 <= (float)local_98._0_4_) {
          local_98._0_4_ = fVar16;
        }
        fVar1 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"Embed1TimeMin",method_02);
        fVar16 = (float)local_98._0_4_;
        if ((float)local_98._0_4_ <= fVar1) {
          fVar16 = fVar1;
        }
        local_98._0_4_ = (__this->fields)._radius;
        if (local_9c - local_84 <= fVar16) {
          fVar16 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"RadiusEmbed1Multiplier",method_03);
          (__this->fields)._radius = (float)local_98._0_4_ * fVar16;
          pMVar14 = "RestrictAngleEmbed1";
          fVar16 = Projectiles_ThunderspearProjectile__GetStat
                             (pPVar15,(System_String_o *)"RestrictAngleEmbed1",method_05);
          if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
            local_98._0_4_ = fVar16;
            il2cpp_init_class();
            fVar16 = (float)local_98._0_4_;
          }
          local_58 = *(undefined8 *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 8);
          uStack_50 = *(undefined8 *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 0x10);
        }
        else {
          fVar16 = Projectiles_ThunderspearProjectile__GetStat(pPVar15,"RadiusEmbed2Multiplier",method_03);
          (__this->fields)._radius = (float)local_98._0_4_ * fVar16;
          pMVar14 = "RestrictAngleEmbed2";
          fVar16 = Projectiles_ThunderspearProjectile__GetStat
                             (pPVar15,(System_String_o *)"RestrictAngleEmbed2",method_04);
        }
      }
      local_98._0_4_ = fVar16;
      fVar16 = (__this->fields)._radius;
      local_9c = fVar16 * 4.0;
    }
    else {
      local_98._0_4_ = fVar16;
      fVar16 = (__this->fields)._radius;
      local_9c = fVar16 + fVar16;
    }
    iVar6 = Projectiles_ThunderspearProjectile__KillPlayersInRadius(__this,fVar16,pMVar14);
    uVar17 = 0;
    uVar18 = 0;
    iVar7 = Projectiles_ThunderspearProjectile__KillTitansInRadius
                      (__this,(__this->fields)._radius,(float)local_98._0_4_,pMVar14);
    iVar12 = 1;
    if (0 < iVar6) {
      iVar12 = iVar6;
    }
    iVar13 = 0;
    if (-1 < iVar6) {
      iVar13 = iVar6;
    }
    if ((char)(__this->fields)._wasImpact != '\0') {
      iVar13 = iVar12;
    }
    if (iVar13 < iVar7) {
      iVar13 = iVar7;
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
    pUVar8 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UVar19 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      local_84 = UVar19.fields.z;
      local_98._8_4_ = extraout_XMM0_Dc;
      local_98._0_8_ = UVar19.fields._0_8_;
      local_98._12_4_ = extraout_XMM0_Dd;
      pUVar8 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        UVar20 = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
        local_68._8_4_ = extraout_XMM0_Dc_00;
        local_68._0_8_ = UVar20.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd_00;
        local_78._8_4_ = uVar17;
        local_78._0_8_ = UVar20.fields._8_8_;
        local_78._12_4_ = uVar18;
        settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
        local_48 = (undefined4)local_58;
        uStack_44 = local_58._4_4_;
        uStack_40 = (undefined4)uStack_50;
        uStack_3c = uStack_50._4_4_;
        pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_48);
        if (settings != (System_Object_array *)0x0) {
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (lVar10 = il2cpp_runtime_glue(pIVar9,(((settings->obj).klass)->_1).element_class),
             lVar10 == 0)) {
LAB_03f1bdab:
            uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar11,0);
          }
          if ((int)settings->max_length != 0) {
            settings->m_Items[0] = pIVar9;
            il2cpp_runtime_glue(settings->m_Items,pIVar9);
            local_7c = iVar13;
            pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TSKillType,&local_7c);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (lVar10 = il2cpp_runtime_glue(pIVar9,(((settings->obj).klass)->_1).element_class),
               lVar10 == 0)) goto LAB_03f1bdab;
            if (1 < (uint)settings->max_length) {
              settings->m_Items[1] = pIVar9;
              il2cpp_runtime_glue(settings->m_Items + 1,pIVar9);
              local_9d = (undefined1)(__this->fields)._wasImpact;
              pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9d);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (lVar10 = il2cpp_runtime_glue(pIVar9,(((settings->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_03f1bdab;
              if (2 < (uint)settings->max_length) {
                settings->m_Items[2] = pIVar9;
                il2cpp_runtime_glue(settings->m_Items + 2,pIVar9);
                auVar4 = local_68;
                auVar3 = local_78;
                auVar5 = local_98;
                pMVar14 = (MethodInfo *)0x1;
                UVar19.fields.z = local_84;
                UVar19.fields.x = (float)local_98._0_4_;
                UVar19.fields.y = (float)local_98._4_4_;
                UVar20.fields.z = (float)local_78._0_4_;
                UVar20.fields.w = (float)local_78._4_4_;
                UVar20.fields.x = (float)local_68._0_4_;
                UVar20.fields.y = (float)local_68._4_4_;
                local_98 = auVar5;
                local_78 = auVar3;
                local_68 = auVar4;
                Effects_EffectSpawner__Spawn
                          (name,UVar19,UVar20,local_9c,1,settings,(MethodInfo *)0x0);
                Projectiles_ThunderspearProjectile__StunMyHuman(__this,pMVar14);
                (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                          (__this,(__this->klass->vtable)._17_DestroySelf.method);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$StunMyHuman
// il2cpp: void Projectiles_ThunderspearProjectile__StunMyHuman (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1d010

void Projectiles_ThunderspearProjectile__StunMyHuman
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  Characters_Human_o *__this_00;
  bool_conflict bVar4;
  long *plVar5;
  UnityEngine_Transform_o *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_58;
  float fStack_54;
  
  if (DAT_05703cd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"StunRange");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703cd8 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') &&
     (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       (((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human &&
        (bVar4 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0),
        (char)bVar4 != '\0')))) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if ((lVar3 != 0) &&
         ((lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0 &&
          (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)))) {
        if (*(char *)(lVar3 + 0x11) != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar5 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (((plVar5 != (long *)0x0) &&
            (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                        (plVar5,"Thunderspear",*(undefined8 *)(*plVar5 + 0x1b0)),
            plVar5 != (long *)0x0)) &&
           (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                       (plVar5,"StunRange",*(undefined8 *)(*plVar5 + 0x1b0)),
           plVar5 != (long *)0x0)) {
          fVar7 = (float)(**(code **)(*plVar5 + 0x388))(plVar5);
          pCVar2 = (__this->fields)._owner;
          if (((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
              (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
             (pUVar6 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
             pUVar6 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
              if (DAT_056fdea6 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fdea6 = '\x01';
              }
              local_58 = UVar9.fields.x;
              fStack_54 = UVar9.fields.y;
              fStack_54 = fStack_54 - UVar10.fields.y;
              fVar8 = UVar9.fields.z - UVar10.fields.z;
              local_58 = local_58 - UVar10.fields.x;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_init_class();
              }
              fVar8 = local_58 * local_58 + fStack_54 * fStack_54 + fVar8 * fVar8;
              if (fVar8 < 0.0) {
                fVar8 = sqrtf(fVar8);
              }
              else {
                fVar8 = SQRT(fVar8);
              }
              if (fVar7 <= fVar8) {
                return;
              }
              __this_00 = (Characters_Human_o *)(__this->fields)._owner;
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
                 (UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0),
                 __this_00 != (Characters_Human_o *)0x0)) {
                bVar1 = (TypeInfo_Human->_2).naturalAligment;
                if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
                   ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
                  Characters_Human__GetStunnedByTS(__this_00,UVar9,(MethodInfo *)0x0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(__this_00);
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Projectiles.ThunderspearProjectile$$KillTitansInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, float restrictAngle, const MethodInfo* method);
// 0x3f1c7d0

int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,float restrictAngle,
                  MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  System_Action_Hashtable__o *pSVar3;
  System_DelegateData_o *y;
  UI_InGameMenu_o *__this_00;
  Cameras_InGameCamera_o *__this_01;
  int iVar4;
  byte bVar5;
  UnityEngine_LayerMask_o mask;
  int32_t iVar6;
  uint uVar7;
  bool_conflict bVar8;
  int iVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  Characters_BaseCharacter_o *pCVar13;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  MethodInfo *method_00;
  undefined8 uVar16;
  uint uVar17;
  Characters_BaseCharacter_c *pCVar18;
  Characters_BaseCharacter_o *pCVar19;
  bool bVar20;
  bool bVar21;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar22;
  float local_48;
  
  if (DAT_05703cd9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_RechargeableUseable);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TitanStun");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703cd9 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    position = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length != 0) {
        layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        iVar6 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar11 = UnityEngine_Physics__OverlapSphere(position,radius,iVar6,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_Collider_array *)0x0) goto LAB_03f1cfdf;
        iVar2 = (int)pUVar11->max_length;
        if (iVar2 < 1) {
          return 0;
        }
        uVar17 = 0;
        iVar4 = 0;
        if (iVar2 != 0) {
          do {
            x = (UnityEngine_Object_o *)pUVar11->m_Items[(int)uVar17];
            if ((((x == (UnityEngine_Object_o *)0x0) ||
                 (pUVar10 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                 pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
                (pUVar10 = UnityEngine_Transform__get_root(pUVar10,(MethodInfo *)0x0),
                pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
               (pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
               pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03f1cfdf;
            pCVar13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_BaseTitan_GetComponent_BaseTitan);
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f1cfdf;
            __this_02 = (CustomLogic_CustomLogicCollisionHandler_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                pCVar19 = (__this->fields)._owner;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)pCVar19,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  pSVar15 = (__this->fields)._team;
                  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar8 = GameManagers_TeamInfo__SameTeam(pCVar13,pSVar15,(MethodInfo *)0x0);
                  if ((char)bVar8 == '\0') {
                    if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f1cfdf;
                    if (*(char *)&(pCVar13->fields).FeedVictimName == '\0') {
                      pSVar3 = (pCVar13->fields).OnPlayerPropertiesChanged;
                      if (pSVar3 == (System_Action_Hashtable__o *)0x0) goto LAB_03f1cfdf;
                      y = (pSVar3->fields).data;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar8 = UnityEngine_Object__op_Equality
                                        (x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
                      if ((char)bVar8 != '\0') {
                        local_48 = position.fields.x;
                        bVar5 = (*(code *)pCVar13->klass[1].vtable._44_OnJoinRandomFailed.method)
                                          (local_48,position.fields.z,restrictAngle,pCVar13);
                        iVar2 = *(int *)&(pCVar13->fields).Cache;
                        pCVar19 = (__this->fields)._owner;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        bVar8 = UnityEngine_Object__op_Equality
                                          ((UnityEngine_Object_o *)pCVar19,
                                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (((char)bVar8 == '\0') &&
                           (pCVar19 = (__this->fields)._owner,
                           pCVar19 != (Characters_BaseCharacter_o *)0x0)) {
                          pCVar18 = pCVar19->klass;
                          bVar1 = (TypeInfo_Human->_2).naturalAligment;
                          if (((pCVar18->_2).naturalAligment < bVar1) ||
                             ((pCVar18->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human))
                          goto LAB_03f1ccb9;
                          bVar1 = *(byte *)((long)&(__this->fields)._wasImpact + 2);
                          if ((~bVar1 & bVar5) != 0) {
                            iVar9 = 0;
                            pSVar14 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                            pCVar18 = pCVar13->klass;
                            uVar16 = 0;
                            pSVar15 = "TitanStun";
                            goto LAB_03f1cce9;
                          }
                          if (bVar5 == 0) {
                            if (bVar1 == 0) {
                              iVar9 = 100;
                              pCVar13 = (__this->fields)._owner;
                            }
                            else {
                              iVar9 = 0;
                              pSVar15 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar13->klass->vtable)._85_GetHit.methodPtr)
                                        (pCVar13,"Thunderspear",0,"TitanStun",pSVar15);
                              pCVar13 = (__this->fields)._owner;
                            }
                          }
                          else {
                            iVar9 = Projectiles_ThunderspearProjectile__CalculateDamage
                                              (__this,0,(MethodInfo *)(ulong)bVar5);
                            pCVar19 = (__this->fields)._owner;
                            if (pCVar19 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f1cfdf;
                            if ((char)(pCVar19->fields).CustomDamage == '\0') {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              __this_00 = *(UI_InGameMenu_o **)
                                           (*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (__this_00 == (UI_InGameMenu_o *)0x0) goto LAB_03f1cfdf;
                              bVar5 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((__this_00->klass->_2).naturalAligment < bVar5) ||
                                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
                                  TypeInfo_InGameMenu)) goto LAB_03f1cffd;
                              UI_InGameMenu__ShowKillScore(__this_00,iVar9,0,(MethodInfo *)0x0);
                              pSVar3 = (pCVar13->fields).OnPlayerPropertiesChanged;
                              if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
                                 (pUVar10 = (UnityEngine_Transform_o *)(pSVar3->fields).method_code,
                                 pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f1cfdf;
                              __this_01 = *(Cameras_InGameCamera_o **)
                                           (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar22 = UnityEngine_Transform__get_position
                                                 (pUVar10,(MethodInfo *)0x0);
                              if (__this_01 == (Cameras_InGameCamera_o *)0x0) goto LAB_03f1cfdf;
                              bVar5 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((__this_01->klass->_2).naturalAligment < bVar5) ||
                                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
                                  TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_unwind_resume(__this_01);
                              }
                              Cameras_InGameCamera__TakeSnapshot
                                        (__this_01,UVar22,iVar9,(MethodInfo *)0x0);
                              pCVar19 = (__this->fields)._owner;
                            }
                            pSVar15 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                            (*(pCVar13->klass->vtable)._84_GetHit.methodPtr)
                                      (pCVar13,pCVar19,iVar9,"Thunderspear",pSVar15);
                            pCVar13 = (__this->fields)._owner;
                          }
                        }
                        else {
LAB_03f1ccb9:
                          pSVar14 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          pCVar18 = pCVar13->klass;
                          iVar9 = 100;
                          uVar16 = 100;
                          pSVar15 = "Thunderspear";
LAB_03f1cce9:
                          (*(pCVar18->vtable)._85_GetHit.methodPtr)
                                    (pCVar13,"Thunderspear",uVar16,pSVar15,pSVar14);
                          pCVar13 = (__this->fields)._owner;
                        }
                        if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f1cfdf;
                        bVar5 = (TypeInfo_Human->_2).naturalAligment;
                        if (((pCVar13->klass->_2).naturalAligment < bVar5) ||
                           ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_Human)) {
LAB_03f1cffd:
                    /* WARNING: Subroutine does not return */
                          il2cpp_unwind_resume();
                        }
                        pSVar3 = (pCVar13->fields).OnPlayerPropertiesChanged;
                        if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
                          bVar5 = (TypeInfo_RechargeableUseable->_2).naturalAligment;
                          if ((bVar5 <= (((Characters_RechargeableUseable_c *)pSVar3->klass)->_2).
                                        naturalAligment) &&
                             ((((Characters_RechargeableUseable_c *)pSVar3->klass)->_2).
                              typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_RechargeableUseable)) {
                            Characters_RechargeableUseable__ReduceCooldown
                                      ((Characters_RechargeableUseable_o *)pSVar3,(MethodInfo *)0x0)
                            ;
                          }
                        }
                        if ((float)iVar9 < (float)iVar2) {
                          bVar21 = SBORROW4(iVar4,2);
                          iVar2 = iVar4 + -2;
                          bVar20 = iVar4 == 2;
                          iVar9 = 3;
                        }
                        else {
                          bVar21 = SBORROW4(iVar4,1);
                          iVar2 = iVar4 + -1;
                          bVar20 = iVar2 == 0;
                          iVar9 = 2;
                        }
                        if (bVar20 || bVar21 != iVar2 < 0) {
                          iVar4 = iVar9;
                        }
                      }
                    }
                  }
                }
              }
              uVar7 = (uint)pUVar11->max_length;
              if ((int)uVar7 <= (int)(uVar17 + 1)) {
                return iVar4;
              }
            }
            else {
              iVar6 = Projectiles_ThunderspearProjectile__CalculateDamage(__this,0,method_00);
              pCVar13 = (__this->fields)._owner;
              if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f1cfdf;
              pSVar15 = *(System_String_o **)&(pCVar13->fields)._disableKinematicTimeLeft;
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
                 (UVar22 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0),
                 __this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto LAB_03f1cfdf;
              CustomLogic_CustomLogicCollisionHandler__GetHit
                        (__this_02,pCVar13,pSVar15,iVar6,"Thunderspear",UVar22,(MethodInfo *)0x0);
              uVar7 = (uint)pUVar11->max_length;
              if ((int)uVar7 <= (int)(uVar17 + 1)) {
                return iVar4;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f1cfdf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$KillPlayersInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x3f1bed0

int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_String_o *b;
  Characters_BaseCharacter_c *pCVar5;
  UI_InGameMenu_o *__this_00;
  Cameras_InGameCamera_o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  undefined8 a;
  bool_conflict bVar6;
  int iVar7;
  uint uVar8;
  UnityEngine_Transform_o *pUVar9;
  ulong uVar10;
  ulong uVar11;
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
  undefined4 in_XMM1_Db;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  undefined4 in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  undefined1 local_98 [36];
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  Characters_BaseCharacter_o *local_38;
  
  if (DAT_05703cda == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703cda = '\x01';
  }
  local_98._0_8_ = (Il2CppMethodPointer)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (InvokerMethod)0x0;
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
    UVar17 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    local_98._32_4_ = UVar17.fields.z;
    local_68._8_4_ = extraout_XMM0_Dc;
    local_68._0_8_ = UVar17.fields._0_8_;
    local_68._12_4_ = extraout_XMM0_Dd;
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar2);
      }
      if ((System_Collections_Generic_HashSet_object__o *)plVar2[8] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        fStack_74 = (float)in_XMM1_Db;
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_HashSet_object__o *)plVar2[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
        uStack_70 = fStack_74;
        local_98._16_8_ = local_38;
        local_98._0_8_ = local_48._0_8_;
        local_98._8_8_ = local_48._8_8_;
        fVar16 = (float)local_68._0_4_;
        fStack_74 = (float)local_68._0_4_;
        uStack_6c = local_68._4_4_;
        local_68._0_4_ = local_68._4_4_;
        uVar10 = 0;
LAB_03f1c0a0:
        do {
          do {
            do {
              __this_02.fields._index = in_stack_ffffffffffffff50;
              __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar10;
              __this_02.fields._version = (int32_t)radius;
              __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
              __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
              bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185890 *)local_98);
              a = local_98._16_8_;
              if ((char)bVar6 == '\0') {
                __this_03.fields._index = in_stack_ffffffffffffff50;
                __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar10;
                __this_03.fields._version = (int32_t)radius;
                __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
                __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
                System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                          (__this_03,(MethodInfo_3185880 *)local_98);
                return (int32_t)uVar10;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
            } while ((char)bVar6 != '\0');
            if ((Characters_BaseCharacter_o *)a == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          } while (*(char *)&((Characters_BaseCharacter_Fields *)(a + 0x10))->FeedVictimName != '\0'
                  );
          lVar3 = *(long *)&((Characters_BaseCharacter_Fields *)(a + 0x10))->Dead;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar17 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          in_stack_ffffffffffffff58 = UVar17.fields.z;
          local_58._8_4_ = extraout_XMM0_Dc_00;
          local_58._0_8_ = UVar17.fields._0_8_;
          local_58._12_4_ = extraout_XMM0_Dd_00;
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            iVar7 = *(int *)(TypeInfo_Math + 0xe4);
            in_stack_ffffffffffffff5c = fVar16;
          }
          else {
            iVar7 = *(int *)(TypeInfo_Math + 0xe4);
            in_stack_ffffffffffffff5c = fVar16;
          }
          if (iVar7 == 0) {
            il2cpp_init_class();
          }
          fVar15 = ((float)local_58._0_4_ - fStack_74) * ((float)local_58._0_4_ - fStack_74) +
                   ((float)local_58._4_4_ - (float)local_68._0_4_) *
                   ((float)local_58._4_4_ - (float)local_68._0_4_) +
                   (in_stack_ffffffffffffff58 - (float)local_98._32_4_) *
                   (in_stack_ffffffffffffff58 - (float)local_98._32_4_);
          if (fVar15 < 0.0) goto LAB_03f1c2bd;
          fVar16 = 0.0;
        } while (radius <= SQRT(fVar15));
        goto LAB_03f1c1af;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03f1c2bd:
  fVar15 = sqrtf(fVar15);
  fVar16 = 0.0;
  if (radius <= fVar15) goto LAB_03f1c0a0;
LAB_03f1c1af:
  fVar16 = 0.0;
  pCVar4 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)pCVar4,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto LAB_03f1c0a0;
  b = (__this->fields)._team;
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = GameManagers_TeamInfo__SameTeam((Characters_BaseCharacter_o *)a,b,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto LAB_03f1c0a0;
  pCVar4 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (pCVar4 = (__this->fields)._owner, pCVar4 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar5 = pCVar4->klass;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar5->_2).naturalAligment < bVar1) ||
       ((pCVar5->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        TypeInfo_Human)) goto LAB_03f1c274;
    fVar15 = (float)Projectiles_ThunderspearProjectile__CalculateDamage
                              (__this,0,(MethodInfo *)(ulong)bVar1);
    (*((*(Characters_BaseCharacter_c **)a)->vtable)._84_GetHit.methodPtr)
              (a,(__this->fields)._owner,(ulong)(uint)fVar15,"Thunderspear","",
               ((*(Characters_BaseCharacter_c **)a)->vtable)._84_GetHit.method);
    if ((char)((Characters_BaseCharacter_Fields *)(a + 0x10))->CustomDamage == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this_00 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      UI_InGameMenu__ShowKillScore(__this_00,(int32_t)fVar15,0,(MethodInfo *)0x0);
      lVar3 = *(long *)&((Characters_BaseCharacter_Fields *)(a + 0x10))->Dead;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_01 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      UVar17 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      if (__this_01 == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_01);
      }
      Cameras_InGameCamera__TakeSnapshot(__this_01,UVar17,(int32_t)fVar15,(MethodInfo *)0x0);
      in_stack_ffffffffffffff58 = fVar15;
    }
  }
  else {
LAB_03f1c274:
    (*((*(Characters_BaseCharacter_c **)a)->vtable)._85_GetHit.methodPtr)
              (a,"",100,"Thunderspear","",
               ((*(Characters_BaseCharacter_c **)a)->vtable)._85_GetHit.method);
  }
  if (0 < *(int *)&((Characters_BaseCharacter_Fields *)(a + 0x10))->Cache) {
    iVar7 = (int)uVar10;
    bVar14 = SBORROW4(iVar7,2);
    bVar13 = iVar7 + -2 < 0;
    bVar12 = iVar7 == 2;
    uVar11 = 3;
    goto LAB_03f1c3ef;
  }
  pCVar4 = (__this->fields)._owner;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = *(long *)&(pCVar4->fields).Dead;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar17 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
  in_stack_ffffffffffffff58 = UVar17.fields.z;
  local_58._8_4_ = extraout_XMM0_Dc_01;
  local_58._0_8_ = UVar17.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd_01;
  if (DAT_056fdea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
    iVar7 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff5c = fVar16;
  }
  else {
    iVar7 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff5c = fVar16;
  }
  if (iVar7 == 0) {
    il2cpp_init_class();
  }
  fVar16 = (fStack_74 - (float)local_58._0_4_) * (fStack_74 - (float)local_58._0_4_) +
           ((float)local_68._0_4_ - (float)local_58._4_4_) *
           ((float)local_68._0_4_ - (float)local_58._4_4_) +
           ((float)local_98._32_4_ - in_stack_ffffffffffffff58) *
           ((float)local_98._32_4_ - in_stack_ffffffffffffff58);
  if (fVar16 < 0.0) {
    fVar16 = sqrtf(fVar16);
    if (fVar16 < radius) goto LAB_03f1c3d5;
  }
  else if (SQRT(fVar16) < radius) {
LAB_03f1c3d5:
    fVar16 = 0.0;
    iVar7 = (int)uVar10;
    bVar14 = SBORROW4(iVar7,3);
    bVar13 = iVar7 + -3 < 0;
    bVar12 = iVar7 == 3;
    uVar11 = 4;
    goto LAB_03f1c3ef;
  }
  fVar16 = 0.0;
  uVar8 = (uint)uVar10;
  if (*(char *)((long)&(__this->fields)._wasImpact + 1) != '\0') {
    uVar10 = uVar10 & 0xffffffff;
    if (uVar8 < 6) {
      uVar10 = 5;
    }
    goto LAB_03f1c0a0;
  }
  bVar14 = SBORROW4(uVar8,1);
  bVar13 = (int)(uVar8 - 1) < 0;
  bVar12 = uVar8 == 1;
  uVar11 = 2;
LAB_03f1c3ef:
  uVar10 = uVar10 & 0xffffffff;
  if (bVar12 || bVar14 != bVar13) {
    uVar10 = uVar11;
  }
  goto LAB_03f1c0a0;
}


// Projectiles.ThunderspearProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_ThunderspearProjectile__CalculateDamage (Projectiles_ThunderspearProjectile_o* __this, bool dmgOverride, const MethodInfo* method);
// 0x3f1d360

int32_t Projectiles_ThunderspearProjectile__CalculateDamage
                  (Projectiles_ThunderspearProjectile_o *__this,bool_conflict dmgOverride,
                  MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  Characters_BaseCharacter_o *pCVar5;
  int iVar6;
  bool_conflict bVar7;
  long *plVar8;
  int iVar9;
  undefined4 in_register_00000034;
  float fVar10;
  float fVar11;
  
  if (DAT_05703cdb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData,CONCAT44(in_register_00000034,dmgOverride));
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"DamageMultiplier");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703cdb = '\x01';
    iVar9 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_init_class();
    plVar8 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    plVar8 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((plVar8 != (long *)0x0) &&
      (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                  (plVar8,"Thunderspear",*(undefined8 *)(*plVar8 + 0x1b0)),
      plVar8 != (long *)0x0)) &&
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                 (plVar8,"DamageMultiplier",*(undefined8 *)(*plVar8 + 0x1b0)),
     plVar8 != (long *)0x0)) {
    fVar10 = (float)(**(code **)(*plVar8 + 0x388))(plVar8);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x48), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x11) != '\0') {
        fVar10 = 1.0;
      }
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      fVar11 = (__this->fields).InitialPlayerVelocity.fields.x;
      uVar1 = (__this->fields).InitialPlayerVelocity.fields.y;
      uVar2 = (__this->fields).InitialPlayerVelocity.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar11 = (float)uVar2 * (float)uVar2 + fVar11 * fVar11 + (float)uVar1 * (float)uVar1;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      iVar6 = (int)(fVar10 * fVar11 * 10.0);
      iVar9 = 10;
      if (9 < iVar6) {
        iVar9 = iVar6;
      }
      pCVar5 = (__this->fields)._owner;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (((char)bVar7 != '\0') &&
         (pCVar5 = (__this->fields)._owner, pCVar5 != (Characters_BaseCharacter_o *)0x0)) {
        bVar3 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar3 <= (pCVar5->klass->_2).naturalAligment) &&
           (((pCVar5->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_Human &&
            (*(char *)((long)&(pCVar5->fields).FeedVictimName + 1) != '\0')))) {
          iVar9 = *(int *)((long)&(pCVar5->fields).FeedVictimName + 4);
        }
      }
      return iVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$Update
// il2cpp: void Projectiles_ThunderspearProjectile__Update (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1d600

void Projectiles_ThunderspearProjectile__Update
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  float fVar5;
  UnityEngine_Quaternion_o value;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar3 = (__this->fields)._photonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar3->fields)._IsMine_k__BackingField != '\0') {
      fVar5 = (__this->fields)._timeLeft;
      fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar4;
      (__this->fields)._timeLeft = fVar5;
      if (fVar5 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)(__this);
      }
    }
    pPVar3 = (__this->fields)._photonView;
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((char)(pPVar3->fields)._IsMine_k__BackingField != '\0') {
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
        }
        fVar5 = (__this->fields)._velocity.fields.x;
        uVar1 = (__this->fields)._velocity.fields.y;
        uVar2 = (__this->fields)._velocity.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar5 = (float)uVar2 * (float)uVar2 + fVar5 * fVar5 + (float)uVar1 * (float)uVar1;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        if (0.0 < fVar5) {
          __this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          value = UnityEngine_Quaternion__LookRotation
                            ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,
                             (MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03f1d74c;
        }
      }
      return;
    }
  }
LAB_03f1d74c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$FixedUpdate
// il2cpp: void Projectiles_ThunderspearProjectile__FixedUpdate (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1d760

/* WARNING: Type propagation algorithm not settling */

void Projectiles_ThunderspearProjectile__FixedUpdate
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_01;
  Characters_BaseCharacter_o *x_00;
  undefined1 auVar4 [16];
  UnityEngine_RaycastHit_o __this_02;
  bool_conflict bVar5;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *method_00;
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
  
  if (DAT_05703cdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearProjectile);
    DAT_05703cdc = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  auStack_48._16_8_ = (InvokerMethod)0x0;
  auStack_48._24_4_ = 0;
  fStack_2c = 0.0;
  auStack_48._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_48._8_8_ = (Il2CppMethodPointer)0x0;
  pPVar3 = (__this->fields)._photonView;
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f1db8c;
  if ((char)(pPVar3->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._wasImpact + 2) != '\0') {
    __this_00 = (__this->fields)._rigidbody;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_velocity
                (__this_00,
                 (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      x = *(UnityEngine_Object_o **)&(__this->fields)._wasMaxRange;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
LAB_03f1d892:
        x_00 = (__this->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        if (*(char *)&(__this->fields)._startPosition.fields.y == '\0') {
          return;
        }
        Projectiles_ThunderspearProjectile__Explode(__this,method_00);
        return;
      }
      pUVar6 = *(UnityEngine_Transform_o **)&(__this->fields)._wasMaxRange;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = (__this->fields)._transform;
        UVar14 = UnityEngine_Transform__TransformPoint
                           (pUVar6,*(UnityEngine_Vector3_Fields *)&(__this->fields)._embedParent,
                            (MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(__this_01,UVar14,(MethodInfo *)0x0);
          goto LAB_03f1d892;
        }
      }
    }
    goto LAB_03f1db8c;
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f1db8c;
  UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  fVar10 = UVar14.fields.z;
  auVar12._0_8_ = UVar14.fields._0_8_;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._12_4_ = extraout_XMM0_Dd;
  fVar1 = (__this->fields)._lastPosition.fields.x;
  fVar2 = (__this->fields)._lastPosition.fields.y;
  fVar15 = (__this->fields)._lastPosition.fields.z;
  fVar16 = 0.0;
  if (DAT_056fde20 == '\0') {
    auVar11._0_8_ = auVar12._8_8_;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    auVar12._8_8_ = auVar11._0_8_;
    DAT_056fde20 = '\x01';
  }
  auVar11._0_8_ = CONCAT44(auVar12._4_4_ - fVar2,auVar12._0_4_ - fVar1);
  auVar11._8_4_ = auVar12._8_4_ - fVar16;
  auVar11._12_4_ = auVar12._12_4_ - 0.0;
  fVar10 = fVar10 - fVar15;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auVar12._0_8_ = auVar11._8_8_;
    il2cpp_init_class();
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
    if (fVar7 <= 1e-05) goto LAB_03f1d9c0;
LAB_03f1da3f:
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
    if (1e-05 < fVar7) goto LAB_03f1da3f;
LAB_03f1d9c0:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar12._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar11._0_8_ = 0;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (0.0 <= fVar13) goto LAB_03f1da8c;
LAB_03f1daa8:
    fVar13 = sqrtf(fVar13);
  }
  else {
    if (fVar13 < 0.0) goto LAB_03f1daa8;
LAB_03f1da8c:
    fVar13 = SQRT(fVar13);
  }
  if (*(int *)(TypeInfo_ThunderspearProjectile + 0xe4) == 0) {
    il2cpp_init_class();
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask,
                         (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar14.fields.y = fVar2;
  UVar14.fields.x = fVar1;
  UVar14.fields.z = fVar15;
  direction.fields.z = fVar10;
  direction.fields.x = (float)(int)auVar12._0_8_;
  direction.fields.y = (float)(int)((ulong)auVar12._0_8_ >> 0x20);
  bVar5 = UnityEngine_Physics__SphereCast
                    (UVar14,0.5,direction,(UnityEngine_RaycastHit_o *)auStack_48,fVar13,layerMask,
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_02.fields.m_Point.fields.y = fVar13;
    __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88;
    __this_02.fields.m_Point.fields.z = fVar10;
    __this_02.fields.m_Normal.fields.x = fVar15;
    __this_02.fields.m_Normal.fields.y = (float)(int)auVar12._0_8_;
    __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)auVar12._0_8_ >> 0x20);
    __this_02.fields.m_FaceID = (int)auVar11._0_8_;
    __this_02.fields.m_Distance = (float)(int)((ulong)auVar11._0_8_ >> 0x20);
    __this_02.fields.m_UV.fields.x = fVar1;
    __this_02.fields.m_UV.fields.y = fVar2;
    __this_02.fields.m_Collider = (int32_t)fVar16;
    UVar14 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)auStack_48);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f1db8c;
    UnityEngine_Transform__set_position(pUVar6,UVar14,(MethodInfo *)0x0);
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    (__this->fields)._lastPosition.fields.x = (float)(int)UVar14.fields._0_8_;
    (__this->fields)._lastPosition.fields.y = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
    (__this->fields)._lastPosition.fields.z = UVar14.fields.z;
    return;
  }
LAB_03f1db8c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$GetStat
// il2cpp: float Projectiles_ThunderspearProjectile__GetStat (Projectiles_ThunderspearProjectile_o* __this, System_String_o* field, const MethodInfo* method);
// 0x3f1bdc0

float Projectiles_ThunderspearProjectile__GetStat
                (Projectiles_ThunderspearProjectile_o *__this,System_String_o *field,
                MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  long *plVar2;
  float fVar3;
  
  if (DAT_05703cdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703cdd = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((plVar2 != (long *)0x0) &&
      (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                  (plVar2,"Thunderspear",*(undefined8 *)(*plVar2 + 0x1b0)),
      plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))(plVar2,field,*(undefined8 *)(*plVar2 + 0x1b0))
     , plVar2 != (long *)0x0)) {
    vtable_dispatch = *(code **)(*plVar2 + 0x388);
    fVar3 = (float)(*vtable_dispatch)
                             (plVar2,*(undefined8 *)(*plVar2 + 0x390),vtable_dispatch);
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ThunderspearProjectile$$.ctor
// il2cpp: void Projectiles_ThunderspearProjectile___ctor (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x3f1dba0

void Projectiles_ThunderspearProjectile___ctor
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
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
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


// Projectiles.ThunderspearProjectile$$.cctor
// il2cpp: void Projectiles_ThunderspearProjectile___cctor (const MethodInfo* method);
// 0x3f1dc10

/* WARNING: Type propagation algorithm not settling */

void Projectiles_ThunderspearProjectile___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *pSVar4;
  
  if (DAT_05703cde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearProjectile);
    DAT_05703cde = '\x01';
  }
  pSVar4 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pSVar4 != (System_Int32_array *)0x0) {
    uVar1 = (uint)pSVar4->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      pSVar4->m_Items[0] = *(int32_t *)(lVar2 + 0x3c);
      if (uVar1 != 1) {
        pSVar4->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        if (2 < uVar1) {
          pSVar4->m_Items[2] = *(int32_t *)(lVar2 + 0x30);
          if (uVar1 != 3) {
            pSVar4->m_Items[3] = *(int32_t *)(lVar2 + 0x14);
            UVar3 = Utility_PhysicsLayer__GetMask(pSVar4,(MethodInfo *)0x0);
            (*(UnityEngine_LayerMask_Fields **)(TypeInfo_ThunderspearProjectile + 0xb8))->m_Mask =
                 (int32_t)UVar3.fields.m_Mask;
            pSVar4 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,5);
            if (pSVar4 == (System_Int32_array *)0x0) goto LAB_03f1dd72;
            uVar1 = (uint)pSVar4->max_length;
            if (uVar1 != 0) {
              lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
              pSVar4->m_Items[0] = *(int32_t *)(lVar2 + 0x3c);
              if ((((uVar1 != 1) && (pSVar4->m_Items[1] = *(int32_t *)(lVar2 + 0x38), 2 < uVar1)) &&
                  (pSVar4->m_Items[2] = *(int32_t *)(lVar2 + 0x30), uVar1 != 3)) &&
                 (pSVar4->m_Items[3] = *(int32_t *)(lVar2 + 0x14), 4 < uVar1)) {
                pSVar4->m_Items[4] = *(int32_t *)(lVar2 + 0xc);
                UVar3 = Utility_PhysicsLayer__GetMask(pSVar4,(MethodInfo *)0x0);
                ((UnityEngine_LayerMask_Fields *)(*(long *)(TypeInfo_ThunderspearProjectile + 0xb8) + 4))->m_Mask =
                     (int32_t)UVar3.fields.m_Mask;
                lVar2 = *(long *)(TypeInfo_ThunderspearProjectile + 0xb8);
                *(undefined8 *)(lVar2 + 8) = 0x3f3333333ef33333;
                *(undefined8 *)(lVar2 + 0x10) = 0x3f8000003f800000;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f1dd72:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


