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

[Token(Token = "0x2000391")]
public struct RenderStateBlock : IEquatable<RenderStateBlock>
{
	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x0")]
	private BlendState m_BlendState;

	[Token(Token = "0x4000ACB")]
	[FieldOffset(Offset = "0x44")]
	private RasterState m_RasterState;

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x54")]
	private DepthState m_DepthState;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x56")]
	private StencilState m_StencilState;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x64")]
	private int m_StencilReference;

	[Token(Token = "0x4000ACF")]
	[FieldOffset(Offset = "0x68")]
	private RenderStateMask m_Mask;

	[Token(Token = "0x1700037A")]
	public BlendState blendState
	{
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x695DFD0", Offset = "0x695CFD0", VA = "0x695DFD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	public RasterState rasterState
	{
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x695E000", Offset = "0x695D000", VA = "0x695E000")]
		set
		{
		}
	}

	[Token(Token = "0x1700037C")]
	public DepthState depthState
	{
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x695E010", Offset = "0x695D010", VA = "0x695E010")]
		set
		{
		}
	}

	[Token(Token = "0x1700037D")]
	public StencilState stencilState
	{
		[Token(Token = "0x6001654")]
		[Address(RVA = "0x695E020", Offset = "0x695D020", VA = "0x695E020")]
		get
		{
			return default(StencilState);
		}
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x695E030", Offset = "0x695D030", VA = "0x695E030")]
		set
		{
		}
	}

	[Token(Token = "0x1700037E")]
	public int stencilReference
	{
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x695E040", Offset = "0x695D040", VA = "0x695E040")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001657")]
		[Address(RVA = "0x695E050", Offset = "0x695D050", VA = "0x695E050")]
		set
		{
		}
	}

	[Token(Token = "0x1700037F")]
	public RenderStateMask mask
	{
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x695E060", Offset = "0x695D060", VA = "0x695E060")]
		get
		{
			return default(RenderStateMask);
		}
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x695E070", Offset = "0x695D070", VA = "0x695E070")]
		set
		{
		}
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x695DDC0", Offset = "0x695CDC0", VA = "0x695DDC0")]
	public RenderStateBlock(RenderStateMask mask)
	{
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x695E080", Offset = "0x695D080", VA = "0x695E080", Slot = "4")]
	public bool Equals(RenderStateBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x695E2D0", Offset = "0x695D2D0", VA = "0x695E2D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x695E3E0", Offset = "0x695D3E0", VA = "0x695E3E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
