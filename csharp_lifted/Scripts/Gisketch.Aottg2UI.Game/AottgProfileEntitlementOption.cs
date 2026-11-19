// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200031B")]
internal readonly struct AottgProfileEntitlementOption
{
	[Token(Token = "0x4000FA5")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000FA6")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000FA7")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Icon;

	[Token(Token = "0x4000FA8")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x5802C40", Offset = "0x5801C40", VA = "0x5802C40")]
	public AottgProfileEntitlementOption(string id, string label, string icon, bool enabled = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementOption.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption$$.ctor): clean
		this.Id = id;
		this.Label = label;
		this.Icon = icon;
		this.Enabled = enabled;
		return;
	}
}
