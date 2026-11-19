// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchMotionDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200006A")]
public sealed class GisketchMotionDefinition
{
	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x10")]
	public string preset;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x18")]
	public string group;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x24")]
	public float delay;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x28")]
	public float stagger;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x2C")]
	public int order;

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x5261130", Offset = "0x5260130", VA = "0x5261130")]
	public GisketchMotionDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionDefinition.c (Gisketch.Aottg2UI.Data.GisketchMotionDefinition$$.ctor): clean
		base();
		return;
	}
}
