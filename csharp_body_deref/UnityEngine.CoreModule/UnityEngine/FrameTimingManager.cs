using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000B0")]
[UnityEngine.Bindings.StaticAccessor("GetUncheckedRealGfxDevice().GetFrameTimingManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class FrameTimingManager
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x4A9C2F0", Offset = "0x4A9C2F0", VA = "0x4A9C2F0")]
	public static extern void CaptureFrameTimings();

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x4A9C320", Offset = "0x4A9C320", VA = "0x4A9C320")]
	public static uint GetLatestTimings(uint numFrames, FrameTiming[] timings)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x4A9C3E0", Offset = "0x4A9C3E0", VA = "0x4A9C3E0")]
	private static extern uint GetLatestTimings_Injected(uint numFrames, ref ManagedSpanWrapper timings);
}
