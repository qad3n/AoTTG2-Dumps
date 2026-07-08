using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F4")]
internal struct FrameTimeSample
{
	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x0")]
	internal float FramesPerSecond;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x4")]
	internal float FullFrameTime;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x8")]
	internal float MainThreadCPUFrameTime;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0xC")]
	internal float MainThreadCPUPresentWaitTime;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x10")]
	internal float RenderThreadCPUFrameTime;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x14")]
	internal float GPUFrameTime;

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x48873E0", Offset = "0x48873E0", VA = "0x48873E0")]
	internal FrameTimeSample(float initValue)
	{
	}
}
