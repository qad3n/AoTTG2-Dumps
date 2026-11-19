// Type: UI.MobileInputSkin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputSkin.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputSkin$$.ctor
// il2cpp: void UI_MobileInputSkin___ctor (UI_MobileInputSkin_o* __this, float r, float g, float b, float a, const MethodInfo* method);
// 0x5c72be0

void UI_MobileInputSkin___ctor
               (UI_MobileInputSkin_o *__this,float r,float g,float b,float a,MethodInfo *method)

{
  (__this->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Image);
  (__this->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  return;
}


// UI.MobileInputSkin$$.ctor
// il2cpp: void UI_MobileInputSkin___ctor (UI_MobileInputSkin_o* __this, const MethodInfo* method);
// 0x5c72c70

void UI_MobileInputSkin___ctor_5b72c70(UI_MobileInputSkin_o *__this,MethodInfo *method)

{
  (__this->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Image);
  (__this->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputSkin$$ToColor
// il2cpp: UnityEngine_Color_o UI_MobileInputSkin__ToColor (UI_MobileInputSkin_o* __this, const MethodInfo* method);
// 0x5c6d640

UnityEngine_Color_o UI_MobileInputSkin__ToColor(UI_MobileInputSkin_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields.r = (__this->fields).R;
  UVar1.fields.g = (__this->fields).G;
  UVar1.fields.b = (__this->fields).B;
  UVar1.fields.a = (__this->fields).A;
  return (UnityEngine_Color_o)UVar1.fields;
}


// UI.MobileInputSkin$$HasImage
// il2cpp: bool UI_MobileInputSkin__HasImage (UI_MobileInputSkin_o* __this, const MethodInfo* method);
// 0x5c6d530

bool UI_MobileInputSkin__HasImage(UI_MobileInputSkin_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace((__this->fields).Image,(MethodInfo *)0x0);
  return !bVar1;
}


// UI.MobileInputSkin$$Clone
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputSkin__Clone (UI_MobileInputSkin_o* __this, const MethodInfo* method);
// 0x5c72cb0

UI_MobileInputSkin_o * UI_MobileInputSkin__Clone(UI_MobileInputSkin_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UI_MobileInputSkin_o *__this_00;
  
  if (Il2CppMethodInitialized_07547916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547916 = '\x01';
  }
  fVar1 = (__this->fields).R;
  fVar2 = (__this->fields).G;
  fVar3 = (__this->fields).B;
  fVar4 = (__this->fields).A;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  targetAddress = &(__this_00->fields).Image;
  (__this_00->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this_00->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).R = fVar1;
  (__this_00->fields).G = fVar2;
  (__this_00->fields).B = fVar3;
  (__this_00->fields).A = fVar4;
  (__this_00->fields).Image = (__this->fields).Image;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this_00->fields).PreserveAspect = (__this->fields).PreserveAspect;
  return __this_00;
}


// UI.MobileInputSkin$$FromColor
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputSkin__FromColor (UnityEngine_Color_o color, const MethodInfo* method);
// 0x5c72d60

UI_MobileInputSkin_o * UI_MobileInputSkin__FromColor(UnityEngine_Color_o color,MethodInfo *method)

{
  UI_MobileInputSkin_o *__this;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547917 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
  (__this->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Image);
  (__this->fields).PreserveAspect = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_28 = color.fields.r;
  fStack_24 = color.fields.g;
  (__this->fields).R = local_28;
  (__this->fields).G = fStack_24;
  (__this->fields).B = color.fields.b;
  (__this->fields).A = color.fields.a;
  return __this;
}


