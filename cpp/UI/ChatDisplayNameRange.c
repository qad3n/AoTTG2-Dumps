// Type: UI.ChatDisplayNameRange
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ChatDisplayNameRange.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayNameRange$$.ctor
// il2cpp: void UI_ChatDisplayNameRange___ctor (UI_ChatDisplayNameRange_o __this, int32_t sourceStartIndex, int32_t sourceEndIndex, const MethodInfo* method);
// 0x43a69e0

void UI_ChatDisplayNameRange___ctor
               (UI_ChatDisplayNameRange_o __this,int32_t sourceStartIndex,int32_t sourceEndIndex,
               MethodInfo *method)

{
  *(int32_t *)__this.fields = sourceStartIndex;
  *(int32_t *)((long)__this.fields + 4) = sourceEndIndex;
  return;
}


// UI.ChatDisplayNameRange$$get_IsValid
// il2cpp: bool UI_ChatDisplayNameRange__get_IsValid (UI_ChatDisplayNameRange_o __this, const MethodInfo* method);
// 0x43a69f0

bool_conflict UI_ChatDisplayNameRange__get_IsValid(UI_ChatDisplayNameRange_o __this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = *(int *)__this.fields;
  if (-1 < iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)((long)__this.fields + 4));
  }
  return 0;
}


// UI.ChatDisplayNameRange$$ContainsSourceIndex
// il2cpp: bool UI_ChatDisplayNameRange__ContainsSourceIndex (UI_ChatDisplayNameRange_o __this, int32_t index, const MethodInfo* method);
// 0x43a6a00

bool_conflict
UI_ChatDisplayNameRange__ContainsSourceIndex
          (UI_ChatDisplayNameRange_o __this,int32_t index,MethodInfo *method)

{
  undefined8 in_RAX;
  
  if (index < *(int *)__this.fields) {
    return 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),index < *(int *)((long)__this.fields + 4));
}


