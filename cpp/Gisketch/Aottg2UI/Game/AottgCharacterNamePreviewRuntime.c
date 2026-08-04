// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, bool liveDialog, const MethodInfo* method);
// 0x4502810

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,bool_conflict liveDialog,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  System_Action_string__o *pSVar4;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  undefined8 uVar14;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_01;
  UnityEngine_Component_o *pUVar15;
  char cVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Transform_o *x;
  System_String_o *name;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar17;
  MethodInfo *in_R8;
  float fVar18;
  uint uVar19;
  UnityEngine_Color_o value;
  
  cVar16 = (char)method;
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (__this->fields)._state = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._state,state);
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  pGVar1 = (__this->fields)._state;
  method_00 = extraout_RDX;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar16 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar1,pSVar4,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar5 = (UnityEngine_UI_Image_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                     (__this,"AoTTG Preview Guild Row",20.0,method_00);
  (__this->fields)._guildRow = (UnityEngine_GameObject_o *)pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._guildRow);
  pGVar17 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow;
  if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar17,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_UI_Image_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                       (pGVar17,pUVar6,20.0,method_01);
    (__this->fields)._guildBadges = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._guildBadges);
    pGVar17 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow;
    if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar17,(MethodInfo *)0x0);
      pUVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                         (pGVar17,pUVar6,30.0,method_02);
      (__this->fields)._guildPresetImage = pUVar5;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._guildPresetImage);
      pUVar11 = (__this->fields)._guildRow;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        pPVar7 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Guild",20.0,pUVar6,0,in_R8);
        (__this->fields)._guild = pPVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._guild,pPVar7);
        pPVar7 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        (__this->fields)._name = pPVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._name);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,(MethodInfo *)pPVar7);
        return;
      }
    }
  }
  pUVar15 = (UnityEngine_Component_o *)0x0;
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar9 == (System_Type_o *)0x0) {
label_04502ab2:
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar9 != (System_Type_o *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
          if (lVar10 == 0) goto label_04502c5d;
        }
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          cVar16 = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,(System_String_o *)pUVar5,pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            pUVar12 = UnityEngine_Component__get_transform(pUVar15,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              cVar16 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar6,pUVar12,0,(MethodInfo *)0x0);
              pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar13 != (Il2CppObject *)0x0) {
                (*pIVar13->klass->vtable[0x26].methodPtr)
                          ((ulong)(uint)(fVar18 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
                (*pIVar13->klass->vtable[0x28].methodPtr)
                          (0x3f800000,pIVar13,pIVar13->klass->vtable[0x28].method);
                __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
                if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            (__this_00,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            (__this_00,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            (__this_00,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            (__this_00,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,5.0,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
          goto label_04502c53;
        }
      }
      goto label_04502c58;
    }
    lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
    if (lVar10 != 0) goto label_04502ab2;
  }
label_04502c5d:
  uVar14 = il2cpp_runtime_helper_0231b270();
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  fVar18 = (float)il2cpp_runtime_helper_022b2b10(uVar14);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar9 == (System_Type_o *)0x0) {
label_04502d4a:
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar9 != (System_Type_o *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
          if (lVar10 == 0) goto label_04502e58;
        }
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          cVar16 = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"AoTTG Preview Guild Badges",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              cVar16 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,pUVar6,0,(MethodInfo *)0x0);
              __this_01 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                          UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
              if (__this_01 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                          (__this_01,fVar18,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                           (System_String_o *)0x0,1,in_R8);
                return;
              }
            }
          }
          goto label_04502e4e;
        }
      }
      goto label_04502e53;
    }
    lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
    if (lVar10 != 0) goto label_04502d4a;
  }
label_04502e58:
  uVar14 = il2cpp_runtime_helper_0231b270();
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  fVar18 = (float)il2cpp_runtime_helper_022b2b10(uVar14);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar9 == (System_Type_o *)0x0) {
label_04502f6e:
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar9 != (System_Type_o *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
          if (lVar10 == 0) goto label_0450318d;
        }
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if (pSVar9 != (System_Type_o *)0x0) {
            lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
            if (lVar10 == 0) goto label_0450318d;
          }
          if (2 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[2] = pSVar9;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if (pSVar9 != (System_Type_o *)0x0) {
              lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
              if (lVar10 == 0) goto label_0450318d;
            }
            if (3 < (uint)pSVar8->max_length) {
              pSVar8->m_Items[3] = pSVar9;
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3,pSVar9);
              pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              cVar16 = '\0';
              UnityEngine_GameObject___ctor_4dfc440(pUVar11,"AoTTG Preview Guild Preset Image",pSVar8,(MethodInfo *)0x0);
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                  cVar16 = '\0';
                  UnityEngine_Transform__SetParent_4e09e30(pUVar12,pUVar6,0,(MethodInfo *)0x0);
                  pUVar5 = (UnityEngine_UI_Image_o *)
                           UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
                  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar5->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar5,0,(pUVar5->klass->vtable)._25_set_raycastTarget.method);
                    UnityEngine_UI_Image__set_preserveAspect(pUVar5,1,(MethodInfo *)0x0);
                    pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar13 != (Il2CppObject *)0x0) {
                      (*pIVar13->klass->vtable[0x24].methodPtr)
                                ((ulong)(uint)(fVar18 * 2.9),pIVar13,pIVar13->klass->vtable[0x24].method);
                      (*pIVar13->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar18,pIVar13);
                      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto label_04503183;
            }
          }
        }
      }
      goto label_04503188;
    }
    lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
    if (lVar10 != 0) goto label_04502f6e;
  }
label_0450318d:
  pUVar15 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  name = (System_String_o *)0x0;
  fVar18 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar9 != (System_Type_o *)0x0) {
      lVar10 = il2cpp_runtime_helper_023051f0(pSVar9,(((pSVar8->obj).klass)->_1).element_class);
      if (lVar10 == 0) goto label_0450345a;
    }
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar9 != (System_Type_o *)0x0) {
        lVar10 = il2cpp_runtime_helper_023051f0(pSVar9,(((pSVar8->obj).klass)->_1).element_class);
        if (lVar10 == 0) goto label_0450345a;
      }
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1,pSVar9);
        pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar11,name,pSVar8,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar12 = x;
          if ((char)bVar3 == '\0') {
            pUVar12 = UnityEngine_Component__get_transform(pUVar15,(MethodInfo *)0x0);
          }
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar6,pUVar12,0,(MethodInfo *)0x0);
            pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar18 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
              if (cVar16 == '\0') {
                uVar19 = 0;
              }
              else {
                uVar19 = 0x3f800000;
              }
              (*pIVar13->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar19,pIVar13,pIVar13->klass->vtable[0x28].method);
              pPVar7 = (PatreonEffects_NameEffectLabel_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar7,fVar18,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar7,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar7,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar7,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar10 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar10,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar1 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar10 + 0x20);
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar1,pSVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x4503470

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x45034f0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_RuntimeTypeHandle_o SVar3;
  uint uVar4;
  bool_conflict bVar5;
  TMPro_TMP_Text_o *pTVar6;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TMP_Text_o *x;
  long *plVar8;
  System_String_o *pSVar9;
  PatreonEffects_NameEffectController_o *pPVar10;
  MethodInfo **ppMVar11;
  System_String_array *ids;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar12;
  SimpleJSONFixed_JSONNode_o *effect;
  Il2CppObject *pIVar13;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar14;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar15;
  System_Action_string__o *pSVar16;
  UnityEngine_UI_Image_o *pUVar17;
  PatreonEffects_NameEffectLabel_o *pPVar18;
  System_Type_array *pSVar19;
  System_Type_o *pSVar20;
  long lVar21;
  UnityEngine_Transform_o *pUVar22;
  undefined8 uVar23;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar24;
  UnityEngine_Component_o *pUVar25;
  char cVar26;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *in_RCX;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar27;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Transform_o *x_00;
  UnityEngine_GameObject_o *pUVar28;
  PatreonEffects_NameEffectController_o **ppPVar29;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar30;
  float fVar31;
  UnityEngine_Color_o UVar32;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_String_o *pSStack_48;
  PatreonEffects_NameEffectController_o *pPStack_40;
  System_String_o *pSStack_38;
  
  ppPVar29 = (PatreonEffects_NameEffectController_o **)__this;
  if (g_data_057aed1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"profile-character-name");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    ppPVar29 = &"name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed1a = '\x01';
  }
  pTVar6 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)ppPVar29)
  ;
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0;
  pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
  x = (TMPro_TMP_Text_o *)__this;
  __this_00 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
    pUVar7 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    x = __this_00;
    if ((char)(__this->fields)._liveDialog != '\0') {
      x = (TMPro_TMP_Text_o *)
          Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                    (pUVar7,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
      uVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(ulong)(uVar4 & 0xff);
    }
    if ((pTVar6 != (TMPro_TMP_Text_o *)0x0) &&
       (pPStack_40 = "name", x = pTVar6,
       plVar8 = (long *)(*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                                  (pTVar6,"name",(pTVar6->klass->vtable)._7_OnDisable.method),
       plVar8 != (long *)0x0)) {
      in_RCX = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)*plVar8;
      pPStack_40 = in_RCX[4].fields._guildPresetEffect;
      pSStack_38 = (System_String_o *)(*(code *)in_RCX[4].fields._guildPresetImage)(plVar8);
      liveDialog = (int)pGVar15;
      if (liveDialog == 0) {
        pPVar10 = (PatreonEffects_NameEffectController_o *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pTVar6,(MethodInfo *)pPStack_40);
        pSStack_48 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                               ((SimpleJSONFixed_JSONNode_o *)pTVar6,(MethodInfo *)pPStack_40);
        pGVar24 = (__this->fields)._guildBadges;
        x = (TMPro_TMP_Text_o *)0x0;
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar24,(SimpleJSONFixed_JSONNode_o *)pTVar6,method_01);
        pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                           ((SimpleJSONFixed_JSONNode_o *)pTVar6,"nameFont",method_02);
        font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                         ((SimpleJSONFixed_JSONNode_o *)pTVar6,"guildFont",method_03);
        pPStack_40 = pPVar10;
      }
      else {
        pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                           (pUVar7,"profile-character-name",pSStack_38,(MethodInfo *)in_RCX);
        pMVar27 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar27 = extraout_RDX_00;
        }
        pSStack_38 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar9,pMVar27);
        pPVar10 = (PatreonEffects_NameEffectController_o *)
                  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                            (pUVar7,(SimpleJSONFixed_JSONNode_o *)pTVar6,method_00);
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aeda8 == '\0') goto label_04502325;
label_04502277:
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) != 0) goto label_0450228b;
label_0450234c:
          il2cpp_runtime_helper_02337ed0();
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) goto label_0450236c;
label_0450229c:
          ppMVar11 = (MethodInfo **)&g_data_057b9c00;
        }
        else {
          if (g_data_057aeda8 != '\0') goto label_04502277;
label_04502325:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aeda8 = '\x01';
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_0450234c;
label_0450228b:
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) goto label_0450229c;
label_0450236c:
          ppMVar11 = &TypeInfo_AottgEditCharacterDialog;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            ppMVar11 = &TypeInfo_AottgEditCharacterDialog;
          }
        }
        pSStack_48 = *(System_String_o **)(*ppMVar11)[2].virtualMethodPointer;
        pGVar24 = (__this->fields)._guildBadges;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aedaa == '\0') goto label_045025cf;
