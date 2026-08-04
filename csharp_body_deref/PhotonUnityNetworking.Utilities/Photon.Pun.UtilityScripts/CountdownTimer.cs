// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.CountdownTimer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Room/CountdownTimer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000027")]
public class CountdownTimer : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000028")]
	public delegate void CountdownTimerHasExpired();

	[Token(Token = "0x400009D")]
	public const string CountdownStartTime = "StartTime";

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x28")]
	[Header("Countdown time in seconds")]
	public float Countdown;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x2C")]
	private bool isTimerRunning;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x30")]
	private int startTime;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x38")]
	[Header("Reference to a Text component for visualizing the countdown")]
	public Text Text;

	[Token(Token = "0x14000004")]
	public static event CountdownTimerHasExpired OnCountdownTimerHasExpired
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x3F0AA70", Offset = "0x3F0AA70", VA = "0x3F0AA70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x3F0AB10", Offset = "0x3F0AB10", VA = "0x3F0AB10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3F0ABB0", Offset = "0x3F0ABB0", VA = "0x3F0ABB0")]
	public void Start()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3F0AC60", Offset = "0x3F0AC60", VA = "0x3F0AC60", Slot = "28")]
	public override void OnEnable()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3F0AF90", Offset = "0x3F0AF90", VA = "0x3F0AF90", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3F0AFF0", Offset = "0x3F0AFF0", VA = "0x3F0AFF0")]
	public void Update()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3F0B250", Offset = "0x3F0B250", VA = "0x3F0B250")]
	private void OnTimerRuns()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3F0B160", Offset = "0x3F0B160", VA = "0x3F0B160")]
	private void OnTimerEnds()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3F0B260", Offset = "0x3F0B260", VA = "0x3F0B260", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3F0ACD0", Offset = "0x3F0ACD0", VA = "0x3F0ACD0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3F0B100", Offset = "0x3F0B100", VA = "0x3F0B100")]
	private float TimeRemaining()
	{
		return default(float);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3F0B310", Offset = "0x3F0B310", VA = "0x3F0B310")]
	public static bool TryGetStartTime(out int startTimestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3F0B400", Offset = "0x3F0B400", VA = "0x3F0B400")]
	public static void SetStartTime()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3F0B5D0", Offset = "0x3F0B5D0", VA = "0x3F0B5D0")]
	public CountdownTimer()
	{
	}
}
