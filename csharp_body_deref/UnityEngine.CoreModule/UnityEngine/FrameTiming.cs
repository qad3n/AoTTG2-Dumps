using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000AF")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/FrameTiming.h")]
public struct FrameTiming
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("totalFrameTime")]
	public double cpuFrameTime;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("mainThreadActiveTime")]
	public double cpuMainThreadFrameTime;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("mainThreadPresentWaitTime")]
	public double cpuMainThreadPresentWaitTime;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("renderThreadActiveTime")]
	public double cpuRenderThreadFrameTime;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("gpuFrameTime")]
	public double gpuFrameTime;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("frameStartTimestamp")]
	public ulong frameStartTimestamp;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("firstSubmitTimestamp")]
	public ulong firstSubmitTimestamp;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("presentFrameTimestamp")]
	public ulong cpuTimePresentCalled;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.NativeName("frameCompleteTimestamp")]
	public ulong cpuTimeFrameComplete;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x48")]
	[UnityEngine.Bindings.NativeName("heightScale")]
	public float heightScale;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x4C")]
	[UnityEngine.Bindings.NativeName("widthScale")]
	public float widthScale;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x50")]
	[UnityEngine.Bindings.NativeName("syncInterval")]
	public uint syncInterval;
}
