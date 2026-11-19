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
[Token(Token = "0x2000002")]
public class PhotonAppSettings : ScriptableObject
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Core Photon Server/Cloud settings.")]
	public AppSettings AppSettings;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x0")]
	private static PhotonAppSettings instance;

	[Token(Token = "0x4000003")]
	private const string SettingsFileName = "VoiceAppSettings";

	[Token(Token = "0x4000004")]
	private const string PhotonVoiceFolderGUID = "d3a9df3027b4a45679a2a3e978dde78e";

	[Token(Token = "0x17000001")]
	public static PhotonAppSettings Instance
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x5724E90", Offset = "0x5723E90", VA = "0x5724E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x5724E10", Offset = "0x5723E10", VA = "0x5724E10")]
	public void UseCloud(string cloudAppid, string code = "")
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5724F20", Offset = "0x5723F20", VA = "0x5724F20")]
	public static void LoadOrCreateSettings()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x57251E0", Offset = "0x57241E0", VA = "0x57251E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x5725230", Offset = "0x5724230", VA = "0x5725230")]
	public PhotonAppSettings()
	{
	}
}
