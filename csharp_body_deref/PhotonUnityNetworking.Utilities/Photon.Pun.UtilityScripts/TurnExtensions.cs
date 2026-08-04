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

[Token(Token = "0x200002B")]
public static class TurnExtensions
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TurnPropKey;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TurnStartPropKey;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string FinishedTurnPropKey;

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3F0B8C0", Offset = "0x3F0B8C0", VA = "0x3F0B8C0")]
	public static void SetTurn(this Room room, int turn, bool setStartTime = false)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3F0B740", Offset = "0x3F0B740", VA = "0x3F0B740")]
	public static int GetTurn(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3F0BAC0", Offset = "0x3F0BAC0", VA = "0x3F0BAC0")]
	public static int GetTurnStart(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3F0CDB0", Offset = "0x3F0CDB0", VA = "0x3F0CDB0")]
	public static int GetFinishedTurn(this Player player)
	{
		return default(int);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3F0C490", Offset = "0x3F0C490", VA = "0x3F0C490")]
	public static void SetFinishedTurn(this Player player, int turn)
	{
	}
}
