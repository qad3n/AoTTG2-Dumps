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
[Token(Token = "0x200004F")]
public sealed class GisketchStepperStepDefinition
{
	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x20")]
	public string titleKey;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x28")]
	public string text;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x30")]
	public string textKey;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3A5B2D0", Offset = "0x3A5B2D0", VA = "0x3A5B2D0")]
	public GisketchStepperStepDefinition()
	{
	}
}
