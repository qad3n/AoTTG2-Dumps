// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.WaveformMonitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B4A500", Offset = "0x4B4A500", VA = "0x4B4A500", Slot = "7")]
	internal override void OnDisable()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4B4A530", Offset = "0x4B4A530", VA = "0x4B4A530", Slot = "5")]
	internal override bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4B4A540", Offset = "0x4B4A540", VA = "0x4B4A540", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4B4A5B0", Offset = "0x4B4A5B0", VA = "0x4B4A5B0", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4B4B320", Offset = "0x4B4B320", VA = "0x4B4B320")]
	public WaveformMonitor()
	{
	}
}