label_045023b3:
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        else {
          if (g_data_057aedaa != '\0') goto label_045023b3;
label_045025cf:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aedaa = '\x01';
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        x = *(TMPro_TMP_Text_o **)(TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer + 0x30);
        pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
        ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                        ((System_Collections_Generic_IEnumerable_string__o *)x,(MethodInfo *)0x0);
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar24,(System_Collections_Generic_IEnumerable_string__o *)ids,method_04);
        pMVar27 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar27);
        pMVar27 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar27);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-name",pSVar9,(MethodInfo *)in_RCX);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-guild",font,(MethodInfo *)&"profile-character-guild");
        pPStack_40 = pPVar10;
      }
      pPVar18 = (__this->fields)._name;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                         (pTVar6,"nameEffect",(pTVar6->klass->vtable)._7_OnDisable.method);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar18,pSStack_38,liveDialog,1,effect,pSVar9,in_stack_ffffffffffffffa8);
      in_R8 = (MethodInfo *)
              (*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                        (pTVar6,"guildEffect",(pTVar6->klass->vtable)._7_OnDisable.method);
      x = (TMPro_TMP_Text_o *)__this;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                (__this,(System_String_o *)pPStack_40,pSStack_48,liveDialog,
                 (SimpleJSONFixed_JSONNode_o *)in_R8,font,in_stack_ffffffffffffffa8);
      pGVar24 = (__this->fields)._guildBadges;
      in_RCX = pGVar15;
      if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        bVar30 = *(char *)((long)&(pGVar24->fields)._controlsActive + 3) != '\0';
        pUVar12 = (__this->fields)._guildRow;
        pUVar28 = (UnityEngine_GameObject_o *)0x0;
        if (!bVar30) {
          pUVar28 = pUVar12;
        }
        uVar4 = 1;
        in_RCX = __this;
        if (bVar30) goto label_0450259c;
        x = (TMPro_TMP_Text_o *)(__this->fields)._guild;
        if (x != (TMPro_TMP_Text_o *)0x0) {
          pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
          pTVar6 = (TMPro_TMP_Text_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
            pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
            bVar5 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pTVar6,(MethodInfo *)0x0);
            x = pTVar6;
            if ((char)bVar5 == '\0') {
              x = (TMPro_TMP_Text_o *)(__this->fields)._guildPresetImage;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar4 = 0;
              pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              pUVar12 = pUVar28;
              if ((char)bVar5 != '\0') {
                x = (TMPro_TMP_Text_o *)(__this->fields)._guildPresetImage;
                if (x != (TMPro_TMP_Text_o *)0x0) {
                  pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
                  pTVar6 = (TMPro_TMP_Text_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                  if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
                    pPStack_40 = (PatreonEffects_NameEffectController_o *)0x0;
                    uVar4 = UnityEngine_GameObject__get_activeSelf
                                      ((UnityEngine_GameObject_o *)pTVar6,(MethodInfo *)0x0);
                    x = pTVar6;
                    goto label_0450259c;
                  }
                }
                goto label_045025ff;
              }
            }
label_0450259c:
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar12,uVar4 & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_045025ff:
  il2cpp_runtime_helper_022b2c90();
  pPVar10 = pPStack_40;
  ppPVar29 = (PatreonEffects_NameEffectController_o **)x;
  if (g_data_057aed17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&"characterNamePreviewBg");
    ppPVar29 = &"live";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed17 = '\x01';
  }
  if (((x != (TMPro_TMP_Text_o *)0x0) &&
      (pPVar10 = MethodInfo_Image_AddComponent_Image, ppPVar29 = (PatreonEffects_NameEffectController_o **)x,
      pIVar13 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)x,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image),
      extraout_RDX_01 != 0)) &&
     (ppPVar29 = *(PatreonEffects_NameEffectController_o ***)(extraout_RDX_01 + 0x18),
     (TMPro_TMP_Text_o *)ppPVar29 != (TMPro_TMP_Text_o *)0x0)) {
    UVar32.fields.b = 0.13;
    UVar32.fields.a = 1.0;
    UVar32.fields.r = 0.13;
    UVar32.fields.g = 0.13;
    pPVar10 = "characterNamePreviewBg";
    UVar32 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppPVar29,(System_String_o *)"characterNamePreviewBg",
                        UVar32,(MethodInfo *)0x0);
    if (pIVar13 != (Il2CppObject *)0x0) {
      (*pIVar13->klass->vtable[0x17].methodPtr)
                (UVar32.fields._0_8_,UVar32.fields._8_8_,pIVar13,pIVar13->klass->vtable[0x17].method);
      (*pIVar13->klass->vtable[0x19].methodPtr)(pIVar13,0,pIVar13->klass->vtable[0x19].method);
      pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
      pTVar6 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
      pPVar10 = (PatreonEffects_NameEffectController_o *)&g_data_0000000f;
      in_RCX = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0xa;
      in_R8 = (MethodInfo *)0xa;
      ppPVar29 = (PatreonEffects_NameEffectController_o **)pTVar6;
      UnityEngine_RectOffset___ctor_4dbeaf0
                ((UnityEngine_RectOffset_o *)pTVar6,0xf,0xf,10,10,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_padding
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar14,(UnityEngine_RectOffset_o *)pTVar6,
                   (MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar14,2.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar14,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar14,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar14,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(pUVar14,0,(MethodInfo *)0x0)
        ;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (pUVar14,0,(MethodInfo *)0x0);
        pPVar10 = MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara;
        pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)x,(MethodInfo_255A020 *)MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
        ppPVar29 = (PatreonEffects_NameEffectController_o **)x;
        if (pPStack_40 != (PatreonEffects_NameEffectController_o *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppPVar29 = (PatreonEffects_NameEffectController_o **)(pPStack_40->fields).popShadowText;
          pPVar10 = "live";
          uVar4 = System_String__op_Equality
                            ((System_String_o *)ppPVar29,(System_String_o *)"live",(MethodInfo *)0x0);
          if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                      (pGVar15,pGVar2,uVar4 & 0xff,(MethodInfo *)in_RCX);
            return;
          }
        }
      }
    }
  }
  cVar26 = (char)in_RCX;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material = (UnityEngine_Material_o *)pPVar10;
  il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material,pPVar10);
  *(undefined1 *)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RectTransform = extraout_DL;
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material;
  pMVar27 = extraout_RDX_02;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar26 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar16,(MethodInfo *)0x0);
    pMVar27 = extraout_RDX_03;
  }
  pUVar17 = (UnityEngine_UI_Image_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                      ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,"AoTTG Preview Guild Row",20.0
                       ,pMVar27);
  *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields = pUVar17;
  il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color);
  pGVar15 = *(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o **)
             &(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
  if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar15,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                        (pGVar15,pUVar7,20.0,method_05);
    *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields.b = pUVar17;
    il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields.b);
    pGVar15 = *(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o **)
               &(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
    if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar15,(MethodInfo *)0x0);
      pUVar17 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                          (pGVar15,pUVar7,30.0,method_06);
      *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastPadding.fields = pUVar17;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastPadding);
      pUVar12 = *(UnityEngine_GameObject_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        pPVar18 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,
                             "AoTTG Preview Guild",20.0,pUVar7,0,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_SkipLayoutUpdate =
             pPVar18;
        il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_SkipLayoutUpdate,pPVar18);
        pPVar18 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,
                             "AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastTarget =
             pPVar18;
        il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastTarget);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,(MethodInfo *)pPVar18
                  );
        return;
      }
    }
  }
  pUVar25 = (UnityEngine_Component_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502c5d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,(System_String_o *)pUVar17,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            cVar26 = '\0';
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar22,0,(MethodInfo *)0x0);
            pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar31 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
              (*pIVar13->klass->vtable[0x28].methodPtr)
                        (0x3f800000,pIVar13,pIVar13->klass->vtable[0x28].method);
              pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
              if (pUVar14 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)pUVar14,4,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (pUVar14,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (pUVar14,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (pUVar14,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (pUVar14,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar14,5.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04502c53;
      }
    }
    goto label_04502c58;
  }
label_04502c5d:
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502e58;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Badges",pSVar19,(MethodInfo *)0x0);
        if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
           pUVar22 != (UnityEngine_Transform_o *)0x0)) {
          cVar26 = '\0';
          UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar7,0,(MethodInfo *)0x0);
          pGVar24 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
          if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (pGVar24,fVar31,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,1,in_R8);
            return;
          }
        }
        goto label_04502e4e;
      }
    }
    goto label_04502e53;
  }
label_04502e58:
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_0450318d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1);
        pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
        goto label_0450318d;
        if (2 < (uint)pSVar19->max_length) {
          pSVar19->m_Items[2] = pSVar20;
          il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 2);
          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
          goto label_0450318d;
          if (3 < (uint)pSVar19->max_length) {
            pSVar19->m_Items[3] = pSVar20;
            il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 3,pSVar20);
            pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            cVar26 = '\0';
            UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Preset Image",pSVar19,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
               pUVar22 != (UnityEngine_Transform_o *)0x0)) {
              cVar26 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar7,0,(MethodInfo *)0x0);
              pUVar17 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
              if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar17->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar17,0,(pUVar17->klass->vtable)._25_set_raycastTarget.method);
                UnityEngine_UI_Image__set_preserveAspect(pUVar17,1,(MethodInfo *)0x0);
                pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar13 != (Il2CppObject *)0x0) {
                  (*pIVar13->klass->vtable[0x24].methodPtr)
                            ((ulong)(uint)(fVar31 * 2.9),pIVar13,pIVar13->klass->vtable[0x24].method);
                  (*pIVar13->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar31,pIVar13);
                  UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto label_04503183;
          }
        }
      }
    }
    goto label_04503188;
  }
