// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Util.MonoPInvokeCallbackAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Util.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Mono.Util;

[Token(Token = "0x2000007")]
[Conditional("UNITY")]
[Conditional("FULL_AOT_RUNTIME")]
[Conditional("MONOTOUCH")]
[AttributeUsage(AttributeTargets.Method)]
internal sealed class MonoPInvokeCallbackAttribute : Attribute
{
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x451A770", Offset = "0x451A770", VA = "0x451A770")]
	public MonoPInvokeCallbackAttribute(Type t)
	{
	}
}
