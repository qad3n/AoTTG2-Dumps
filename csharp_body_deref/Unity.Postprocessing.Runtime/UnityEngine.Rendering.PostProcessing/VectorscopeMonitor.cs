// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.VectorscopeMonitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200004D")]
public sealed class VectorscopeMonitor : Monitor
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x1C")]
	public int size;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x20")]
	public float exposure;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_Data;

	[Token(Token = "0x400014D")]
	private const int k_ThreadGroupSizeX = 16;

	[Token(Token = "0x400014E")]
	private const int k_ThreadGroupSizeY = 16;

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4B49B70", Offset = "0x4B49B70", VA = "0x4B49B70", Slot = "7")]
	internal override void OnDisable()
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4B49BA0", Offset = "0x4B49BA0", VA = "0x4B49BA0", Slot = "5")]
	internal override bool NeedsHalfRes()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4B49BB0", Offset = "0x4B49BB0", VA = "0x4B49BB0", Slot = "4")]
	internal override bool ShaderResourcesAvailable(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4B49C20", Offset = "0x4B49C20", VA = "0x4B49C20", Slot = "8")]
	internal override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4B4A4E0", Offset = "0x4B4A4E0", VA = "0x4B4A4E0")]
	public VectorscopeMonitor()
	{
	}
}