label_0450318d:
  pUVar25 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  pSVar9 = (System_String_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar20 != (System_Type_o *)0x0) &&
       (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
    goto label_0450345a;
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) &&
         (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
      goto label_0450345a;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,pSVar9,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar22 = x_00;
          if ((char)bVar5 == '\0') {
            pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar22,0,(MethodInfo *)0x0);
            pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar31 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
              if (cVar26 == '\0') {
                uVar4 = 0;
              }
              else {
                uVar4 = 0x3f800000;
              }
              (*pIVar13->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar4,pIVar13,pIVar13->klass->vtable[0x28].method);
              pPVar18 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar18 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar18,fVar31,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar18,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar18,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar18,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar21 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar21,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar21 + 0x20);
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar16,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x4502090

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_RuntimeTypeHandle_o SVar3;
  uint uVar4;
  bool_conflict bVar5;
  TMPro_TMP_Text_o *pTVar6;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TMP_Text_o *x;
  long *plVar8;
  System_String_o *pSVar9;
  PatreonEffects_NameEffectController_o *pPVar10;
  MethodInfo **ppMVar11;
  System_String_array *ids;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar12;
  SimpleJSONFixed_JSONNode_o *effect;
  Il2CppObject *pIVar13;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar14;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar15;
  System_Action_string__o *pSVar16;
  UnityEngine_UI_Image_o *pUVar17;
  PatreonEffects_NameEffectLabel_o *pPVar18;
  System_Type_array *pSVar19;
  System_Type_o *pSVar20;
  long lVar21;
  UnityEngine_Transform_o *pUVar22;
  undefined8 uVar23;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar24;
  UnityEngine_Component_o *pUVar25;
  char cVar26;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *in_RCX;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar27;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Transform_o *x_00;
  UnityEngine_GameObject_o *pUVar28;
  PatreonEffects_NameEffectController_o **ppPVar29;
  MethodInfo *in_R8;
  int liveDialog;
  bool bVar30;
  float fVar31;
  UnityEngine_Color_o UVar32;
  UnityEngine_Color_o value;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_String_o *local_48;
  PatreonEffects_NameEffectController_o *local_40;
  System_String_o *local_38;
  
  ppPVar29 = (PatreonEffects_NameEffectController_o **)__this;
  if (g_data_057aed1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"nameEffect");
    il2cpp_runtime_helper_023445d0(&"guildEffect");
    il2cpp_runtime_helper_023445d0(&"nameFont");
    il2cpp_runtime_helper_023445d0(&"guildFont");
    il2cpp_runtime_helper_023445d0(&"profile-character-name");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    ppPVar29 = &"name";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed1a = '\x01';
  }
  pTVar6 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)ppPVar29)
  ;
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0;
  local_40 = (PatreonEffects_NameEffectController_o *)0x0;
  x = (TMPro_TMP_Text_o *)__this;
  __this_00 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    local_40 = (PatreonEffects_NameEffectController_o *)0x0;
    pUVar7 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    x = __this_00;
    if ((char)(__this->fields)._liveDialog != '\0') {
      x = (TMPro_TMP_Text_o *)
          Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                    (pUVar7,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_40 = (PatreonEffects_NameEffectController_o *)0x0;
      uVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(ulong)(uVar4 & 0xff);
    }
    if ((pTVar6 != (TMPro_TMP_Text_o *)0x0) &&
       (local_40 = "name", x = pTVar6,
       plVar8 = (long *)(*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                                  (pTVar6,"name",(pTVar6->klass->vtable)._7_OnDisable.method),
       plVar8 != (long *)0x0)) {
      in_RCX = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)*plVar8;
      local_40 = in_RCX[4].fields._guildPresetEffect;
      local_38 = (System_String_o *)(*(code *)in_RCX[4].fields._guildPresetImage)(plVar8);
      liveDialog = (int)pGVar15;
      if (liveDialog == 0) {
        pPVar10 = (PatreonEffects_NameEffectController_o *)
                  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild
                            ((SimpleJSONFixed_JSONNode_o *)pTVar6,(MethodInfo *)local_40);
        local_48 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
                             ((SimpleJSONFixed_JSONNode_o *)pTVar6,(MethodInfo *)local_40);
        pGVar24 = (__this->fields)._guildBadges;
        x = (TMPro_TMP_Text_o *)0x0;
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
                  (pGVar24,(SimpleJSONFixed_JSONNode_o *)pTVar6,method_01);
        pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                           ((SimpleJSONFixed_JSONNode_o *)pTVar6,"nameFont",method_02);
        font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                         ((SimpleJSONFixed_JSONNode_o *)pTVar6,"guildFont",method_03);
        local_40 = pPVar10;
      }
      else {
        pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                           (pUVar7,"profile-character-name",local_38,(MethodInfo *)in_RCX);
        pMVar27 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar27 = extraout_RDX_00;
        }
        local_38 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar9,pMVar27);
        pPVar10 = (PatreonEffects_NameEffectController_o *)
                  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                            (pUVar7,(SimpleJSONFixed_JSONNode_o *)pTVar6,method_00);
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aeda8 == '\0') goto label_04502325;
label_04502277:
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) != 0) goto label_0450228b;
label_0450234c:
          il2cpp_runtime_helper_02337ed0();
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) goto label_0450236c;
label_0450229c:
          ppMVar11 = (MethodInfo **)&g_data_057b9c00;
        }
        else {
          if (g_data_057aeda8 != '\0') goto label_04502277;
label_04502325:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aeda8 = '\x01';
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_0450234c;
label_0450228b:
          if (TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) goto label_0450229c;
label_0450236c:
          ppMVar11 = &TypeInfo_AottgEditCharacterDialog;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            ppMVar11 = &TypeInfo_AottgEditCharacterDialog;
          }
        }
        local_48 = *(System_String_o **)(*ppMVar11)[2].virtualMethodPointer;
        pGVar24 = (__this->fields)._guildBadges;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aedaa == '\0') goto label_045025cf;
label_045023b3:
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        else {
          if (g_data_057aedaa != '\0') goto label_045023b3;
label_045025cf:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
          g_data_057aedaa = '\x01';
          iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        x = *(TMPro_TMP_Text_o **)(TypeInfo_AottgEditCharacterDialog[2].virtualMethodPointer + 0x30);
        local_40 = (PatreonEffects_NameEffectController_o *)0x0;
        ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                        ((System_Collections_Generic_IEnumerable_string__o *)x,(MethodInfo *)0x0);
        if (pGVar24 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_045025ff;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar24,(System_Collections_Generic_IEnumerable_string__o *)ids,method_04);
        pMVar27 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(pMVar27);
        pMVar27 = TypeInfo_AottgEditCharacterDialog;
        if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(pMVar27);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-name",pSVar9,(MethodInfo *)in_RCX);
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
                  (pUVar12,"profile-character-guild",font,(MethodInfo *)&"profile-character-guild");
        local_40 = pPVar10;
      }
      pPVar18 = (__this->fields)._name;
      effect = (SimpleJSONFixed_JSONNode_o *)
               (*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                         (pTVar6,"nameEffect",(pTVar6->klass->vtable)._7_OnDisable.method);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                (pPVar18,local_38,liveDialog,1,effect,pSVar9,in_stack_ffffffffffffffa8);
      in_R8 = (MethodInfo *)
              (*(pTVar6->klass->vtable)._7_OnDisable.methodPtr)
                        (pTVar6,"guildEffect",(pTVar6->klass->vtable)._7_OnDisable.method);
      x = (TMPro_TMP_Text_o *)__this;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
                (__this,(System_String_o *)local_40,local_48,liveDialog,(SimpleJSONFixed_JSONNode_o *)in_R8,
                 font,in_stack_ffffffffffffffa8);
      pGVar24 = (__this->fields)._guildBadges;
      in_RCX = pGVar15;
      if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        bVar30 = *(char *)((long)&(pGVar24->fields)._controlsActive + 3) != '\0';
        pUVar12 = (__this->fields)._guildRow;
        pUVar28 = (UnityEngine_GameObject_o *)0x0;
        if (!bVar30) {
          pUVar28 = pUVar12;
        }
        uVar4 = 1;
        in_RCX = __this;
        if (bVar30) goto label_0450259c;
        x = (TMPro_TMP_Text_o *)(__this->fields)._guild;
        if (x != (TMPro_TMP_Text_o *)0x0) {
          local_40 = (PatreonEffects_NameEffectController_o *)0x0;
          pTVar6 = (TMPro_TMP_Text_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
            local_40 = (PatreonEffects_NameEffectController_o *)0x0;
            bVar5 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pTVar6,(MethodInfo *)0x0);
            x = pTVar6;
            if ((char)bVar5 == '\0') {
              x = (TMPro_TMP_Text_o *)(__this->fields)._guildPresetImage;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar4 = 0;
              local_40 = (PatreonEffects_NameEffectController_o *)0x0;
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              pUVar12 = pUVar28;
              if ((char)bVar5 != '\0') {
                x = (TMPro_TMP_Text_o *)(__this->fields)._guildPresetImage;
                if (x != (TMPro_TMP_Text_o *)0x0) {
                  local_40 = (PatreonEffects_NameEffectController_o *)0x0;
                  pTVar6 = (TMPro_TMP_Text_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                  if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
                    local_40 = (PatreonEffects_NameEffectController_o *)0x0;
                    uVar4 = UnityEngine_GameObject__get_activeSelf
                                      ((UnityEngine_GameObject_o *)pTVar6,(MethodInfo *)0x0);
                    x = pTVar6;
                    goto label_0450259c;
                  }
                }
                goto label_045025ff;
              }
            }
label_0450259c:
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar12,uVar4 & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_045025ff:
  il2cpp_runtime_helper_022b2c90();
  pPVar10 = local_40;
  ppPVar29 = (PatreonEffects_NameEffectController_o **)x;
  if (g_data_057aed17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&"characterNamePreviewBg");
    ppPVar29 = &"live";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed17 = '\x01';
  }
  if (((x != (TMPro_TMP_Text_o *)0x0) &&
      (pPVar10 = MethodInfo_Image_AddComponent_Image, ppPVar29 = (PatreonEffects_NameEffectController_o **)x,
      pIVar13 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)x,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image),
      extraout_RDX_01 != 0)) &&
     (ppPVar29 = *(PatreonEffects_NameEffectController_o ***)(extraout_RDX_01 + 0x18),
     (TMPro_TMP_Text_o *)ppPVar29 != (TMPro_TMP_Text_o *)0x0)) {
    UVar32.fields.b = 0.13;
    UVar32.fields.a = 1.0;
    UVar32.fields.r = 0.13;
    UVar32.fields.g = 0.13;
    pPVar10 = "characterNamePreviewBg";
    UVar32 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppPVar29,(System_String_o *)"characterNamePreviewBg",
                        UVar32,(MethodInfo *)0x0);
    if (pIVar13 != (Il2CppObject *)0x0) {
      (*pIVar13->klass->vtable[0x17].methodPtr)
                (UVar32.fields._0_8_,UVar32.fields._8_8_,pIVar13,pIVar13->klass->vtable[0x17].method);
      (*pIVar13->klass->vtable[0x19].methodPtr)(pIVar13,0,pIVar13->klass->vtable[0x19].method);
      pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
      pTVar6 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
      pPVar10 = (PatreonEffects_NameEffectController_o *)&g_data_0000000f;
      in_RCX = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0xa;
      in_R8 = (MethodInfo *)0xa;
      ppPVar29 = (PatreonEffects_NameEffectController_o **)pTVar6;
      UnityEngine_RectOffset___ctor_4dbeaf0
                ((UnityEngine_RectOffset_o *)pTVar6,0xf,0xf,10,10,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_padding
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar14,(UnityEngine_RectOffset_o *)pTVar6,
                   (MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar14,2.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar14,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar14,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar14,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(pUVar14,0,(MethodInfo *)0x0)
        ;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (pUVar14,0,(MethodInfo *)0x0);
        pPVar10 = MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara;
        pGVar15 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)x,(MethodInfo_255A020 *)MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_AottgChara);
        ppPVar29 = (PatreonEffects_NameEffectController_o **)x;
        if (local_40 != (PatreonEffects_NameEffectController_o *)0x0) {
          pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX_01 + 0x30);
          ppPVar29 = (PatreonEffects_NameEffectController_o **)(local_40->fields).popShadowText;
          pPVar10 = "live";
          uVar4 = System_String__op_Equality
                            ((System_String_o *)ppPVar29,(System_String_o *)"live",(MethodInfo *)0x0);
          if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                      (pGVar15,pGVar2,uVar4 & 0xff,(MethodInfo *)in_RCX);
            return;
          }
        }
      }
    }
  }
  cVar26 = (char)in_RCX;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Name");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild");
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Row");
    g_data_057aed18 = '\x01';
  }
  (((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material = (UnityEngine_Material_o *)pPVar10;
  il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material,pPVar10);
  *(undefined1 *)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RectTransform = extraout_DL;
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Material;
  pMVar27 = extraout_RDX_02;
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    cVar26 = '\0';
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,pSVar16,(MethodInfo *)0x0);
    pMVar27 = extraout_RDX_03;
  }
  pUVar17 = (UnityEngine_UI_Image_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                      ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,"AoTTG Preview Guild Row",20.0
                       ,pMVar27);
  *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields = pUVar17;
  il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color);
  pGVar15 = *(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o **)
             &(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
  if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar15,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                        (pGVar15,pUVar7,20.0,method_05);
    *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields.b = pUVar17;
    il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields.b);
    pGVar15 = *(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o **)
               &(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
    if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar15,(MethodInfo *)0x0);
      pUVar17 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                          (pGVar15,pUVar7,30.0,method_06);
      *(UnityEngine_UI_Image_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastPadding.fields = pUVar17;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastPadding);
      pUVar12 = *(UnityEngine_GameObject_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_Color.fields;
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        pPVar18 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,
                             "AoTTG Preview Guild",20.0,pUVar7,0,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_SkipLayoutUpdate =
             pPVar18;
        il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_SkipLayoutUpdate,pPVar18);
        pPVar18 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                            ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,
                             "AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        *(PatreonEffects_NameEffectLabel_o **)&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastTarget =
             pPVar18;
        il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)ppPVar29)->fields).m_RaycastTarget);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)ppPVar29,(MethodInfo *)pPVar18
                  );
        return;
      }
    }
  }
  pUVar25 = (UnityEngine_Component_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502c5d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,(System_String_o *)pUVar17,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            cVar26 = '\0';
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar22,0,(MethodInfo *)0x0);
            pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar31 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
              (*pIVar13->klass->vtable[0x28].methodPtr)
                        (0x3f800000,pIVar13,pIVar13->klass->vtable[0x28].method);
              pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
              if (pUVar14 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)pUVar14,4,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (pUVar14,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (pUVar14,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (pUVar14,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          (pUVar14,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar14,5.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04502c53;
      }
    }
    goto label_04502c58;
  }
label_04502c5d:
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_04502e58;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        cVar26 = '\0';
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Badges",pSVar19,(MethodInfo *)0x0);
        if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
           pUVar22 != (UnityEngine_Transform_o *)0x0)) {
          cVar26 = '\0';
          UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar7,0,(MethodInfo *)0x0);
          pGVar24 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
          if (pGVar24 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (pGVar24,fVar31,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,1,in_R8);
            return;
          }
        }
        goto label_04502e4e;
      }
    }
    goto label_04502e53;
  }
