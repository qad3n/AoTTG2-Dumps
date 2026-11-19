// Type: UI.MobileInputControlLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputControlLayout.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputControlLayout.<>c$$.cctor
// il2cpp: void UI_MobileInputControlLayout___c___cctor (const MethodInfo* method);
// 0x5c73210

void UI_MobileInputControlLayout___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout_c);
    Il2CppMethodInitialized_07547926 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MobileInputControlLayout_c->static_fields->__9 = (UI_MobileInputControlLayout___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputControlLayout_c->static_fields->__9);
  return;
}


// UI.MobileInputControlLayout.<>c$$.ctor
// il2cpp: void UI_MobileInputControlLayout___c___ctor (UI_MobileInputControlLayout___c_o* __this, const MethodInfo* method);
// 0x5c73280

void UI_MobileInputControlLayout___c___ctor(UI_MobileInputControlLayout___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputControlLayout.<>c$$<Clone>b__48_0
// il2cpp: UI_MobileInputControlLayout_o* UI_MobileInputControlLayout___c___Clone_b__48_0 (UI_MobileInputControlLayout___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5c73290

UI_MobileInputControlLayout_o *
UI_MobileInputControlLayout___c___Clone_b__48_0
          (UI_MobileInputControlLayout___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method)

{
  UI_MobileInputControlLayout_o *pUVar1;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UI_MobileInputControlLayout__Clone(x,(MethodInfo *)x);
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetActionIds
// il2cpp: System_String_array* UI_MobileInputControlLayout__GetActionIds (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6b3b0

System_String_array *
UI_MobileInputControlLayout__GetActionIds(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint uVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_Char_array *separator;
  System_String_o *pSVar7;
  uint uVar8;
  long lVar9;
  Settings_MobileInputBinding_o *local_38;
  
  if (Il2CppMethodInitialized_07547918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924
              );
    Il2CppMethodInitialized_07547918 = '\x01';
  }
  local_38 = (Settings_MobileInputBinding_o *)0x0;
  bVar4 = System_String__IsNullOrWhiteSpace((__this->fields).Actions,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar6;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar7 = (__this->fields).Actions;
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)separator,
             FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924
             ,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    pSVar6 = System_String__Split_5305000(pSVar7,separator,1,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        if ((int)uVar5 < 1) goto label_05c6b66d;
        lVar9 = 0;
        do {
          if (uVar5 <= (uint)lVar9) goto label_05c6b672;
          if (pSVar6->m_Items[lVar9] == (System_String_o *)0x0) goto label_05c6b66d;
          pSVar7 = System_String__Trim(pSVar6->m_Items[lVar9],(MethodInfo *)0x0);
          if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
          }
          bVar4 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar7,&local_38,(MethodInfo *)0x0);
          if (bVar4) goto label_05c6b66d;
          uVar5 = (uint)pSVar6->max_length;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar5);
      }
      else if (0 < (int)uVar5) {
        uVar8 = 0;
        do {
          if (uVar5 <= uVar8) {
label_05c6b672:
            ThrowIndexOutOfRangeException();
          }
          if (pSVar6->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_05c6b66d;
          pSVar7 = System_String__Trim(pSVar6->m_Items[(int)uVar8],(MethodInfo *)0x0);
          if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
          }
          bVar4 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar7,&local_38,(MethodInfo *)0x0);
          if (bVar4) {
            bVar4 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar7,
                               (MethodInfo_395D6D0 *)
                               MethodInfo_System_Collections_Generic_List_string_Contains);
            pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (!bVar4) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar2 = (__this_00->fields)._items;
              if (pSVar2 == (System_String_array *)0x0) goto label_05c6b66d;
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar2->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar2->m_Items[(int)uVar5] = pSVar7;
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar7,
                           (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar8 < (int)uVar5);
      }
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar6;
      }
    }
  }
label_05c6b66d:
  ThrowNullReferenceException();
}


// UI.MobileInputControlLayout$$GetKind
// il2cpp: int32_t UI_MobileInputControlLayout__GetKind (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6b330

int32_t UI_MobileInputControlLayout__GetKind(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  int32_t iVar2;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07547919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    Il2CppMethodInitialized_07547919 = '\x01';
  }
  local_c = 0;
  value = (__this->fields).Kind;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = local_c;
  }
  return iVar2;
}


