// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.Utils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000042")]
internal static class Utils
{
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x6786B10", Offset = "0x6785B10", VA = "0x6786B10")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x6786B90", Offset = "0x6785B90", VA = "0x6786B90")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void CheckArgIsNotNull(object obj, string argName)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x6786BE0", Offset = "0x6785BE0", VA = "0x6786BE0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void CheckArg(bool condition, string message)
	{
	}

	[Token(Token = "0x60000F7")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void CheckArgRange<T>(T value, T minIncluded, T maxExcluded, string argName) where T : IComparable
	{
	}
}
