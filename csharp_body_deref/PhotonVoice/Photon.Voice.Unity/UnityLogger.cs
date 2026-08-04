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

[Token(Token = "0x200001A")]
public static class UnityLogger
{
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3F4D510", Offset = "0x3F4D510", VA = "0x3F4D510")]
	public static void Log(DebugLevel level, Object obj, string tag, string objName, string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3F4D790", Offset = "0x3F4D790", VA = "0x3F4D790")]
	private static string GetFormatString(DebugLevel level, string tag, string objName, string fmt)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3F4D970", Offset = "0x3F4D970", VA = "0x3F4D970")]
	private static string GetTimestamp()
	{
		return null;
	}
}
