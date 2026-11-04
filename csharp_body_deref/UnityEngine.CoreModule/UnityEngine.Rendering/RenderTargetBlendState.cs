// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetBlendState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C2")]
public struct RenderTargetBlendState : IEquatable<RenderTargetBlendState>
{
	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteMask;

	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x1")]
	private byte m_SourceColorBlendMode;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x2")]
	private byte m_DestinationColorBlendMode;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x3")]
	private byte m_SourceAlphaBlendMode;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x4")]
	private byte m_DestinationAlphaBlendMode;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x5")]
	private byte m_ColorBlendOperation;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x6")]
	private byte m_AlphaBlendOperation;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x7")]
	private byte m_Padding;

	[Token(Token = "0x17000396")]
	public static RenderTargetBlendState defaultValue
	{
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x2F6B7C0", Offset = "0x2F69DC0", VA = "0x182F6B7C0")]
		get
		{
			return default(RenderTargetBlendState);
		}
	}

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x2F6B790", Offset = "0x2F69D90", VA = "0x182F6B790")]
	public RenderTargetBlendState(ColorWriteMask writeMask = ColorWriteMask.All, BlendMode sourceColorBlendMode = BlendMode.One, BlendMode destinationColorBlendMode = BlendMode.Zero, BlendMode sourceAlphaBlendMode = BlendMode.One, BlendMode destinationAlphaBlendMode = BlendMode.Zero, BlendOp colorBlendOperation = BlendOp.Add, BlendOp alphaBlendOperation = BlendOp.Add)
	{
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x2F6B5A0", Offset = "0x2F69BA0", VA = "0x182F6B5A0", Slot = "4")]
	public bool Equals(RenderTargetBlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x2F6B5F0", Offset = "0x2F69BF0", VA = "0x182F6B5F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x2F6B6E0", Offset = "0x2F69CE0", VA = "0x182F6B6E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
