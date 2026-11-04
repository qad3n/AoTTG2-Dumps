// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.Utils
// Update status: NEW in this game update
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
	[Address(RVA = "0x2D95AC0", Offset = "0x2D940C0", VA = "0x182D95AC0")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2D95A00", Offset = "0x2D94000", VA = "0x182D95A00")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void CheckArgIsNotNull(object obj, string argName)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2D95A60", Offset = "0x2D94060", VA = "0x182D95A60")]
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