// UI.MobileInputControlLayout$$GetShape
// il2cpp: int32_t UI_MobileInputControlLayout__GetShape (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68350

int32_t UI_MobileInputControlLayout__GetShape(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t local_20;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_0754791a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlShape);
    Il2CppMethodInitialized_0754791a = '\x01';
  }
  local_20 = 0;
  if (Il2CppMethodInitialized_07547919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    Il2CppMethodInitialized_07547919 = '\x01';
  }
  local_1c = 0;
  pSVar1 = (__this->fields).Kind;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__TryParse_Int32Enum_
                    (pSVar1,&local_1c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
  if ((!bVar2) || (iVar3 = 0, local_1c != 7)) {
    pSVar1 = (__this->fields).Shape;
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar2 = System_Enum__TryParse_Int32Enum_
                      (pSVar1,&local_20,
                       (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlShape);
    iVar3 = 0;
    if (bVar2) {
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// UI.MobileInputControlLayout$$GetPopupMode
// il2cpp: int32_t UI_MobileInputControlLayout__GetPopupMode (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6c6a0

int32_t UI_MobileInputControlLayout__GetPopupMode(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  int32_t iVar2;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_0754791b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputPopupMode);
    Il2CppMethodInitialized_0754791b = '\x01';
  }
  local_c = 0;
  value = (__this->fields).PopupMode;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputPopupMode
                    );
  iVar2 = 0;
  if (bVar1) {
    iVar2 = local_c;
  }
  return iVar2;
}


// UI.MobileInputControlLayout$$GetSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68820

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pUVar1 = (__this->fields).Skin;
  }
  else {
    pUVar1 = (__this->fields).Skin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 0.0;
    (pUVar1->fields).G = 0.0;
    (pUVar1->fields).B = 0.0;
    (pUVar1->fields).A = 0.38;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetOnSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetOnSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c69f80

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetOnSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754791d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791d = '\x01';
    pUVar1 = (__this->fields).OnSkin;
  }
  else {
    pUVar1 = (__this->fields).OnSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 1.0;
    (pUVar1->fields).B = 1.0;
    (pUVar1->fields).A = 0.38;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickHandleSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetJoystickHandleSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68900

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetJoystickHandleSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754791e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791e = '\x01';
    pUVar1 = (__this->fields).JoystickHandleSkin;
  }
  else {
    pUVar1 = (__this->fields).JoystickHandleSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 1.0;
    (pUVar1->fields).B = 1.0;
    (pUVar1->fields).A = 0.35;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickActiveSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetJoystickActiveSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68990

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetJoystickActiveSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754791f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791f = '\x01';
    pUVar1 = (__this->fields).JoystickActiveSkin;
  }
  else {
    pUVar1 = (__this->fields).JoystickActiveSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 1.0;
    (pUVar1->fields).B = 1.0;
    (pUVar1->fields).A = 0.4;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickRingSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetJoystickRingSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c685c0

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetJoystickRingSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547920 = '\x01';
    pUVar1 = (__this->fields).JoystickRingSkin;
  }
  else {
    pUVar1 = (__this->fields).JoystickRingSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 1.0;
    (pUVar1->fields).B = 1.0;
    (pUVar1->fields).A = 0.08;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickReelInSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetJoystickReelInSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68a20

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetJoystickReelInSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547921 = '\x01';
    pUVar1 = (__this->fields).JoystickReelInSkin;
  }
  else {
    pUVar1 = (__this->fields).JoystickReelInSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 0.15;
    (pUVar1->fields).B = 0.12;
    (pUVar1->fields).A = 0.24;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickReelOutSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetJoystickReelOutSkin (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68ac0

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetJoystickReelOutSkin(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547922 = '\x01';
    pUVar1 = (__this->fields).JoystickReelOutSkin;
  }
  else {
    pUVar1 = (__this->fields).JoystickReelOutSkin;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 0.15;
    (pUVar1->fields).G = 0.95;
    (pUVar1->fields).B = 0.45;
    (pUVar1->fields).A = 0.22;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetJoystickBaseScale
// il2cpp: float UI_MobileInputControlLayout__GetJoystickBaseScale (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68520

float UI_MobileInputControlLayout__GetJoystickBaseScale
                (UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).JoystickBaseScale;
  fVar2 = 2.0;
  if (fVar1 <= 2.0) {
    fVar2 = fVar1;
  }
  return (float)(~-(uint)(0.0 < fVar1) & 0x3ee66666 |
                (~-(uint)(0.01 <= fVar1) & 0x3c23d70a | (uint)fVar2 & -(uint)(0.01 <= fVar1)) &
                -(uint)(0.0 < fVar1));
}


// UI.MobileInputControlLayout$$GetJoystickHandleScale
// il2cpp: float UI_MobileInputControlLayout__GetJoystickHandleScale (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c688b0

float UI_MobileInputControlLayout__GetJoystickHandleScale
                (UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).JoystickHandleScale;
  fVar2 = 2.0;
  if (fVar1 <= 2.0) {
    fVar2 = fVar1;
  }
  return (float)(~-(uint)(0.0 < fVar1) & 0x3edc28f6 |
                (~-(uint)(0.01 <= fVar1) & 0x3c23d70a | (uint)fVar2 & -(uint)(0.01 <= fVar1)) &
                -(uint)(0.0 < fVar1));
}


// UI.MobileInputControlLayout$$GetJoystickReelOutRingDiameter
// il2cpp: float UI_MobileInputControlLayout__GetJoystickReelOutRingDiameter (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c68570

float UI_MobileInputControlLayout__GetJoystickReelOutRingDiameter
                (UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).JoystickReelOutRingDiameter;
  fVar2 = 1.0;
  if (1.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return (float)(~-(uint)(0.0 < fVar1) & 0x43be0000 | (uint)fVar2 & -(uint)(0.0 < fVar1));
}


// UI.MobileInputControlLayout$$GetIcon
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputControlLayout__GetIcon (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6d430

UI_MobileInputSkin_o *
UI_MobileInputControlLayout__GetIcon(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputSkin_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547923 = '\x01';
    pUVar1 = (__this->fields).Icon;
  }
  else {
    pUVar1 = (__this->fields).Icon;
  }
  if (pUVar1 == (UI_MobileInputSkin_o *)0x0) {
    pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    (pUVar1->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar1,(MethodInfo *)0x0);
    (pUVar1->fields).R = 1.0;
    (pUVar1->fields).G = 1.0;
    (pUVar1->fields).B = 1.0;
    (pUVar1->fields).A = 0.9;
    return pUVar1;
  }
  return pUVar1;
}


// UI.MobileInputControlLayout$$GetIconSize
// il2cpp: float UI_MobileInputControlLayout__GetIconSize (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6d650

float UI_MobileInputControlLayout__GetIconSize(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).IconSize;
  fVar2 = 2.0;
  if (fVar1 <= 2.0) {
    fVar2 = fVar1;
  }
  return (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
}


// UI.MobileInputControlLayout$$Clone
// il2cpp: UI_MobileInputControlLayout_o* UI_MobileInputControlLayout__Clone (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c72df0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c73106: jmp 0x5c7314a

UI_MobileInputControlLayout_o *
UI_MobileInputControlLayout__Clone(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputControlLayout__o *source;
  Il2CppObject *object;
  float fVar1;
  float fVar2;
  float fVar3;
  UI_MobileInputControlLayout_o *__this_00;
  System_String_o *pSVar4;
  UI_MobileInputSkin_o *pUVar5;
  MethodInfo *pMVar6;
  UI_MobileInputControlLayout___c_StaticFields *pUVar7;
  System_Func_MobileInputControlLayout__MobileInputControlLayout__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_02;
  System_Guid_Fields local_38;
  
  if (Il2CppMethodInitialized_07547924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MobileInputControlLayout_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_MobileInputControlLayout_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileInputControlLayout_c_Clone_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout_c);
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    Il2CppMethodInitialized_07547924 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
  UI_MobileInputControlLayout___ctor(__this_00,method);
  local_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
  pSVar4 = System_Guid__ToString_54b3fe0((System_Guid_o *)&local_38,"N",(MethodInfo *)0x0);
  if (__this_00 == (UI_MobileInputControlLayout_o *)0x0) {
label_05c73208:
    ThrowNullReferenceException();
  }
  (__this_00->fields).Id = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Id);
  pMVar6 = (MethodInfo *)(__this->fields).Label;
  (__this_00->fields).Label = (System_String_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Label);
  pUVar5 = (__this->fields).Icon;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pUVar5 = (UI_MobileInputSkin_o *)0x0;
  }
  else {
    pUVar5 = UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).Icon = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Icon);
  (__this_00->fields).IconSize = (__this->fields).IconSize;
  (__this_00->fields).Actions = (__this->fields).Actions;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Actions);
  (__this_00->fields).Kind = (__this->fields).Kind;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Kind);
  (__this_00->fields).Shape = (__this->fields).Shape;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Shape);
  pMVar6 = (MethodInfo *)(__this->fields).PopupMode;
  (__this_00->fields).PopupMode = (System_String_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).PopupMode);
  fVar1 = (__this->fields).Y;
  fVar2 = (__this->fields).Width;
  fVar3 = (__this->fields).Height;
  (__this_00->fields).X = (__this->fields).X;
  (__this_00->fields).Y = fVar1;
  (__this_00->fields).Width = fVar2;
  (__this_00->fields).Height = fVar3;
  pUVar5 = (__this->fields).Skin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).Skin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Skin);
  pUVar5 = (__this->fields).OnSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).OnSkin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).OnSkin);
  pUVar5 = (__this->fields).JoystickHandleSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).JoystickHandleSkin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).JoystickHandleSkin);
  pUVar5 = (__this->fields).JoystickActiveSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).JoystickActiveSkin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).JoystickActiveSkin);
  pUVar5 = (__this->fields).JoystickRingSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).JoystickRingSkin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).JoystickRingSkin);
  pUVar5 = (__this->fields).JoystickReelInSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
  }
  else {
    pMVar6 = (MethodInfo *)UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).JoystickReelInSkin = (UI_MobileInputSkin_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).JoystickReelInSkin);
  pUVar5 = (__this->fields).JoystickReelOutSkin;
  if (pUVar5 == (UI_MobileInputSkin_o *)0x0) {
    pUVar5 = (UI_MobileInputSkin_o *)0x0;
  }
  else {
    pUVar5 = UI_MobileInputSkin__Clone(pUVar5,pMVar6);
  }
  (__this_00->fields).JoystickReelOutSkin = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).JoystickReelOutSkin);
  fVar1 = (__this->fields).JoystickHandleScale;
  (__this_00->fields).JoystickBaseScale = (__this->fields).JoystickBaseScale;
  (__this_00->fields).JoystickHandleScale = fVar1;
  (__this_00->fields).JoystickReelOutRingDiameter = (__this->fields).JoystickReelOutRingDiameter;
  (__this_00->fields).DisableContentMovement = (__this->fields).DisableContentMovement;
  (__this_00->fields).AllowLookAreaThrough = (__this->fields).AllowLookAreaThrough;
  fVar1 = (__this->fields).BindReelOutAngle;
  (__this_00->fields).BindReelInAngle = (__this->fields).BindReelInAngle;
  (__this_00->fields).BindReelOutAngle = fVar1;
  (__this_00->fields).AimAssistOnPress = (__this->fields).AimAssistOnPress;
  (__this_00->fields).AimAssistOnRelease = (__this->fields).AimAssistOnRelease;
  source = (__this->fields).Children;
  if (source == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor)
    ;
  }
  else {
    if ((TypeInfo_UI_MobileInputControlLayout_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout_c);
      pUVar7 = TypeInfo_UI_MobileInputControlLayout_c->static_fields;
      __this_01 = pUVar7->__9__48_0;
    }
    else {
      pUVar7 = TypeInfo_UI_MobileInputControlLayout_c->static_fields;
      __this_01 = pUVar7->__9__48_0;
    }
    if (__this_01 == (System_Func_MobileInputControlLayout__MobileInputControlLayout__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout_c);
        pUVar7 = TypeInfo_UI_MobileInputControlLayout_c->static_fields;
      }
      object = (Il2CppObject *)pUVar7->__9;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_MobileInputControlLayout_MobileInputControlLayout);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_01,object,
                 (intptr_t)MethodInfo_UI_MobileInputControlLayout_c_Clone_b__48_0,(MethodInfo_4F19B50 *)0x0);
      pUVar7 = TypeInfo_UI_MobileInputControlLayout_c->static_fields;
      pUVar7->__9__48_0 = __this_01;
      Il2CppCodeGenWriteBarrier(&pUVar7->__9__48_0);
    }
    source_00 = System_Linq_Enumerable__Select_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_01,
                           (MethodInfo_34F60F0 *)
                           MethodInfo_System_Linq_Enumerable_Select_MobileInputControlLayout_MobileInputControlLayout
                          );
    __this_02 = (System_Collections_Generic_List_MobileInputControlLayout__o *)
                System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_35011B0 *)
                           MethodInfo_System_Linq_Enumerable_ToList_MobileInputControlLayout);
    if ((source == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) ||
       (__this_00 == (UI_MobileInputControlLayout_o *)0x0)) goto label_05c73208;
  }
  (__this_00->fields).Children = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Children);
  return __this_00;
}


