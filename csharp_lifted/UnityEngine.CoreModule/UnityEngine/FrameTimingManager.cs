// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.FrameTimingManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000D5")]
[UnityEngine.Bindings.StaticAccessor("GetUncheckedRealGfxDevice().GetFrameTimingManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class FrameTimingManager
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x68D2900", Offset = "0x68D1900", VA = "0x68D2900")]
	public static extern void CaptureFrameTimings();

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x68D2930", Offset = "0x68D1930", VA = "0x68D2930")]
	public static uint GetLatestTimings(uint numFrames, FrameTiming[] timings)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x68D2A00", Offset = "0x68D1A00", VA = "0x68D2A00")]
	private static extern uint GetLatestTimings_Injected(uint numFrames, ref ManagedSpanWrapper timings);
}
