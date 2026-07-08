using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002EB")]
public struct RasterState : IEquatable<RasterState>
{
	[Token(Token = "0x40008C9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RasterState defaultValue;

	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x0")]
	private CullMode m_CullingMode;

	[Token(Token = "0x40008CB")]
	[FieldOffset(Offset = "0x4")]
	private int m_OffsetUnits;

	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x8")]
	private float m_OffsetFactor;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0xC")]
	private byte m_DepthClip;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0xD")]
	private byte m_Conservative;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0xE")]
	private byte m_Padding1;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0xF")]
	private byte m_Padding2;

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x4B07130", Offset = "0x4B07130", VA = "0x4B07130")]
	public RasterState(CullMode cullingMode = CullMode.Back, int offsetUnits = 0, float offsetFactor = 0f, bool depthClip = true)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x4B071C0", Offset = "0x4B071C0", VA = "0x4B071C0", Slot = "4")]
	public bool Equals(RasterState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x4B07220", Offset = "0x4B07220", VA = "0x4B07220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x4B072F0", Offset = "0x4B072F0", VA = "0x4B072F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
