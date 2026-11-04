// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchSearchDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchSearchDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200005E")]
public sealed class GisketchSearchDefinition
{
	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x10")]
	public string title;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x18")]
	public string keywords;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x20")]
	public string icon;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x28")]
	public string kind;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x30")]
	public string sectionId;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x38")]
	public string sectionTitle;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x40")]
	public bool autoAddKeywords;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x41")]
	public bool hidden;

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchSearchDefinition()
	{
	}
}
