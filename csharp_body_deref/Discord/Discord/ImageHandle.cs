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
	[Address(RVA = "0x530AD0", Offset = "0x52F0D0", VA = "0x180530AD0")]
	public static ImageHandle User(long id)
	{
		return default(ImageHandle);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x530AB0", Offset = "0x52F0B0", VA = "0x180530AB0")]
	public static ImageHandle User(long id, uint size)
	{
		return default(ImageHandle);
	}
}
