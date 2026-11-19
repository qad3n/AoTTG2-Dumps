// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetIdentifier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000333")]
public struct RenderTargetIdentifier : IEquatable<RenderTargetIdentifier>
{
	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RenderTargetIdentifier Invalid;

	[Token(Token = "0x40008CB")]
	public const int AllDepthSlices = -1;

	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x0")]
	private BuiltinRenderTextureType m_Type;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x4")]
	private int m_NameID;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x8")]
	private int m_InstanceID;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_BufferPointer;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x18")]
	private int m_MipLevel;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x1C")]
	private CubemapFace m_CubeFace;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x20")]
	private int m_DepthSlice;

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x693D780", Offset = "0x693C780", VA = "0x693D780")]
	public RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x693D7B0", Offset = "0x693C7B0", VA = "0x693D7B0")]
	public RenderTargetIdentifier(string name)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x693D7F0", Offset = "0x693C7F0", VA = "0x693D7F0")]
	public RenderTargetIdentifier(int nameID)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x693D820", Offset = "0x693C820", VA = "0x693D820")]
	public RenderTargetIdentifier(int nameID, int mipLevel = 0, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x693D850", Offset = "0x693C850", VA = "0x693D850")]
	public RenderTargetIdentifier(RenderTargetIdentifier renderTargetIdentifier, int mipLevel, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x693D880", Offset = "0x693C880", VA = "0x693D880")]
	public RenderTargetIdentifier(Texture tex)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x693D990", Offset = "0x693C990", VA = "0x693D990")]
	public static implicit operator RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x693D9C0", Offset = "0x693C9C0", VA = "0x693D9C0")]
	public static implicit operator RenderTargetIdentifier(string name)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x693DA00", Offset = "0x693CA00", VA = "0x693DA00")]
	public static implicit operator RenderTargetIdentifier(int nameID)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x693DA30", Offset = "0x693CA30", VA = "0x693DA30")]
	public static implicit operator RenderTargetIdentifier(Texture tex)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x693DA80", Offset = "0x693CA80", VA = "0x693DA80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x693DD70", Offset = "0x693CD70", VA = "0x693DD70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x693DDC0", Offset = "0x693CDC0", VA = "0x693DDC0", Slot = "4")]
	public bool Equals(RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x693DE10", Offset = "0x693CE10", VA = "0x693DE10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x693DEF0", Offset = "0x693CEF0", VA = "0x693DEF0")]
	public static bool operator ==(RenderTargetIdentifier lhs, RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x693DFB0", Offset = "0x693CFB0", VA = "0x693DFB0")]
	public static bool operator !=(RenderTargetIdentifier lhs, RenderTargetIdentifier rhs)
	{
		return default(bool);
	}
}
