// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.TypedLobby
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000035")]
public class TypedLobby
{
	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x18")]
	public LobbyType Type;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypedLobby Default;

	[Token(Token = "0x17000036")]
	public bool IsDefault
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x56B8760", Offset = "0x56B7760", VA = "0x56B8760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x56BB770", Offset = "0x56BA770", VA = "0x56BB770")]
	internal TypedLobby()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x56BB780", Offset = "0x56BA780", VA = "0x56BB780")]
	public TypedLobby(string name, LobbyType type)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x56BB7B0", Offset = "0x56BA7B0", VA = "0x56BB7B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
