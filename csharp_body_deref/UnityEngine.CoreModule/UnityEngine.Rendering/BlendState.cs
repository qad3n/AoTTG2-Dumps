using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D5")]
public struct BlendState : IEquatable<BlendState>
{
	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetBlendState m_BlendState0;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetBlendState m_BlendState1;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x10")]
	private RenderTargetBlendState m_BlendState2;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x18")]
	private RenderTargetBlendState m_BlendState3;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x20")]
	private RenderTargetBlendState m_BlendState4;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x28")]
	private RenderTargetBlendState m_BlendState5;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x30")]
	private RenderTargetBlendState m_BlendState6;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x38")]
	private RenderTargetBlendState m_BlendState7;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x40")]
	private byte m_SeparateMRTBlendStates;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x41")]
	private byte m_AlphaToMask;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x42")]
	private short m_Padding;

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x4B01D10", Offset = "0x4B01D10", VA = "0x4B01D10", Slot = "4")]
	public bool Equals(BlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x4B01DF0", Offset = "0x4B01DF0", VA = "0x4B01DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x4B01EC0", Offset = "0x4B01EC0", VA = "0x4B01EC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