label_04502e58:
  uVar23 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10(uVar23);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
      goto label_0450318d;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1);
        pSVar20 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
        goto label_0450318d;
        if (2 < (uint)pSVar19->max_length) {
          pSVar19->m_Items[2] = pSVar20;
          il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 2);
          pSVar20 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar20 != (System_Type_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 == 0))
          goto label_0450318d;
          if (3 < (uint)pSVar19->max_length) {
            pSVar19->m_Items[3] = pSVar20;
            il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 3,pSVar20);
            pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            cVar26 = '\0';
            UnityEngine_GameObject___ctor_4dfc440(pUVar12,"AoTTG Preview Guild Preset Image",pSVar19,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar22 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
               pUVar22 != (UnityEngine_Transform_o *)0x0)) {
              cVar26 = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar22,pUVar7,0,(MethodInfo *)0x0);
              pUVar17 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
              if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar17->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar17,0,(pUVar17->klass->vtable)._25_set_raycastTarget.method);
                UnityEngine_UI_Image__set_preserveAspect(pUVar17,1,(MethodInfo *)0x0);
                pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar13 != (Il2CppObject *)0x0) {
                  (*pIVar13->klass->vtable[0x24].methodPtr)
                            ((ulong)(uint)(fVar31 * 2.9),pIVar13,pIVar13->klass->vtable[0x24].method);
                  (*pIVar13->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar31,pIVar13);
                  UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto label_04503183;
          }
        }
      }
    }
    goto label_04503188;
  }
label_0450318d:
  pUVar25 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  pSVar9 = (System_String_o *)0x0;
  fVar31 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar19 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar19 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar20 != (System_Type_o *)0x0) &&
       (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
    goto label_0450345a;
    if ((int)pSVar19->max_length != 0) {
      pSVar19->m_Items[0] = pSVar20;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items);
      pSVar20 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar20 != (System_Type_o *)0x0) &&
         (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar19->obj).klass)->_1).element_class), lVar21 == 0))
      goto label_0450345a;
      if (1 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[1] = pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar20);
        pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar12,pSVar9,pSVar19,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar22 = x_00;
          if ((char)bVar5 == '\0') {
            pUVar22 = UnityEngine_Component__get_transform(pUVar25,(MethodInfo *)0x0);
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar22,0,(MethodInfo *)0x0);
            pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar31 + 10.0),pIVar13,pIVar13->klass->vtable[0x26].method);
              if (cVar26 == '\0') {
                uVar4 = 0;
              }
              else {
                uVar4 = 0x3f800000;
              }
              (*pIVar13->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar4,pIVar13,pIVar13->klass->vtable[0x28].method);
              pPVar18 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar18 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar18,fVar31,(MethodInfo *)0x0);
                value.fields.b = 1.0;
                value.fields.a = 1.0;
                value.fields.r = 1.0;
                value.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar18,value,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar18,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar18,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar21 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar21,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  pGVar2 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar21 + 0x20);
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(pGVar2,pSVar16,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateRow
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, const MethodInfo* method);
// 0x45029d0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_02;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Component_o *__this_04;
  PatreonEffects_NameEffectLabel_o *__this_05;
  System_Action_string__o *value;
  UnityEngine_GameObject_o *extraout_RAX;
  char in_CL;
  MethodInfo *extraout_RDX;
  UnityEngine_Transform_o *x;
  System_String_o *name;
  MethodInfo *in_R8;
  float fVar11;
  uint uVar12;
  UnityEngine_Color_o value_00;
  
  if (g_data_057aed1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1b = '\x01';
    method = extraout_RDX;
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,2,method);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04502c53:
    il2cpp_runtime_helper_022b2c90();
label_04502c58:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502ab2:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_04502c5d;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
          pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          in_CL = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar6,id,pSVar3,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              in_CL = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar8,0,(MethodInfo *)0x0);
              pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar9 != (Il2CppObject *)0x0) {
                (*pIVar9->klass->vtable[0x26].methodPtr)
                          ((ulong)(uint)(fontSize + 10.0),pIVar9,pIVar9->klass->vtable[0x26].method);
                (*pIVar9->klass->vtable[0x28].methodPtr)(0x3f800000,pIVar9,pIVar9->klass->vtable[0x28].method)
                ;
                __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
                if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)__this_01,4,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            (__this_01,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            (__this_01,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            (__this_01,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            (__this_01,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,5.0,(MethodInfo *)0x0)
                  ;
                  return pUVar6;
                }
              }
            }
          }
          goto label_04502c53;
        }
      }
      goto label_04502c58;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502ab2;
  }
label_04502c5d:
  uVar10 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar11 = (float)il2cpp_runtime_helper_022b2b10(uVar10);
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502d4a:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_04502e58;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
          pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          in_CL = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG Preview Guild Badges",pSVar3,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              in_CL = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar7,0,(MethodInfo *)0x0);
              __this_02 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                          UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
              if (__this_02 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                          (__this_02,fVar11,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                           (System_String_o *)0x0,1,in_R8);
                return (UnityEngine_GameObject_o *)__this_02;
              }
            }
          }
          goto label_04502e4e;
        }
      }
      goto label_04502e53;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502d4a;
  }
label_04502e58:
  uVar10 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar11 = (float)il2cpp_runtime_helper_022b2b10(uVar10);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502f6e:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_0450318d;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
            if (lVar5 == 0) goto label_0450318d;
          }
          if (2 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[2] = pSVar4;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2);
            pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if (pSVar4 != (System_Type_o *)0x0) {
              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
              if (lVar5 == 0) goto label_0450318d;
            }
            if (3 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[3] = pSVar4;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3,pSVar4);
              pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              in_CL = '\0';
              UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG Preview Guild Preset Image",pSVar3,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  in_CL = '\0';
                  UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar7,0,(MethodInfo *)0x0);
                  __this_03 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_Image_GetComponent_Image);
                  if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (__this_03,0,(__this_03->klass->vtable)._25_set_raycastTarget.method);
                    UnityEngine_UI_Image__set_preserveAspect(__this_03,1,(MethodInfo *)0x0);
                    pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar9 != (Il2CppObject *)0x0) {
                      (*pIVar9->klass->vtable[0x24].methodPtr)
                                ((ulong)(uint)(fVar11 * 2.9),pIVar9,pIVar9->klass->vtable[0x24].method);
                      (*pIVar9->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar11,pIVar9);
                      UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
                      return (UnityEngine_GameObject_o *)__this_03;
                    }
                  }
                }
              }
              goto label_04503183;
            }
          }
        }
      }
      goto label_04503188;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502f6e;
  }
label_0450318d:
  __this_04 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  name = (System_String_o *)0x0;
  fVar11 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto label_0450345a;
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar4;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto label_0450345a;
      }
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar6,name,pSVar3,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar8 = x;
          if ((char)bVar2 == '\0') {
            pUVar8 = UnityEngine_Component__get_transform(__this_04,(MethodInfo *)0x0);
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar8,0,(MethodInfo *)0x0);
            pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar9 != (Il2CppObject *)0x0) {
              (*pIVar9->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar11 + 10.0),pIVar9,pIVar9->klass->vtable[0x26].method);
              if (in_CL == '\0') {
                uVar12 = 0;
              }
              else {
                uVar12 = 0x3f800000;
              }
              (*pIVar9->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar12,pIVar9,pIVar9->klass->vtable[0x28].method);
              __this_05 = (PatreonEffects_NameEffectLabel_o *)
                          UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (__this_05 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(__this_05,fVar11,(MethodInfo *)0x0);
                value_00.fields.b = 1.0;
                value_00.fields.a = 1.0;
                value_00.fields.r = 1.0;
                value_00.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(__this_05,value_00,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(__this_05,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(__this_05,1,(MethodInfo *)0x0);
                return (UnityEngine_GameObject_o *)__this_05;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar5 = il2cpp_runtime_helper_0231b270();
  pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2b10(lVar5,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  __this_00 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar5 + 0x20);
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return pUVar6;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateBadges
// il2cpp: Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float size, const MethodInfo* method);
// 0x4502c70

Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,UnityEngine_Transform_o *parent,
          float size,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar8;
  undefined8 uVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_Image_o *__this_01;
  Il2CppObject *pIVar11;
  UnityEngine_Component_o *__this_02;
  PatreonEffects_NameEffectLabel_o *__this_03;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *extraout_RAX;
  char in_CL;
  MethodInfo *extraout_RDX;
  UnityEngine_Transform_o *x;
  System_String_o *name;
  MethodInfo *in_R8;
  float fVar12;
  uint uVar13;
  UnityEngine_Color_o value_00;
  
  if (g_data_057aed1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Badges");
    g_data_057aed1c = '\x01';
    method = extraout_RDX;
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,2,method);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04502e4e:
    il2cpp_runtime_helper_022b2c90();
label_04502e53:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502d4a:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_04502e58;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
          pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          in_CL = '\0';
          UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG Preview Guild Badges",pSVar3,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              in_CL = '\0';
              UnityEngine_Transform__SetParent_4e09e30(pUVar7,parent,0,(MethodInfo *)0x0);
              pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR);
              if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                          (pGVar8,size,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                           (System_String_o *)0x0,1,in_R8);
                return pGVar8;
              }
            }
          }
          goto label_04502e4e;
        }
      }
      goto label_04502e53;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502d4a;
  }
