// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchTooltipDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchTooltipDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000066")]
public sealed class GisketchTooltipDefinition
{
	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x18")]
	public string text;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x20")]
	public string textKey;

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5261100", Offset = "0x5260100", VA = "0x5261100")]
	public GisketchTooltipDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchTooltipDefinition.c (Gisketch.Aottg2UI.Data.GisketchTooltipDefinition$$.ctor): clean
		base();
		return;
	}
}
