// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderStateBlock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F4")]
public struct RenderStateBlock : IEquatable<RenderStateBlock>
{
	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0x0")]
	private BlendState m_BlendState;

	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x44")]
	private RasterState m_RasterState;

	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x54")]
	private DepthState m_DepthState;

	[Token(Token = "0x40008E6")]
	[FieldOffset(Offset = "0x56")]
	private StencilState m_StencilState;

	[Token(Token = "0x40008E7")]
	[FieldOffset(Offset = "0x64")]
	private int m_StencilReference;

	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x68")]
	private RenderStateMask m_Mask;

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x4E30520", Offset = "0x4E30520", VA = "0x4E30520", Slot = "4")]
	public bool Equals(RenderStateBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x4E30780", Offset = "0x4E30780", VA = "0x4E30780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x4E30890", Offset = "0x4E30890", VA = "0x4E30890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
