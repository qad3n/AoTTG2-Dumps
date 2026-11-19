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

[Token(Token = "0x2000027")]
public class PunTurnManager : MonoBehaviourPunCallbacks, IOnEventCallback
{
	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x28")]
	private Player sender;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x30")]
	public float TurnDuration;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x38")]
	public IPunTurnManagerCallbacks TurnManagerListener;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<Player> finishedPlayers;

	[Token(Token = "0x40000A2")]
	public const byte TurnManagerEventOffset = 0;

	[Token(Token = "0x40000A3")]
	public const byte EvMove = 1;

	[Token(Token = "0x40000A4")]
	public const byte EvFinalMove = 2;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x48")]
	private bool _isOverCallProcessed;

	[Token(Token = "0x1700000B")]
	public int Turn
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x56F66B0", Offset = "0x56F56B0", VA = "0x56F66B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x56F6830", Offset = "0x56F5830", VA = "0x56F6830")]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float ElapsedTimeInTurn
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x56F6A30", Offset = "0x56F5A30", VA = "0x56F6A30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float RemainingSecondsInTurn
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x56F6BC0", Offset = "0x56F5BC0", VA = "0x56F6BC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsCompletedByAll
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x56F6BF0", Offset = "0x56F5BF0", VA = "0x56F6BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsFinishedByMe
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x56F6D10", Offset = "0x56F5D10", VA = "0x56F6D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsOver
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x56F6D80", Offset = "0x56F5D80", VA = "0x56F6D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x56F6DB0", Offset = "0x56F5DB0", VA = "0x56F6DB0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x56F6DC0", Offset = "0x56F5DC0", VA = "0x56F6DC0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x56F6FC0", Offset = "0x56F5FC0", VA = "0x56F6FC0")]
	public void BeginTurn()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x56F70B0", Offset = "0x56F60B0", VA = "0x56F70B0")]
	public void SendMove(object move, bool finished)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x56F7B10", Offset = "0x56F6B10", VA = "0x56F7B10")]
	public bool GetPlayerFinishedTurn(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x56F7600", Offset = "0x56F6600", VA = "0x56F7600")]
	private void ProcessOnEvent(byte eventCode, object content, int senderId)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x56F7B70", Offset = "0x56F6B70", VA = "0x56F7B70", Slot = "54")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x56F7BC0", Offset = "0x56F6BC0", VA = "0x56F7BC0", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x56F7D50", Offset = "0x56F6D50", VA = "0x56F7D50")]
	public PunTurnManager()
	{
	}
}
