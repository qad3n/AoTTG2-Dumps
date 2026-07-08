using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x200001A")]
public static class UnityLogger
{
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3C5AF60", Offset = "0x3C5AF60", VA = "0x3C5AF60")]
	public static void Log(DebugLevel level, Object obj, string tag, string objName, string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3C5B1E0", Offset = "0x3C5B1E0", VA = "0x3C5B1E0")]
	private static string GetFormatString(DebugLevel level, string tag, string objName, string fmt)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3C5B3C0", Offset = "0x3C5B3C0", VA = "0x3C5B3C0")]
	private static string GetTimestamp()
	{
		return null;
	}
}
