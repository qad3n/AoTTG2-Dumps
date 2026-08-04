// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PunTurnManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/TurnBased/PunTurnManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F0B6D0", Offset = "0x3F0B6D0", VA = "0x3F0B6D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x3F0B840", Offset = "0x3F0B840", VA = "0x3F0B840")]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float ElapsedTimeInTurn
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x3F0BA30", Offset = "0x3F0BA30", VA = "0x3F0BA30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float RemainingSecondsInTurn
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x3F0BBC0", Offset = "0x3F0BBC0", VA = "0x3F0BBC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsCompletedByAll
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x3F0BBF0", Offset = "0x3F0BBF0", VA = "0x3F0BBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsFinishedByMe
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x3F0BD10", Offset = "0x3F0BD10", VA = "0x3F0BD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsOver
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x3F0BD80", Offset = "0x3F0BD80", VA = "0x3F0BD80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3F0BDB0", Offset = "0x3F0BDB0", VA = "0x3F0BDB0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3F0BDC0", Offset = "0x3F0BDC0", VA = "0x3F0BDC0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3F0BFC0", Offset = "0x3F0BFC0", VA = "0x3F0BFC0")]
	public void BeginTurn()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3F0C0B0", Offset = "0x3F0C0B0", VA = "0x3F0C0B0")]
	public void SendMove(object move, bool finished)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3F0CAF0", Offset = "0x3F0CAF0", VA = "0x3F0CAF0")]
	public bool GetPlayerFinishedTurn(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3F0C5F0", Offset = "0x3F0C5F0", VA = "0x3F0C5F0")]
	private void ProcessOnEvent(byte eventCode, object content, int senderId)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3F0CB50", Offset = "0x3F0CB50", VA = "0x3F0CB50", Slot = "54")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3F0CBA0", Offset = "0x3F0CBA0", VA = "0x3F0CBA0", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3F0CD30", Offset = "0x3F0CD30", VA = "0x3F0CD30")]
	public PunTurnManager()
	{
	}
}
