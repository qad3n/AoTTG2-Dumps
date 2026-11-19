// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchUIBindingDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchUIBindingDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200006B")]
public sealed class GisketchUIBindingDefinition
{
	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x10")]
	public string text;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x18")]
	public string sprite;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x20")]
	public string value;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x28")]
	public string visible;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x30")]
	public string enabled;

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x5261140", Offset = "0x5260140", VA = "0x5261140")]
	public GisketchUIBindingDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchUIBindingDefinition.c (Gisketch.Aottg2UI.Data.GisketchUIBindingDefinition$$.ctor): clean
		base();
		return;
	}
}
