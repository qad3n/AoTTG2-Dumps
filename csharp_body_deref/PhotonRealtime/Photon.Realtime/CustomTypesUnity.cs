// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.CustomTypesUnity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/CustomTypesUnity.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EBB010", Offset = "0x3EBB010", VA = "0x3EBB010")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3EBB260", Offset = "0x3EBB260", VA = "0x3EBB260")]
	private static short SerializeVector3(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3EBB4A0", Offset = "0x3EBB4A0", VA = "0x3EBB4A0")]
	private static object DeserializeVector3(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3EBB710", Offset = "0x3EBB710", VA = "0x3EBB710")]
	private static short SerializeVector2(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3EBB920", Offset = "0x3EBB920", VA = "0x3EBB920")]
	private static object DeserializeVector2(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3EBBB70", Offset = "0x3EBBB70", VA = "0x3EBBB70")]
	private static short SerializeQuaternion(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3EBBDD0", Offset = "0x3EBBDD0", VA = "0x3EBBDD0")]
	private static object DeserializeQuaternion(StreamBuffer inStream, short length)
	{
		return null;
	}
}