// UI.MobileInputControlLayout$$ShouldMoveContentWithTouch
// il2cpp: bool UI_MobileInputControlLayout__ShouldMoveContentWithTouch (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c6a050

bool UI_MobileInputControlLayout__ShouldMoveContentWithTouch
               (UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  return (__this->fields).DisableContentMovement == false;
}


// UI.MobileInputControlLayout$$.ctor
// il2cpp: void UI_MobileInputControlLayout___ctor (UI_MobileInputControlLayout_o* __this, const MethodInfo* method);
// 0x5c67e60

void UI_MobileInputControlLayout___ctor(UI_MobileInputControlLayout_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  UI_MobileInputSkin_o *pUVar2;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  System_Guid_o local_78;
  System_Enum_o local_68;
  undefined4 local_58;
  System_Enum_o local_50;
  undefined4 local_40;
  System_Enum_o local_38;
  undefined4 local_28;
  
  if (Il2CppMethodInitialized_07547925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputPopupMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"BTN");
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    Il2CppMethodInitialized_07547925 = '\x01';
  }
  local_78 = System_Guid__NewGuid((MethodInfo *)0x0);
  pSVar1 = System_Guid__ToString_54b3fe0(&local_78,"N",(MethodInfo *)0x0);
  (__this->fields).Id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id);
  (__this->fields).Label = "BTN";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 1.0;
  (pUVar2->fields).B = 1.0;
  (pUVar2->fields).A = 0.9;
  (__this->fields).Icon = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  (__this->fields).IconSize = 0.56;
  (__this->fields).Actions = "None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Actions);
  local_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = 0;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  (__this->fields).Kind = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Kind);
  local_50.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
  local_50.monitor = (void *)0xffffffffffffffff;
  local_40 = 0;
  pSVar1 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
  (__this->fields).Shape = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shape);
  (__this->fields).X = 0.5;
  (__this->fields).Y = 0.5;
  (__this->fields).Width = 0.08;
  (__this->fields).Height = 0.08;
  local_68.klass = (System_Enum_c *)TypeInfo_UI_MobileInputPopupMode;
  local_68.monitor = (void *)0xffffffffffffffff;
  local_58 = 0;
  pSVar1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
  (__this->fields).PopupMode = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PopupMode);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 0.0;
  (pUVar2->fields).G = 0.0;
  (pUVar2->fields).B = 0.0;
  (pUVar2->fields).A = 0.38;
  (__this->fields).Skin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Skin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 1.0;
  (pUVar2->fields).B = 1.0;
  (pUVar2->fields).A = 0.38;
  (__this->fields).OnSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OnSkin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 1.0;
  (pUVar2->fields).B = 1.0;
  (pUVar2->fields).A = 0.35;
  (__this->fields).JoystickHandleSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoystickHandleSkin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 1.0;
  (pUVar2->fields).B = 1.0;
  (pUVar2->fields).A = 0.4;
  (__this->fields).JoystickActiveSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoystickActiveSkin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 1.0;
  (pUVar2->fields).B = 1.0;
  (pUVar2->fields).A = 0.08;
  (__this->fields).JoystickRingSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoystickRingSkin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 1.0;
  (pUVar2->fields).G = 0.15;
  (pUVar2->fields).B = 0.12;
  (pUVar2->fields).A = 0.24;
  (__this->fields).JoystickReelInSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoystickReelInSkin);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (pUVar2->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Image);
  (pUVar2->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  (pUVar2->fields).R = 0.15;
  (pUVar2->fields).G = 0.95;
  (pUVar2->fields).B = 0.45;
  (pUVar2->fields).A = 0.22;
  (__this->fields).JoystickReelOutSkin = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JoystickReelOutSkin);
  (__this->fields).JoystickBaseScale = 0.45;
  (__this->fields).JoystickHandleScale = 0.43;
  (__this->fields).JoystickReelOutRingDiameter = 380.0;
  (__this->fields).BindReelInAngle = 85.0;
  (__this->fields).BindReelOutAngle = 90.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
  (__this->fields).Children = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Children);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


