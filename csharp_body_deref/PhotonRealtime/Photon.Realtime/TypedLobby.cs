// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.TypedLobby
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000037")]
public class TypedLobby
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	public LobbyType Type;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypedLobby Default;

	[Token(Token = "0x17000036")]
	public bool IsDefault
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x3ECC0F0", Offset = "0x3ECC0F0", VA = "0x3ECC0F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3ECF130", Offset = "0x3ECF130", VA = "0x3ECF130")]
	internal TypedLobby()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3ECF140", Offset = "0x3ECF140", VA = "0x3ECF140")]
	public TypedLobby(string name, LobbyType type)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3ECF170", Offset = "0x3ECF170", VA = "0x3ECF170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
