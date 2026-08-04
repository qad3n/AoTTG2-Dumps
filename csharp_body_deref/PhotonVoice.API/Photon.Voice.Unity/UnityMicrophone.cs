// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UnityMicrophone
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/UnityMicrophone.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000AD")]
public static class UnityMicrophone
{
	[Token(Token = "0x17000100")]
	public static string[] devices
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x3F38570", Offset = "0x3F38570", VA = "0x3F38570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3F39700", Offset = "0x3F39700", VA = "0x3F39700")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3F3AF50", Offset = "0x3F3AF50", VA = "0x3F3AF50")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3F399B0", Offset = "0x3F399B0", VA = "0x3F399B0")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3F3AF60", Offset = "0x3F3AF60", VA = "0x3F3AF60")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3F39660", Offset = "0x3F39660", VA = "0x3F39660")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3F38CF0", Offset = "0x3F38CF0", VA = "0x3F38CF0")]
	public static string CheckDevice(ILogger logger, string logPref, string device, int suggestedFrequency, out int frequency)
	{
		return null;
	}
}
