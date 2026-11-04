// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.BurstRuntime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000068")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AudioModule" })]
internal static class BurstRuntime
{
	[Token(Token = "0x2000069")]
	private struct HashCode64<T>
	{
		[Token(Token = "0x4000116")]
		[FieldOffset(Offset = "0x0")]
		public static readonly long Value;
	}

	[Token(Token = "0x600014C")]
	public static long GetHashCode64<T>()
	{
		return default(long);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2955420", Offset = "0x2953A20", VA = "0x182955420")]
	internal static long HashStringWithFNV1A64(string text)
	{
		return default(long);
	}
}
