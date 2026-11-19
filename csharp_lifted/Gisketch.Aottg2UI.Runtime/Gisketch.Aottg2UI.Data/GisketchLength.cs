// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchLength
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchLength.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200006C")]
public sealed class GisketchLength
{
	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x10")]
	public float value;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x18")]
	public string unit;

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x5259DF0", Offset = "0x5258DF0", VA = "0x5259DF0")]
	public GisketchLength()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchLength.c (Gisketch.Aottg2UI.Data.GisketchLength$$.ctor): clean
		base();
		return;
	}
}
