using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200004A")]
public sealed class LightMeterMonitor : Monitor
{
	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x1C")]
	public int width;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x20")]
	public int height;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x24")]
	public bool showCurves;

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x48238B0", Offset = "0x48238B0", VA = "0x48238B0", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4823960", Offset = "0x4823960", VA = "0x4823960", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4824770", Offset = "0x4824770", VA = "0x4824770")]
	public LightMeterMonitor()
	{
	}
}
