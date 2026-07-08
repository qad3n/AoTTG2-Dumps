using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200004E")]
public sealed class WaveformMonitor : Monitor
{
	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x1C")]
	public float exposure;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x20")]
	public int height;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_Data;

	[Token(Token = "0x4000152")]
	private const int k_ThreadGroupSize = 256;

	[Token(Token = "0x4000153")]
	private const int k_ThreadGroupSizeX = 16;

	[Token(Token = "0x4000154")]
	private const int k_ThreadGroupSizeY = 16;

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4825410", Offset = "0x4825410", VA = "0x4825410", Slot = "7")]
	internal override void OnDisable()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4825440", Offset = "0x4825440", VA = "0x4825440", Slot = "5")]
	internal override bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4825450", Offset = "0x4825450", VA = "0x4825450", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x48254C0", Offset = "0x48254C0", VA = "0x48254C0", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4826230", Offset = "0x4826230", VA = "0x4826230")]
	public WaveformMonitor()
	{
	}
}
