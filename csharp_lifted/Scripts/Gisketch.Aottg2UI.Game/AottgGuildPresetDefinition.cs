// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000306")]
internal struct AottgGuildPresetDefinition
{
	[Token(Token = "0x4000F64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000F65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000F66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly AottgGuildPresetKind Kind;

	[Token(Token = "0x4000F67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Sprite;

	[Token(Token = "0x4000F68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly float ImageScale;

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x57F6A20", Offset = "0x57F5A20", VA = "0x57F6A20")]
	public AottgGuildPresetDefinition(string id, string label, AottgGuildPresetKind kind, [Optional] string sprite, float imageScale = 1f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetDefinition.c (Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition$$.ctor): clean
		this.Id = id;
		this.Label = label;
		this.Kind = kind;
		this.Sprite = sprite;
		this.ImageScale = imageScale;
		return;
	}
}
