// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ImeUnderline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000044")]
public struct ImeUnderline
{
	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	public int From;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x4")]
	public int To;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x8")]
	public uint Color;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0xC")]
	public uint BackgroundColor;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x10")]
	public bool Thick;
}
