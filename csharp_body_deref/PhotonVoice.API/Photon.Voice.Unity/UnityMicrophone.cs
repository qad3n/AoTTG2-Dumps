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

[Token(Token = "0x20000AF")]
public static class UnityMicrophone
{
	[Token(Token = "0x17000103")]
	public static string[] devices
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x1D87A30", Offset = "0x1D86030", VA = "0x181D87A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x1D879E0", Offset = "0x1D85FE0", VA = "0x181D879E0")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x1D879F0", Offset = "0x1D85FF0", VA = "0x181D879F0")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x1D87A00", Offset = "0x1D86000", VA = "0x181D87A00")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x1D87A10", Offset = "0x1D86010", VA = "0x181D87A10")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x1D87A20", Offset = "0x1D86020", VA = "0x181D87A20")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x1D87330", Offset = "0x1D85930", VA = "0x181D87330")]
	public static string CheckDevice(ILogger logger, string logPref, string device, int suggestedFrequency, out int frequency)
	{
		return null;
	}
}
