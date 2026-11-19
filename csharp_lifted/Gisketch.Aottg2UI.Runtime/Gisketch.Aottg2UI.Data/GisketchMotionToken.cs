// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchMotionToken
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionToken.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000072")]
public sealed class GisketchMotionToken
{
	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x18")]
	public string preset;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x5261240", Offset = "0x5260240", VA = "0x5261240")]
	public GisketchMotionToken()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionToken.c (Gisketch.Aottg2UI.Data.GisketchMotionToken$$.ctor): clean
		base();
		return;
	}
}
