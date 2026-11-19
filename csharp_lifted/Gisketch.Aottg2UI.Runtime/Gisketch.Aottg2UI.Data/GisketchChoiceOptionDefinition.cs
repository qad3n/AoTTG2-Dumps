// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchChoiceOptionDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchChoiceOptionDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000067")]
public sealed class GisketchChoiceOptionDefinition
{
	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x10")]
	public string value;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x18")]
	public string text;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x20")]
	public string textKey;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x28")]
	public bool enabled;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x30")]
	public string tooltip;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x38")]
	public string tooltipKey;

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x5261110", Offset = "0x5260110", VA = "0x5261110")]
	public GisketchChoiceOptionDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchChoiceOptionDefinition.c (Gisketch.Aottg2UI.Data.GisketchChoiceOptionDefinition$$.ctor): clean
		this.enabled = true;
		base();
		return;
	}
}
