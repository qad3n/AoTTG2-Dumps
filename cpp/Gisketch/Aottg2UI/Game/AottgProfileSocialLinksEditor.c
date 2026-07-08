// Type: Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileSocialLinksEditor.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___cctor (const MethodInfo* method);
// 0x41faca0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704fb6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704fb6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, const MethodInfo* method);
// 0x41fad10

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c$$<Build>b__2_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c___Build_b__2_1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x41fad20

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__<Build>b__2_1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704fb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRow);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Social Links");
    il2cpp_init_method_metadata(&"profile-details-social-add");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"plus");
    il2cpp_init_method_metadata(&"Add Link");
    DAT_05704fb7 = '\x01';
  }
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (header,"Social Links","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (header,1,"Add Link",action,"profile-details-social-add",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"plus",
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(136.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x41fa520

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__DisplayClass2_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass2_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x41faf10

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__DisplayClass2_0__<Build>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass2_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_05704fb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__2_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"profile-details-social-header");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    DAT_05704fb8 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_glue(lVar1 + 8,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = "profile-details-social-header";
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (socials,pSVar3,build,(System_String_o *)"profile-details-social-header",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).links;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((pSVar2->fields)._size < 1) {
        pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      else {
        pSVar3 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,0,MethodInfo_String_get_Item);
      }
      Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,0,pSVar3,method_00);
      pSVar2 = (__this->fields).links;
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        if ((pSVar2->fields)._size < 2) {
          pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          pSVar3 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,1,MethodInfo_String_get_Item);
        }
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow(socials,1,pSVar3,method_00);
        pSVar2 = (__this->fields).links;
        if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((pSVar2->fields)._size < 3) {
            pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          }
          else {
            pSVar3 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,2,MethodInfo_String_get_Item);
          }
          Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                    (socials,2,pSVar3,method_00);
          pSVar2 = (__this->fields).links;
          if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
            if ((pSVar2->fields)._size < 4) {
              pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            else {
              pSVar3 = (System_String_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,3,MethodInfo_String_get_Item
                                 );
            }
            Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                      (socials,3,pSVar3,method_00);
            pSVar2 = (__this->fields).links;
            if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
              if ((pSVar2->fields)._size < 5) {
                pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              }
              else {
                pSVar3 = (System_String_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,4,
                                    MethodInfo_String_get_Item);
              }
              Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                        (socials,4,pSVar3,method_00);
              pSVar2 = (__this->fields).links;
              if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
                if ((pSVar2->fields)._size < 6) {
                  pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                }
                else {
                  pSVar3 = (System_String_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar2,5,
                                      MethodInfo_String_get_Item);
                }
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                          (socials,5,pSVar3,method_00);
                pSVar2 = (__this->fields).links;
                if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
                  if ((pSVar2->fields)._size < 7) {
                    pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                  }
                  else {
                    pSVar3 = (System_String_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar2,6,
                                        MethodInfo_String_get_Item);
                  }
                  Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                            (socials,6,pSVar3,method_00);
                  pSVar2 = (__this->fields).links;
                  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
                    if ((pSVar2->fields)._size < 8) {
                      pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                    }
                    else {
                      pSVar3 = (System_String_o *)
                               System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar2,7,
                                          MethodInfo_String_get_Item);
                    }
                    Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
                              (socials,7,pSVar3,method_00);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x41fa740

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<SocialRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__0 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41fb3a0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__DisplayClass3_0__<SocialRow>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar6;
  int32_t __this_00;
  int32_t iStack_34;
  
  if (DAT_05704fb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__SocialRow_b__1);
    il2cpp_init_method_metadata(&"https://example.com/profile");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Icons/kenney-icons/share2");
    il2cpp_init_method_metadata(&"Remove social link");
    il2cpp_init_method_metadata(&"profile-details-social-icon-");
    il2cpp_init_method_metadata(&"profileCardSocialIcon");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"material-icons/cancel");
    il2cpp_init_method_metadata(&"profile-details-social-remove-");
    DAT_05704fb9 = '\x01';
  }
  __this_00 = (int32_t)&__this->fields;
  pSVar1 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-details-social-icon-",pSVar1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_34 = (__this->fields).index;
    if (DAT_05704fb5 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-");
      DAT_05704fb5 = '\x01';
    }
    pSVar1 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat("profile-details-social-",pSVar1,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (row,pSVar1,"https://example.com/profile",0,"inputField",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x100,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).value = (__this->fields).value;
      il2cpp_runtime_glue(&(pGVar5->fields).value);
      pSVar1 = "material-icons/cancel";
      action = (__this->fields).__9__1;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
        System_Action<GisketchActionContext>___ctor();
        (__this->fields).__9__1 = action;
        il2cpp_runtime_glue(&(__this->fields).__9__1);
      }
      pSVar6 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat("profile-details-social-remove-",pSVar6,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                         (row,3,pSVar1,action,pSVar6,"Remove social link",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_glue(&(pGVar5->fields).search,pGVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor.<>c__DisplayClass3_0$$<SocialRow>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0___SocialRow_b__1 (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41fb7d0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_<>c__DisplayClass3_0__<SocialRow>b__1
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  TMPro_TMP_InputField_o *__this_00;
  UnityEngine_Object_o *x;
  undefined8 in_RAX;
  MethodInfo *method_00;
  undefined8 uStack_28;
  
  iVar1 = (__this->fields).index;
  uStack_28 = in_RAX;
  if (DAT_05704fb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704fb2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto LAB_041fac31;
    pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_041fac31;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    uStack_28 = CONCAT44(uStack_28._4_4_,iVar1);
    if (DAT_05704fb5 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-");
      DAT_05704fb5 = '\x01';
    }
    pSVar4 = System_Int32__ToString((int32_t)&uStack_28,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("profile-details-social-",pSVar4,(MethodInfo *)0x0);
    __this_00 = (TMPro_TMP_InputField_o *)
                Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent<object>
                          (pUVar3,pSVar4,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041fac31;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this_00,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                 (MethodInfo *)0x0);
    }
    uStack_28 = CONCAT44(iVar1,(undefined4)uStack_28);
    if (DAT_05704fb4 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-row-");
      DAT_05704fb4 = '\x01';
    }
    pSVar4 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("profile-details-social-row-",pSVar4,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar3,pSVar4,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
LAB_041fac31:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Build (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41fa330

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
  
  if (DAT_05704faf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-details-socials");
    DAT_05704faf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  collection = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  __this_01 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_01;
    il2cpp_runtime_glue(__this_00 + 1,__this_01);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,"profile-details-socials",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$SocialRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x41fa530

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__SocialRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  undefined4 local_34;
  
  if (DAT_05704fb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__SocialRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    DAT_05704fb0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[1].klass = index;
    __this[1].monitor = value;
    il2cpp_runtime_glue(&__this[1].monitor,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    local_34 = *(undefined4 *)&__this[1].klass;
    if (DAT_05704fb4 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-row-");
      DAT_05704fb4 = '\x01';
    }
    pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat("profile-details-social-row-",pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",build,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      bVar1 = System_String__IsNullOrWhiteSpace(__this[1].monitor,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(byte *)((long)&(pGVar3->fields).hasIcon + 2) = (byte)bVar1 ^ 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$AddRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41fa7a0

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__AddRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  ulong in_RAX;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  int iVar4;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704fb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704fb1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) {
LAB_041fa914:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar4 = 0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  uStack_38 = (ulong)(uint)uStack_38;
  do {
    if (DAT_05704fb4 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-row-");
      DAT_05704fb4 = '\x01';
    }
    pSVar3 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_041fa914;
      bVar1 = UnityEngine_GameObject__get_activeSelf
                        ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,1,(MethodInfo *)0x0);
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 8) {
      return;
    }
    uStack_38 = CONCAT44(iVar4,(uint)uStack_38);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RemoveRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t index, const MethodInfo* method);
// 0x41faa50

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RemoveRow
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t index,
               MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05704fb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704fb2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto LAB_041fac31;
    pUVar2 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_041fac31;
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uStack_28 = CONCAT44(uStack_28._4_4_,index);
    if (DAT_05704fb5 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-");
      DAT_05704fb5 = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t)&uStack_28,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("profile-details-social-",pSVar3,(MethodInfo *)0x0);
    __this = (TMPro_TMP_InputField_o *)
             Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent<object>
                       (pUVar2,pSVar3,MethodInfo_TMP_InputField_FindComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      if (__this == (TMPro_TMP_InputField_o *)0x0) goto LAB_041fac31;
      TMPro_TMP_InputField__SetTextWithoutNotify
                (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0)
      ;
    }
    uStack_28 = CONCAT44(index,(undefined4)uStack_28);
    if (DAT_05704fb4 == '\0') {
      il2cpp_init_method_metadata(&"profile-details-social-row-");
      DAT_05704fb4 = '\x01';
    }
    pSVar3 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("profile-details-social-row-",pSVar3,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find(pUVar2,pSVar3,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
LAB_041fac31:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x41fa920

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar4;
  ulong uVar5;
  
  if (DAT_05704fb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Transform___GetComponentsInChildren_Transform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704fb3 = '\x01';
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)root,1,MethodInfo_Transform___GetComponentsInChildren_Transform),
     pSVar3 != (System_Object_array *)0x0)) {
    if ((int)pSVar3->max_length < 1) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    uVar5 = 0;
    if ((pSVar3->max_length & 0xffffffff) != 0) {
      do {
        x = (UnityEngine_Object_o *)pSVar3->m_Items[uVar5];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto LAB_041faa41;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar2 = System_String__Equals(a,id,4,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            return pUVar4;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return (UnityEngine_GameObject_o *)0x0;
        }
      } while (uVar5 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041faa41:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$FindComponent<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_2501510* method);
// 0x2601510

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__FindComponent<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_2501510 *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar4;
  
  if ((method->rgctx_data == (MethodInfo_2501510_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_2501510_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)root,1,
                          (MethodInfo_24A5220 *)
                          method->rgctx_data->_0_UnityEngine_Component_GetComponentsInChildren_T_),
     pSVar3 != (System_Object_array *)0x0)) {
    if ((int)pSVar3->max_length < 1) {
      return (Il2CppObject *)0x0;
    }
    uVar4 = 0;
    if ((pSVar3->max_length & 0xffffffff) != 0) {
      do {
        x = (UnityEngine_Object_o *)pSVar3->m_Items[uVar4];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto LAB_02601614;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar2 = System_String__Equals(a,id,4,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            return (Il2CppObject *)x;
          }
        }
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pSVar3->max_length;
        if ((long)(int)uVar1 <= (long)uVar4) {
          return (Il2CppObject *)0x0;
        }
      } while (uVar4 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_02601614:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId (int32_t index, const MethodInfo* method);
// 0x41fa750

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__RowId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_05704fb4 == '\0') {
    il2cpp_init_method_metadata(&"profile-details-social-row-");
    DAT_05704fb4 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-details-social-row-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$InputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId (int32_t index, const MethodInfo* method);
// 0x41fac40

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor__InputId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_05704fb5 == '\0') {
    il2cpp_init_method_metadata(&"profile-details-social-");
    DAT_05704fb5 = '\x01';
  }
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("profile-details-social-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileSocialLinksEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o* __this, const MethodInfo* method);
// 0x41fac90

void Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileSocialLinksEditor_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


