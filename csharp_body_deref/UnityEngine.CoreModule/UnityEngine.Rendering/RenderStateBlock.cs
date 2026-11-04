// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderStateBlock
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C0")]
public struct RenderStateBlock : IEquatable<RenderStateBlock>
{
	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x0")]
	private BlendState m_BlendState;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x44")]
	private RasterState m_RasterState;

	[Token(Token = "0x4000BFF")]
	[FieldOffset(Offset = "0x54")]
	private DepthState m_DepthState;

	[Token(Token = "0x4000C00")]
	[FieldOffset(Offset = "0x56")]
	private StencilState m_StencilState;

	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0x64")]
	private int m_StencilReference;

	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0x68")]
	private RenderStateMask m_Mask;

	[Token(Token = "0x17000390")]
	public BlendState blendState
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x2F6B540", Offset = "0x2F69B40", VA = "0x182F6B540")]
		set
		{
		}
	}

	[Token(Token = "0x17000391")]
	public RasterState rasterState
	{
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x2F6B580", Offset = "0x2F69B80", VA = "0x182F6B580")]
		set
		{
		}
	}

	[Token(Token = "0x17000392")]
	public DepthState depthState
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x2F6B570", Offset = "0x2F69B70", VA = "0x182F6B570")]
		set
		{
		}
	}

	[Token(Token = "0x17000393")]
	public StencilState stencilState
	{
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x2F6B520", Offset = "0x2F69B20", VA = "0x182F6B520")]
		get
		{
			return default(StencilState);
		}
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x2F6B590", Offset = "0x2F69B90", VA = "0x182F6B590")]
		set
		{
		}
	}

	[Token(Token = "0x17000394")]
	public int stencilReference
	{
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x2F6B510", Offset = "0x2F69B10", VA = "0x182F6B510")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0xCDEA50", Offset = "0xCDD050", VA = "0x180CDEA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000395")]
	public RenderStateMask mask
	{
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x2F6B500", Offset = "0x2F69B00", VA = "0x182F6B500")]
		get
		{
			return default(RenderStateMask);
		}
		[Token(Token = "0x60016C0")]
		[Address(RVA = "0xA4D6E0", Offset = "0xA4BCE0", VA = "0x180A4D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x2F6B380", Offset = "0x2F69980", VA = "0x182F6B380")]
	public RenderStateBlock(RenderStateMask mask)
	{
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x2F6AFA0", Offset = "0x2F695A0", VA = "0x182F6AFA0", Slot = "4")]
	public bool Equals(RenderStateBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C2")]
	[Address(RVA = "0x2F6B1A0", Offset = "0x2F697A0", VA = "0x182F6B1A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C3")]
	[Address(RVA = "0x2F6B280", Offset = "0x2F69880", VA = "0x182F6B280", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
