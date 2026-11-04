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

[Token(Token = "0x20003B4")]
public struct RasterState : IEquatable<RasterState>
{
	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RasterState defaultValue;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x0")]
	private CullMode m_CullingMode;

	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0x4")]
	private int m_OffsetUnits;

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x8")]
	private float m_OffsetFactor;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0xC")]
	private byte m_DepthClip;

	[Token(Token = "0x4000BC7")]
	[FieldOffset(Offset = "0xD")]
	private byte m_Conservative;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0xE")]
	private byte m_Padding1;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0xF")]
	private byte m_Padding2;

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x2F68A50", Offset = "0x2F67050", VA = "0x182F68A50")]
	public RasterState(CullMode cullingMode = CullMode.Back, int offsetUnits = 0, float offsetFactor = 0f, bool depthClip = true)
	{
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x2F687E0", Offset = "0x2F66DE0", VA = "0x182F687E0", Slot = "4")]
	public bool Equals(RasterState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x2F68840", Offset = "0x2F66E40", VA = "0x182F68840", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x2F68940", Offset = "0x2F66F40", VA = "0x182F68940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
