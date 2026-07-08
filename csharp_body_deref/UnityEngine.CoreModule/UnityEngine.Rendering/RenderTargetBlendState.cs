using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F3")]
public struct RenderTargetBlendState : IEquatable<RenderTargetBlendState>
{
	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteMask;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x1")]
	private byte m_SourceColorBlendMode;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x2")]
	private byte m_DestinationColorBlendMode;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0x3")]
	private byte m_SourceAlphaBlendMode;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0x4")]
	private byte m_DestinationAlphaBlendMode;

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0x5")]
	private byte m_ColorBlendOperation;

	[Token(Token = "0x40008F6")]
	[FieldOffset(Offset = "0x6")]
	private byte m_AlphaBlendOperation;

	[Token(Token = "0x40008F7")]
	[FieldOffset(Offset = "0x7")]
	private byte m_Padding;

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x4B09130", Offset = "0x4B09130", VA = "0x4B09130", Slot = "4")]
	public bool Equals(RenderTargetBlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x4B09180", Offset = "0x4B09180", VA = "0x4B09180", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x4B09230", Offset = "0x4B09230", VA = "0x4B09230", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
