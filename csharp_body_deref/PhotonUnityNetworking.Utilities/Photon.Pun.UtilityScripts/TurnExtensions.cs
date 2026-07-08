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
	[Address(RVA = "0x3BF33F0", Offset = "0x3BF33F0", VA = "0x3BF33F0")]
	public static void SetTurn(this Room room, int turn, bool setStartTime = false)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3BF3270", Offset = "0x3BF3270", VA = "0x3BF3270")]
	public static int GetTurn(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3BF35F0", Offset = "0x3BF35F0", VA = "0x3BF35F0")]
	public static int GetTurnStart(this RoomInfo room)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3BF48E0", Offset = "0x3BF48E0", VA = "0x3BF48E0")]
	public static int GetFinishedTurn(this Player player)
	{
		return default(int);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3BF3FC0", Offset = "0x3BF3FC0", VA = "0x3BF3FC0")]
	public static void SetFinishedTurn(this Player player, int turn)
	{
	}
}
