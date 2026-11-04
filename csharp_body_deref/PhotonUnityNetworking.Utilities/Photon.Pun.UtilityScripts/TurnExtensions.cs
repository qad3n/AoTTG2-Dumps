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
	[Address(RVA = "0x1D60330", Offset = "0x1D5E930", VA = "0x181D60330")]
	public static void SetTurn(this Room room, int turn, bool setStartTime = false)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x1D600C0", Offset = "0x1D5E6C0", VA = "0x181D600C0")]
	public static int GetTurn(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x1D5FFB0", Offset = "0x1D5E5B0", VA = "0x181D5FFB0")]
	public static int GetTurnStart(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x1D5FE20", Offset = "0x1D5E420", VA = "0x181D5FE20")]
	public static int GetFinishedTurn(this Player player)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x1D601D0", Offset = "0x1D5E7D0", VA = "0x181D601D0")]
	public static void SetFinishedTurn(this Player player, int turn)
	{
	}
}
