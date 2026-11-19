// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RasterState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000388")]
public struct RasterState : IEquatable<RasterState>
{
	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RasterState defaultValue;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x0")]
	private CullMode m_CullingMode;

	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x4")]
	private int m_OffsetUnits;

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x8")]
	private float m_OffsetFactor;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0xC")]
	private byte m_DepthClip;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0xD")]
	private byte m_Conservative;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0xE")]
	private byte m_Padding1;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0xF")]
	private byte m_Padding2;

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x695B440", Offset = "0x695A440", VA = "0x695B440")]
	public RasterState(CullMode cullingMode = CullMode.Back, int offsetUnits = 0, float offsetFactor = 0f, bool depthClip = true)
	{
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x695B4D0", Offset = "0x695A4D0", VA = "0x695B4D0", Slot = "4")]
	public bool Equals(RasterState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x695B530", Offset = "0x695A530", VA = "0x695B530", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x695B600", Offset = "0x695A600", VA = "0x695B600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
