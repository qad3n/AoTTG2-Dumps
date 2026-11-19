// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ImageHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000037")]
public struct ImageHandle
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public ImageType Type;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x8")]
	public long Id;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x10")]
	public uint Size;

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3140400", Offset = "0x313F400", VA = "0x3140400")]
	public static ImageHandle User(long id)
	{
		return default(ImageHandle);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3140420", Offset = "0x313F420", VA = "0x3140420")]
	public static ImageHandle User(long id, uint size)
	{
		return default(ImageHandle);
	}
}
