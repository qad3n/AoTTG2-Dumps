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
		[Address(RVA = "0x3EB9F10", Offset = "0x3EB9F10", VA = "0x3EB9F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x3EB9F20", Offset = "0x3EB9F20", VA = "0x3EB9F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int CountSendAcksOnly
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x3EB9F30", Offset = "0x3EB9F30", VA = "0x3EB9F30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3EB9F40", Offset = "0x3EB9F40", VA = "0x3EB9F40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool FallbackThreadRunning
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3EB9F50", Offset = "0x3EB9F50", VA = "0x3EB9F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3EB9F60", Offset = "0x3EB9F60", VA = "0x3EB9F60")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3EB9FA0", Offset = "0x3EB9FA0", VA = "0x3EB9FA0")]
	public void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3EB9FE0", Offset = "0x3EB9FE0", VA = "0x3EB9FE0")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3EBA070", Offset = "0x3EBA070", VA = "0x3EBA070")]
	private void ResetAppPauseRecent()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3EBA0B0", Offset = "0x3EBA0B0", VA = "0x3EBA0B0")]
	public void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3EBA140", Offset = "0x3EBA140", VA = "0x3EBA140")]
	private void ResetAppOutOfFocusRecent()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3EBA180", Offset = "0x3EBA180", VA = "0x3EBA180", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3EBA1F0", Offset = "0x3EBA1F0", VA = "0x3EBA1F0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3EBA600", Offset = "0x3EBA600", VA = "0x3EBA600")]
	public static bool IsNetworkReachableUnity()
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3EBA650", Offset = "0x3EBA650", VA = "0x3EBA650")]
	public void StartFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3EBA320", Offset = "0x3EBA320", VA = "0x3EBA320")]
	public void StopFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3EBA710", Offset = "0x3EBA710", VA = "0x3EBA710")]
	public bool RealtimeFallbackThread()
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3EBA810", Offset = "0x3EBA810", VA = "0x3EBA810")]
	public ConnectionHandler()
	{
	}
}
