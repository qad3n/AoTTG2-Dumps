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

[Token(Token = "0x20000AB")]
public static class UnityMicrophone
{
	[Token(Token = "0x17000100")]
	public static string[] devices
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x57224B0", Offset = "0x57214B0", VA = "0x57224B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x57234D0", Offset = "0x57224D0", VA = "0x57234D0")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x5724A60", Offset = "0x5723A60", VA = "0x5724A60")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x5723780", Offset = "0x5722780", VA = "0x5723780")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x5724A70", Offset = "0x5723A70", VA = "0x5724A70")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x5723430", Offset = "0x5722430", VA = "0x5723430")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x5722AC0", Offset = "0x5721AC0", VA = "0x5722AC0")]
	public static string CheckDevice(ILogger logger, string logPref, string device, int suggestedFrequency, out int frequency)
	{
		return null;
	}
}
