// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.LightMeterMonitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B489A0", Offset = "0x4B489A0", VA = "0x4B489A0", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4B48A50", Offset = "0x4B48A50", VA = "0x4B48A50", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4B49860", Offset = "0x4B49860", VA = "0x4B49860")]
	public LightMeterMonitor()
	{
	}
}
