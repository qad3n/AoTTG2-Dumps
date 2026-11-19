// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetBlendState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000393")]
public struct RenderTargetBlendState : IEquatable<RenderTargetBlendState>
{
	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteMask;

	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x1")]
	private byte m_SourceColorBlendMode;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x2")]
	private byte m_DestinationColorBlendMode;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x3")]
	private byte m_SourceAlphaBlendMode;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x4")]
	private byte m_DestinationAlphaBlendMode;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x5")]
	private byte m_ColorBlendOperation;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x6")]
	private byte m_AlphaBlendOperation;

	[Token(Token = "0x4000ADE")]
	[FieldOffset(Offset = "0x7")]
	private byte m_Padding;

	[Token(Token = "0x17000380")]
	public static RenderTargetBlendState defaultValue
	{
		[Token(Token = "0x600165D")]
		[Address(RVA = "0x69561D0", Offset = "0x69551D0", VA = "0x69561D0")]
		get
		{
			return default(RenderTargetBlendState);
		}
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x695E5B0", Offset = "0x695D5B0", VA = "0x695E5B0")]
	public RenderTargetBlendState(ColorWriteMask writeMask = ColorWriteMask.All, BlendMode sourceColorBlendMode = BlendMode.One, BlendMode destinationColorBlendMode = BlendMode.Zero, BlendMode sourceAlphaBlendMode = BlendMode.One, BlendMode destinationAlphaBlendMode = BlendMode.Zero, BlendOp colorBlendOperation = BlendOp.Add, BlendOp alphaBlendOperation = BlendOp.Add)
	{
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x6956400", Offset = "0x6955400", VA = "0x6956400", Slot = "4")]
	public bool Equals(RenderTargetBlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x695E5E0", Offset = "0x695D5E0", VA = "0x695E5E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x69569C0", Offset = "0x69559C0", VA = "0x69569C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
