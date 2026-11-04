// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BE")]
internal readonly struct AottgProfileEntitlementOption
{
	[Token(Token = "0x4000E14")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000E15")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000E16")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Icon;

	[Token(Token = "0x4000E17")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x1E19210", Offset = "0x1E17810", VA = "0x181E19210")]
	public AottgProfileEntitlementOption(string id, string label, string icon, bool enabled = true)
	{
	}
}
