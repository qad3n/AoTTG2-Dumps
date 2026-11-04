// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Sku
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000047")]
public struct Sku
{
	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	public long Id;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x8")]
	public SkuType Type;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x18")]
	public SkuPrice Price;
}
