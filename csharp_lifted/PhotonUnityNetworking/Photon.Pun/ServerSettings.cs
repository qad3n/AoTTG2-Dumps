// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.ServerSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/ServerSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun;

[Serializable]
[Token(Token = "0x2000024")]
[HelpURL("https://doc.photonengine.com/en-us/pun/v2/getting-started/initial-setup")]
public class ServerSettings : ScriptableObject
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Core Photon Server/Cloud settings.")]
	public AppSettings AppSettings;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Developer build override for Best Region.")]
	public string DevRegion;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Log output by PUN.")]
	public PunLogLevel PunLogging;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x2C")]
	[Tooltip("Logs additional info for debugging.")]
	public bool EnableSupportLogger;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x2D")]
	[Tooltip("Enables apps to keep the connection without focus.")]
	public bool RunInBackground;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x2E")]
	[Tooltip("Simulates an online connection.\nPUN can be used as usual.")]
	public bool StartInOfflineMode;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("RPC name list.\nUsed as shortcut when sending calls.")]
	public List<string> RpcList;

	[Token(Token = "0x17000047")]
	public static string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x56F9900", Offset = "0x56F8900", VA = "0x56F9900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x56F97E0", Offset = "0x56F87E0", VA = "0x56F97E0")]
	public void UseCloud(string cloudAppid, string code = "")
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x56F9860", Offset = "0x56F8860", VA = "0x56F9860")]
	public static bool IsAppId(string val)
	{
		return default(bool);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x56F9960", Offset = "0x56F8960", VA = "0x56F9960")]
	public static void ResetBestRegionCodeInPreferences()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x56F99C0", Offset = "0x56F89C0", VA = "0x56F99C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x56F9A10", Offset = "0x56F8A10", VA = "0x56F9A10")]
	public ServerSettings()
	{
	}
}
