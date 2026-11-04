// Type: Gisketch.Aottg2UI.Code.AottgToastDefinition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgToastDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgToastDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* __this, int32_t variant, System_String_o* icon, System_String_o* title, System_String_o* content, System_String_o* updateKey, const MethodInfo* method);
// 0x1818c6c80

void Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
               (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this,int32_t variant,System_String_o *icon,
               System_String_o *title,System_String_o *content,System_String_o *updateKey,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Variant = variant;
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon,icon);
  (__this->fields).Title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Title,title);
  (__this->fields).Content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Content,content);
  (__this->fields).UpdateKey = updateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UpdateKey,updateKey);
  return;
}