label_04502e58:
  uVar9 = il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  fVar12 = (float)il2cpp_runtime_helper_022b2b10(uVar9);
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502f6e:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_0450318d;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
            if (lVar5 == 0) goto label_0450318d;
          }
          if (2 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[2] = pSVar4;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2);
            pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if (pSVar4 != (System_Type_o *)0x0) {
              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
              if (lVar5 == 0) goto label_0450318d;
            }
            if (3 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[3] = pSVar4;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3,pSVar4);
              pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              in_CL = '\0';
              UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG Preview Guild Preset Image",pSVar3,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  in_CL = '\0';
                  UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar7,0,(MethodInfo *)0x0);
                  __this_01 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_Image_GetComponent_Image);
                  if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (__this_01,0,(__this_01->klass->vtable)._25_set_raycastTarget.method);
                    UnityEngine_UI_Image__set_preserveAspect(__this_01,1,(MethodInfo *)0x0);
                    pIVar11 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar11 != (Il2CppObject *)0x0) {
                      (*pIVar11->klass->vtable[0x24].methodPtr)
                                ((ulong)(uint)(fVar12 * 2.9),pIVar11,pIVar11->klass->vtable[0x24].method);
                      (*pIVar11->klass->vtable[0x26].methodPtr)((ulong)(uint)fVar12,pIVar11);
                      UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
                      return (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01;
                    }
                  }
                }
              }
              goto label_04503183;
            }
          }
        }
      }
      goto label_04503188;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502f6e;
  }
label_0450318d:
  __this_02 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  name = (System_String_o *)0x0;
  fVar12 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto label_0450345a;
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar4;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto label_0450345a;
      }
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar6,name,pSVar3,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pUVar10 = x;
          if ((char)bVar2 == '\0') {
            pUVar10 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar10,0,(MethodInfo *)0x0);
            pIVar11 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar11 != (Il2CppObject *)0x0) {
              (*pIVar11->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fVar12 + 10.0),pIVar11,pIVar11->klass->vtable[0x26].method);
              if (in_CL == '\0') {
                uVar13 = 0;
              }
              else {
                uVar13 = 0x3f800000;
              }
              (*pIVar11->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar13,pIVar11,pIVar11->klass->vtable[0x28].method);
              __this_03 = (PatreonEffects_NameEffectLabel_o *)
                          UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (__this_03 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(__this_03,fVar12,(MethodInfo *)0x0);
                value_00.fields.b = 1.0;
                value_00.fields.a = 1.0;
                value_00.fields.r = 1.0;
                value_00.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(__this_03,value_00,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(__this_03,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(__this_03,1,(MethodInfo *)0x0);
                return (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_03;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar5 = il2cpp_runtime_helper_0231b270();
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)il2cpp_runtime_helper_022b2b10(lVar5,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  __this_00 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar5 + 0x20);
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return pGVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreatePresetImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x4502e70

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,UnityEngine_Transform_o *parent,
          float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  System_Action_string__o *value;
  UnityEngine_UI_Image_o *extraout_RAX;
  char in_CL;
  MethodInfo *extraout_RDX;
  UnityEngine_Transform_o *x;
  System_String_o *name;
  float value_00;
  uint uVar10;
  UnityEngine_Color_o value_01;
  
  if (g_data_057aed1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Preview Guild Preset Image");
    g_data_057aed1d = '\x01';
    method = extraout_RDX;
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,4,method);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503183:
    il2cpp_runtime_helper_022b2c90();
label_04503188:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_04502f6e:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_0450318d;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
            if (lVar5 == 0) goto label_0450318d;
          }
          if (2 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[2] = pSVar4;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2);
            pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if (pSVar4 != (System_Type_o *)0x0) {
              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
              if (lVar5 == 0) goto label_0450318d;
            }
            if (3 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[3] = pSVar4;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3,pSVar4);
              pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              in_CL = '\0';
              UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG Preview Guild Preset Image",pSVar3,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  in_CL = '\0';
                  UnityEngine_Transform__SetParent_4e09e30(pUVar7,parent,0,(MethodInfo *)0x0);
                  pUVar8 = (UnityEngine_UI_Image_o *)
                           UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_Image_GetComponent_Image);
                  if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar8,0,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
                    UnityEngine_UI_Image__set_preserveAspect(pUVar8,1,(MethodInfo *)0x0);
                    pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar9 != (Il2CppObject *)0x0) {
                      (*pIVar9->klass->vtable[0x24].methodPtr)
                                ((ulong)(uint)(height * 2.9),pIVar9,pIVar9->klass->vtable[0x24].method);
                      (*pIVar9->klass->vtable[0x26].methodPtr)((ulong)(uint)height,pIVar9);
                      UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
                      return pUVar8;
                    }
                  }
                }
              }
              goto label_04503183;
            }
          }
        }
      }
      goto label_04503188;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_04502f6e;
  }
label_0450318d:
  __this_01 = (UnityEngine_Component_o *)il2cpp_runtime_helper_0231b270();
  name = (System_String_o *)0x0;
  value_00 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar1 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto label_0450345a;
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar4;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto label_0450345a;
      }
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pSVar4);
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar6,name,pSVar3,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          parent_00 = x;
          if ((char)bVar2 == '\0') {
            parent_00 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,parent_00,0,(MethodInfo *)0x0);
            pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar9 != (Il2CppObject *)0x0) {
              (*pIVar9->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(value_00 + 10.0),pIVar9,pIVar9->klass->vtable[0x26].method);
              if (in_CL == '\0') {
                uVar10 = 0;
              }
              else {
                uVar10 = 0x3f800000;
              }
              (*pIVar9->klass->vtable[0x28].methodPtr)
                        ((ulong)uVar10,pIVar9,pIVar9->klass->vtable[0x28].method);
              pUVar8 = (UnityEngine_UI_Image_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize
                          ((PatreonEffects_NameEffectLabel_o *)pUVar8,value_00,(MethodInfo *)0x0);
                value_01.fields.b = 1.0;
                value_01.fields.a = 1.0;
                value_01.fields.r = 1.0;
                value_01.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color
                          ((PatreonEffects_NameEffectLabel_o *)pUVar8,value_01,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment
                          ((PatreonEffects_NameEffectLabel_o *)pUVar8,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText
                          ((PatreonEffects_NameEffectLabel_o *)pUVar8,1,(MethodInfo *)0x0);
                return pUVar8;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar5 = il2cpp_runtime_helper_0231b270();
  pUVar8 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_022b2b10(lVar5,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    pUVar8 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  __this_00 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar5 + 0x20);
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return pUVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, UnityEngine_Transform_o* parent, bool flexibleWidth, const MethodInfo* method);
// 0x45031a0

PatreonEffects_NameEffectLabel_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,UnityEngine_Transform_o *parent,bool_conflict flexibleWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Il2CppObject *pIVar4;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  System_Action_string__o *value;
  PatreonEffects_NameEffectLabel_o *extraout_RAX;
  uint uVar6;
  UnityEngine_Color_o value_00;
  
  if (g_data_057aed1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aed1e = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_04503450:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto label_0450345a;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_helper_023051f0(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) goto label_0450345a;
      }
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar2;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1,pSVar2);
        __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(__this_01,id,components,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
          }
          if (__this_02 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(__this_02,parent,0,(MethodInfo *)0x0);
            pIVar4 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar4 != (Il2CppObject *)0x0) {
              (*pIVar4->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)(fontSize + 10.0),pIVar4,pIVar4->klass->vtable[0x26].method);
              if ((char)flexibleWidth == '\0') {
                uVar6 = 0;
              }
              else {
                uVar6 = 0x3f800000;
              }
              (*pIVar4->klass->vtable[0x28].methodPtr)((ulong)uVar6,pIVar4,pIVar4->klass->vtable[0x28].method)
              ;
              pPVar5 = (PatreonEffects_NameEffectLabel_o *)
                       UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
              if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                PatreonEffects_NameEffectLabel__set_fontSize(pPVar5,fontSize,(MethodInfo *)0x0);
                value_00.fields.b = 1.0;
                value_00.fields.a = 1.0;
                value_00.fields.r = 1.0;
                value_00.fields.g = 1.0;
                PatreonEffects_NameEffectLabel__set_color(pPVar5,value_00,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_alignment(pPVar5,0x1002,(MethodInfo *)0x0);
                PatreonEffects_NameEffectLabel__set_richText(pPVar5,1,(MethodInfo *)0x0);
                return pPVar5;
              }
            }
          }
        }
        goto label_04503450;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0450345a:
  lVar3 = il2cpp_runtime_helper_0231b270();
  pPVar5 = (PatreonEffects_NameEffectLabel_o *)il2cpp_runtime_helper_022b2b10(lVar3,0);
  if (g_data_057aed19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    pPVar5 = (PatreonEffects_NameEffectLabel_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aed19 = '\x01';
  }
  __this_00 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(lVar3 + 0x20);
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return pPVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$DialogGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild (UnityEngine_Transform_o* root, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x4503670

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
          (UnityEngine_Transform_o *root,SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  Il2CppMethodPointer pIVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long *plVar7;
  System_String_o *a_00;
  void *in_R8;
  undefined1 auVar8 [16];
  
  if (g_data_057aed1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    g_data_057aed1f = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_04503735;
label_0450369b:
    if (g_data_057ae856 != '\0') goto label_045036a8;
label_04503747:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057ae856 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_0450376a;
label_045036b8:
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_0450369b;
label_04503735:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae856 == '\0') goto label_04503747;
label_045036a8:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045036b8;
label_0450376a:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  plVar7 = &TypeInfo_AottgEditCharacterDialog;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeda8 == '\0') goto label_045037d1;
label_0450379c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045037a8;
label_045037f0:
    il2cpp_runtime_helper_02337ed0();
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) == '\0') goto label_0450380c;
label_045037b5:
    plVar7 = &g_data_057b9c00;
  }
  else {
    if (g_data_057aeda8 != '\0') goto label_0450379c;
label_045037d1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda8 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_045037f0;
label_045037a8:
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) != '\0') goto label_045037b5;
label_0450380c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(*plVar7 + 0xb8);
  a_00 = pSVar5;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar5,(MethodInfo *)0x0)
    ;
    return pSVar5;
  }
  if ((info != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (auVar8 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guild",(info->klass->vtable)._7_get_Item.method), pIVar4 = auVar8._0_8_,
     a_00 = (System_String_o *)info, pIVar4 != (Il2CppMethodPointer)0x0)) {
    pMVar6 = *(MethodInfo **)pIVar4;
    pSVar5 = (System_String_o *)
             (*pMVar6[5].invoker_method)
                       (pIVar4,(MethodInfo *)pMVar6[5].name,auVar8._8_8_,&pMVar6->methodPointer,in_R8);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input(root,"profile-character-guild",pSVar5,pMVar6);
    pMVar6 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = extraout_RDX_00;
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-guild",pSVar5,pMVar6);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aed22 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (a_00 != (System_String_o *)0x0) {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                    (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto label_045039b7;
      plVar7 = (long *)(*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                                 (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
      if (plVar7 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar7 + 0x1c8);
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1d0),vtableDispatch);
        return pSVar5;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeda8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      g_data_057aeda8 = '\x01';
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    else {
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    if (cVar1 == '\0') {
      plVar7 = &TypeInfo_AottgEditCharacterDialog;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      plVar7 = &g_data_057b9c00;
    }
    return (System_String_o *)**(undefined8 **)(*plVar7 + 0xb8);
  }
label_045039b7:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ApplyGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* text, System_String_o* presetId, bool liveDialog, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x4504390

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *text,
               System_String_o *presetId,bool_conflict liveDialog,SimpleJSONFixed_JSONNode_o *effect,
               System_String_o *font,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **effect_00;
  int iVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  TMPro_TextMeshProUGUI_o *label;
  bool_conflict bVar3;
  uint uVar4;
  MethodInfo *in_RAX;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *name;
  System_String_o *pSVar6;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  byte bVar8;
  byte bVar9;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_UI_Image_o *pUVar10;
  float value;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  if (g_data_057aed20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed20 = '\x01';
  }
  bVar9 = 0;
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar10 = (__this->fields)._guildPresetImage;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = 0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar7 = extraout_RDX;
    if ((char)bVar3 == '\0') {
label_0450455b:
      bVar9 = 0;
      pUVar10 = (UnityEngine_UI_Image_o *)__this;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing(__this,0,pMVar7);
      pPVar2 = (__this->fields)._guild;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        color_01.fields.b = 1.0;
        color_01.fields.a = 1.0;
        color_01.fields.r = 1.0;
        color_01.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pPVar2->fields)._nameTmp,&(__this->fields)._guildPresetEffect,color_01
                   ,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                  ((__this->fields)._guild,text,liveDialog & 0xff,0,effect,font,in_RAX);
        return;
      }
    }
    else {
      pUVar10 = (__this->fields)._guildPresetImage;
      if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
        bVar9 = 0;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
          pMVar7 = extraout_RDX_00;
          goto label_0450455b;
        }
      }
    }
  }
  else {
    pUVar10 = (UnityEngine_UI_Image_o *)(__this->fields)._guild;
    if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
      bVar9 = 0;
      PatreonEffects_NameEffectLabel__ClearNameEffect
                ((PatreonEffects_NameEffectLabel_o *)pUVar10,(MethodInfo *)0x0);
      pPVar2 = (__this->fields)._guild;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        effect_00 = &(__this->fields)._guildPresetEffect;
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pPVar2->fields)._nameTmp,effect_00,color,(MethodInfo *)0x0);
        uVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                          ((__this->fields)._guildPresetImage,presetId,(MethodInfo *)0x0);
        bVar8 = (byte)uVar4;
        bVar9 = bVar8;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                  (__this,uVar4 & 0xff,method_00);
        pUVar10 = (UnityEngine_UI_Image_o *)(__this->fields)._guild;
        if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
          bVar9 = 0;
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0)
          ;
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,(uint)(bVar8 ^ 1),(MethodInfo *)0x0);
            if (bVar8 != 0) {
              return;
            }
            __this_01 = (UnityEngine_UI_Image_o *)(__this->fields)._guild;
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            bVar9 = 0;
            pUVar10 = (UnityEngine_UI_Image_o *)presetId;
            name = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
              PatreonEffects_NameEffectLabel__SetText
                        ((PatreonEffects_NameEffectLabel_o *)__this_01,pSVar6,name,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
              bVar9 = (byte)pSVar6;
              pPVar2 = (__this->fields)._guild;
              pUVar10 = __this_01;
              if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                label = (pPVar2->fields)._nameTmp;
                pSVar6 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
                color_00.fields.b = 1.0;
                color_00.fields.a = 1.0;
                color_00.fields.r = 1.0;
                color_00.fields.g = 1.0;
                Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                          ((TMPro_TMP_Text_o *)label,effect_00,presetId,pSVar6,color_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed21 = '\x01';
  }
  pSVar6 = *(System_String_o **)&(pUVar10->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  pMVar7 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar6 = *(System_String_o **)&(pUVar10->fields).m_Color.fields;
    if (pSVar6 == (System_String_o *)0x0) goto label_04504699;
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar6,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if (bVar9 == 0) {
      value = 5.0;
    }
    else {
      value = 3.5;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_04504699:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar7);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$SetGuildRowSpacing
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, bool imageGuild, const MethodInfo* method);
// 0x45045c0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,bool_conflict imageGuild,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  float value;
  
  if (g_data_057aed21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed21 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04504699;
    __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if ((char)imageGuild == '\0') {
      value = 5.0;
    }
    else {
      value = 3.5;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
    return;
  }
label_04504699:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 != 0) {
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$PresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x45038d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar4;
  System_String_o *pSVar5;
  
  if (g_data_057aed22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aed22 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(info->klass->vtable)._7_get_Item.methodPtr)
                    (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto label_045039b7;
      plVar4 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar4 + 0x1c8);
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1d0),vtableDispatch);
        return pSVar5;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeda8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      g_data_057aeda8 = '\x01';
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    else {
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    if (cVar1 == '\0') {
      plVar4 = &TypeInfo_AottgEditCharacterDialog;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      plVar4 = &g_data_057b9c00;
    }
    return (System_String_o *)**(undefined8 **)(*plVar4 + 0xb8);
  }
