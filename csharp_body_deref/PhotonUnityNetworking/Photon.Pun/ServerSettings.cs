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
[Token(Token = "0x2000026")]
[HelpURL("https://doc.photonengine.com/en-us/pun/v2/getting-started/initial-setup")]
public class ServerSettings : ScriptableObject
{
	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Core Photon Server/Cloud settings.")]
	public AppSettings AppSettings;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Developer build override for Best Region.")]
	public string DevRegion;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Log output by PUN.")]
	public PunLogLevel PunLogging;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x2C")]
	[Tooltip("Logs additional info for debugging.")]
	public bool EnableSupportLogger;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x2D")]
	[Tooltip("Enables apps to keep the connection without focus.")]
	public bool RunInBackground;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x2E")]
	[Tooltip("Simulates an online connection.\nPUN can be used as usual.")]
	public bool StartInOfflineMode;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("RPC name list.\nUsed as shortcut when sending calls.")]
	public List<string> RpcList;

	[Token(Token = "0x17000047")]
	public static string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3F0E970", Offset = "0x3F0E970", VA = "0x3F0E970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3F0E850", Offset = "0x3F0E850", VA = "0x3F0E850")]
	public void UseCloud(string cloudAppid, string code = "")
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3F0E8D0", Offset = "0x3F0E8D0", VA = "0x3F0E8D0")]
	public static bool IsAppId(string val)
	{
		return default(bool);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x3F0E9D0", Offset = "0x3F0E9D0", VA = "0x3F0E9D0")]
	public static void ResetBestRegionCodeInPreferences()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x3F0EA30", Offset = "0x3F0EA30", VA = "0x3F0EA30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x3F0EA80", Offset = "0x3F0EA80", VA = "0x3F0EA80")]
	public ServerSettings()
	{
	}
}
