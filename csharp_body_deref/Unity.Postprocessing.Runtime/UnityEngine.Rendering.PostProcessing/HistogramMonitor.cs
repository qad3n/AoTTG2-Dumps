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
	[Address(RVA = "0x4823110", Offset = "0x4823110", VA = "0x4823110", Slot = "7")]
	internal override void OnDisable()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4823150", Offset = "0x4823150", VA = "0x4823150", Slot = "5")]
	internal override bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4823160", Offset = "0x4823160", VA = "0x4823160", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x48231D0", Offset = "0x48231D0", VA = "0x48231D0", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4823890", Offset = "0x4823890", VA = "0x4823890")]
	public HistogramMonitor()
	{
	}
}
