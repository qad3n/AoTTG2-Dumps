// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ConnectionHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/ConnectionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Realtime;

[Token(Token = "0x2000003")]
public class ConnectionHandler : MonoBehaviour
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x28")]
	public bool DisconnectAfterKeepAlive;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x2C")]
	public int KeepAliveInBackground;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x34")]
	public bool ApplyDontDestroyOnLoad;

	[NonSerialized]
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x0")]
	public static bool AppQuits;

	[NonSerialized]
	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x1")]
	public static bool AppPause;

	[NonSerialized]
	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x2")]
	public static bool AppPauseRecent;

	[NonSerialized]
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x3")]
	public static bool AppOutOfFocus;

	[NonSerialized]
	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x4")]
	public static bool AppOutOfFocusRecent;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x35")]
	private byte fallbackThreadId;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x36")]
	private bool didSendAcks;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x38")]
	private readonly Stopwatch backgroundStopwatch;

	[Token(Token = "0x17000005")]
	public LoadBalancingClient Client
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x56A6D10", Offset = "0x56A5D10", VA = "0x56A6D10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x56A6D20", Offset = "0x56A5D20", VA = "0x56A6D20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int CountSendAcksOnly
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x56A6D30", Offset = "0x56A5D30", VA = "0x56A6D30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x56A6D40", Offset = "0x56A5D40", VA = "0x56A6D40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool FallbackThreadRunning
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x56A6D50", Offset = "0x56A5D50", VA = "0x56A6D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x56A6D60", Offset = "0x56A5D60", VA = "0x56A6D60")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x56A6DA0", Offset = "0x56A5DA0", VA = "0x56A6DA0")]
	public void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x56A6DE0", Offset = "0x56A5DE0", VA = "0x56A6DE0")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x56A6E70", Offset = "0x56A5E70", VA = "0x56A6E70")]
	private void ResetAppPauseRecent()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x56A6EB0", Offset = "0x56A5EB0", VA = "0x56A6EB0")]
	public void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x56A6F40", Offset = "0x56A5F40", VA = "0x56A6F40")]
	private void ResetAppOutOfFocusRecent()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x56A6F80", Offset = "0x56A5F80", VA = "0x56A6F80", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x56A6FF0", Offset = "0x56A5FF0", VA = "0x56A6FF0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x56A7410", Offset = "0x56A6410", VA = "0x56A7410")]
	public static bool IsNetworkReachableUnity()
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x56A7460", Offset = "0x56A6460", VA = "0x56A7460")]
	public void StartFallbackSendAckThread()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x56A7120", Offset = "0x56A6120", VA = "0x56A7120")]
	public void StopFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x56A7520", Offset = "0x56A6520", VA = "0x56A7520")]
	public bool RealtimeFallbackThread()
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x56A7620", Offset = "0x56A6620", VA = "0x56A7620")]
	public ConnectionHandler()
	{
	}
}
