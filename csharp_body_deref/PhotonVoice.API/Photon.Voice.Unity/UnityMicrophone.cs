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
		[Address(RVA = "0x3C42C20", Offset = "0x3C42C20", VA = "0x3C42C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3C43DB0", Offset = "0x3C43DB0", VA = "0x3C43DB0")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3C45600", Offset = "0x3C45600", VA = "0x3C45600")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3C44060", Offset = "0x3C44060", VA = "0x3C44060")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3C45610", Offset = "0x3C45610", VA = "0x3C45610")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3C43D10", Offset = "0x3C43D10", VA = "0x3C43D10")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3C433A0", Offset = "0x3C433A0", VA = "0x3C433A0")]
	public static string CheckDevice(ILogger logger, string logPref, string device, int suggestedFrequency, out int frequency)
	{
		return null;
	}
}
