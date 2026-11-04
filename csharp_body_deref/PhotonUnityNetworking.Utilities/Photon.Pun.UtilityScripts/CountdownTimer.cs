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

[Token(Token = "0x2000025")]
public class CountdownTimer : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000026")]
	public delegate void CountdownTimerHasExpired();

	[Token(Token = "0x4000098")]
	public const string CountdownStartTime = "StartTime";

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x28")]
	[Header("Countdown time in seconds")]
	public float Countdown;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x2C")]
	private bool isTimerRunning;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x30")]
	private int startTime;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x38")]
	[Header("Reference to a Text component for visualizing the countdown")]
	public Text Text;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static CountdownTimerHasExpired m_OnCountdownTimerHasExpired;

	[Token(Token = "0x14000004")]
	public static event CountdownTimerHasExpired OnCountdownTimerHasExpired
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x1D51260", Offset = "0x1D4F860", VA = "0x181D51260")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x1D51320", Offset = "0x1D4F920", VA = "0x181D51320")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x1D50F40", Offset = "0x1D4F540", VA = "0x181D50F40")]
	public void Start()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x1D50B60", Offset = "0x1D4F160", VA = "0x181D50B60", Slot = "28")]
	public override void OnEnable()
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x1D50AF0", Offset = "0x1D4F0F0", VA = "0x181D50AF0", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x1D51130", Offset = "0x1D4F730", VA = "0x181D51130")]
	public void Update()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x1D50D60", Offset = "0x1D4F360", VA = "0x181D50D60")]
	private void OnTimerRuns()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x1D50C80", Offset = "0x1D4F280", VA = "0x181D50C80")]
	private void OnTimerEnds()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x1D50BD0", Offset = "0x1D4F1D0", VA = "0x181D50BD0", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x1D50820", Offset = "0x1D4EE20", VA = "0x181D50820")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1D50FE0", Offset = "0x1D4F5E0", VA = "0x181D50FE0")]
	private float TimeRemaining()
	{
		return default(float);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x1D51050", Offset = "0x1D4F650", VA = "0x181D51050")]
	public static bool TryGetStartTime(out int startTimestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x1D50D70", Offset = "0x1D4F370", VA = "0x181D50D70")]
	public static void SetStartTime()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x1D51250", Offset = "0x1D4F850", VA = "0x181D51250")]
	public CountdownTimer()
	{
	}
}
