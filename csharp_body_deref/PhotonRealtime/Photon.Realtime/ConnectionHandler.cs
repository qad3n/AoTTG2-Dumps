using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Realtime;

[Token(Token = "0x2000005")]
public class ConnectionHandler : MonoBehaviour
{
	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x28")]
	public bool DisconnectAfterKeepAlive;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x2C")]
	public int KeepAliveInBackground;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x34")]
	public bool ApplyDontDestroyOnLoad;

	[NonSerialized]
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	public static bool AppQuits;

	[NonSerialized]
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x1")]
	public static bool AppPause;

	[NonSerialized]
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x2")]
	public static bool AppPauseRecent;

	[NonSerialized]
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x3")]
	public static bool AppOutOfFocus;

	[NonSerialized]
	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x4")]
	public static bool AppOutOfFocusRecent;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x35")]
	private byte fallbackThreadId;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x36")]
	private bool didSendAcks;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x38")]
	private readonly Stopwatch backgroundStopwatch;

	[Token(Token = "0x17000005")]
	public LoadBalancingClient Client
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x3BC45C0", Offset = "0x3BC45C0", VA = "0x3BC45C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x3BC45D0", Offset = "0x3BC45D0", VA = "0x3BC45D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int CountSendAcksOnly
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x3BC45E0", Offset = "0x3BC45E0", VA = "0x3BC45E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3BC45F0", Offset = "0x3BC45F0", VA = "0x3BC45F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool FallbackThreadRunning
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3BC4600", Offset = "0x3BC4600", VA = "0x3BC4600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3BC4610", Offset = "0x3BC4610", VA = "0x3BC4610")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3BC4650", Offset = "0x3BC4650", VA = "0x3BC4650")]
	public void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3BC4690", Offset = "0x3BC4690", VA = "0x3BC4690")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3BC4720", Offset = "0x3BC4720", VA = "0x3BC4720")]
	private void ResetAppPauseRecent()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3BC4760", Offset = "0x3BC4760", VA = "0x3BC4760")]
	public void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3BC47F0", Offset = "0x3BC47F0", VA = "0x3BC47F0")]
	private void ResetAppOutOfFocusRecent()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3BC4830", Offset = "0x3BC4830", VA = "0x3BC4830", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3BC48A0", Offset = "0x3BC48A0", VA = "0x3BC48A0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3BC4CB0", Offset = "0x3BC4CB0", VA = "0x3BC4CB0")]
	public static bool IsNetworkReachableUnity()
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3BC4D00", Offset = "0x3BC4D00", VA = "0x3BC4D00")]
	public void StartFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3BC49D0", Offset = "0x3BC49D0", VA = "0x3BC49D0")]
	public void StopFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3BC4DC0", Offset = "0x3BC4DC0", VA = "0x3BC4DC0")]
	public bool RealtimeFallbackThread()
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3BC4EC0", Offset = "0x3BC4EC0", VA = "0x3BC4EC0")]
	public ConnectionHandler()
	{
	}
}
