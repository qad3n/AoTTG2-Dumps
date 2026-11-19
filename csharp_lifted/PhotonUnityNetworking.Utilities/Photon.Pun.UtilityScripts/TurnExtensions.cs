// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.TurnExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/TurnBased/PunTurnManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000029")]
public static class TurnExtensions
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TurnPropKey;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TurnStartPropKey;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string FinishedTurnPropKey;

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x56F68C0", Offset = "0x56F58C0", VA = "0x56F68C0")]
	public static void SetTurn(this Room room, int turn, bool setStartTime = false)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x56F6730", Offset = "0x56F5730", VA = "0x56F6730")]
	public static int GetTurn(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x56F6AC0", Offset = "0x56F5AC0", VA = "0x56F6AC0")]
	public static int GetTurnStart(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x56F7DD0", Offset = "0x56F6DD0", VA = "0x56F7DD0")]
	public static int GetFinishedTurn(this Player player)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x56F7490", Offset = "0x56F6490", VA = "0x56F7490")]
	public static void SetFinishedTurn(this Player player, int turn)
	{
	}
}
