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

[Token(Token = "0x20000D4")]
[UnityEngine.Bindings.StaticAccessor("GetUncheckedRealGfxDevice().GetFrameTimingManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class FrameTimingManager
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x2EC7180", Offset = "0x2EC5780", VA = "0x182EC7180")]
	public static extern void CaptureFrameTimings();

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x2EC71F0", Offset = "0x2EC57F0", VA = "0x182EC71F0")]
	public static uint GetLatestTimings(uint numFrames, FrameTiming[] timings)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x2EC71B0", Offset = "0x2EC57B0", VA = "0x182EC71B0")]
	private static extern uint GetLatestTimings_Injected(uint numFrames, ref ManagedSpanWrapper timings);
}
