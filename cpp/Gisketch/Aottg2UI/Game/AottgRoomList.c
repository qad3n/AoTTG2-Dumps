// Type: Gisketch.Aottg2UI.Game.AottgRoomList
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgRoomList.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___cctor (const MethodInfo* method);
// 0x58d0210

void Gisketch_Aottg2UI_Game_AottgRoomList___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
    Il2CppMethodInitialized_07545467 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___ctor (Gisketch_Aottg2UI_Game_AottgRoomList___c_o* __this, const MethodInfo* method);
// 0x58d0280

void Gisketch_Aottg2UI_Game_AottgRoomList___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<Build>b__29_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___Build_b__29_0 (Gisketch_Aottg2UI_Game_AottgRoomList___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58d0290
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d0369: lea r12, [rip + 0x19c6248]  ; MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item
// asm:   0x58d03b2: jmp 0x58d03ed

void Gisketch_Aottg2UI_Game_AottgRoomList___c___Build_b__29_0
               (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *content,
               MethodInfo *method)

{
  System_Collections_Generic_List_RoomInfo__o *pSVar1;
  int32_t iVar2;
  Photon_Realtime_RoomInfo_o *room;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  int index;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07545468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.NoRooms");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    Il2CppMethodInitialized_07545468 = '\x01';
    method = extraout_RDX;
  }
  iStack_2c = 0;
  iStack_30 = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    method = extraout_RDX_00;
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
  if (pSVar1 == (System_Collections_Generic_List_RoomInfo__o *)0x0) {
label_058d03fa:
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size == 0) {
    if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058d03fa;
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (content,"MainMenu.MultiplayerRoomListPopup.NoRooms","subtext","room-list-rooms-empty",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      method = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgRoomList__VisibleRange(&iStack_2c,&iStack_30,method);
    iVar2 = iStack_30;
    index = iStack_2c;
    if (iStack_2c < iStack_30) {
      do {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
        if (pSVar1 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_058d03fa;
        room = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
        Gisketch_Aottg2UI_Game_AottgRoomList__BuildRoom(content,room,index,in_RCX);
        index = index + 1;
      } while (iVar2 != index);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_0 (Gisketch_Aottg2UI_Game_AottgRoomList___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58d0400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d0440: jmp 0x58d0b22

void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_0
               (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row,
               MethodInfo *method)

{
  uint32_t uVar1;
  Settings_StringSetting_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields *pGVar10;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  
  if (Il2CppMethodInitialized_07545469 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_SearchChanged)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-players");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"arrowLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"popover.room-list-options");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-options");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-page");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Options");
    il2cpp_codegen_initialize_runtime_metadata(&"arrowRight");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Next");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-next");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-search");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-previous");
    Il2CppMethodInitialized_07545469 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList = (Gisketch_Aottg2UI_Game_AottgRoomList_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline((MethodInfo *)klass);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline((MethodInfo *)klass);
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,pSVar4,"subtext","room-list-header-players",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).layout = pGVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar8,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_SearchChanged,
                 (MethodInfo_4A803E0 *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
                         (row,"room-list-header-search","Common.Search",0,"inputField",pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar8,0.2,0,
                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Query;
      if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
         (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar5->fields).value = (pSVar2->fields)._value;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value);
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("Common.Options",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Button
                  (row,3,pSVar4,"popover.room-list-options","room-list-header-options",pSVar9,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                   (MethodInfo *)0x0);
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pSVar8 = pGVar10->__9__30_1;
        }
        else {
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pSVar8 = pGVar10->__9__30_1;
        }
        if (pSVar8 == (System_Action_GisketchActionContext__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
            pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          }
          pIVar3 = (Il2CppObject *)pGVar10->__9;
          pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pSVar8,pIVar3,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_1,
                     (MethodInfo_4A803E0 *)0x0);
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pGVar10->__9__30_1 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pGVar10->__9__30_1);
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("Common.Previous",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                  (row,3,pSVar4,pSVar8,"room-list-header-previous",pSVar9,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"arrowLeft",
                   (MethodInfo *)0x0);
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgRoomList__PageLabel((MethodInfo *)method_00);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (row,pSVar4,"text","room-list-header-page",(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pSVar8 = pGVar10->__9__30_2;
        }
        else {
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pSVar8 = pGVar10->__9__30_2;
        }
        if (pSVar8 == (System_Action_GisketchActionContext__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
            pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          }
          pIVar3 = (Il2CppObject *)pGVar10->__9;
          pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pSVar8,pIVar3,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_2,
                     (MethodInfo_4A803E0 *)0x0);
          pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
          pGVar10->__9__30_2 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pGVar10->__9__30_2);
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("Common.Next",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                  (row,3,pSVar4,pSVar8,"room-list-header-next",pSVar9,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"arrowRight",
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_1 (Gisketch_Aottg2UI_Game_AottgRoomList___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58d0b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d0b54: cmp byte ptr [rip + 0x1c748f7], 0

void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_1
               (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  int iVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754546a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_0754546a = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  if (Il2CppMethodInitialized_07545452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545452 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList = (Gisketch_Aottg2UI_Game_AottgRoomList_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  else {
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  if (iVar2 == 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page =
       (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page + iVar2 + -1) % iVar2;
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c$$<BuildHeader>b__30_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_2 (Gisketch_Aottg2UI_Game_AottgRoomList___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58d0c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d0c54: cmp byte ptr [rip + 0x1c747f7], 0

void Gisketch_Aottg2UI_Game_AottgRoomList___c___BuildHeader_b__30_2
               (Gisketch_Aottg2UI_Game_AottgRoomList___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  int iVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754546b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_0754546b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  if (Il2CppMethodInitialized_07545452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545452 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList = (Gisketch_Aottg2UI_Game_AottgRoomList_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  else {
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  if (iVar2 == 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page =
       (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page + iVar2 + 1) % iVar2;
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x58cfd20

void Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList.<>c__DisplayClass37_0$$<BuildRoom>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0___BuildRoom_b__0 (Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x58d0d30

void Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0___BuildRoom_b__0
               (Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Photon_Realtime_RoomInfo_o *room;
  
  if (Il2CppMethodInitialized_0754546c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_0754546c = '\x01';
  }
  room = (__this->fields).room;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Gisketch_Aottg2UI_Game_AottgRoomList__Join(room,method);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__Join(room,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$get_PasswordRoom
// il2cpp: Photon_Realtime_RoomInfo_o* Gisketch_Aottg2UI_Game_AottgRoomList__get_PasswordRoom (const MethodInfo* method);
// 0x58cc8c0

Photon_Realtime_RoomInfo_o * Gisketch_Aottg2UI_Game_AottgRoomList__get_PasswordRoom(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545448 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_PasswordRoom_k__BackingField;
  }
  return *(Photon_Realtime_RoomInfo_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->static_fields + 0x18);
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$set_PasswordRoom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__set_PasswordRoom (Photon_Realtime_RoomInfo_o* value, const MethodInfo* method);
// 0x58cc930

void Gisketch_Aottg2UI_Game_AottgRoomList__set_PasswordRoom
               (Photon_Realtime_RoomInfo_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545449 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->_PasswordRoom_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_PasswordRoom_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Reset (const MethodInfo* method);
// 0x58cc990

void Gisketch_Aottg2UI_Game_AottgRoomList__Reset(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_0754544a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_0754544a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->_page = 0;
  pGVar1->_layoutSignature = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar1->_layoutSignature);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->_countSignature = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar1->_countSignature);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Refresh (const MethodInfo* method);
// 0x58cca10

void Gisketch_Aottg2UI_Game_AottgRoomList__Refresh(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *a;
  System_String_o *a_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  
  if (Il2CppMethodInitialized_0754544b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list");
    Il2CppMethodInitialized_0754544b = '\x01';
  }
  pMVar3 = (MethodInfo *)0x0;
  bVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive("room-list",(MethodInfo *)0x0);
  if (bVar2) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    Gisketch_Aottg2UI_Game_AottgRoomList__Filter((MethodInfo *)method_00);
    a = Gisketch_Aottg2UI_Game_AottgRoomList__Signature(false,pMVar3);
    a_00 = Gisketch_Aottg2UI_Game_AottgRoomList__Signature(true,pMVar3);
    bVar2 = System_String__op_Inequality
                      (a,TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_layoutSignature,
                       (MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    if (bVar2) {
      pMVar3 = extraout_RDX;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        pMVar3 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Game_AottgRoomList__Rebuild(a,a_00,pMVar3);
      return;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pMVar3 = (MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_countSignature;
    bVar2 = System_String__op_Inequality(a_00,(System_String_o *)pMVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      }
      Gisketch_Aottg2UI_Game_AottgRoomList__PatchCounts(a_00,pMVar3);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Rebuild (System_String_o* layout, System_String_o* counts, const MethodInfo* method);
// 0x58cd840

void Gisketch_Aottg2UI_Game_AottgRoomList__Rebuild
               (System_String_o *layout,System_String_o *counts,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  MethodInfo *view;
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *__this_01;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754544c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-players");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-page");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms");
    Il2CppMethodInitialized_0754544c = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_Build,(MethodInfo_4A81BE0 *)0x0);
  if ((__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"room-list-rooms",__this_00,"room-list-rooms",(MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    if ((int)pGVar4->max_length != 1) {
      return;
    }
    replacement = pGVar4->m_Items[0];
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
      (__this_01->fields).PreserveScroll = true;
      (__this_01->fields).PreserveFocus = true;
      (__this_01->fields).SettleLayout = true;
      bVar3 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                        (__this,"room-list-rooms",replacement,__this_01,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pGVar1 = (__this->fields)._Screens_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        view = (MethodInfo *)(pGVar1->fields)._active;
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgRoomList__PageLabel((MethodInfo *)method_00);
        method_01 = view;
        Gisketch_Aottg2UI_Game_AottgRoomList__SetText
                  ((Gisketch_Aottg2UI_Building_GisketchView_o *)view,"room-list-header-page",pSVar5,
                   (MethodInfo *)&"room-list-header-page");
        pSVar5 = Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline(method_01);
        Gisketch_Aottg2UI_Game_AottgRoomList__SetText
                  ((Gisketch_Aottg2UI_Building_GisketchView_o *)view,"room-list-header-players",pSVar5,
                   (MethodInfo *)&"room-list-header-players");
        pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
        pGVar2->_layoutSignature = layout;
        Il2CppCodeGenWriteBarrier(&pGVar2->_layoutSignature);
        pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
        pGVar2->_countSignature = counts;
        Il2CppCodeGenWriteBarrier(&pGVar2->_countSignature);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PatchCounts
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__PatchCounts (System_String_o* counts, const MethodInfo* method);
// 0x58cda30
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cdb0f: nop 
// asm:   0x58cdb20: mov dword ptr [rsp], ebp
// asm:   0x58cdb23: cmp byte ptr [rip + 0x1c77935], 0
// asm:   0x58cdb2a: jne 0x58cdb3f
// asm:   0x58cdc1c: jmp 0x58cdc3a
// asm:   0x58cdc35: jmp 0x58cdb3f

void Gisketch_Aottg2UI_Game_AottgRoomList__PatchCounts(System_String_o *counts,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  System_Collections_Generic_List_RoomInfo__o *__this;
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  System_String_o *pSVar4;
  Photon_Realtime_RoomInfo_o *pPVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_02;
  int32_t iStack_48;
  int32_t iStack_44;
  int32_t iStack_40;
  int iStack_3c;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_0754544d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header-players");
    il2cpp_codegen_initialize_runtime_metadata(&"-players");
    Il2CppMethodInitialized_0754544d = '\x01';
  }
  iStack_40 = 0;
  iStack_44 = 0;
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if ((pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (pGVar1 = (pGVar3->fields)._Screens_k__BackingField,
     pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
label_058cdc76:
    ThrowNullReferenceException();
  }
  view = (pGVar1->fields)._active;
  method_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  pSStack_38 = counts;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline((MethodInfo *)method_02);
  Gisketch_Aottg2UI_Game_AottgRoomList__SetText
            (view,"room-list-header-players",pSVar4,(MethodInfo *)&"room-list-header-players");
  Gisketch_Aottg2UI_Game_AottgRoomList__VisibleRange(&iStack_40,&iStack_44,method_01);
  iStack_3c = iStack_44;
  index = iStack_40;
  if (iStack_40 < iStack_44) {
    do {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      }
      iStack_48 = index;
      if (Il2CppMethodInitialized_0754545f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms-");
        Il2CppMethodInitialized_0754545f = '\x01';
      }
      pSVar4 = System_Int32__ToString(&iStack_48,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320("room-list-rooms-",pSVar4,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320(pSVar4,"-players",(MethodInfo *)0x0);
      __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
      if (__this == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_058cdc76;
      pPVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
      if (Il2CppMethodInitialized_07545460 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"/");
        Il2CppMethodInitialized_07545460 = '\x01';
      }
      if (pPVar5 == (Photon_Realtime_RoomInfo_o *)0x0) goto label_058cdc76;
      iStack_48 = (pPVar5->fields)._PlayerCount_k__BackingField;
      pSVar6 = System_Int32__ToString(&iStack_48,(MethodInfo *)0x0);
      iStack_48 = (pPVar5->fields).maxPlayers;
      str2 = System_Int32__ToString(&iStack_48,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar6 = System_String__Concat_5301f10(pSVar6,"/",str2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgRoomList__SetText(view,pSVar4,pSVar6,method_00);
      index = index + 1;
    } while (iStack_3c != index);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar2->_countSignature = pSStack_38;
  Il2CppCodeGenWriteBarrier(&pGVar2->_countSignature);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__SetText (Gisketch_Aottg2UI_Building_GisketchView_o* view, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x58cdd80

void Gisketch_Aottg2UI_Game_AottgRoomList__SetText
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,System_String_o *id,System_String_o *text,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  TMPro_TMP_Text_o *x_00;
  
  if (Il2CppMethodInitialized_0754544e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754544e = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Building_GisketchView__Find(view,id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x_00 = (TMPro_TMP_Text_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_058cde6e;
      x_00 = UnityEngine_GameObject__GetComponentInChildren_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_353B8D0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TMP_Text);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (x_00 != (TMPro_TMP_Text_o *)0x0) {
      (*(x_00->klass->vtable)._66_set_text.methodPtr)(x_00,text,(x_00->klass->vtable)._66_set_text.method);
      return;
    }
  }
label_058cde6e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Build (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58ce0d0

void Gisketch_Aottg2UI_Game_AottgRoomList__Build(Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754544f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_Build_b__29_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms");
    Il2CppMethodInitialized_0754544f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
  __this = pGVar1->__9__29_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_Build_b__29_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
    pGVar1->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__29_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"room-list-rooms",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__BuildHeader (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58ce2b0

void Gisketch_Aottg2UI_Game_AottgRoomList__BuildHeader
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgRoomList___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  
  if (Il2CppMethodInitialized_07545450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-header");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07545450 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__Filter((MethodInfo *)method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
  __this = pGVar1->__9__30_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c_BuildHeader_b__30_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c->static_fields;
    pGVar1->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__30_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"room-list-header",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$SearchChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__SearchChanged (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ce4c0

void Gisketch_Aottg2UI_Game_AottgRoomList__SearchChanged
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07545451 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  method_00 = (MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Query;
  value = Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText(&context,(MethodInfo *)0x0);
  if (method_00 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$ChangePage
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__ChangePage (int32_t delta, const MethodInfo* method);
// 0x58ce550

void Gisketch_Aottg2UI_Game_AottgRoomList__ChangePage(int32_t delta,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  int iVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545452 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList = (Gisketch_Aottg2UI_Game_AottgRoomList_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  else {
    iVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  if (iVar2 == 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page =
       (iVar2 + delta + TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page) % iVar2;
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Join
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Join (Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58ce6c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ce9d3: cmp byte ptr [rip + 0x1c76a7e], 0
// asm:   0x58ce9da: je 0x58cea7e

void Gisketch_Aottg2UI_Game_AottgRoomList__Join(Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-room-password");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Join");
    Il2CppMethodInitialized_07545453 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  bVar3 = PhotonExtensions__GetBoolProperty_5751cd0
                    (room,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    }
    else {
      bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    }
    if (!bVar3) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.Join",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      }
      if (Il2CppMethodInitialized_07545458 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.AccountRequired");
        Il2CppMethodInitialized_07545458 = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
                cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.MultiplayerRoomListPopup.AccountRequired",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgRoomList__Warn(pSVar4,pSVar6,method_00);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    if (Il2CppMethodInitialized_07545465 != '\0') goto label_058ce7c0;
label_058ce93d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545465 = '\x01';
    uVar1 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07545465 == '\0') goto label_058ce93d;
label_058ce7c0:
    uVar1 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar4 = PhotonExtensions__GetStringProperty_5751c40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                      "",(MethodInfo *)0x0);
  bVar3 = System_String__op_Inequality
                    (pSVar4,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar3) {
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      pSVar4 = (room->fields).name;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      pSVar6 = PhotonExtensions__GetStringProperty_5751c40
                         (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                          (MethodInfo *)0x0);
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_00,pSVar4,pSVar6,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                   (MethodInfo *)0x0);
        return;
      }
    }
    goto label_058ceab8;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    if (g_data_075454e7 != '\0') goto label_058ce838;
label_058cea2d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    g_data_075454e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075454e7 == '\0') goto label_058cea2d;
label_058ce838:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar2->_PasswordRoom_k__BackingField = room;
  Il2CppCodeGenWriteBarrier(&pGVar2->_PasswordRoom_k__BackingField);
  pGVar5 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this = (pGVar5->fields)._Overlays_k__BackingField;
    if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              (__this,"multiplayer-room-password",true,(MethodInfo *)0x0);
    return;
  }
label_058ceab8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$TryJoinPasswordRoom
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgRoomList__TryJoinPasswordRoom (System_String_o* password, const MethodInfo* method);
// 0x58cebc0
// eh: try 0x58cece7..0x58cedb3 -> pad 0x58cee39 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x58cee65..0x58cee99 -> pad 0x58cee99 (+1 call sites) cleanup
// eh: try 0x58cee9c..0x58ceea1 -> pad 0x58ceea9 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cebef: cmp byte ptr [rip + 0x1c768f2], 0
// asm:   0x58cebf6: je 0x58cec93
// asm:   0x58cec21: jmp 0x58cedb7
// asm:   0x58cee37: jmp 0x58cee41
// asm:   0x58cee39: jmp 0x58cee41
// asm:   0x58cee3b: jmp 0x58cee41
// asm:   0x58cee3d: jmp 0x58cee41
// asm:   0x58cee3f: jmp 0x58cee41
// asm:   0x58cee41: mov rbx, rax
// asm:   0x58cee44: cmp edx, 1
// asm:   0x58cee47: jne 0x58ceea1
// asm:   0x58cee49: mov rdi, rbx
// asm:   0x58cee4c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58cee51: mov rbx, rax
// asm:   0x58cee54: lea rax, [rip + 0x1c8786d]
// asm:   0x58cee5b: mov rdi, qword ptr [rax + 0x10]
// asm:   0x58cee5f: mov rax, qword ptr [rbx]
// asm:   0x58cee62: mov rsi, qword ptr [rax]
// asm:   0x58cee65: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x58cee6a: test al, al
// asm:   0x58cee6c: je 0x58cee78
// asm:   0x58cee6e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58cee73: jmp 0x58cedb7
// asm:   0x58cee78: mov edi, 8
// asm:   0x58cee7d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x58cee82: mov rcx, qword ptr [rbx]
// asm:   0x58cee85: mov qword ptr [rax], rcx
// asm:   0x58cee88: lea rsi, [rip + 0x155e671]
// asm:   0x58cee8f: mov rdi, rax
// asm:   0x58cee92: xor edx, edx
// asm:   0x58cee94: call 0x6e255c0  ; __cxa_throw()
// asm:   0x58cee99: mov rbx, rax
// asm:   0x58cee9c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58ceea1: mov rdi, rbx
// asm:   0x58ceea4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58ceea9: mov rdi, rax
// asm:   0x58ceeac: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgRoomList__TryJoinPasswordRoom(System_String_o *password,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Realtime_RoomInfo_o *room;
  Settings_MultiplayerSettings_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545454 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  if (Il2CppMethodInitialized_075454e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_075454e8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    room = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_PasswordRoom_k__BackingField;
  }
  else {
    room = *(Photon_Realtime_RoomInfo_o **)
            ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->static_fields + 0x18);
  }
  if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_RoomProperty)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty_5751c40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt,
                        "",(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pSVar3 = Utility_Util__CreatePBKDF2(password,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    if (Il2CppMethodInitialized_07545465 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07545465 = '\x01';
    }
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty_5751c40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                        "",(MethodInfo *)0x0);
    bVar2 = System_String__op_Inequality(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (!bVar2) {
      __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      pSVar3 = (room->fields).name;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      pSVar4 = PhotonExtensions__GetStringProperty_5751c40
                         (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                          (MethodInfo *)0x0);
      if (__this == (Settings_MultiplayerSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_MultiplayerSettings__JoinRoom(__this,pSVar3,pSVar4,password,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Warn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Warn (System_String_o* title, System_String_o* message, const MethodInfo* method);
// 0x58ceb20

void Gisketch_Aottg2UI_Game_AottgRoomList__Warn
               (System_String_o *title,System_String_o *message,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07545455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    Il2CppMethodInitialized_07545455 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
  Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
            (__this_00,1,"warning",title,message,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this,__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$RoomTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__RoomTitle (Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58cbfc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgRoomList__RoomTitle(Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545456 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty_5751c40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__HexColor(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$BuildRoom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__BuildRoom (Gisketch_Aottg2UI_Code_AottgUi_o* content, Photon_Realtime_RoomInfo_o* room, int32_t index, const MethodInfo* method);
// 0x58ceec0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cf0d5: mov dword ptr [rsp + 0x54], r14d
// asm:   0x58cf0da: cmp byte ptr [rip + 0x1c7637e], 0
// asm:   0x58cf0e1: jne 0x58cf0f6
// asm:   0x58cf756: jmp 0x58cf0f6
// asm:   0x58cf789: jmp 0x58cf654
// asm:   0x58cf97b: cmp byte ptr [rip + 0x1c75ade], 0
// asm:   0x58cf982: je 0x58cf99c
// asm:   0x58cf984: test rbp, rbp
// asm:   0x58cf989: jmp 0x58cfd12

void Gisketch_Aottg2UI_Game_AottgRoomList__BuildRoom
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,Photon_Realtime_RoomInfo_o *room,int32_t index,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  Photon_Realtime_RoomInfo_o *pPVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o *__this;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar12;
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_01;
  System_String_o *pSVar13;
  System_String_o *str2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar15;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_Fields *targetAddress;
  int32_t local_48;
  int32_t local_44;
  System_String_o *local_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  
  if (Il2CppMethodInitialized_07545457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c__DisplayClass37_0_BuildRoom_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c__DisplayClass37_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/KeyIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"-players");
    il2cpp_codegen_initialize_runtime_metadata(&"-sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"roomAccountIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Navigation/Verification");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"joystick");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"roomPasswordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"-name");
    il2cpp_codegen_initialize_runtime_metadata(&"roomSandboxIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.CustomGameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"-details");
    il2cpp_codegen_initialize_runtime_metadata(&"-password");
    il2cpp_codegen_initialize_runtime_metadata(&"roomRow");
    il2cpp_codegen_initialize_runtime_metadata(&"-account");
    Il2CppMethodInitialized_07545457 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c__DisplayClass37_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgRoomList___c__DisplayClass37_0_o *)0x0) goto label_058cfd12;
  targetAddress = &__this->fields;
  (__this->fields).room = room;
  Il2CppCodeGenWriteBarrier(&targetAddress->room);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  local_44 = index;
  if (Il2CppMethodInitialized_0754545f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms-");
    Il2CppMethodInitialized_0754545f = '\x01';
  }
  pSVar6 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_52f0320("room-list-rooms-",pSVar6,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomList_c__DisplayClass37_0_BuildRoom_b__0,
             (MethodInfo_4A803E0 *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058cfd12;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                     (content,5,pSVar6,__this_00,pSVar7,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(60.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,pGVar10,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058cfd12;
  (pGVar8->fields).layout = pGVar11;
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Search
                      ((System_String_o *)0x0,(System_String_o *)0x0,true,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                       (MethodInfo *)0x0);
  (pGVar8->fields).search = pGVar12;
  local_38 = pGVar8;
  Il2CppCodeGenWriteBarrier(&(pGVar8->fields).search);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchNodeDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ctor);
  pMVar16 = (MethodInfo *)"-name";
  pSVar6 = System_String__Concat_52f0320(pSVar7,"-name",(MethodInfo *)0x0);
  pSVar13 = Gisketch_Aottg2UI_Game_AottgRoomList__RoomTitle(targetAddress->room,pMVar16);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pMVar16 = (MethodInfo *)0x0;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar9,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                       1.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Text(pSVar6,pSVar13,pGVar11,pMVar16);
  pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
  if (__this_01 == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_058cfd12;
  piVar1 = &(__this_01->fields)._version;
  *piVar1 = *piVar1 + 1;
  pGVar14 = (__this_01->fields)._items;
  if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_058cfd12;
  uVar2 = (__this_01->fields)._size;
  if (uVar2 < (uint)pGVar14->max_length) {
    (__this_01->fields)._size = uVar2 + 1;
    pGVar14->m_Items[(int)uVar2] = pGVar8;
    Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
               (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
  }
  pSVar6 = System_String__Concat_52f0320(pSVar7,"-details",(MethodInfo *)0x0);
  pPVar4 = targetAddress->room;
  local_40 = pSVar7;
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                     (pPVar4,TypeInfo_GameManagers_RoomProperty->static_fields->Map,"",
                      (MethodInfo *)0x0);
  pSVar13 = PhotonExtensions__GetStringProperty_5751c40
                      (targetAddress->room,TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                       "",(MethodInfo *)0x0);
  pSVar13 = UI_ContentLocale__ModeName(pSVar13,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_5301f10(pSVar7," / ",pSVar13,(MethodInfo *)0x0);
  pMVar17 = (MethodInfo *)0x0;
  pMVar16 = (MethodInfo *)0x0;
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Text(pSVar6,pSVar7,pGVar11,pMVar17);
  pMVar17 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
  piVar1 = &(__this_01->fields)._version;
  *piVar1 = *piVar1 + 1;
  pGVar14 = (__this_01->fields)._items;
  if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_058cfd12;
  uVar2 = (__this_01->fields)._size;
  if (uVar2 < (uint)pGVar14->max_length) {
    (__this_01->fields)._size = uVar2 + 1;
    pGVar14->m_Items[(int)uVar2] = pGVar8;
    Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
               (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
  }
  pSVar6 = local_40;
  bVar5 = PhotonExtensions__GetBoolProperty_5751cd0
                    (targetAddress->room,TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox,false,
                     (MethodInfo *)0x0);
  if (bVar5) {
    pSVar7 = System_String__Concat_52f0320(pSVar6,"-sandbox",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar13 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("MainMenu.MultiplayerRoomListPopup.CustomGameMode",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Icon
                       (pSVar7,"joystick","roomSandboxIcon",pSVar13,pMVar16);
    pMVar17 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar14 = (__this_01->fields)._items;
    if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_058cfd12;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pGVar14->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pGVar14->m_Items[(int)uVar2] = pGVar8;
      Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
      goto label_058cf644;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
               (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
    pPVar4 = targetAddress->room;
    uVar3 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  else {
label_058cf644:
    pPVar4 = targetAddress->room;
    uVar3 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  bVar5 = PhotonExtensions__GetBoolProperty_5751cd0
                    (pPVar4,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                     (MethodInfo *)0x0);
  if (bVar5) {
    pSVar7 = System_String__Concat_52f0320(pSVar6,"-account",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      if (Il2CppMethodInitialized_07545458 == '\0') goto label_058cfcd2;
label_058cf6b6:
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07545458 != '\0') goto label_058cf6b6;
label_058cfcd2:
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.AccountRequired");
      Il2CppMethodInitialized_07545458 = '\x01';
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar13 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("MainMenu.MultiplayerRoomListPopup.AccountRequired",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Icon
                       (pSVar7,"UI/Icons/Navigation/Verification","roomAccountIcon",pSVar13,pMVar16);
    pMVar17 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar14 = (__this_01->fields)._items;
    if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_058cfd12;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pGVar14->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pGVar14->m_Items[(int)uVar2] = pGVar8;
      Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
                 (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
    }
  }
  pPVar4 = targetAddress->room;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    if (Il2CppMethodInitialized_07545465 == '\0') goto label_058cf8f7;
label_058cf7d0:
    uVar3 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07545465 != '\0') goto label_058cf7d0;
label_058cf8f7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545465 = '\x01';
    uVar3 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                     (pPVar4,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                      "",(MethodInfo *)0x0);
  bVar5 = System_String__op_Inequality
                    (pSVar7,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar5) {
    pSVar7 = System_String__Concat_52f0320(pSVar6,"-password",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar13 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.Password",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Icon
                       (pSVar7,"UI/Icons/Navigation/KeyIcon","roomPasswordIcon",pSVar13,pMVar16);
    pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar14 = (__this_01->fields)._items;
    if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_058cfd12;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pGVar14->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pGVar14->m_Items[(int)uVar2] = pGVar8;
      Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
                 (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
    }
  }
  pSVar7 = System_String__Concat_52f0320(pSVar6,"-players",(MethodInfo *)0x0);
  pPVar4 = targetAddress->room;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  if (Il2CppMethodInitialized_07545460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545460 = '\x01';
  }
  if (pPVar4 != (Photon_Realtime_RoomInfo_o *)0x0) {
    local_48 = (pPVar4->fields)._PlayerCount_k__BackingField;
    pSVar13 = System_Int32__ToString(&local_48,(MethodInfo *)0x0);
    local_48 = (pPVar4->fields).maxPlayers;
    str2 = System_Int32__ToString(&local_48,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_5301f10(pSVar13,"/",str2,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
    pMVar16 = (MethodInfo *)0x0;
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__Text(pSVar7,pSVar13,pGVar11,pMVar16);
    pMVar16 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar14 = (__this_01->fields)._items;
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pGVar14->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pGVar14->m_Items[(int)uVar2] = pGVar8;
        Il2CppCodeGenWriteBarrier(pGVar14->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pGVar8,
                   (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
      }
      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).type = "Panel";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type);
        pSVar6 = System_String__Concat_52f0320(pSVar6,"-content",(MethodInfo *)0x0);
        (pGVar8->fields).id = pSVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id);
        (pGVar8->fields).style = "roomRow";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).style);
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Row",(System_String_o *)0x0,"Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar9,pGVar10,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        (pGVar8->fields).layout = pGVar11;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (MethodInfo_395F5A0 *)
                             MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
        (pGVar8->fields).children = pGVar15;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).children);
        if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar14->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pGVar14->m_Items[0] = pGVar8;
          Il2CppCodeGenWriteBarrier(pGVar14->m_Items);
          (local_38->fields).children = pGVar14;
          Il2CppCodeGenWriteBarrier(&(local_38->fields).children);
          return;
        }
      }
    }
  }
label_058cfd12:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$AccountRequiredText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__AccountRequiredText (const MethodInfo* method);
// 0x58ceac0

System_String_o * Gisketch_Aottg2UI_Game_AottgRoomList__AccountRequiredText(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.AccountRequired");
    Il2CppMethodInitialized_07545458 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.MultiplayerRoomListPopup.AccountRequired",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Text
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgRoomList__Text (System_String_o* id, System_String_o* text, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x58cfd30

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgRoomList__Text
          (System_String_o *id,System_String_o *text,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout
          ,MethodInfo *method)

{
  ulong in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  ulong local_28;
  
  local_28 = in_RAX;
  if (Il2CppMethodInitialized_07545459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"roomRowText");
    Il2CppMethodInitialized_07545459 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).type = "Text";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  (__this->fields).text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  (__this->fields).style = "roomRowText";
  Il2CppCodeGenWriteBarrier(&(__this->fields).style);
  local_28 = local_28 & 0xffffffffffff0000;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)&local_28,true,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  (__this->fields).richText.fields = local_28._0_2_;
  (__this->fields).layout = layout;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Icon
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgRoomList__Icon (System_String_o* id, System_String_o* icon, System_String_o* style, System_String_o* tooltip, const MethodInfo* method);
// 0x58cfe50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgRoomList__Icon
          (System_String_o *id,System_String_o *icon,System_String_o *style,System_String_o *tooltip,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754545a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_0754545a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).type = "Icon";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  (__this->fields).icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
  (__this->fields).style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields).style);
  (__this->fields).tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields).tooltip);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (__this->fields).layout = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Filter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__Filter (const MethodInfo* method);
// 0x58ccb20
// eh: try 0x58cccf2..0x58cd1ae -> pad 0x58cd1ca (+25 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58cd1f6..0x58cd1fb -> pad 0x58cd21e cleanup
// eh: try 0x58cd221..0x58cd22b -> pad 0x58cd233 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ccf1e: nop 
// asm:   0x58cd05e: nop 
// asm:   0x58cd184: jmp 0x58cd141
// asm:   0x58cd1ae: jmp 0x58cd1de
// asm:   0x58cd1b0: jmp 0x58cd1de
// asm:   0x58cd1b2: jmp 0x58cd1de
// asm:   0x58cd1b4: jmp 0x58cd1de
// asm:   0x58cd1b6: jmp 0x58cd1de
// asm:   0x58cd1b8: jmp 0x58cd1de
// asm:   0x58cd1ba: jmp 0x58cd1de
// asm:   0x58cd1bc: jmp 0x58cd1de
// asm:   0x58cd1be: jmp 0x58cd1de
// asm:   0x58cd1c0: jmp 0x58cd1de
// asm:   0x58cd1c2: jmp 0x58cd1de
// asm:   0x58cd1c4: jmp 0x58cd1de
// asm:   0x58cd1c6: jmp 0x58cd1de
// asm:   0x58cd1c8: jmp 0x58cd1de
// asm:   0x58cd1ca: jmp 0x58cd1de
// asm:   0x58cd1cc: jmp 0x58cd1de
// asm:   0x58cd1ce: jmp 0x58cd1de
// asm:   0x58cd1d0: jmp 0x58cd1de
// asm:   0x58cd1d2: jmp 0x58cd1de
// asm:   0x58cd1d4: jmp 0x58cd1de
// asm:   0x58cd1d6: jmp 0x58cd1de
// asm:   0x58cd1d8: jmp 0x58cd1de
// asm:   0x58cd1da: jmp 0x58cd1de
// asm:   0x58cd1dc: jmp 0x58cd1de
// asm:   0x58cd1de: mov rbx, rax
// asm:   0x58cd1e1: cmp edx, 1
// asm:   0x58cd1e4: jne 0x58cd221
// asm:   0x58cd1e6: mov rdi, rbx
// asm:   0x58cd1e9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58cd1ee: mov rbx, qword ptr [rax]
// asm:   0x58cd1f1: mov qword ptr [rsp + 0x20], rbx
// asm:   0x58cd1f6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58cd1fb: lea rax, [rip + 0x19c2f16]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_Dispose
// asm:   0x58cd202: mov rsi, qword ptr [rax]
// asm:   0x58cd205: mov rdi, rsp
// asm:   0x58cd208: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x58cd20d: test rbx, rbx
// asm:   0x58cd210: je 0x58cd0cd
// asm:   0x58cd216: mov rdi, rbx
// asm:   0x58cd219: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58cd21e: mov rbx, rax
// asm:   0x58cd221: lea rdi, [rsp + 0x20]
// asm:   0x58cd226: call 0x2fd0280  ; il2cpp_runtime_helper_02fd0280()
// asm:   0x58cd22b: mov rdi, rbx
// asm:   0x58cd22e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58cd233: mov rdi, rax
// asm:   0x58cd236: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgRoomList__Filter(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_RoomInfo__o *pSVar4;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Photon_Realtime_RoomInfo_array *pPVar5;
  Il2CppObject *room;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *pSVar10;
  MethodInfo *pMVar11;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  Photon_Realtime_RoomInfo_o *local_38;
  
  if (Il2CppMethodInitialized_0754545b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_RoomInfo_GetEnumerator
              );
    Il2CppMethodInitialized_0754545b = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pSVar4 = pGVar9->Filtered;
  if (pSVar4 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar7 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar7) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar7,(MethodInfo *)0x0);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
    }
    if (pGVar9->Query != (Settings_StringSetting_o *)0x0) {
      a = (pGVar9->Query->fields)._value;
      if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
      if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                                (__this,(MethodInfo_4AAD2A0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values
                                ),
         __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_48,__this_00,
                   (MethodInfo_43F93D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_RoomInfo_GetEnumerator
                  );
        local_68.fields._currentValue = (Il2CppObject *)local_38;
        local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
        local_68.fields._index = local_48._8_4_;
        local_68.fields._version = local_48._12_4_;
        local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_48._8_8_ = &local_68;
label_058ccd00:
        do {
          do {
            pMVar11 = 
            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_MoveNext
            ;
            bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_MoveNext
                              );
            room = local_68.fields._currentValue;
            if (!bVar6) {
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                        (&local_68,
                         (MethodInfo_4CE71F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_RoomInfo_Dispose
                        );
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
                method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
                iVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)method_00);
              }
              else {
                iVar8 = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount
                                  ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
              }
              if (iVar8 == 0) {
                iVar7 = 0;
                uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).
                        cctor_finished_or_no_cctor;
              }
              else {
                if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
                }
                iVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page;
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                iVar7 = System_Math__Min_54baeb0(iVar7,iVar8 + -1,(MethodInfo *)0x0);
                uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
              }
              if (uVar2 == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
              }
              TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page = iVar7;
              return;
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
            }
            bVar6 = Gisketch_Aottg2UI_Game_AottgRoomList__IsValid((Photon_Realtime_RoomInfo_o *)room,pMVar11);
          } while (!bVar6);
          bVar6 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          if (!bVar6) break;
          if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
          }
          pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Name;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
          }
          if (Il2CppMethodInitialized_0754545c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_0754545c = '\x01';
          }
          pSVar10 = PhotonExtensions__GetStringProperty_5751c40
                              ((Photon_Realtime_RoomInfo_o *)room,pSVar10,"",
                               (MethodInfo *)0x0);
          if (pSVar10 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar7 = System_String__IndexOf_53072b0(pSVar10,a,5,(MethodInfo *)0x0);
          if (-1 < iVar7) break;
          if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
          }
          pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Map;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
          }
          if (Il2CppMethodInitialized_0754545c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_0754545c = '\x01';
          }
          pSVar10 = PhotonExtensions__GetStringProperty_5751c40
                              ((Photon_Realtime_RoomInfo_o *)room,pSVar10,"",
                               (MethodInfo *)0x0);
          if (pSVar10 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar7 = System_String__IndexOf_53072b0(pSVar10,a,5,(MethodInfo *)0x0);
          if (-1 < iVar7) break;
          if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
          }
          pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->GameMode;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
          }
          if (Il2CppMethodInitialized_0754545c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_0754545c = '\x01';
          }
          pSVar10 = PhotonExtensions__GetStringProperty_5751c40
                              ((Photon_Realtime_RoomInfo_o *)room,pSVar10,"",
                               (MethodInfo *)0x0);
          if (pSVar10 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar7 = System_String__IndexOf_53072b0(pSVar10,a,5,(MethodInfo *)0x0);
        } while (iVar7 < 0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
        if (pGVar9->ShowFull == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar9->ShowFull->fields)._value == false) {
          if ((Photon_Realtime_RoomInfo_o *)room == (Photon_Realtime_RoomInfo_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (((Photon_Realtime_RoomInfo_Fields *)((long)room + 0x10))->maxPlayers <=
              ((Photon_Realtime_RoomInfo_Fields *)((long)room + 0x10))->_PlayerCount_k__BackingField)
          goto label_058ccd00;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
          pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
        }
        if (pGVar9->ShowPassword == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar9->ShowPassword->fields)._value == false) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
          }
          if (Il2CppMethodInitialized_07545465 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_07545465 = '\x01';
          }
          if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
          }
          pSVar10 = PhotonExtensions__GetStringProperty_5751c40
                              ((Photon_Realtime_RoomInfo_o *)room,
                               TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                               "",(MethodInfo *)0x0);
          bVar6 = System_String__op_Inequality
                            (pSVar10,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             (MethodInfo *)0x0);
          if (bVar6) goto label_058ccd00;
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pMVar11 = MethodInfo_System_Collections_Generic_List_RoomInfo_Add;
        pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
        if (pSVar4 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar5 = (pSVar4->fields)._items;
          if (pPVar5 != (Photon_Realtime_RoomInfo_array *)0x0) {
            uVar3 = (pSVar4->fields)._size;
            if (uVar3 < (uint)pPVar5->max_length) {
              (pSVar4->fields)._size = uVar3 + 1;
              pPVar5->m_Items[(int)uVar3] = (Photon_Realtime_RoomInfo_o *)room;
              Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,room,
                         (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
            }
            goto label_058ccd00;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Matches
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgRoomList__Matches (Photon_Realtime_RoomInfo_o* room, System_String_o* property, System_String_o* search, const MethodInfo* method);
// 0x58cfff0

bool Gisketch_Aottg2UI_Game_AottgRoomList__Matches
               (Photon_Realtime_RoomInfo_o *room,System_String_o *property,System_String_o *search,
               MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this;
  
  if (Il2CppMethodInitialized_0754545c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754545c = '\x01';
  }
  __this = PhotonExtensions__GetStringProperty_5751c40(room,property,"",(MethodInfo *)0x0);
  if (__this == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = System_String__IndexOf_53072b0(__this,search,5,(MethodInfo *)0x0);
  return -1 < iVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$Signature
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__Signature (bool counts, const MethodInfo* method);
// 0x58cd240
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cd33e: mov rdi, rbp
// asm:   0x58cd341: mov esi, eax
// asm:   0x58cd343: jmp 0x58cd3af
// asm:   0x58cd3f5: lea rbp, [rip + 0x19c91bc]  ; MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item
// asm:   0x58cd3fc: nop dword ptr [rax]
// asm:   0x58cd505: jmp 0x58cd7f4
// asm:   0x58cd50a: lea r14, [rip + 0x19af17f]  ; TypeInfo_GameManagers_RoomProperty
// asm:   0x58cd511: lea r15, [rip + 0x1a00510]  ; ""
// asm:   0x58cd518: nop dword ptr [rax + rax]

System_String_o * Gisketch_Aottg2UI_Game_AottgRoomList__Signature(bool counts,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_RoomInfo__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Photon_Realtime_RoomInfo_o *pPVar5;
  System_Text_StringBuilder_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int iVar8;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_0754545d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754545d = '\x01';
  }
  local_34 = 0;
  local_38 = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_058cd83b;
  System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  if (counts) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    iVar4 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_058cd83b;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
    if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
       (pSVar6 = System_Text_StringBuilder__Append_530f730
                           (pSVar6,TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page,
                            (MethodInfo *)0x0), pSVar6 == (System_Text_StringBuilder_o *)0x0))
    goto label_058cd83b;
    pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x7c,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
    if ((pSVar2 == (System_Collections_Generic_List_RoomInfo__o *)0x0) ||
       (pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
    iVar4 = (pSVar2->fields)._size;
  }
  System_Text_StringBuilder__Append_530f730(pSVar6,iVar4,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__VisibleRange(&local_34,&local_38,method_00);
  iVar4 = local_38;
  if (local_34 < local_38) {
    iVar8 = local_34;
    if (counts) {
      do {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
        if (pSVar2 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_058cd83b;
        pPVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar8,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item
                           );
        pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
        if (((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
            (pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x7c,(MethodInfo *)0x0),
            pPVar5 == (Photon_Realtime_RoomInfo_o *)0x0)) || (pSVar6 == (System_Text_StringBuilder_o *)0x0))
        goto label_058cd83b;
        System_Text_StringBuilder__Append_530ed80(pSVar6,(pPVar5->fields).name,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
        if (((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
            (pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0),
            pSVar6 == (System_Text_StringBuilder_o *)0x0)) ||
           ((pSVar6 = System_Text_StringBuilder__Append_530f730
                                (pSVar6,(pPVar5->fields)._PlayerCount_k__BackingField,(MethodInfo *)0x0),
            pSVar6 == (System_Text_StringBuilder_o *)0x0 ||
            (pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x2f,(MethodInfo *)0x0),
            pSVar6 == (System_Text_StringBuilder_o *)0x0)))) goto label_058cd83b;
        System_Text_StringBuilder__Append_530f730(pSVar6,(pPVar5->fields).maxPlayers,(MethodInfo *)0x0);
        iVar8 = iVar8 + 1;
      } while (iVar4 != iVar8);
    }
    else {
      do {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
        if (pSVar2 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_058cd83b;
        pPVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar8,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item
                           );
        pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
        if (((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
            (pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x7c,(MethodInfo *)0x0),
            pPVar5 == (Photon_Realtime_RoomInfo_o *)0x0)) || (pSVar6 == (System_Text_StringBuilder_o *)0x0))
        goto label_058cd83b;
        System_Text_StringBuilder__Append_530ed80(pSVar6,(pPVar5->fields).name,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
        }
        pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
        if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                           (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                            "",(MethodInfo *)0x0);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530ed80(pSVar6,pSVar7,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                           (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                            "",(MethodInfo *)0x0);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530ed80(pSVar6,pSVar7,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                           (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                            "",(MethodInfo *)0x0);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530ed80(pSVar6,pSVar7,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        bVar3 = PhotonExtensions__GetBoolProperty_5751cd0
                          (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox,false,
                           (MethodInfo *)0x0);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530f650(pSVar6,bVar3,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        bVar3 = PhotonExtensions__GetBoolProperty_5751cd0
                          (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                           (MethodInfo *)0x0);
        if ((pSVar6 == (System_Text_StringBuilder_o *)0x0) ||
           (pSVar6 = System_Text_StringBuilder__Append_530f650(pSVar6,bVar3,(MethodInfo *)0x0),
           pSVar6 == (System_Text_StringBuilder_o *)0x0)) goto label_058cd83b;
        pSVar6 = System_Text_StringBuilder__Append_530f6a0(pSVar6,0x3a,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07545465 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_07545465 = '\x01';
        }
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        pSVar7 = PhotonExtensions__GetStringProperty_5751c40
                           (pPVar5,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                            "",(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality
                          (pSVar7,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
        ;
        if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_058cd83b;
        System_Text_StringBuilder__Append_530f650(pSVar6,bVar3,(MethodInfo *)0x0);
        iVar8 = iVar8 + 1;
      } while (iVar4 != iVar8);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->SignatureBuilder;
  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
    pSVar7 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                       (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
    return pSVar7;
  }
label_058cd83b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$VisibleRange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList__VisibleRange (int32_t* start, int32_t* end, const MethodInfo* method);
// 0x58cdf50

void Gisketch_Aottg2UI_Game_AottgRoomList__VisibleRange(int32_t *start,int32_t *end,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar1;
  System_Collections_Generic_List_RoomInfo__o *pSVar2;
  int iVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_0754545e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0754545e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  iVar3 = pGVar1->_page * 0xc;
  *start = iVar3;
  pSVar2 = pGVar1->Filtered;
  if (pSVar2 == (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar4 = (pSVar2->fields)._size;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar4 = System_Math__Min_54baeb0(iVar3 + 0xc,iVar4,(MethodInfo *)0x0);
  *end = iVar4;
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$RowId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__RowId (int32_t index, const MethodInfo* method);
// 0x58ce000

System_String_o * Gisketch_Aottg2UI_Game_AottgRoomList__RowId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_0754545f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-rooms-");
    Il2CppMethodInitialized_0754545f = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("room-list-rooms-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PlayerCount
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__PlayerCount (Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58ce050

System_String_o *
Gisketch_Aottg2UI_Game_AottgRoomList__PlayerCount(Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545460 = '\x01';
  }
  if (room == (Photon_Realtime_RoomInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_1c = (room->fields)._PlayerCount_k__BackingField;
  pSVar1 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
  local_1c = (room->fields).maxPlayers;
  str2 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PageCount
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgRoomList__PageCount (const MethodInfo* method);
// 0x58ce5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ce61d: jmp 0x58ce6b6

int32_t Gisketch_Aottg2UI_Game_AottgRoomList__PageCount(MethodInfo *method)

{
  System_Collections_Generic_List_RoomInfo__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545461 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    Il2CppMethodInitialized_07545461 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0)
    goto label_058ce654;
label_058ce60d:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor != 0)
    goto label_058ce60d;
label_058ce654:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
  }
  if (pSVar1 == (System_Collections_Generic_List_RoomInfo__o *)0x0) {
label_058ce6b6:
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size == 0) {
    return 0;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Filtered;
    if (pSVar1 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_058ce6b6;
  }
  return ((pSVar1->fields)._size + -1) / 0xc + 1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PageLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__PageLabel (const MethodInfo* method);
// 0x58cdc80

System_String_o * Gisketch_Aottg2UI_Game_AottgRoomList__PageLabel(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  Il2CppClass *klass;
  int local_10;
  int local_c;
  
  if (Il2CppMethodInitialized_07545462 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"0/0");
    Il2CppMethodInitialized_07545462 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList = (Gisketch_Aottg2UI_Game_AottgRoomList_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    local_c = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  else {
    local_c = Gisketch_Aottg2UI_Game_AottgRoomList__PageCount((MethodInfo *)klass);
  }
  if (local_c == 0) {
    return "0/0";
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  local_10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_page + 1;
  pSVar2 = System_Int32__ToString(&local_10,(MethodInfo *)0x0);
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(pSVar2,"/",str2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PlayersOnline
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline (const MethodInfo* method);
// 0x58cde80

System_String_o * Gisketch_Aottg2UI_Game_AottgRoomList__PlayersOnline(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  int local_c;
  
  if (Il2CppMethodInitialized_07545463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerRoomListPopup.PlayersOnline");
    Il2CppMethodInitialized_07545463 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar1 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
  local_c = iVar1 / 2;
  pSVar2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  str2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.MultiplayerRoomListPopup.PlayersOnline",(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10(pSVar2," ",str2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$IsValid
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgRoomList__IsValid (Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58ca230

bool Gisketch_Aottg2UI_Game_AottgRoomList__IsValid(Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  System_String_o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545464 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"vc");
    Il2CppMethodInitialized_07545464 = '\x01';
  }
  if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar1 = (room->fields).customProperties;
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                         (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
      if (!bVar2) {
        return false;
      }
      pEVar1 = (room->fields).customProperties;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (!bVar2) {
          return false;
        }
        pEVar1 = (room->fields).customProperties;
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
          if (!bVar2) {
            return false;
          }
          __this = (room->fields).name;
          if (__this != (System_String_o *)0x0) {
            bVar2 = System_String__EndsWith(__this,"vc",(MethodInfo *)0x0);
            return !bVar2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$PasswordHash
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomList__PasswordHash (Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58ca370

System_String_o *
Gisketch_Aottg2UI_Game_AottgRoomList__PasswordHash(Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545465 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty_5751c40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomList$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomList___cctor (const MethodInfo* method);
// 0x58d0060

void Gisketch_Aottg2UI_Game_AottgRoomList___cctor(MethodInfo *method)

{
  System_String_o *defaultValue;
  Gisketch_Aottg2UI_Game_AottgRoomList_StaticFields *pGVar1;
  Settings_StringSetting_o *__this;
  Settings_BoolSetting_o *pSVar2;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  
  if (Il2CppMethodInitialized_07545466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07545466 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Query = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->Query);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,true,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->ShowFull = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->ShowFull);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,true,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->ShowPassword = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->ShowPassword);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomInfo);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->Filtered = __this_00;
  Il2CppCodeGenWriteBarrier(&pGVar1->Filtered);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields;
  pGVar1->SignatureBuilder = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar1->SignatureBuilder);
  return;
}


