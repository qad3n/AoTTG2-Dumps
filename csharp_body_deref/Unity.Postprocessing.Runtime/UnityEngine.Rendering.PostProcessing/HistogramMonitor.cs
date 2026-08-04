// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.HistogramMonitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000048")]
public sealed class HistogramMonitor : Monitor
{
	[Token(Token = "0x2000049")]
	public enum Channel
	{
		[Token(Token = "0x400013C")]
		Red,
		[Token(Token = "0x400013D")]
		Green,
		[Token(Token = "0x400013E")]
		Blue,
		[Token(Token = "0x400013F")]
		Master
	}

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x1C")]
	public int width;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x20")]
	public int height;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x24")]
	public Channel channel;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_Data;

	[Token(Token = "0x4000138")]
	private const int k_NumBins = 256;

	[Token(Token = "0x4000139")]
	private const int k_ThreadGroupSizeX = 16;

	[Token(Token = "0x400013A")]
	private const int k_ThreadGroupSizeY = 16;

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4B48200", Offset = "0x4B48200", VA = "0x4B48200", Slot = "7")]
	internal override void OnDisable()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4B48240", Offset = "0x4B48240", VA = "0x4B48240", Slot = "5")]
	internal override bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4B48250", Offset = "0x4B48250", VA = "0x4B48250", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4B482C0", Offset = "0x4B482C0", VA = "0x4B482C0", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4B48980", Offset = "0x4B48980", VA = "0x4B48980")]
	public HistogramMonitor()
	{
	}
}
