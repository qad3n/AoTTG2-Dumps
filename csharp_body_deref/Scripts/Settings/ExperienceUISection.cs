// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceUISection
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceUISection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x200007E")]
public class ExperienceUISection
{
	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x18")]
	public List<string> Settings;

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ExperienceUISection()
	{
	}
}
