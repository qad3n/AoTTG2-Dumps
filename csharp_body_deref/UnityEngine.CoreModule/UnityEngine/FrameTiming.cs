// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.FrameTiming
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000D3")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/FrameTiming.h")]
public struct FrameTiming
{
	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("totalFrameTime")]
	public double cpuFrameTime;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("mainThreadActiveTime")]
	public double cpuMainThreadFrameTime;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("mainThreadPresentWaitTime")]
	public double cpuMainThreadPresentWaitTime;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("renderThreadActiveTime")]
	public double cpuRenderThreadFrameTime;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("gpuFrameTime")]
	public double gpuFrameTime;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("frameStartTimestamp")]
	public ulong frameStartTimestamp;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("firstSubmitTimestamp")]
	public ulong firstSubmitTimestamp;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("presentFrameTimestamp")]
	public ulong cpuTimePresentCalled;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.NativeName("frameCompleteTimestamp")]
	public ulong cpuTimeFrameComplete;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x48")]
	[UnityEngine.Bindings.NativeName("heightScale")]
	public float heightScale;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x4C")]
	[UnityEngine.Bindings.NativeName("widthScale")]
	public float widthScale;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x50")]
	[UnityEngine.Bindings.NativeName("syncInterval")]
	public uint syncInterval;
}
