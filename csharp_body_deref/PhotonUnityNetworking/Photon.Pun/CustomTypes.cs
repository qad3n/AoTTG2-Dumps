using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000004")]
internal static class CustomTypes
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	public static readonly byte[] memPlayer;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3BF5DB0", Offset = "0x3BF5DB0", VA = "0x3BF5DB0")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3BF5ED0", Offset = "0x3BF5ED0", VA = "0x3BF5ED0")]
	private static short SerializePhotonPlayer(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3BF60C0", Offset = "0x3BF60C0", VA = "0x3BF60C0")]
	private static object DeserializePhotonPlayer(StreamBuffer inStream, short length)
	{
		return null;
	}
}
