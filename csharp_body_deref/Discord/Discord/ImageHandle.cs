// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ImageHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000039")]
public struct ImageHandle
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public ImageType Type;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x8")]
	public long Id;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x10")]
	public uint Size;

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x232F590", Offset = "0x232F590", VA = "0x232F590")]
	public static ImageHandle User(long id)
	{
		return default(ImageHandle);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x232F5B0", Offset = "0x232F5B0", VA = "0x232F5B0")]
	public static ImageHandle User(long id, uint size)
	{
		return default(ImageHandle);
	}
}
