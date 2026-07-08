using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000008")]
internal static class CustomTypesUnity
{
	[Token(Token = "0x400003A")]
	private const int SizeV2 = 8;

	[Token(Token = "0x400003B")]
	private const int SizeV3 = 12;

	[Token(Token = "0x400003C")]
	private const int SizeQuat = 16;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly byte[] memVector3;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly byte[] memVector2;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x10")]
	public static readonly byte[] memQuarternion;

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3BC56C0", Offset = "0x3BC56C0", VA = "0x3BC56C0")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3BC5910", Offset = "0x3BC5910", VA = "0x3BC5910")]
	private static short SerializeVector3(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3BC5B50", Offset = "0x3BC5B50", VA = "0x3BC5B50")]
	private static object DeserializeVector3(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3BC5DC0", Offset = "0x3BC5DC0", VA = "0x3BC5DC0")]
	private static short SerializeVector2(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3BC5FD0", Offset = "0x3BC5FD0", VA = "0x3BC5FD0")]
	private static object DeserializeVector2(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3BC6220", Offset = "0x3BC6220", VA = "0x3BC6220")]
	private static short SerializeQuaternion(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3BC6480", Offset = "0x3BC6480", VA = "0x3BC6480")]
	private static object DeserializeQuaternion(StreamBuffer inStream, short length)
	{
		return null;
	}
}
