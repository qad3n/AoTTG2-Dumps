using Il2CppDummyDll;

namespace Photon;

[Token(Token = "0x20006CC")]
internal class CustomSerialization
{
	[Token(Token = "0x60043B2")]
	[Address(RVA = "0x404EE80", Offset = "0x404EE80", VA = "0x404EE80")]
	public static void Init()
	{
	}

	[Token(Token = "0x60043B3")]
	[Address(RVA = "0x404EE90", Offset = "0x404EE90", VA = "0x404EE90")]
	internal static void Register()
	{
	}

	[Token(Token = "0x60043B4")]
	[Address(RVA = "0x404EFB0", Offset = "0x404EFB0", VA = "0x404EFB0")]
	public static object DeserializeColor(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60043B5")]
	[Address(RVA = "0x404F070", Offset = "0x404F070", VA = "0x404F070")]
	public static byte[] SerializeColor(object obj)
	{
		return null;
	}

	[Token(Token = "0x60043B6")]
	[Address(RVA = "0x404F190", Offset = "0x404F190", VA = "0x404F190")]
	public CustomSerialization()
	{
	}
}
