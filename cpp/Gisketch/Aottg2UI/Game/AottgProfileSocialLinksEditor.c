// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileSocialLinksEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor (const MethodInfo* method);
// 0x452cd90

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee91 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, const MethodInfo* method);
// 0x452ce00

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$<Build>b__2_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__2_1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x452ce10

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__2_1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  int32_t iVar2;
  long lVar3;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar4;
  Gisketch_Aottg2UI_Code_AottgUi_o *style;
  bool_conflict bVar5;
  undefined4 uVar6;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *pUVar8;
  System_Action_GisketchActionContext__o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar16;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined4 uVar17;
  UnityEngine_Object_o *pUVar18;
  TMPro_TMP_InputField_o *pTVar19;
  undefined8 unaff_R13;
  undefined8 uStackY_1a8;
  undefined8 uStackY_1a0;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStackY_198;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStackY_190;
  System_String_Fields *pSStackY_188;
  undefined8 *puStackY_180;
  int32_t iStack_124;
  System_Action_AottgUi__o *pSStack_120;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_118;
  undefined8 uStack_110;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_108;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_100;
  undefined8 *puStack_f8;
  
  pGVar16 = header;
  if (g_data_057aee92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRow);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Social Links");
    il2cpp_runtime_helper_023445d0(&"profile-details-social-add");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"plus");
    __this = (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *)&"Add Link";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee92 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (header,"Social Links","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar9 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                        (header,1,"Add Link",pSVar9,"profile-details-social-add",(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"plus",
                         (MethodInfo *)0x0);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(136.0,(MethodInfo *)0x0);
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    pGVar16 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    __this = (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *)"Column";
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar11,pGVar12,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar13);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee93 == '\0') {
    puStack_f8 = (undefined8 *)0x452d029;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    puStack_f8 = (undefined8 *)0x452d035;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_f8 = (undefined8 *)0x452d041;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    puStack_f8 = (undefined8 *)0x452d04d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2_1);
    puStack_f8 = (undefined8 *)0x452d059;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    puStack_f8 = (undefined8 *)0x452d065;
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    puStack_f8 = (undefined8 *)0x452d071;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-header");
    puStack_f8 = (undefined8 *)0x452d07d;
    il2cpp_runtime_helper_023445d0(&"Center");
    puStack_f8 = (undefined8 *)0x452d089;
    il2cpp_runtime_helper_023445d0(&"Row");
    puStack_f8 = (undefined8 *)0x452d095;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee93 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    puStack_f8 = (undefined8 *)0x452d0b5;
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      puStack_f8 = (undefined8 *)0x452d0e1;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R13 = **(undefined8 **)(TypeInfo_c + 0xb8);
    puStack_f8 = (undefined8 *)0x452d0fe;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    puStack_f8 = (undefined8 *)0x452d118;
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 8) = build;
    puStack_f8 = (undefined8 *)0x452d133;
    il2cpp_runtime_helper_022b4080(lVar3 + 8,build);
  }
  puStack_f8 = (undefined8 *)0x452d142;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  puStack_f8 = (undefined8 *)0x452d1c9;
  __this_01 = "SpaceBetween";
  pSVar14 = "Row";
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,0.0,pGVar11,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (pGVar16 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    puStack_f8 = (undefined8 *)0x452d1f8;
    method_00 = "profile-details-social-header";
    __this_01 = style;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar16,(System_String_o *)style,build,(System_String_o *)"profile-details-social-header",pGVar13,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
    pSVar14 = (System_String_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      if ((pSVar4->fields)._size < 1) {
        pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puStack_f8 = (undefined8 *)0x452d21c;
        pSVar14 = (System_String_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_String_get_Item);
      }
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      puStack_f8 = (undefined8 *)0x452d243;
      Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,0,pSVar14,method_00);
      pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
      pSVar14 = (System_String_o *)0x0;
      if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        if ((pSVar4->fields)._size < 2) {
          pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          puStack_f8 = (undefined8 *)0x452d26a;
          pSVar14 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar4,1,MethodInfo_String_get_Item);
        }
        __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
        puStack_f8 = (undefined8 *)0x452d294;
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,1,pSVar14,method_00);
        pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
        pSVar14 = (System_String_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          if ((pSVar4->fields)._size < 3) {
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            puStack_f8 = (undefined8 *)0x452d2bb;
            pSVar14 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar4,2,MethodInfo_String_get_Item);
          }
          __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x2;
          puStack_f8 = (undefined8 *)0x452d2e5;
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,2,pSVar14,method_00);
          pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
          pSVar14 = (System_String_o *)0x0;
          if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            if ((pSVar4->fields)._size < 4) {
              pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              puStack_f8 = (undefined8 *)0x452d30c;
              pSVar14 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar4,3,MethodInfo_String_get_Item);
            }
            __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
            puStack_f8 = (undefined8 *)0x452d336;
            Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,3,pSVar14,method_00);
            pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
            pSVar14 = (System_String_o *)0x0;
            if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
              if ((pSVar4->fields)._size < 5) {
                pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                puStack_f8 = (undefined8 *)0x452d35d;
                pSVar14 = (System_String_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,4,MethodInfo_String_get_Item);
              }
              __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&g_data_00000004;
              puStack_f8 = (undefined8 *)0x452d387;
              Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,4,pSVar14,method_00);
              pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
              pSVar14 = (System_String_o *)0x0;
              if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
                if ((pSVar4->fields)._size < 6) {
                  pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  puStack_f8 = (undefined8 *)0x452d3ae;
                  pSVar14 = (System_String_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar4,5,MethodInfo_String_get_Item);
                }
                __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&g_data_00000005;
                puStack_f8 = (undefined8 *)0x452d3d8;
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,5,pSVar14,method_00);
                pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
                pSVar14 = (System_String_o *)0x0;
                if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
                  if ((pSVar4->fields)._size < 7) {
                    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  }
                  else {
                    puStack_f8 = (undefined8 *)0x452d3ff;
                    pSVar14 = (System_String_o *)
                              System_Collections_Generic_List_object___get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar4,6,MethodInfo_String_get_Item);
                  }
                  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x6;
                  puStack_f8 = (undefined8 *)0x452d429;
                  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(pGVar16,6,pSVar14,method_00)
                  ;
                  pSVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
                  pSVar14 = (System_String_o *)0x0;
                  if (pSVar4 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
                    if ((pSVar4->fields)._size < 8) {
                      pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                    }
                    else {
                      puStack_f8 = (undefined8 *)0x452d44c;
                      pSVar14 = (System_String_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar4,7,MethodInfo_String_get_Item)
                      ;
                    }
                    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                              (pGVar16,7,pSVar14,method_00);
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
  puStack_f8 = (undefined8 *)0x452d489;
  il2cpp_runtime_helper_022b2c90();
  puStack_f8 = &TypeInfo_c;
  pGStack_100 = style;
  pSStack_120 = build;
  pGStack_118 = pGVar16;
  uStack_110 = unaff_R13;
  pGStack_108 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
  if (g_data_057aee94 == '\0') {
    puStackY_180 = (undefined8 *)0x452d4bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    puStackY_180 = (undefined8 *)0x452d4c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SocialRow_b__1);
    puStackY_180 = (undefined8 *)0x452d4d5;
    il2cpp_runtime_helper_023445d0(&"https://example.com/profile");
    puStackY_180 = (undefined8 *)0x452d4e1;
    il2cpp_runtime_helper_023445d0(&"Column");
    puStackY_180 = (undefined8 *)0x452d4ed;
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    puStackY_180 = (undefined8 *)0x452d4f9;
    il2cpp_runtime_helper_023445d0(&"Remove social link");
    puStackY_180 = (undefined8 *)0x452d505;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-icon-");
    puStackY_180 = (undefined8 *)0x452d511;
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    puStackY_180 = (undefined8 *)0x452d51d;
    il2cpp_runtime_helper_023445d0(&"inputField");
    puStackY_180 = (undefined8 *)0x452d529;
    il2cpp_runtime_helper_023445d0(&"material-icons/cancel");
    puStackY_180 = (undefined8 *)0x452d535;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-remove-");
    g_data_057aee94 = '\x01';
  }
  pSVar1 = &pSVar14->fields;
  puStackY_180 = (undefined8 *)0x452d54b;
  pSVar15 = System_Int32__ToString((int32_t)pSVar1,(MethodInfo *)0x0);
  puStackY_180 = (undefined8 *)0x452d55f;
  pSVar15 = System_String__Concat_3ae5ba0("profile-details-social-icon-",pSVar15,(MethodInfo *)0x0);
  puStackY_180 = (undefined8 *)0x452d571;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  puStackY_180 = (undefined8 *)0x452d583;
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Object_o *)0x0;
  puStackY_180 = (undefined8 *)0x452d5fd;
  pGVar16 = "Column";
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar11,pGVar12,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    puStackY_180 = (undefined8 *)0x452d633;
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_01,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar15,pGVar13,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_124 = pSVar1->_stringLength;
    if (g_data_057aee90 == '\0') {
      puStackY_180 = (undefined8 *)0x452d64f;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    puStackY_180 = (undefined8 *)0x452d662;
    pSVar15 = System_Int32__ToString((int32_t)&iStack_124,(MethodInfo *)0x0);
    puStackY_180 = (undefined8 *)0x452d676;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
              System_String__Concat_3ae5ba0("profile-details-social-",pSVar15,(MethodInfo *)0x0);
    puStackY_180 = (undefined8 *)0x452d688;
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    uVar17 = 0;
    puStackY_180 = (undefined8 *)0x452d6ff;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar12,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Object_o *)CONCAT44(uVar17,0x100);
    puStackY_180 = (undefined8 *)0x452d743;
    pGVar16 = __this_01;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                        (__this_01,(System_String_o *)pGVar11,"https://example.com/profile",0,"inputField",pGVar13,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_Action_GisketchActionContext__o *)0x0,0.2,0x100,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).value = (System_String_o *)pSVar14[1].klass;
      puStackY_180 = (undefined8 *)0x452d761;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).value);
      pSVar15 = "material-icons/cancel";
      pSVar9 = pSVar14[1].monitor;
      if (pSVar9 == (System_Action_GisketchActionContext__o *)0x0) {
        puStackY_180 = (undefined8 *)0x452d784;
        pSVar9 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        puStackY_180 = (undefined8 *)0x452d79e;
        System_Action_GisketchActionContext____ctor();
        pSVar14[1].monitor = pSVar9;
        puStackY_180 = (undefined8 *)0x452d7b0;
        il2cpp_runtime_helper_022b4080(&pSVar14[1].monitor);
      }
      puStackY_180 = (undefined8 *)0x452d7ba;
      pSVar14 = System_Int32__ToString((int32_t)pSVar1,(MethodInfo *)0x0);
      puStackY_180 = (undefined8 *)0x452d7ce;
      pSVar14 = System_String__Concat_3ae5ba0("profile-details-social-remove-",pSVar14,(MethodInfo *)0x0);
      puStackY_180 = (undefined8 *)0x452d7f5;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                          (__this_01,3,pSVar15,pSVar9,pSVar14,"Remove social link",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      puStackY_180 = (undefined8 *)0x452d807;
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                  Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      puStackY_180 = (undefined8 *)0x452d819;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Object_o *)0x0;
      puStackY_180 = (undefined8 *)0x452d88c;
      pGVar16 = "Column";
      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_01,pGVar11,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
        puStackY_180 = (undefined8 *)0x452d8aa;
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar13);
        return;
      }
    }
  }
  puStackY_180 = (undefined8 *)0x452d8be;
  uStackY_1a0 = il2cpp_runtime_helper_022b2c90();
  iVar2 = *(int32_t *)&(pGVar16->fields)._children;
  puStackY_180 = &"Column";
  pGStackY_198 = pGVar11;
  pGStackY_190 = __this_01;
  pSStackY_188 = pSVar1;
  if (g_data_057aee8d == '\0') {
    uStackY_1a8 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStackY_1a8 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_1a8 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  uStackY_1a8 = 0x452cbb1;
  pUVar18 = pUVar8;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar17 = SUB84(pUVar18,0);
  if ((char)bVar5 != '\0') {
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_0452cd31;
    uStackY_1a8 = 0x452cbc8;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    uVar17 = SUB84(pUVar8,0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStackY_1a8 = 0x452cbdb;
    pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_1a8 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStackY_1a8 = 0x452cbfb;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    uStackY_1a0 = CONCAT44(uStackY_1a0._4_4_,iVar2);
    if (g_data_057aee90 == '\0') {
      uStackY_1a8 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStackY_1a8 = 0x452cc2d;
    pSVar14 = System_Int32__ToString((int32_t)&uStackY_1a0,(MethodInfo *)0x0);
    uStackY_1a8 = 0x452cc41;
    pSVar14 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar14,(MethodInfo *)0x0);
    uStackY_1a8 = 0x452cc56;
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar7,pSVar14,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_1a8 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_1a8 = 0x452cc76;
    pTVar19 = __this_00;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar17 = SUB84(pTVar19,0);
    if ((char)bVar5 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStackY_1a8 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStackY_1a0 = CONCAT44(iVar2,(undefined4)uStackY_1a0);
    if (g_data_057aee8f == '\0') {
      uStackY_1a8 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStackY_1a8 = 0x452ccd2;
    pSVar14 = System_Int32__ToString((int)&uStackY_1a0 + 4,(MethodInfo *)0x0);
    uStackY_1a8 = 0x452cce6;
    pSVar14 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar14,(MethodInfo *)0x0);
    uStackY_1a8 = 0x452ccf1;
    pUVar8 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar7,pSVar14,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_1a8 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_1a8 = 0x452cd11;
    pUVar18 = pUVar8;
    bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar17 = SUB84(pUVar18,0);
    if ((char)bVar5 != '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStackY_1a8 = 0x452cd36;
        uVar6 = il2cpp_runtime_helper_022b2c90();
        uStackY_1a8 = CONCAT44(uVar17,uVar6);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar14 = System_Int32__ToString((int)&uStackY_1a8 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar14,(MethodInfo *)0x0);
        return;
      }
      uStackY_1a8 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar8,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x452c620

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass2_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x452d000

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  int32_t iVar2;
  long lVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  bool_conflict bVar5;
  undefined4 uVar6;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *pUVar8;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined4 uVar15;
  UnityEngine_Object_o *pUVar16;
  TMPro_TMP_InputField_o *pTVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  undefined8 unaff_R13;
  undefined8 uStackY_140;
  undefined8 uStackY_138;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStackY_130;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStackY_128;
  System_String_Fields *pSStackY_120;
  undefined8 *puStackY_118;
  int32_t iStack_bc;
  System_Action_AottgUi__o *pSStack_b8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_b0;
  undefined8 uStack_a8;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o *pGStack_a0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_98;
  undefined8 *puStack_90;
  
  if (g_data_057aee93 == '\0') {
    puStack_90 = (undefined8 *)0x452d029;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    puStack_90 = (undefined8 *)0x452d035;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_90 = (undefined8 *)0x452d041;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    puStack_90 = (undefined8 *)0x452d04d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2_1);
    puStack_90 = (undefined8 *)0x452d059;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    puStack_90 = (undefined8 *)0x452d065;
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    puStack_90 = (undefined8 *)0x452d071;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-header");
    puStack_90 = (undefined8 *)0x452d07d;
    il2cpp_runtime_helper_023445d0(&"Center");
    puStack_90 = (undefined8 *)0x452d089;
    il2cpp_runtime_helper_023445d0(&"Row");
    puStack_90 = (undefined8 *)0x452d095;
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee93 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    puStack_90 = (undefined8 *)0x452d0b5;
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar18 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      puStack_90 = (undefined8 *)0x452d0e1;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R13 = **(undefined8 **)(TypeInfo_c + 0xb8);
    puStack_90 = (undefined8 *)0x452d0fe;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    puStack_90 = (undefined8 *)0x452d118;
    System_Action_object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar3 + 8) = build;
    puStack_90 = (undefined8 *)0x452d133;
    il2cpp_runtime_helper_022b4080(lVar3 + 8,build);
  }
  puStack_90 = (undefined8 *)0x452d142;
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  puStack_90 = (undefined8 *)0x452d1c9;
  __this_01 = "SpaceBetween";
  pSVar11 = "Row";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)"SpaceBetween","Center",(System_String_o *)0x0,
                       (System_String_o *)0x0,0.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    puStack_90 = (undefined8 *)0x452d1f8;
    method_00 = "profile-details-social-header";
    __this_01 = pGVar18;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (socials,(System_String_o *)pGVar18,build,(System_String_o *)"profile-details-social-header",pGVar10,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).links;
    pSVar11 = (System_String_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((pSVar4->fields)._size < 1) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puStack_90 = (undefined8 *)0x452d21c;
        pSVar11 = (System_String_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,0,MethodInfo_String_get_Item);
      }
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      puStack_90 = (undefined8 *)0x452d243;
      Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,0,pSVar11,method_00);
      pSVar4 = (__this->fields).links;
      pSVar11 = (System_String_o *)0x0;
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        if ((pSVar4->fields)._size < 2) {
          pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          puStack_90 = (undefined8 *)0x452d26a;
          pSVar11 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar4,1,MethodInfo_String_get_Item);
        }
        __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x1;
        puStack_90 = (undefined8 *)0x452d294;
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,1,pSVar11,method_00);
        pSVar4 = (__this->fields).links;
        pSVar11 = (System_String_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((pSVar4->fields)._size < 3) {
            pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            puStack_90 = (undefined8 *)0x452d2bb;
            pSVar11 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar4,2,MethodInfo_String_get_Item);
          }
          __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x2;
          puStack_90 = (undefined8 *)0x452d2e5;
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,2,pSVar11,method_00);
          pSVar4 = (__this->fields).links;
          pSVar11 = (System_String_o *)0x0;
          if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
            if ((pSVar4->fields)._size < 4) {
              pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            else {
              puStack_90 = (undefined8 *)0x452d30c;
              pSVar11 = (System_String_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar4,3,MethodInfo_String_get_Item);
            }
            __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x3;
            puStack_90 = (undefined8 *)0x452d336;
            Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,3,pSVar11,method_00);
            pSVar4 = (__this->fields).links;
            pSVar11 = (System_String_o *)0x0;
            if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
              if ((pSVar4->fields)._size < 5) {
                pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                puStack_90 = (undefined8 *)0x452d35d;
                pSVar11 = (System_String_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,4,MethodInfo_String_get_Item);
              }
              __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&g_data_00000004;
              puStack_90 = (undefined8 *)0x452d387;
              Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,4,pSVar11,method_00);
              pSVar4 = (__this->fields).links;
              pSVar11 = (System_String_o *)0x0;
              if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
                if ((pSVar4->fields)._size < 6) {
                  pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  puStack_90 = (undefined8 *)0x452d3ae;
                  pSVar11 = (System_String_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar4,5,MethodInfo_String_get_Item);
                }
                __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&g_data_00000005;
                puStack_90 = (undefined8 *)0x452d3d8;
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,5,pSVar11,method_00);
                pSVar4 = (__this->fields).links;
                pSVar11 = (System_String_o *)0x0;
                if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
                  if ((pSVar4->fields)._size < 7) {
                    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  }
                  else {
                    puStack_90 = (undefined8 *)0x452d3ff;
                    pSVar11 = (System_String_o *)
                              System_Collections_Generic_List_object___get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar4,6,MethodInfo_String_get_Item);
                  }
                  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x6;
                  puStack_90 = (undefined8 *)0x452d429;
                  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,6,pSVar11,method_00)
                  ;
                  pSVar4 = (__this->fields).links;
                  pSVar11 = (System_String_o *)0x0;
                  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
                    if ((pSVar4->fields)._size < 8) {
                      pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                    }
                    else {
                      puStack_90 = (undefined8 *)0x452d44c;
                      pSVar11 = (System_String_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar4,7,MethodInfo_String_get_Item)
                      ;
                    }
                    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                              (socials,7,pSVar11,method_00);
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
  puStack_90 = (undefined8 *)0x452d489;
  il2cpp_runtime_helper_022b2c90();
  puStack_90 = &TypeInfo_c;
  pGStack_98 = pGVar18;
  pSStack_b8 = build;
  pGStack_b0 = socials;
  uStack_a8 = unaff_R13;
  pGStack_a0 = __this;
  if (g_data_057aee94 == '\0') {
    puStackY_118 = (undefined8 *)0x452d4bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    puStackY_118 = (undefined8 *)0x452d4c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SocialRow_b__1);
    puStackY_118 = (undefined8 *)0x452d4d5;
    il2cpp_runtime_helper_023445d0(&"https://example.com/profile");
    puStackY_118 = (undefined8 *)0x452d4e1;
    il2cpp_runtime_helper_023445d0(&"Column");
    puStackY_118 = (undefined8 *)0x452d4ed;
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    puStackY_118 = (undefined8 *)0x452d4f9;
    il2cpp_runtime_helper_023445d0(&"Remove social link");
    puStackY_118 = (undefined8 *)0x452d505;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-icon-");
    puStackY_118 = (undefined8 *)0x452d511;
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    puStackY_118 = (undefined8 *)0x452d51d;
    il2cpp_runtime_helper_023445d0(&"inputField");
    puStackY_118 = (undefined8 *)0x452d529;
    il2cpp_runtime_helper_023445d0(&"material-icons/cancel");
    puStackY_118 = (undefined8 *)0x452d535;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-remove-");
    g_data_057aee94 = '\x01';
  }
  pSVar1 = &pSVar11->fields;
  puStackY_118 = (undefined8 *)0x452d54b;
  pSVar12 = System_Int32__ToString((int32_t)pSVar1,(MethodInfo *)0x0);
  puStackY_118 = (undefined8 *)0x452d55f;
  pSVar12 = System_String__Concat_3ae5ba0("profile-details-social-icon-",pSVar12,(MethodInfo *)0x0);
  puStackY_118 = (undefined8 *)0x452d571;
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  puStackY_118 = (undefined8 *)0x452d583;
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Object_o *)0x0;
  puStackY_118 = (undefined8 *)0x452d5fd;
  pGVar18 = "Column";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,pGVar13,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    puStackY_118 = (undefined8 *)0x452d633;
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_01,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar12,pGVar10,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_bc = pSVar1->_stringLength;
    if (g_data_057aee90 == '\0') {
      puStackY_118 = (undefined8 *)0x452d64f;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    puStackY_118 = (undefined8 *)0x452d662;
    pSVar12 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
    puStackY_118 = (undefined8 *)0x452d676;
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
             System_String__Concat_3ae5ba0("profile-details-social-",pSVar12,(MethodInfo *)0x0);
    puStackY_118 = (undefined8 *)0x452d688;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    uVar15 = 0;
    puStackY_118 = (undefined8 *)0x452d6ff;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar13,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Object_o *)CONCAT44(uVar15,0x100);
    puStackY_118 = (undefined8 *)0x452d743;
    pGVar18 = __this_01;
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                        (__this_01,(System_String_o *)pGVar9,"https://example.com/profile",0,"inputField",pGVar10,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_Action_GisketchActionContext__o *)0x0,0.2,0x100,(MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar14->fields).value = (System_String_o *)pSVar11[1].klass;
      puStackY_118 = (undefined8 *)0x452d761;
      il2cpp_runtime_helper_022b4080(&(pGVar14->fields).value);
      pSVar12 = "material-icons/cancel";
      action = pSVar11[1].monitor;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        puStackY_118 = (undefined8 *)0x452d784;
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        puStackY_118 = (undefined8 *)0x452d79e;
        System_Action_GisketchActionContext____ctor();
        pSVar11[1].monitor = action;
        puStackY_118 = (undefined8 *)0x452d7b0;
        il2cpp_runtime_helper_022b4080(&pSVar11[1].monitor);
      }
      puStackY_118 = (undefined8 *)0x452d7ba;
      pSVar11 = System_Int32__ToString((int32_t)pSVar1,(MethodInfo *)0x0);
      puStackY_118 = (undefined8 *)0x452d7ce;
      pSVar11 = System_String__Concat_3ae5ba0("profile-details-social-remove-",pSVar11,(MethodInfo *)0x0);
      puStackY_118 = (undefined8 *)0x452d7f5;
      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                          (__this_01,3,pSVar12,action,pSVar11,"Remove social link",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      puStackY_118 = (undefined8 *)0x452d807;
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                  Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      puStackY_118 = (undefined8 *)0x452d819;
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Object_o *)0x0;
      puStackY_118 = (undefined8 *)0x452d88c;
      pGVar18 = "Column";
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_01,pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar14->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
        puStackY_118 = (undefined8 *)0x452d8aa;
        il2cpp_runtime_helper_022b4080(&(pGVar14->fields).search,pGVar10);
        return;
      }
    }
  }
  puStackY_118 = (undefined8 *)0x452d8be;
  uStackY_138 = il2cpp_runtime_helper_022b2c90();
  iVar2 = *(int32_t *)&(pGVar18->fields)._children;
  puStackY_118 = &"Column";
  pGStackY_130 = pGVar9;
  pGStackY_128 = __this_01;
  pSStackY_120 = pSVar1;
  if (g_data_057aee8d == '\0') {
    uStackY_140 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStackY_140 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_140 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  uStackY_140 = 0x452cbb1;
  pUVar16 = pUVar8;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar15 = SUB84(pUVar16,0);
  if ((char)bVar5 != '\0') {
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_0452cd31;
    uStackY_140 = 0x452cbc8;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    uVar15 = SUB84(pUVar8,0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStackY_140 = 0x452cbdb;
    pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_140 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStackY_140 = 0x452cbfb;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    uStackY_138 = CONCAT44(uStackY_138._4_4_,iVar2);
    if (g_data_057aee90 == '\0') {
      uStackY_140 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStackY_140 = 0x452cc2d;
    pSVar11 = System_Int32__ToString((int32_t)&uStackY_138,(MethodInfo *)0x0);
    uStackY_140 = 0x452cc41;
    pSVar11 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar11,(MethodInfo *)0x0);
    uStackY_140 = 0x452cc56;
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar7,pSVar11,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_140 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_140 = 0x452cc76;
    pTVar17 = __this_00;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar15 = SUB84(pTVar17,0);
    if ((char)bVar5 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStackY_140 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStackY_138 = CONCAT44(iVar2,(undefined4)uStackY_138);
    if (g_data_057aee8f == '\0') {
      uStackY_140 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStackY_140 = 0x452ccd2;
    pSVar11 = System_Int32__ToString((int)&uStackY_138 + 4,(MethodInfo *)0x0);
    uStackY_140 = 0x452cce6;
    pSVar11 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar11,(MethodInfo *)0x0);
    uStackY_140 = 0x452ccf1;
    pUVar8 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar7,pSVar11,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_140 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_140 = 0x452cd11;
    pUVar16 = pUVar8;
    bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar15 = SUB84(pUVar16,0);
    if ((char)bVar5 != '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStackY_140 = 0x452cd36;
        uVar6 = il2cpp_runtime_helper_022b2c90();
        uStackY_140 = CONCAT44(uVar15,uVar6);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar11 = System_Int32__ToString((int)&uStackY_140 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar11,(MethodInfo *)0x0);
        return;
      }
      uStackY_140 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar8,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x452c840

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<SocialRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x452d490

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_Fields *pGVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  undefined4 uVar4;
  UnityEngine_Transform_o *pUVar5;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar12;
  MethodInfo *method_00;
  undefined4 uVar13;
  UnityEngine_Object_o *pUVar14;
  TMPro_TMP_InputField_o *pTVar15;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar16;
  undefined8 uStackY_b8;
  undefined8 uStackY_b0;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStackY_a8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStackY_a0;
  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_Fields *pGStackY_98;
  undefined8 *puStackY_90;
  int32_t iStack_34;
  
  if (g_data_057aee94 == '\0') {
    puStackY_90 = (undefined8 *)0x452d4bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    puStackY_90 = (undefined8 *)0x452d4c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SocialRow_b__1);
    puStackY_90 = (undefined8 *)0x452d4d5;
    il2cpp_runtime_helper_023445d0(&"https://example.com/profile");
    puStackY_90 = (undefined8 *)0x452d4e1;
    il2cpp_runtime_helper_023445d0(&"Column");
    puStackY_90 = (undefined8 *)0x452d4ed;
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/share2");
    puStackY_90 = (undefined8 *)0x452d4f9;
    il2cpp_runtime_helper_023445d0(&"Remove social link");
    puStackY_90 = (undefined8 *)0x452d505;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-icon-");
    puStackY_90 = (undefined8 *)0x452d511;
    il2cpp_runtime_helper_023445d0(&"profileCardSocialIcon");
    puStackY_90 = (undefined8 *)0x452d51d;
    il2cpp_runtime_helper_023445d0(&"inputField");
    puStackY_90 = (undefined8 *)0x452d529;
    il2cpp_runtime_helper_023445d0(&"material-icons/cancel");
    puStackY_90 = (undefined8 *)0x452d535;
    il2cpp_runtime_helper_023445d0(&"profile-details-social-remove-");
    g_data_057aee94 = '\x01';
  }
  pGVar1 = &__this->fields;
  puStackY_90 = (undefined8 *)0x452d54b;
  pSVar7 = System_Int32__ToString((int32_t)pGVar1,(MethodInfo *)0x0);
  puStackY_90 = (undefined8 *)0x452d55f;
  pSVar7 = System_String__Concat_3ae5ba0("profile-details-social-icon-",pSVar7,(MethodInfo *)0x0);
  puStackY_90 = (undefined8 *)0x452d571;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  puStackY_90 = (undefined8 *)0x452d583;
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Object_o *)0x0;
  puStackY_90 = (undefined8 *)0x452d5fd;
  pGVar16 = "Column";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    puStackY_90 = (undefined8 *)0x452d633;
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar7,pGVar10,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_34 = pGVar1->index;
    if (g_data_057aee90 == '\0') {
      puStackY_90 = (undefined8 *)0x452d64f;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    puStackY_90 = (undefined8 *)0x452d662;
    pSVar7 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
    puStackY_90 = (undefined8 *)0x452d676;
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
             System_String__Concat_3ae5ba0("profile-details-social-",pSVar7,(MethodInfo *)0x0);
    puStackY_90 = (undefined8 *)0x452d688;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    uVar13 = 0;
    puStackY_90 = (undefined8 *)0x452d6ff;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Object_o *)CONCAT44(uVar13,0x100);
    puStackY_90 = (undefined8 *)0x452d743;
    pGVar16 = row;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                        (row,(System_String_o *)pGVar8,"https://example.com/profile",0,"inputField",pGVar10,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_Action_GisketchActionContext__o *)0x0,0.2,0x100,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar11->fields).value = (__this->fields).value;
      puStackY_90 = (undefined8 *)0x452d761;
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).value);
      pSVar7 = "material-icons/cancel";
      action = (__this->fields).__9__1;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        puStackY_90 = (undefined8 *)0x452d784;
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        puStackY_90 = (undefined8 *)0x452d79e;
        System_Action_GisketchActionContext____ctor();
        (__this->fields).__9__1 = action;
        puStackY_90 = (undefined8 *)0x452d7b0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1);
      }
      puStackY_90 = (undefined8 *)0x452d7ba;
      pSVar12 = System_Int32__ToString((int32_t)pGVar1,(MethodInfo *)0x0);
      puStackY_90 = (undefined8 *)0x452d7ce;
      pSVar12 = System_String__Concat_3ae5ba0("profile-details-social-remove-",pSVar12,(MethodInfo *)0x0);
      puStackY_90 = (undefined8 *)0x452d7f5;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                          (row,3,pSVar7,action,pSVar12,"Remove social link",
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      puStackY_90 = (undefined8 *)0x452d807;
      row = (Gisketch_Aottg2UI_Code_AottgUi_o *)Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0)
      ;
      puStackY_90 = (undefined8 *)0x452d819;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Object_o *)0x0;
      puStackY_90 = (undefined8 *)0x452d88c;
      pGVar16 = "Column";
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)row,pGVar8,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar11->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
        puStackY_90 = (undefined8 *)0x452d8aa;
        il2cpp_runtime_helper_022b4080(&(pGVar11->fields).search,pGVar10);
        return;
      }
    }
  }
  puStackY_90 = (undefined8 *)0x452d8be;
  uStackY_b0 = il2cpp_runtime_helper_022b2c90();
  iVar2 = *(int32_t *)&(pGVar16->fields)._children;
  puStackY_90 = &"Column";
  pGStackY_a8 = pGVar8;
  pGStackY_a0 = row;
  pGStackY_98 = pGVar1;
  if (g_data_057aee8d == '\0') {
    uStackY_b8 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStackY_b8 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_b8 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  uStackY_b8 = 0x452cbb1;
  pUVar14 = pUVar6;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar13 = SUB84(pUVar14,0);
  if ((char)bVar3 != '\0') {
    if (pUVar6 == (UnityEngine_Object_o *)0x0) goto label_0452cd31;
    uStackY_b8 = 0x452cbc8;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    uVar13 = SUB84(pUVar6,0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStackY_b8 = 0x452cbdb;
    pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStackY_b8 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStackY_b8 = 0x452cbfb;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    uStackY_b0 = CONCAT44(uStackY_b0._4_4_,iVar2);
    if (g_data_057aee90 == '\0') {
      uStackY_b8 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStackY_b8 = 0x452cc2d;
    pSVar7 = System_Int32__ToString((int32_t)&uStackY_b0,(MethodInfo *)0x0);
    uStackY_b8 = 0x452cc41;
    pSVar7 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar7,(MethodInfo *)0x0);
    uStackY_b8 = 0x452cc56;
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar5,pSVar7,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_b8 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_b8 = 0x452cc76;
    pTVar15 = __this_00;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar13 = SUB84(pTVar15,0);
    if ((char)bVar3 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStackY_b8 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStackY_b0 = CONCAT44(iVar2,(undefined4)uStackY_b0);
    if (g_data_057aee8f == '\0') {
      uStackY_b8 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStackY_b8 = 0x452ccd2;
    pSVar7 = System_Int32__ToString((int)&uStackY_b0 + 4,(MethodInfo *)0x0);
    uStackY_b8 = 0x452cce6;
    pSVar7 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar7,(MethodInfo *)0x0);
    uStackY_b8 = 0x452ccf1;
    pUVar6 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar5,pSVar7,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStackY_b8 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStackY_b8 = 0x452cd11;
    pUVar14 = pUVar6;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar13 = SUB84(pUVar14,0);
    if ((char)bVar3 != '\0') {
      if (pUVar6 == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStackY_b8 = 0x452cd36;
        uVar4 = il2cpp_runtime_helper_022b2c90();
        uStackY_b8 = CONCAT44(uVar13,uVar4);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar7 = System_Int32__ToString((int)&uStackY_b8 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar7,(MethodInfo *)0x0);
        return;
      }
      uStackY_b8 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar6,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<SocialRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x452d8c0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  undefined4 uVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *x;
  undefined8 in_RAX;
  MethodInfo *method_00;
  undefined4 uVar6;
  UnityEngine_GameObject_o *pUVar7;
  TMPro_TMP_InputField_o *pTVar8;
  UnityEngine_Object_o *pUVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (__this->fields).index;
  uStack_28 = in_RAX;
  if (g_data_057aee8d == '\0') {
    uStack_30 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStack_30 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  uStack_30 = 0x452cbb1;
  pUVar7 = context.fields.GameObject;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  uVar6 = SUB84(pUVar7,0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_0452cd31;
    uStack_30 = 0x452cbc8;
    pUVar4 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    uVar6 = SUB84(context.fields.GameObject,0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStack_30 = 0x452cbdb;
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x452cbfb;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    uStack_28 = CONCAT44(uStack_28._4_4_,iVar1);
    if (g_data_057aee90 == '\0') {
      uStack_30 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStack_30 = 0x452cc2d;
    pSVar5 = System_Int32__ToString((int32_t)&uStack_28,(MethodInfo *)0x0);
    uStack_30 = 0x452cc41;
    pSVar5 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar5,(MethodInfo *)0x0);
    uStack_30 = 0x452cc56;
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar4,pSVar5,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_30 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x452cc76;
    pTVar8 = __this_00;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar6 = SUB84(pTVar8,0);
    if ((char)bVar2 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStack_30 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStack_28 = CONCAT44(iVar1,(undefined4)uStack_28);
    if (g_data_057aee8f == '\0') {
      uStack_30 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStack_30 = 0x452ccd2;
    pSVar5 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    uStack_30 = 0x452cce6;
    pSVar5 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar5,(MethodInfo *)0x0);
    uStack_30 = 0x452ccf1;
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar4,pSVar5,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_30 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x452cd11;
    pUVar9 = x;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar6 = SUB84(pUVar9,0);
    if ((char)bVar2 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStack_30 = 0x452cd36;
        uVar3 = il2cpp_runtime_helper_022b2c90();
        uStack_30 = CONCAT44(uVar6,uVar3);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar5 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar5,(MethodInfo *)0x0);
        return;
      }
      uStack_30 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x452c430

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_String_array *collection;
  Il2CppClass *__this_01;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppClass *__this_02;
  
  if (g_data_057aee8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-socials");
    g_data_057aee8a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  __this_02 = __this_01;
  System_Collections_Generic_List_object____ctor_362ba10
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this_01);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_02 = "Column";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,"profile-details-socials",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SocialRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x452c630

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_c *value_00;
  int32_t local_34;
  
  if (g_data_057aee8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SocialRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aee8b = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  value_00 = (System_String_c *)__this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    (__this->fields)._stringLength = index;
    __this[1].klass = (System_String_c *)value;
    il2cpp_runtime_helper_022b4080(__this + 1,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    local_34 = (__this->fields)._stringLength;
    if (g_data_057aee8f == '\0') {
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value_00 = (System_String_c *)"Row";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",build,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      value_00 = __this[1].klass;
      bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)value_00,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(byte *)((long)&(pGVar3->fields).hasIcon + 2) = (byte)bVar1 ^ 1;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$AddRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x452c8a0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  ulong in_RAX;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *pUVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  TMPro_TMP_InputField_o *__this_01;
  UnityEngine_Object_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar8;
  ulong unaff_RBP;
  undefined4 uVar9;
  UnityEngine_Object_o *pUVar10;
  TMPro_TMP_InputField_o *pTVar11;
  long unaff_R14;
  System_Object_array *unaff_R15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  UnityEngine_Object_o *pUStack_80;
  System_String_o *pSStack_78;
  System_Object_array *pSStack_70;
  ulong uStack_68;
  UnityEngine_GameObject_o *pUStack_60;
  UnityEngine_Transform_o *pUStack_58;
  UnityEngine_Object_o *pUStack_50;
  long lStack_48;
  System_Object_array *pSStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aee8c == '\0') {
    pSStack_40 = (System_Object_array *)0x452c8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_40 = (System_Object_array *)0x452c8e9;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  pSVar4 = (System_String_o *)0x0;
  pSStack_40 = (System_Object_array *)0x452c8f8;
  pUVar7 = (UnityEngine_Object_o *)context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_0452c925:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_40 = (System_Object_array *)0x452c937;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = 0;
    pSStack_40 = (System_Object_array *)0x452c945;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    unaff_R14 = (long)&uStack_38 + 4;
    unaff_R15 = (System_Object_array *)&"profile-details-social-row-";
    uStack_38 = (ulong)(uint)uStack_38;
    do {
      if (g_data_057aee8f == '\0') {
        pSStack_40 = (System_Object_array *)0x452c991;
        il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
        g_data_057aee8f = '\x01';
      }
      pSStack_40 = (System_Object_array *)0x452c9a2;
      pSVar4 = System_Int32__ToString((int32_t)unaff_R14,(MethodInfo *)0x0);
      pSStack_40 = (System_Object_array *)0x452c9af;
      pSVar4 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar4,(MethodInfo *)0x0);
      pSStack_40 = (System_Object_array *)0x452c9ba;
      pUVar5 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar3,pSVar4,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pSStack_40 = (System_Object_array *)0x452c9cf;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)0x0;
      pSStack_40 = (System_Object_array *)0x452c9db;
      pUVar7 = pUVar5;
      bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        context.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_0452ca14;
        pSStack_40 = (System_Object_array *)0x452c9ee;
        bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pSStack_40 = (System_Object_array *)0x452ca05;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar5,1,(MethodInfo *)0x0);
          return;
        }
      }
      uVar8 = (int)unaff_RBP + 1;
      unaff_RBP = (ulong)uVar8;
      if (uVar8 == 8) {
        return;
      }
      uStack_38 = CONCAT44(uVar8,(uint)uStack_38);
    } while( true );
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pSVar4 = (System_String_o *)0x0;
    pSStack_40 = (System_Object_array *)0x452c90f;
    pUVar7 = (UnityEngine_Object_o *)context.fields.GameObject;
    __this = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      pSStack_40 = (System_Object_array *)0x452c922;
      pUVar3 = UnityEngine_Transform__get_root(__this,(MethodInfo *)0x0);
      goto label_0452c925;
    }
  }
label_0452ca14:
  pSStack_40 = (System_Object_array *)0x452ca19;
  il2cpp_runtime_helper_022b2c90();
  pUStack_50 = (UnityEngine_Object_o *)&TypeInfo_Object;
  pUVar5 = pUVar7;
  pUStack_60 = context.fields.GameObject;
  pUStack_58 = pUVar3;
  lStack_48 = unaff_R14;
  pSStack_40 = unaff_R15;
  if (g_data_057aee8e == '\0') {
    uStack_68 = 0x452ca44;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    pUVar5 = (UnityEngine_Object_o *)&TypeInfo_Object;
    uStack_68 = 0x452ca50;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee8e = '\x01';
  }
  uVar2 = SUB84(pUVar5,0);
  if (pUVar7 == (UnityEngine_Object_o *)0x0) {
label_0452cb41:
    uStack_68 = 0x452cb46;
    il2cpp_runtime_helper_022b2c90();
    pSVar6 = unaff_R15;
  }
  else {
    uStack_68 = 0x452ca77;
    pUVar5 = pUVar7;
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pUVar7,1,MethodInfo_Transform_GetComponentsInChildren_Transform);
    uVar2 = SUB84(pUVar5,0);
    if (pSVar6 == (System_Object_array *)0x0) goto label_0452cb41;
    if ((int)pSVar6->max_length < 1) {
      return;
    }
    pUVar7 = (UnityEngine_Object_o *)0x0;
    if ((pSVar6->max_length & 0xffffffff) != 0) {
      do {
        pUVar5 = (UnityEngine_Object_o *)pSVar6->m_Items[(long)pUVar7];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_68 = 0x452cade;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_68 = 0x452caea;
        pUVar10 = pUVar5;
        bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar2 = SUB84(pUVar10,0);
        if ((char)bVar1 != '\0') {
          unaff_R15 = pSVar6;
          if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_0452cb41;
          uStack_68 = 0x452cafd;
          pUVar10 = pUVar5;
          __this_00 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          uVar2 = SUB84(pUVar10,0);
          if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_0452cb41;
          uStack_68 = 0x452cb0c;
          a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          uStack_68 = 0x452cb1e;
          bVar1 = System_String__Equals_3af50f0(a,pSVar4,4,(MethodInfo *)0x0);
          uVar2 = SUB84(a,0);
          if ((char)bVar1 != '\0') {
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
        pUVar7 = (UnityEngine_Object_o *)((long)&pUVar7->klass + 1);
        uVar8 = (uint)pSVar6->max_length;
        if ((long)(int)uVar8 <= (long)pUVar7) {
          return;
        }
      } while (pUVar7 < (UnityEngine_Object_o *)(ulong)uVar8);
    }
  }
  uStack_68 = 0x452cb4b;
  uStack_88 = il2cpp_runtime_helper_022b2ca0();
  pUStack_80 = pUVar7;
  pSStack_78 = pSVar4;
  pSStack_70 = pSVar6;
  uStack_68 = unaff_RBP;
  if (g_data_057aee8d == '\0') {
    uStack_90 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStack_90 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  pUVar7 = pUStack_50;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_90 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  uStack_90 = 0x452cbb1;
  pUVar5 = pUVar7;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar9 = SUB84(pUVar5,0);
  if ((char)bVar1 != '\0') {
    if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_0452cd31;
    uStack_90 = 0x452cbc8;
    pUVar3 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    uVar9 = SUB84(pUVar7,0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStack_90 = 0x452cbdb;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_90 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = 0x452cbfb;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
    if (g_data_057aee90 == '\0') {
      uStack_90 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStack_90 = 0x452cc2d;
    pSVar4 = System_Int32__ToString((int32_t)&uStack_88,(MethodInfo *)0x0);
    uStack_90 = 0x452cc41;
    pSVar4 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar4,(MethodInfo *)0x0);
    uStack_90 = 0x452cc56;
    __this_01 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar3,pSVar4,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_90 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_90 = 0x452cc76;
    pTVar11 = __this_01;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar9 = SUB84(pTVar11,0);
    if ((char)bVar1 != '\0') {
      if (__this_01 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStack_90 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_01,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStack_88 = CONCAT44(uVar2,(undefined4)uStack_88);
    if (g_data_057aee8f == '\0') {
      uStack_90 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStack_90 = 0x452ccd2;
    pSVar4 = System_Int32__ToString((int)&uStack_88 + 4,(MethodInfo *)0x0);
    uStack_90 = 0x452cce6;
    pSVar4 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar4,(MethodInfo *)0x0);
    uStack_90 = 0x452ccf1;
    pUVar7 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar3,pSVar4,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_90 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_90 = 0x452cd11;
    pUVar5 = pUVar7;
    bVar1 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar9 = SUB84(pUVar5,0);
    if ((char)bVar1 != '\0') {
      if (pUVar7 == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStack_90 = 0x452cd36;
        uVar2 = il2cpp_runtime_helper_022b2c90();
        uStack_90 = CONCAT44(uVar9,uVar2);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar4 = System_Int32__ToString((int)&uStack_90 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar4,(MethodInfo *)0x0);
        return;
      }
      uStack_90 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar7,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RemoveRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t index, const MethodInfo* method);
// 0x452cb50

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  undefined4 uVar5;
  UnityEngine_GameObject_o *pUVar6;
  TMPro_TMP_InputField_o *pTVar7;
  UnityEngine_Object_o *pUVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (g_data_057aee8d == '\0') {
    uStack_30 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStack_30 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  uStack_30 = 0x452cbb1;
  pUVar6 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  uVar5 = SUB84(pUVar6,0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_0452cd31;
    uStack_30 = 0x452cbc8;
    pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    uVar5 = SUB84(context.fields.GameObject,0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStack_30 = 0x452cbdb;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x452cbfb;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uStack_28 = CONCAT44(uStack_28._4_4_,index);
    if (g_data_057aee90 == '\0') {
      uStack_30 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStack_30 = 0x452cc2d;
    pSVar4 = System_Int32__ToString((int32_t)&uStack_28,(MethodInfo *)0x0);
    uStack_30 = 0x452cc41;
    pSVar4 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar4,(MethodInfo *)0x0);
    uStack_30 = 0x452cc56;
    __this = (TMPro_TMP_InputField_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                       (pUVar3,pSVar4,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_30 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x452cc76;
    pTVar7 = __this;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar5 = SUB84(pTVar7,0);
    if ((char)bVar1 != '\0') {
      if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStack_30 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    uStack_28 = CONCAT44(index,(undefined4)uStack_28);
    if (g_data_057aee8f == '\0') {
      uStack_30 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStack_30 = 0x452ccd2;
    pSVar4 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    uStack_30 = 0x452cce6;
    pSVar4 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar4,(MethodInfo *)0x0);
    uStack_30 = 0x452ccf1;
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar3,pSVar4,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_30 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x452cd11;
    pUVar8 = x;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar5 = SUB84(pUVar8,0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStack_30 = 0x452cd36;
        uVar2 = il2cpp_runtime_helper_022b2c90();
        uStack_30 = CONCAT44(uVar5,uVar2);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar4 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
        System_String__Concat_3ae5ba0("profile-details-social-",pSVar4,(MethodInfo *)0x0);
        return;
      }
      uStack_30 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x452ca20

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  undefined4 uVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  UnityEngine_GameObject_o *pUVar5;
  undefined4 extraout_var;
  System_String_o *pSVar6;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *pUVar7;
  undefined4 extraout_var_00;
  UnityEngine_GameObject_o *extraout_RAX;
  MethodInfo *method_00;
  undefined4 uVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  TMPro_TMP_InputField_o *pTVar11;
  UnityEngine_Object_o *unaff_R13;
  System_Object_array *unaff_R15;
  undefined8 uStack_58;
  undefined8 local_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_o *pSStack_40;
  System_Object_array *pSStack_38;
  
  pUVar9 = root;
  if (g_data_057aee8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    pUVar9 = (UnityEngine_Transform_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee8e = '\x01';
  }
  uVar3 = SUB84(pUVar9,0);
  if (root == (UnityEngine_Transform_o *)0x0) {
label_0452cb41:
    il2cpp_runtime_helper_022b2c90();
    pSVar4 = unaff_R15;
  }
  else {
    pUVar9 = root;
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,MethodInfo_Transform_GetComponentsInChildren_Transform);
    uVar3 = SUB84(pUVar9,0);
    if (pSVar4 == (System_Object_array *)0x0) goto label_0452cb41;
    if ((int)pSVar4->max_length < 1) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    root = (UnityEngine_Transform_o *)0x0;
    if ((pSVar4->max_length & 0xffffffff) != 0) {
      do {
        pUVar7 = (UnityEngine_Object_o *)pSVar4->m_Items[(long)root];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar10 = pUVar7;
        bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar3 = SUB84(pUVar10,0);
        if ((char)bVar2 != '\0') {
          unaff_R15 = pSVar4;
          if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_0452cb41;
          pUVar10 = pUVar7;
          __this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          uVar3 = SUB84(pUVar10,0);
          if (__this == (UnityEngine_Object_o *)0x0) goto label_0452cb41;
          pSVar6 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar2 = System_String__Equals_3af50f0(pSVar6,id,4,(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar6,0);
          if ((char)bVar2 != '\0') {
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
            return pUVar5;
          }
        }
        root = (UnityEngine_Transform_o *)((long)&root->klass + 1);
        uVar1 = (uint)pSVar4->max_length;
        if ((long)(int)uVar1 <= (long)root) {
          return (UnityEngine_GameObject_o *)0x0;
        }
      } while (root < (UnityEngine_Transform_o *)(ulong)uVar1);
    }
  }
  local_50 = il2cpp_runtime_helper_022b2ca0();
  pUStack_48 = root;
  pSStack_40 = id;
  pSStack_38 = pSVar4;
  if (g_data_057aee8d == '\0') {
    uStack_58 = 0x452cb74;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    uStack_58 = 0x452cb80;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aee8d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_58 = 0x452cba3;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  uStack_58 = 0x452cbb1;
  pUVar7 = unaff_R13;
  bVar2 = UnityEngine_Object__op_Inequality(unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar8 = SUB84(pUVar7,0);
  if ((char)bVar2 != '\0') {
    if (unaff_R13 == (UnityEngine_Object_o *)0x0) goto label_0452cd31;
    uStack_58 = 0x452cbc8;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)unaff_R13,(MethodInfo *)0x0);
    uVar8 = SUB84(unaff_R13,0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0452cd31;
    uStack_58 = 0x452cbdb;
    pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_58 = 0x452cbef;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = 0x452cbfb;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar2);
  if ((char)bVar2 == '\0') {
    local_50 = CONCAT44(local_50._4_4_,uVar3);
    if (g_data_057aee90 == '\0') {
      uStack_58 = 0x452cc1c;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-");
      g_data_057aee90 = '\x01';
    }
    uStack_58 = 0x452cc2d;
    pSVar6 = System_Int32__ToString((int32_t)&local_50,(MethodInfo *)0x0);
    uStack_58 = 0x452cc41;
    pSVar6 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar6,(MethodInfo *)0x0);
    uStack_58 = 0x452cc56;
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_
                          (pUVar9,pSVar6,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_58 = 0x452cc6a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_58 = 0x452cc76;
    pTVar11 = __this_00;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar8 = SUB84(pTVar11,0);
    if ((char)bVar2 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_0452cd31;
      uStack_58 = 0x452cca5;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    }
    local_50 = CONCAT44(uVar3,(undefined4)local_50);
    if (g_data_057aee8f == '\0') {
      uStack_58 = 0x452ccbf;
      il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
      g_data_057aee8f = '\x01';
    }
    uStack_58 = 0x452ccd2;
    pSVar6 = System_Int32__ToString((int)&local_50 + 4,(MethodInfo *)0x0);
    uStack_58 = 0x452cce6;
    pSVar6 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar6,(MethodInfo *)0x0);
    uStack_58 = 0x452ccf1;
    pUVar7 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar9,pSVar6,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_58 = 0x452cd05;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_58 = 0x452cd11;
    pUVar10 = pUVar7;
    bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar8 = SUB84(pUVar10,0);
    pUVar5 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar2);
    if ((char)bVar2 != '\0') {
      if (pUVar7 == (UnityEngine_Object_o *)0x0) {
label_0452cd31:
        uStack_58 = 0x452cd36;
        uVar3 = il2cpp_runtime_helper_022b2c90();
        uStack_58 = CONCAT44(uVar8,uVar3);
        if (g_data_057aee90 == '\0') {
          il2cpp_runtime_helper_023445d0(&"profile-details-social-");
          g_data_057aee90 = '\x01';
        }
        pSVar6 = System_Int32__ToString((int)&uStack_58 + 4,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar6,(MethodInfo *)0x0);
        return (UnityEngine_GameObject_o *)pSVar6;
      }
      uStack_58 = 0x452cd26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar7,0,(MethodInfo *)0x0);
      pUVar5 = extraout_RAX;
    }
  }
  return pUVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$FindComponent<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_253D580* method);
// 0x263d580
// <decompile failed>

// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId (int32_t index, const MethodInfo* method);
// 0x452c850

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (g_data_057aee8f == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-details-social-row-");
    g_data_057aee8f = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("profile-details-social-row-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$InputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId (int32_t index, const MethodInfo* method);
// 0x452cd40

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (g_data_057aee90 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-details-social-");
    g_data_057aee90 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("profile-details-social-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, const MethodInfo* method);
// 0x4521e40

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


