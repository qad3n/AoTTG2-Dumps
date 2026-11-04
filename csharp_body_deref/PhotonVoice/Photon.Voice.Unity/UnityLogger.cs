// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UnityLogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/VoiceLogger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000018")]
public static class UnityLogger
{
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1D95340", Offset = "0x1D93940", VA = "0x181D95340")]
	public static void Log(DebugLevel level, Object obj, string tag, string objName, string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1D94FD0", Offset = "0x1D935D0", VA = "0x181D94FD0")]
	private static string GetFormatString(DebugLevel level, string tag, string objName, string fmt)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1D95290", Offset = "0x1D93890", VA = "0x181D95290")]
	private static string GetTimestamp()
	{
		return null;
	}
}
