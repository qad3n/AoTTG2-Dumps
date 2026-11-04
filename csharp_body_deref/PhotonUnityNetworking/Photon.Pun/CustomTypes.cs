// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.CustomTypes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/CustomTypes.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000002")]
internal static class CustomTypes
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public static readonly byte[] memPlayer;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x1D2F1B0", Offset = "0x1D2D7B0", VA = "0x181D2F1B0")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x1D2F2D0", Offset = "0x1D2D8D0", VA = "0x181D2F2D0")]
	private static short SerializePhotonPlayer(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x1D2EF80", Offset = "0x1D2D580", VA = "0x181D2EF80")]
	private static object DeserializePhotonPlayer(StreamBuffer inStream, short length)
	{
		return null;
	}
}
