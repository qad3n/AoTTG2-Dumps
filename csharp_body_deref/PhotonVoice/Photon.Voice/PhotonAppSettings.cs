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
		[Address(RVA = "0x3C48EE0", Offset = "0x3C48EE0", VA = "0x3C48EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3C48E60", Offset = "0x3C48E60", VA = "0x3C48E60")]
	public void UseCloud(string cloudAppid, string code = "")
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3C48F70", Offset = "0x3C48F70", VA = "0x3C48F70")]
	public static void LoadOrCreateSettings()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3C49220", Offset = "0x3C49220", VA = "0x3C49220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3C49270", Offset = "0x3C49270", VA = "0x3C49270")]
	public PhotonAppSettings()
	{
	}
}
