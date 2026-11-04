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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int CountSendAcksOnly
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool FallbackThreadRunning
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x1D132F0", Offset = "0x1D118F0", VA = "0x181D132F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1D13180", Offset = "0x1D11780", VA = "0x181D13180")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1D12D90", Offset = "0x1D11390", VA = "0x181D12D90")]
	public void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1D12CF0", Offset = "0x1D112F0", VA = "0x181D12CF0")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1D13080", Offset = "0x1D11680", VA = "0x181D13080")]
	private void ResetAppPauseRecent()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1D12C40", Offset = "0x1D11240", VA = "0x181D12C40")]
	public void OnApplicationFocus(bool focus)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D13040", Offset = "0x1D11640", VA = "0x181D13040")]
	private void ResetAppOutOfFocusRecent()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D12B80", Offset = "0x1D11180", VA = "0x181D12B80", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x1D12DD0", Offset = "0x1D113D0", VA = "0x181D12DD0", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D12BF0", Offset = "0x1D111F0", VA = "0x181D12BF0")]
	public static bool IsNetworkReachableUnity()
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D130C0", Offset = "0x1D116C0", VA = "0x181D130C0")]
	public void StartFallbackSendAckThread()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1D13200", Offset = "0x1D11800", VA = "0x181D13200")]
	public void StopFallbackSendAckThread()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1D12EF0", Offset = "0x1D114F0", VA = "0x181D12EF0")]
	public bool RealtimeFallbackThread()
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x1D13270", Offset = "0x1D11870", VA = "0x181D13270")]
	public ConnectionHandler()
	{
	}
}
