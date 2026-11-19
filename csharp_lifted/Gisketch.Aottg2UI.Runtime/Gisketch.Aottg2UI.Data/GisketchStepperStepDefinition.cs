// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchStepperStepDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchStepperStepDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000068")]
public sealed class GisketchStepperStepDefinition
{
	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x20")]
	public string titleKey;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x28")]
	public string text;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x30")]
	public string textKey;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x5261120", Offset = "0x5260120", VA = "0x5261120")]
	public GisketchStepperStepDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchStepperStepDefinition.c (Gisketch.Aottg2UI.Data.GisketchStepperStepDefinition$$.ctor): clean
		base();
		return;
	}
}
