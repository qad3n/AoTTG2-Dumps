// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchStepperStepDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchStepperStepDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000062")]
public sealed class GisketchStepperStepDefinition
{
	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x20")]
	public string titleKey;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x28")]
	public string text;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x30")]
	public string textKey;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchStepperStepDefinition()
	{
	}
}