label_045039b7:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply (PatreonEffects_NameEffectLabel_o* label, System_String_o* text, bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x4503e30

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
               (PatreonEffects_NameEffectLabel_o *label,System_String_o *text,bool_conflict liveDialog,
               bool_conflict name,SimpleJSONFixed_JSONNode_o *effect,System_String_o *font,MethodInfo *method)

{
  bool_conflict *effect_00;
  int iVar1;
  TMPro_TMP_Text_o *label_00;
  UnityEngine_Object_o *x;
  undefined8 uVar2;
  int32_t effect_01;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  bool_conflict bVar9;
  uint uVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar11;
  TMPro_TMP_FontAsset_o *font_00;
  long *plVar12;
  SimpleJSONFixed_JSONNode_o *a;
  UnityEngine_GameObject_o *pUVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this;
  long lVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar17;
  PatreonEffects_NameEffectLabel_o *presetId;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_01;
  System_String_o **ppSVar18;
  uint liveDialog_00;
  byte bVar19;
  byte bVar20;
  MethodInfo *pMVar21;
  PatreonEffects_NameEffectLabel_o *__this_00;
  PatreonEffects_NameEffectLabel_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  float value;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar23;
  undefined4 uVar24;
  UnityEngine_Color_o UVar25;
  UnityEngine_Color_o a_00;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o b;
  undefined1 auVar26 [16];
  UnityEngine_Color_o c;
  int32_t local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_98._0_4_ = name;
  local_88._0_4_ = liveDialog;
  pMVar21 = (MethodInfo *)text;
  pSVar22 = effect;
  pSVar15 = font;
  if (g_data_057aed23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"type");
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed23 = '\x01';
    if (text != (System_String_o *)0x0) goto label_04503e68;
label_04503eda:
    local_9c = 0;
    text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pGVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(text,pMVar21);
  }
  else {
    if (text == (System_String_o *)0x0) goto label_04503eda;
label_04503e68:
    local_9c = 0;
    pGVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(text,pMVar21);
  }
  if (label != (PatreonEffects_NameEffectLabel_o *)0x0) {
    pMVar21 = (MethodInfo *)0x0;
    text = (System_String_o *)label;
    pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
      text = (pGVar11->fields).Text;
      pMVar21 = (MethodInfo *)0x0;
      bVar9 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar13,(uint)(byte)((byte)bVar9 ^ 1),(MethodInfo *)0x0);
        PatreonEffects_NameEffectLabel__ClearNameEffect(label,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        cVar8 = '\0';
        uVar10 = 0;
        font_00 = PatreonEffects_NameFontCatalog__Load(font,(MethodInfo *)0x0);
        PatreonEffects_NameEffectLabel__SetFont(label,font_00,(MethodInfo *)0x0);
        uVar23 = g_data_00d19fc0._8_4_;
        uVar24 = g_data_00d19fc0._12_4_;
        pMVar21 = (MethodInfo *)0x0;
        uVar2 = g_data_00d19fc0;
        UVar25.fields.b = (float)(int)uVar2;
        UVar25.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
        UVar25.fields.r = (float)(int)uVar2;
        UVar25.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        PatreonEffects_NameEffectLabel__set_color(label,UVar25,(MethodInfo *)0x0);
        bVar9 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          if (local_88[0] == '\0') goto label_045040c4;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_045042fd;
label_0450402d:
          pMVar21 = TypeInfo_AottgEditCharacterDialog;
joined_r0x04504032:
          if (local_98[0] == '\0') {
            pSVar15 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(pMVar21);
            pMVar17 = extraout_RDX_03;
          }
          else {
            pSVar15 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(pMVar21);
            pMVar17 = extraout_RDX;
          }
          if (uVar10 != 0) {
label_045041a2:
            local_9c = 0;
            bVar9 = PatreonEffects_NameEffectPresets__TryResolve(pSVar15,&local_9c,(MethodInfo *)0x0);
            pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar17 = extraout_RDX_02;
            if ((char)bVar9 != '\0') {
              pMVar21 = (MethodInfo *)0x0;
              PatreonEffects_NameEffectLabel__SetText
                        (label,pSVar15,(pGVar11->fields).Text,pSVar15,(MethodInfo *)0x0);
              effect_01 = local_9c;
              bVar19 = local_88[0];
              bVar20 = local_98[0];
              liveDialog_00 = (uint)local_88[0];
              uVar10 = (uint)local_98[0];
              UVar25 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 (liveDialog_00,uVar10,effect,0,pMVar21);
              local_88._8_4_ = extraout_XMM0_Dc;
              local_88._0_8_ = UVar25.fields._0_8_;
              local_88._12_4_ = extraout_XMM0_Dd;
              local_98._8_4_ = uVar23;
              local_98._0_8_ = UVar25.fields._8_8_;
              local_98._12_4_ = uVar24;
              UVar25 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 (liveDialog_00,uVar10,effect,1,pMVar21);
              local_48._8_4_ = extraout_XMM0_Dc_00;
              local_48._0_8_ = UVar25.fields._0_8_;
              local_48._12_4_ = extraout_XMM0_Dd_00;
              local_58._8_4_ = uVar23;
              local_58._0_8_ = UVar25.fields._8_8_;
              local_58._12_4_ = uVar24;
              UVar25 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 ((uint)bVar19,(uint)bVar20,effect,2,pMVar21);
              local_68._8_4_ = extraout_XMM0_Dc_01;
              local_68._0_8_ = UVar25.fields._0_8_;
              local_68._12_4_ = extraout_XMM0_Dd_01;
              local_78._8_4_ = uVar23;
              local_78._0_8_ = UVar25.fields._8_8_;
              local_78._12_4_ = uVar24;
              UVar25 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 ((uint)bVar19,(uint)bVar20,effect,3,pMVar21);
              auVar7 = local_48;
              auVar6 = local_58;
              auVar5 = local_68;
              auVar4 = local_78;
              auVar3 = local_88;
              auVar26 = local_98;
              a_00.fields.b = (float)local_98._0_4_;
              a_00.fields.a = (float)local_98._4_4_;
              a_00.fields.r = (float)local_88._0_4_;
              a_00.fields.g = (float)local_88._4_4_;
              b.fields.b = (float)local_58._0_4_;
              b.fields.a = (float)local_58._4_4_;
              b.fields.r = (float)local_48._0_4_;
              b.fields.g = (float)local_48._4_4_;
              c.fields.b = (float)local_78._0_4_;
              c.fields.a = (float)local_78._4_4_;
              c.fields.r = (float)local_68._0_4_;
              c.fields.g = (float)local_68._4_4_;
              local_98 = auVar26;
              local_88 = auVar3;
              local_78 = auVar4;
              local_68 = auVar5;
              local_58 = auVar6;
              local_48 = auVar7;
              PatreonEffects_NameEffectLabel__SetNameEffect(label,effect_01,a_00,b,c,UVar25,(MethodInfo *)0x0)
              ;
              return;
            }
            goto label_0450433b;
          }
        }
        else {
          if (local_88[0] != '\0') {
            if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (local_98[0] != '\0') goto label_04503fc7;
label_0450429a:
              if (g_data_057aedac == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
                il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
                g_data_057aedac = '\x01';
              }
              ppSVar18 = &"profile-character-guild-effect";
              iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
            }
            else {
              if (local_98[0] == '\0') goto label_0450429a;
label_04503fc7:
              if (g_data_057aedab == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
                il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
                g_data_057aedab = '\x01';
              }
              ppSVar18 = (System_String_o **)&"profile-character-name-effect";
              iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar10 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(*ppSVar18,pMVar21);
            uVar10 = uVar10 & 0xff;
            if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) != 0) goto label_0450402d;
label_045042fd:
            pMVar21 = TypeInfo_AottgEditCharacterDialog;
            il2cpp_runtime_helper_02337ed0();
            goto joined_r0x04504032;
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          cVar8 = '\0';
          pMVar21 = (MethodInfo *)0x0;
          text = (System_String_o *)effect;
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pMVar21 = "enabled", text = (System_String_o *)effect,
               plVar12 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                           (effect,"enabled",(effect->klass->vtable)._7_get_Item.method),
               plVar12 == (long *)0x0)) goto label_04504380;
            lVar16 = *plVar12;
            cVar8 = (**(code **)(lVar16 + 0x3a8))(plVar12);
            name = (bool_conflict)lVar16;
          }
