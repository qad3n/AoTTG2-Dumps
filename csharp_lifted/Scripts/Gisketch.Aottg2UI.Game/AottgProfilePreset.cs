// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePreset
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreset.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200031F")]
internal readonly struct AottgProfilePreset
{
	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Key;

	[Token(Token = "0x4000FB3")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000FB4")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Sprite;

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x5804950", Offset = "0x5803950", VA = "0x5804950")]
	public AottgProfilePreset(string key, string label, string sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreset.c (Gisketch.Aottg2UI.Game.AottgProfilePreset$$.ctor): clean
		this.Key = key;
		this.Label = label;
		this.Sprite = sprite;
		return;
	}
}
