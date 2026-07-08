using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000185")]
internal readonly struct AottgProfileEntitlementOption
{
	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Icon;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool Enabled;

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x40F4670", Offset = "0x40F4670", VA = "0x40F4670")]
	public AottgProfileEntitlementOption(string id, string label, string icon, bool enabled = true)
	{
	}
}
