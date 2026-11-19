// Type: UI.MobileGasModeButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileGasModeButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileGasModeButton$$Setup
// il2cpp: void UI_MobileGasModeButton__Setup (UI_MobileGasModeButton_o* __this, UnityEngine_UI_Image_o* image, UI_MobileInputSkin_o* offSkin, UI_MobileInputSkin_o* onSkin, int32_t shape, const MethodInfo* method);
// 0x5c6b2d0

void UI_MobileGasModeButton__Setup
               (UI_MobileGasModeButton_o *__this,UnityEngine_UI_Image_o *image,UI_MobileInputSkin_o *offSkin,
               UI_MobileInputSkin_o *onSkin,int32_t shape,MethodInfo *method)

{
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  (__this->fields)._offSkin = offSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offSkin);
  (__this->fields)._onSkin = onSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSkin);
  (__this->fields)._shape = shape;
  UI_MobileGasModeButton__Refresh(__this,(MethodInfo *)onSkin);
  return;
}


// UI.MobileGasModeButton$$OnEnable
// il2cpp: void UI_MobileGasModeButton__OnEnable (UI_MobileGasModeButton_o* __this, const MethodInfo* method);
// 0x5c6dda0

void UI_MobileGasModeButton__OnEnable(UI_MobileGasModeButton_o *__this,MethodInfo *method)

{
  UI_MobileGasModeButton__Refresh(__this,method);
  return;
}


// UI.MobileGasModeButton$$OnPointerClick
// il2cpp: void UI_MobileGasModeButton__OnPointerClick (UI_MobileGasModeButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6ddb0

void UI_MobileGasModeButton__OnPointerClick
               (UI_MobileGasModeButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  bool *pbVar1;
  
  if (Il2CppMethodInitialized_075478d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478d3 = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  pbVar1 = &TypeInfo_Settings_MobileInputBridge->static_fields->AutoUseGasEnabled;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  UI_MobileGasModeButton__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// UI.MobileGasModeButton$$Refresh
// il2cpp: void UI_MobileGasModeButton__Refresh (UI_MobileGasModeButton_o* __this, const MethodInfo* method);
// 0x5c6dcc0

void UI_MobileGasModeButton__Refresh(UI_MobileGasModeButton_o *__this,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  UI_MobileInputSkin_o *skin;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075478d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478d4 = '\x01';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    skin = (&(__this->fields)._offSkin)[TypeInfo_Settings_MobileInputBridge->static_fields->AutoUseGasEnabled]
    ;
    shape = (__this->fields)._shape;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,in_RCX);
    return;
  }
  return;
}


// UI.MobileGasModeButton$$.ctor
// il2cpp: void UI_MobileGasModeButton___ctor (UI_MobileGasModeButton_o* __this, const MethodInfo* method);
// 0x5c6de10

void UI_MobileGasModeButton___ctor(UI_MobileGasModeButton_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


