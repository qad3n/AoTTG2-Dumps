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
		[Address(RVA = "0x1D5D180", Offset = "0x1D5B780", VA = "0x181D5D180")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x1D5D2F0", Offset = "0x1D5B8F0", VA = "0x181D5D2F0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float ElapsedTimeInTurn
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x1D5CB70", Offset = "0x1D5B170", VA = "0x181D5CB70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float RemainingSecondsInTurn
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x1D5CFE0", Offset = "0x1D5B5E0", VA = "0x181D5CFE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool IsCompletedByAll
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x1D5CD00", Offset = "0x1D5B300", VA = "0x181D5CD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public bool IsFinishedByMe
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x1D5CDB0", Offset = "0x1D5B3B0", VA = "0x181D5CDB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsOver
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x1D5CE30", Offset = "0x1D5B430", VA = "0x181D5CE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Start()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1D5C8C0", Offset = "0x1D5AEC0", VA = "0x181D5C8C0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1D5BDC0", Offset = "0x1D5A3C0", VA = "0x181D5BDC0")]
	public void BeginTurn()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1D5C4A0", Offset = "0x1D5AAA0", VA = "0x181D5C4A0")]
	public void SendMove(object move, bool finished)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1D5BFA0", Offset = "0x1D5A5A0", VA = "0x181D5BFA0")]
	public bool GetPlayerFinishedTurn(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1D5C140", Offset = "0x1D5A740", VA = "0x181D5C140")]
	private void ProcessOnEvent(byte eventCode, object content, int senderId)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1D5C010", Offset = "0x1D5A610", VA = "0x181D5C010", Slot = "54")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1D5C080", Offset = "0x1D5A680", VA = "0x181D5C080", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1D5CAF0", Offset = "0x1D5B0F0", VA = "0x181D5CAF0")]
	public PunTurnManager()
	{
	}
}
