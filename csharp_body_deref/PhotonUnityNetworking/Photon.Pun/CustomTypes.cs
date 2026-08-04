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

[Token(Token = "0x2000004")]
internal static class CustomTypes
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	public static readonly byte[] memPlayer;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3ED92B0", Offset = "0x3ED92B0", VA = "0x3ED92B0")]
	internal static void Register()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3ED93D0", Offset = "0x3ED93D0", VA = "0x3ED93D0")]
	private static short SerializePhotonPlayer(StreamBuffer outStream, object customobject)
	{
		return default(short);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3ED95C0", Offset = "0x3ED95C0", VA = "0x3ED95C0")]
	private static object DeserializePhotonPlayer(StreamBuffer inStream, short length)
	{
		return null;
	}
}
