using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F1")]
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

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x4B08BF0", Offset = "0x4B08BF0", VA = "0x4B08BF0", Slot = "4")]
	public bool Equals(RenderStateBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x4B08E50", Offset = "0x4B08E50", VA = "0x4B08E50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x4B08F60", Offset = "0x4B08F60", VA = "0x4B08F60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
