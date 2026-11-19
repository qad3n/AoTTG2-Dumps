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

[Token(Token = "0x2000006")]
internal static class CustomTypesUnity
{
	[Token(Token = "0x4000035")]
	private const int SizeV2 = 8;

	[Token(Token = "0x4000036")]
	private const int SizeV3 = 12;

	[Token(Token = "0x4000037")]
	private const int SizeQuat = 16;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x0")]
	public static readonly byte[] memVector3;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x8")]
	public static readonly byte[] memVector2;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly byte[] memQuarternion;

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x56A7DF0", Offset = "0x56A6DF0", VA = "0x56A7DF0")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x56A8040", Offset = "0x56A7040", VA = "0x56A8040")]
	private static short SerializeVector3(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x56A8240", Offset = "0x56A7240", VA = "0x56A8240")]
	private static object DeserializeVector3(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x56A8490", Offset = "0x56A7490", VA = "0x56A8490")]
	private static short SerializeVector2(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x56A8680", Offset = "0x56A7680", VA = "0x56A8680")]
	private static object DeserializeVector2(StreamBuffer inStream, short length)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x56A8880", Offset = "0x56A7880", VA = "0x56A8880")]
	private static short SerializeQuaternion(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x56A8AB0", Offset = "0x56A7AB0", VA = "0x56A8AB0")]
	private static object DeserializeQuaternion(StreamBuffer inStream, short length)
	{
		return null;
	}
}