label_045040c4:
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar21 = (MethodInfo *)0x0;
          text = (System_String_o *)effect;
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pMVar17 = extraout_RDX_00;
          if ((char)bVar9 == '\0') {
label_04504187:
            pSVar15 = "None";
            if (cVar8 == '\0') goto label_04504323;
            goto label_045041a2;
          }
          if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04504380;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(effect->klass->vtable)._7_get_Item.methodPtr)
                        (effect,"type",(effect->klass->vtable)._7_get_Item.method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pMVar17 = extraout_RDX_01;
          if ((char)bVar9 == '\0') goto label_04504187;
          pMVar21 = "type";
          text = (System_String_o *)effect;
          plVar12 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                      (effect,"type",(effect->klass->vtable)._7_get_Item.method);
          if (plVar12 == (long *)0x0) goto label_04504380;
          auVar26 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          pMVar17 = auVar26._8_8_;
          pSVar15 = auVar26._0_8_;
          if (cVar8 != '\0') goto label_045041a2;
        }
label_04504323:
        local_9c = 0;
        pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_0450433b:
        pSVar14 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
                            ((pGVar11->fields).Text,
                             (System_Collections_Generic_IList_string__o *)(pGVar11->fields).Colors,pMVar17);
        PatreonEffects_NameEffectLabel__SetText
                  (label,pSVar15,pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_04504380:
  auVar26 = il2cpp_runtime_helper_022b2c90();
  presetId = auVar26._8_8_;
  pMVar17 = auVar26._0_8_;
  if (g_data_057aed20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed20 = '\x01';
  }
  bVar20 = 0;
  bVar9 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset
                    ((System_String_o *)presetId,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    x = *(UnityEngine_Object_o **)&(((PatreonEffects_NameEffectLabel_o *)text)->fields)._color.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar20 = 0;
    bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_01 = extraout_RDX_04;
    if ((char)bVar9 == '\0') {
label_0450455b:
      bVar20 = 0;
      __this_01 = (PatreonEffects_NameEffectLabel_o *)text;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)text,0,method_01);
      lVar16 = *(long *)&(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
      if (lVar16 != 0) {
        color_01.fields.b = 1.0;
        color_01.fields.a = 1.0;
        color_01.fields.r = 1.0;
        color_01.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  (*(TMPro_TMP_Text_o **)(lVar16 + 0x60),
                   (PatreonEffects_NameEffectController_o **)
                   &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._richText,color_01,(MethodInfo *)0x0)
        ;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                  (*(PatreonEffects_NameEffectLabel_o **)
                    &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize,(System_String_o *)pMVar21
                   ,name & 0xff,0,pSVar22,pSVar15,pMVar17);
        return;
      }
    }
    else {
      __this_01 = *(PatreonEffects_NameEffectLabel_o **)
                   &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._color.fields.a;
      if (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        bVar20 = 0;
        pUVar13 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
          method_01 = extraout_RDX_05;
          goto label_0450455b;
        }
      }
    }
  }
  else {
    __this_01 = *(PatreonEffects_NameEffectLabel_o **)
                 &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
    if (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      bVar20 = 0;
      PatreonEffects_NameEffectLabel__ClearNameEffect(__this_01,(MethodInfo *)0x0);
      lVar16 = *(long *)&(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
      if (lVar16 != 0) {
        effect_00 = &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._richText;
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  (*(TMPro_TMP_Text_o **)(lVar16 + 0x60),(PatreonEffects_NameEffectController_o **)effect_00,
                   color,(MethodInfo *)0x0);
        uVar10 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                           (*(UnityEngine_UI_Image_o **)
                             &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._color.fields.a,
                            (System_String_o *)presetId,(MethodInfo *)0x0);
        bVar19 = (byte)uVar10;
        bVar20 = bVar19;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)text,uVar10 & 0xff,method_00);
        __this_01 = *(PatreonEffects_NameEffectLabel_o **)
                     &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
        if (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          bVar20 = 0;
          pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar13,(uint)(bVar19 ^ 1),(MethodInfo *)0x0);
            if (bVar19 != 0) {
              return;
            }
            __this_00 = *(PatreonEffects_NameEffectLabel_o **)
                         &(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
            pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            bVar20 = 0;
            __this_01 = presetId;
            pSVar14 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label
                                ((System_String_o *)presetId,(MethodInfo *)0x0);
            if (__this_00 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__SetText
                        (__this_00,pSVar15,pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                         (MethodInfo *)0x0);
              bVar20 = (byte)pSVar15;
              lVar16 = *(long *)&(((PatreonEffects_NameEffectLabel_o *)text)->fields)._fontSize;
              __this_01 = __this_00;
              if (lVar16 != 0) {
                label_00 = *(TMPro_TMP_Text_o **)(lVar16 + 0x60);
                pSVar15 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label
                                    ((System_String_o *)presetId,(MethodInfo *)0x0);
                color_00.fields.b = 1.0;
                color_00.fields.a = 1.0;
                color_00.fields.r = 1.0;
                color_00.fields.g = 1.0;
                Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                          (label_00,(PatreonEffects_NameEffectController_o **)effect_00,
                           (System_String_o *)presetId,pSVar15,color_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed21 = '\x01';
  }
  pSVar15 = (__this_01->fields)._name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  pMVar21 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pSVar15 = (__this_01->fields)._name;
    if (pSVar15 == (System_String_o *)0x0) goto label_04504699;
    __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar15,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (__this != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if (bVar20 == 0) {
      value = 5.0;
    }
    else {
      value = 3.5;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this,value,(MethodInfo *)0x0);
    return;
  }
label_04504699:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  if (iVar1 != 0) {
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar21);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar21);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font (SimpleJSONFixed_JSONNode_o* info, System_String_o* key, const MethodInfo* method);
// 0x4503ad0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar4;
  System_String_o *pSVar5;
  
  if (g_data_057aed24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed24 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04503c00:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aedaf == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
        il2cpp_runtime_helper_023445d0();
        g_data_057aedaf = '\x01';
        bVar3 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
        cVar2 = (char)bVar3;
      }
      else {
        bVar3 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
        cVar2 = (char)bVar3;
      }
      if (cVar2 != '\0') {
        if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 0x20);
        if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
          return pSVar5;
        }
        pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
        return pSVar5;
      }
      return "Normal";
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(info->klass->vtable)._7_get_Item.methodPtr)(info,key,(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      plVar4 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,key,(info->klass->vtable)._7_get_Item.method);
      if (plVar4 == (long *)0x0) goto label_04503c00;
      pSVar5 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4);
      iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
      goto joined_r0x04503be4;
    }
  }
  iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  pSVar5 = "Normal";
joined_r0x04503be4:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ColorValue
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue (bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x4504cc0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
          (bool_conflict liveDialog,bool_conflict name,SimpleJSONFixed_JSONNode_o *effect,int32_t index,
          MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  int32_t iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  undefined8 in_XMM1_Qa;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o UVar11;
  int32_t iStack_54;
  SimpleJSONFixed_JSONNode_o *pSStack_50;
  int32_t local_3c;
  UnityEngine_Color_Fields local_38;
  
  a = (SimpleJSONFixed_JSONNode_o *)(ulong)(uint)liveDialog;
  if (g_data_057aed25 == '\0') {
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504ceb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504cf7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d0f;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d1b;
    il2cpp_runtime_helper_023445d0(&"colors");
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d27;
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d33;
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aed25 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if ((char)liveDialog == '\0') {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d74;
      il2cpp_runtime_helper_02337ed0();
    }
    iVar6 = 0;
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504d80;
    pSVar5 = (System_String_o *)effect;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar4 = "#FFFFFFFF";
    if ((char)bVar1 != '\0') {
      if (effect != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504daf;
        a = (SimpleJSONFixed_JSONNode_o *)
            (*(effect->klass->vtable)._7_get_Item.methodPtr)
                      (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504dc4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504dd0;
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar4 = "#FFFFFFFF";
        if ((char)bVar1 == '\0') goto label_04504f35;
        pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504def;
        uVar7 = "colors";
        pSVar5 = (System_String_o *)effect;
        plVar3 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                   (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
        iVar6 = (int32_t)uVar7;
        if (plVar3 != (long *)0x0) {
          pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e0e;
          a = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar3 + 0x188))(plVar3,index,*(undefined8 *)(*plVar3 + 400));
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e23;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e2f;
          bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pSVar4 = "#FFFFFFFF";
          if ((char)bVar1 == '\0') goto label_04504f35;
          pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e4a;
          uVar7 = "colors";
          pSVar4 = (System_String_o *)
                   (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
          iVar6 = (int32_t)uVar7;
          pSVar5 = (System_String_o *)effect;
          if (pSVar4 != (System_String_o *)0x0) {
            pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e69;
            iVar6 = index;
            plVar3 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar4->klass)->vtable)._5_get_Item.methodPtr)
                                       (pSVar4,(ulong)(uint)index,
                                        (((SimpleJSONFixed_JSONNode_c *)pSVar4->klass)->vtable)._5_get_Item.
                                        method);
            pSVar5 = pSVar4;
            if (plVar3 != (long *)0x0) {
              pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504e85;
              pSVar4 = (System_String_o *)
                       (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
              goto label_04504f35;
            }
          }
        }
      }
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504f8b;
      il2cpp_runtime_helper_022b2c90();
      iStack_54 = iVar6;
      pSStack_50 = a;
      if (g_data_057aedba == '\0') {
        il2cpp_runtime_helper_023445d0(&"-color-");
        g_data_057aedba = '\x01';
      }
      pSVar4 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
      System_String__Concat_3af7150(pSVar5,"-color-",pSVar4,(MethodInfo *)0x0);
      UVar11.fields.g = (float)extraout_XMM0_Db;
      UVar11.fields.r = (float)extraout_XMM0_Da;
      UVar11.fields.b = (float)(int)in_XMM1_Qa;
      UVar11.fields.a = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
      return (UnityEngine_Color_o)UVar11.fields;
    }
  }
  else {
    if ((char)name == '\0') {
      puVar2 = &"profile-character-guild-effect";
    }
    else {
      puVar2 = &"profile-character-name-effect";
    }
    pSVar5 = (System_String_o *)*puVar2;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504f6f;
      il2cpp_runtime_helper_02337ed0();
    }
    local_3c = index;
    if (g_data_057aedba == '\0') {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504ed4;
      il2cpp_runtime_helper_023445d0(&"-color-");
      g_data_057aedba = '\x01';
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504ee7;
    pSVar4 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504efe;
    pSVar5 = System_String__Concat_3af7150(pSVar5,"-color-",pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504f19;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504f32;
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar5,"#FFFFFFFF",1,(MethodInfo *)0x0);
  }
label_04504f35:
  pSStack_50 = (SimpleJSONFixed_JSONNode_o *)0x4504f41;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar4,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    fVar8 = (float)g_data_00d19fc0;
    fVar9 = g_data_00d19fc0._4_4_;
    local_38._8_8_ = g_data_00d19fc0;
  }
  else {
    fVar8 = local_38.r;
    fVar9 = local_38.g;
  }
  UVar10.fields.g = fVar9;
  UVar10.fields.r = fVar8;
  UVar10.fields.b = local_38.b;
  UVar10.fields.a = local_38.a;
  return (UnityEngine_Color_o)UVar10.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Input
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x4503500

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
          (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer pIVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_Object_Fields *pUVar7;
  long *plVar8;
  System_String_o *pSVar9;
  UnityEngine_Object_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *a_00;
  void *in_R8;
  undefined1 auVar10 [16];
  System_String_o *pSStack_38;
  UnityEngine_Object_o *pUStack_30;
  System_String_o *pSStack_28;
  System_String_o *pSStack_20;
  
  if (g_data_057aed26 == '\0') {
    pSStack_20 = (System_String_o *)0x4503523;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStack_20 = (System_String_o *)0x450352f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed26 = '\x01';
  }
  pSStack_20 = (System_String_o *)0x450354b;
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_(root,id,MethodInfo_TMP_InputField_Find_TMP_InputField);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_20 = (System_String_o *)0x4503566;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_o *)0x0;
  pSStack_20 = (System_String_o *)0x4503572;
  key = x;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (fallback != (System_String_o *)0x0) {
      return fallback;
    }
    pUVar7 = *(UnityEngine_Object_Fields **)(g_data_057b9c00 + 0xb8);
