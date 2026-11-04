// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A9")]
internal struct AottgGuildPresetDefinition
{
	[Token(Token = "0x4000DCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000DD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000DD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly AottgGuildPresetKind Kind;

	[Token(Token = "0x4000DD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Sprite;

	[Token(Token = "0x4000DD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly float ImageScale;

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x1E12D20", Offset = "0x1E11320", VA = "0x181E12D20")]
	public AottgGuildPresetDefinition(string id, string label, AottgGuildPresetKind kind, [Optional] string sprite, float imageScale = 1f)
	{
	}
}
