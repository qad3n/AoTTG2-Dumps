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
		[Address(RVA = "0x3BF25A0", Offset = "0x3BF25A0", VA = "0x3BF25A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x3BF2640", Offset = "0x3BF2640", VA = "0x3BF2640")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3BF26E0", Offset = "0x3BF26E0", VA = "0x3BF26E0")]
	public void Start()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3BF2790", Offset = "0x3BF2790", VA = "0x3BF2790", Slot = "28")]
	public override void OnEnable()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3BF2AC0", Offset = "0x3BF2AC0", VA = "0x3BF2AC0", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3BF2B20", Offset = "0x3BF2B20", VA = "0x3BF2B20")]
	public void Update()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3BF2D80", Offset = "0x3BF2D80", VA = "0x3BF2D80")]
	private void OnTimerRuns()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3BF2C90", Offset = "0x3BF2C90", VA = "0x3BF2C90")]
	private void OnTimerEnds()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3BF2D90", Offset = "0x3BF2D90", VA = "0x3BF2D90", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3BF2800", Offset = "0x3BF2800", VA = "0x3BF2800")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3BF2C30", Offset = "0x3BF2C30", VA = "0x3BF2C30")]
	private float TimeRemaining()
	{
		return default(float);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3BF2E40", Offset = "0x3BF2E40", VA = "0x3BF2E40")]
	public static bool TryGetStartTime(out int startTimestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3BF2F30", Offset = "0x3BF2F30", VA = "0x3BF2F30")]
	public static void SetStartTime()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3BF3100", Offset = "0x3BF3100", VA = "0x3BF3100")]
	public CountdownTimer()
	{
	}
}
