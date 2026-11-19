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
		[Address(RVA = "0x56F5A70", Offset = "0x56F4A70", VA = "0x56F5A70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x56F5B10", Offset = "0x56F4B10", VA = "0x56F5B10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x56F5BB0", Offset = "0x56F4BB0", VA = "0x56F5BB0")]
	public void Start()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x56F5C60", Offset = "0x56F4C60", VA = "0x56F5C60", Slot = "28")]
	public override void OnEnable()
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x56F5F90", Offset = "0x56F4F90", VA = "0x56F5F90", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x56F5FF0", Offset = "0x56F4FF0", VA = "0x56F5FF0")]
	public void Update()
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x56F6240", Offset = "0x56F5240", VA = "0x56F6240")]
	private void OnTimerRuns()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x56F6150", Offset = "0x56F5150", VA = "0x56F6150")]
	private void OnTimerEnds()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x56F6250", Offset = "0x56F5250", VA = "0x56F6250", Slot = "46")]
	public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x56F5CD0", Offset = "0x56F4CD0", VA = "0x56F5CD0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x56F60F0", Offset = "0x56F50F0", VA = "0x56F60F0")]
	private float TimeRemaining()
	{
		return default(float);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x56F6300", Offset = "0x56F5300", VA = "0x56F6300")]
	public static bool TryGetStartTime(out int startTimestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x56F63E0", Offset = "0x56F53E0", VA = "0x56F63E0")]
	public static void SetStartTime()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x56F65B0", Offset = "0x56F55B0", VA = "0x56F65B0")]
	public CountdownTimer()
	{
	}
}