label_0450359e:
    return (System_String_o *)pUVar7->m_CachedPtr;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    pUVar7 = &x[0x16].fields;
    goto label_0450359e;
  }
  pSStack_20 = (System_String_o *)0x45035af;
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = pSVar5;
  pUStack_30 = x;
  pSStack_28 = fallback;
  pSStack_20 = id;
  if (g_data_057aed90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057aed90 = '\x01';
  }
  pSStack_38 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)key,(Il2CppObject **)&pSStack_38,MethodInfo_Boolean_TryGetValue);
    if (((char)bVar3 == '\0') && (pSStack_38 = pSVar5, pSVar5 == (System_String_o *)0x0)) {
      pSStack_38 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    return pSStack_38;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    g_data_057aed1f = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_04503735;
label_0450369b:
    if (g_data_057ae856 != '\0') goto label_045036a8;
label_04503747:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057ae856 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_0450376a;
label_045036b8:
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_0450369b;
label_04503735:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae856 == '\0') goto label_04503747;
label_045036a8:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045036b8;
label_0450376a:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  plVar8 = &TypeInfo_AottgEditCharacterDialog;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeda8 == '\0') goto label_045037d1;
label_0450379c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045037a8;
label_045037f0:
    il2cpp_runtime_helper_02337ed0();
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) == '\0') goto label_0450380c;
label_045037b5:
    plVar8 = &g_data_057b9c00;
  }
  else {
    if (g_data_057aeda8 != '\0') goto label_0450379c;
label_045037d1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda8 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_045037f0;
label_045037a8:
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) != '\0') goto label_045037b5;
label_0450380c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(*plVar8 + 0xb8);
  a_00 = pSVar5;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar5,(MethodInfo *)0x0)
    ;
    return pSVar5;
  }
  if (pSVar9 != (System_String_o *)0x0) {
    auVar10 = (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                        (pSVar9,"guild",(pSVar9->klass->vtable)._7_CompareTo.method);
    pIVar4 = auVar10._0_8_;
    a_00 = pSVar9;
    if (pIVar4 != (Il2CppMethodPointer)0x0) {
      pMVar6 = *(MethodInfo **)pIVar4;
      pSVar5 = (System_String_o *)
               (*pMVar6[5].invoker_method)
                         (pIVar4,(MethodInfo *)pMVar6[5].name,auVar10._8_8_,&pMVar6->methodPointer,in_R8);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                         ((UnityEngine_Transform_o *)__this,"profile-character-guild",pSVar5,pMVar6);
      pMVar6 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar6 = extraout_RDX_00;
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-guild",pSVar5,pMVar6);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aed22 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (a_00 != (System_String_o *)0x0) {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                    (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto label_045039b7;
      plVar8 = (long *)(*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                                 (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
      if (plVar8 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar8 + 0x1c8);
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)(plVar8,*(undefined8 *)(*plVar8 + 0x1d0),vtableDispatch);
        return pSVar5;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeda8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      g_data_057aeda8 = '\x01';
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    else {
      cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
    }
    if (cVar1 == '\0') {
      plVar8 = &TypeInfo_AottgEditCharacterDialog;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      plVar8 = &g_data_057b9c00;
    }
    return (System_String_o *)**(undefined8 **)(*plVar8 + 0xb8);
  }
label_045039b7:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_253CE80* method);
// 0x263ce80

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_253CE80 *method)

{
  int iVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *pUVar7;
  System_Object_array *pSVar8;
  undefined8 uVar9;
  System_RuntimeTypeHandle_Fields *pSVar10;
  System_Type_o *pSVar11;
  long lVar12;
  long lVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  long extraout_RDX;
  ulong unaff_RBX;
  System_String_o *b;
  System_String_o *pSVar16;
  System_Type_o *pSVar17;
  System_RuntimeTypeHandle_o handle;
  undefined8 in_R8;
  undefined8 in_R9;
  
  if ((method->rgctx_data == (MethodInfo_253CE80_RGCTXs *)0x0) &&
     (il2cpp_runtime_helper_023445d0(&TypeInfo_Object), method->rgctx_data == (MethodInfo_253CE80_RGCTXs *)0x0)) {
    il2cpp_runtime_helper_02300a20(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return &((System_Object_array *)0x0)->obj;
  }
  b = (System_String_o *)0x0;
  pSVar8 = (System_Object_array *)id;
  bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return &((System_Object_array *)0x0)->obj;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
label_0263cfec:
    il2cpp_runtime_helper_022b2c90();
    root = (UnityEngine_Transform_o *)pSVar8;
  }
  else {
    b = (System_String_o *)0x1;
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,
                        (MethodInfo_24E85B0 *)
                        method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_);
    pSVar8 = (System_Object_array *)root;
    if (pSVar6 == (System_Object_array *)0x0) goto label_0263cfec;
    if ((int)pSVar6->max_length < 1) {
      return &((System_Object_array *)0x0)->obj;
    }
    unaff_RBX = 0;
    if ((pSVar6->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Object_array *)pSVar6->m_Items[unaff_RBX];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        b = (System_String_o *)0x0;
        pSVar8 = pSVar3;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (pSVar3 == (System_Object_array *)0x0) goto label_0263cfec;
          b = (System_String_o *)0x0;
          pSVar8 = pSVar3;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_0263cfec;
          pSVar8 = (System_Object_array *)UnityEngine_Object__get_name(pUVar7,(MethodInfo *)0x0);
          b = id;
          bVar5 = System_String__op_Equality((System_String_o *)pSVar8,id,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return &pSVar3->obj;
          }
        }
        unaff_RBX = unaff_RBX + 1;
        uVar2 = (uint)pSVar6->max_length;
        if ((long)(int)uVar2 <= (long)unaff_RBX) {
          return &((System_Object_array *)0x0)->obj;
        }
        root = (UnityEngine_Transform_o *)pSVar8;
      } while (unaff_RBX < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((*(long *)(extraout_RDX + 0x38) == 0) &&
     (il2cpp_runtime_helper_023445d0(&TypeInfo_Object), *(long *)(extraout_RDX + 0x38) == 0)) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = (System_String_o *)0x0;
  pSVar8 = (System_Object_array *)root;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return &((System_Object_array *)0x0)->obj;
  }
  if ((System_Object_array *)root == (System_Object_array *)0x0) {
label_0263d15c:
    il2cpp_runtime_helper_022b2c90();
    pSVar6 = (System_Object_array *)root;
  }
  else {
    pSVar16 = (System_String_o *)0x1;
    pSVar8 = (System_Object_array *)root;
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,
                        *(MethodInfo_24E85B0 **)(*(long *)(extraout_RDX + 0x38) + 8));
    if (pSVar6 == (System_Object_array *)0x0) goto label_0263d15c;
    if ((int)pSVar6->max_length < 1) {
      return &((System_Object_array *)0x0)->obj;
    }
    unaff_RBX = 0;
    if ((pSVar6->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Object_array *)pSVar6->m_Items[unaff_RBX];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_String_o *)0x0;
        pSVar8 = pSVar3;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          root = (UnityEngine_Transform_o *)pSVar6;
          if (pSVar3 == (System_Object_array *)0x0) goto label_0263d15c;
          pSVar16 = (System_String_o *)0x0;
          pSVar8 = pSVar3;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_0263d15c;
          pSVar8 = (System_Object_array *)UnityEngine_Object__get_name(pUVar7,(MethodInfo *)0x0);
          pSVar16 = b;
          bVar5 = System_String__op_Equality((System_String_o *)pSVar8,b,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return &pSVar3->obj;
          }
        }
        unaff_RBX = unaff_RBX + 1;
        uVar2 = (uint)pSVar6->max_length;
        if ((long)(int)uVar2 <= (long)unaff_RBX) {
          return &((System_Object_array *)0x0)->obj;
        }
      } while (unaff_RBX < uVar2);
    }
  }
  uVar9 = il2cpp_runtime_helper_022b2ca0();
  pSVar10 = pSVar16[2].monitor;
  lVar12 = extraout_RDX;
  if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(pSVar16);
    pSVar10 = pSVar16[2].monitor;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = (System_Type_o *)0x0;
  pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((pSVar8 != (System_Object_array *)0x0) &&
     (pIVar4 = (pSVar8->obj).klass,
     lVar12 = (*(((System_String_VTable *)pIVar4->vtable)->_14_System_IConvertible_ToInt16).methodPtr)
                        (pSVar8,pSVar11,0,
                         (((System_String_VTable *)pIVar4->vtable)->_14_System_IConvertible_ToInt16).method,
                         in_R8,in_R9,uVar9,unaff_RBX,lVar12,b,pSVar6), pSVar17 = pSVar11,
     handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar8,
     lVar12 != 0)) {
    if (*(long *)(lVar12 + 0x18) != 0) {
      if ((int)*(long *)(lVar12 + 0x18) == 0) goto label_0263d23f;
      lVar12 = *(long *)(lVar12 + 0x20);
      lVar13 = *(long *)((long)pSVar16[2].monitor + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
      }
      if (lVar12 != 0) {
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar12,lVar13);
        if (pIVar14 != (Il2CppObject *)0x0) {
          return pIVar14;
        }
        il2cpp_runtime_helper_022b2fd0(lVar12,lVar13);
      }
    }
    return (Il2CppObject *)0x0;
  }
  pSVar8 = (System_Object_array *)handle.fields.value;
  pSVar11 = pSVar17;
  il2cpp_runtime_helper_022b2c90();
label_0263d23f:
  il2cpp_runtime_helper_022b2ca0();
  if (pSVar11[2].monitor == (void *)0x0) {
    il2cpp_runtime_helper_02300a20(pSVar11);
  }
  pIVar14 = System_Activator__CreateInstance_3ce7ba0((System_Type_o *)pSVar8,(MethodInfo *)0x0);
  lVar12 = *(long *)pSVar11[2].monitor;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar14,lVar12);
    if (pIVar15 != (Il2CppObject *)0x0) {
      return pIVar15;
    }
    il2cpp_runtime_helper_022b2fd0(pIVar14,lVar12);
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x4504ff0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


