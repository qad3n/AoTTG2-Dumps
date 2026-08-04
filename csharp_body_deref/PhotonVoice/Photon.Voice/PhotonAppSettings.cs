// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.PhotonAppSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/PhotonAppSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice;

[Serializable]
[Token(Token = "0x2000004")]
public class PhotonAppSettings : ScriptableObject
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Core Photon Server/Cloud settings.")]
	public AppSettings AppSettings;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	private static PhotonAppSettings instance;

	[Token(Token = "0x4000008")]
	private const string SettingsFileName = "VoiceAppSettings";

	[Token(Token = "0x4000009")]
	private const string PhotonVoiceFolderGUID = "d3a9df3027b4a45679a2a3e978dde78e";

	[Token(Token = "0x17000001")]
	public static PhotonAppSettings Instance
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3F3B490", Offset = "0x3F3B490", VA = "0x3F3B490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3F3B410", Offset = "0x3F3B410", VA = "0x3F3B410")]
	public void UseCloud(string cloudAppid, string code = "")
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3F3B520", Offset = "0x3F3B520", VA = "0x3F3B520")]
	public static void LoadOrCreateSettings()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3F3B7D0", Offset = "0x3F3B7D0", VA = "0x3F3B7D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3F3B820", Offset = "0x3F3B820", VA = "0x3F3B820")]
	public PhotonAppSettings()
	{
	}
}
