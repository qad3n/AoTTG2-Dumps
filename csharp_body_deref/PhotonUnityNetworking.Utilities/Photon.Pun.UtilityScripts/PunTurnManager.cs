using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000029")]
public class PunTurnManager : MonoBehaviourPunCallbacks, IOnEventCallback
{
	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x28")]
	private Player sender;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x30")]
	public float TurnDuration;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x38")]
	public IPunTurnManagerCallbacks TurnManagerListener;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<Player> finishedPlayers;

	[Token(Token = "0x40000A7")]
	public const byte TurnManagerEventOffset = 0;

	[Token(Token = "0x40000A8")]
	public const byte EvMove = 1;

	[Token(Token = "0x40000A9")]
	public const byte EvFinalMove = 2;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x48")]
	private bool _isOverCallProcessed;

	[Token(Token = "0x1700000B")]
	public int Turn
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x3BF3200", Offset = "0x3BF3200", VA = "0x3BF3200")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x3BF3370", Offset = "0x3BF3370", VA = "0x3BF3370")]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float ElapsedTimeInTurn
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x3BF3560", Offset = "0x3BF3560", VA = "0x3BF3560")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float RemainingSecondsInTurn
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x3BF36F0", Offset = "0x3BF36F0", VA = "0x3BF36F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsCompletedByAll
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x3BF3720", Offset = "0x3BF3720", VA = "0x3BF3720")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsFinishedByMe
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x3BF3840", Offset = "0x3BF3840", VA = "0x3BF3840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsOver
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x3BF38B0", Offset = "0x3BF38B0", VA = "0x3BF38B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3BF38E0", Offset = "0x3BF38E0", VA = "0x3BF38E0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3BF38F0", Offset = "0x3BF38F0", VA = "0x3BF38F0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3BF3AF0", Offset = "0x3BF3AF0", VA = "0x3BF3AF0")]
	public void BeginTurn()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3BF3BE0", Offset = "0x3BF3BE0", VA = "0x3BF3BE0")]
	public void SendMove(object move, bool finished)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3BF4620", Offset = "0x3BF4620", VA = "0x3BF4620")]
	public bool GetPlayerFinishedTurn(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3BF4120", Offset = "0x3BF4120", VA = "0x3BF4120")]
	private void ProcessOnEvent(byte eventCode, object content, int senderId)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3BF4680", Offset = "0x3BF4680", VA = "0x3BF4680", Slot = "54")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3BF46D0", Offset = "0x3BF46D0", VA = "0x3BF46D0", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3BF4860", Offset = "0x3BF4860", VA = "0x3BF4860")]
	public PunTurnManager()
	{
	}
}
