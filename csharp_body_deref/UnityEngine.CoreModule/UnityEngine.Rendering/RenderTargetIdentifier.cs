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

[Token(Token = "0x20002B7")]
public struct RenderTargetIdentifier : IEquatable<RenderTargetIdentifier>
{
	[Token(Token = "0x400079D")]
	public const int AllDepthSlices = -1;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0x0")]
	private BuiltinRenderTextureType m_Type;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x4")]
	private int m_NameID;

	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x8")]
	private int m_InstanceID;

	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_BufferPointer;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x18")]
	private int m_MipLevel;

	[Token(Token = "0x40007A3")]
	[FieldOffset(Offset = "0x1C")]
	private CubemapFace m_CubeFace;

	[Token(Token = "0x40007A4")]
	[FieldOffset(Offset = "0x20")]
	private int m_DepthSlice;

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x4E18A30", Offset = "0x4E18A30", VA = "0x4E18A30")]
	public RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x4E18A60", Offset = "0x4E18A60", VA = "0x4E18A60")]
	public RenderTargetIdentifier(int nameID)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x4E18A90", Offset = "0x4E18A90", VA = "0x4E18A90")]
	public RenderTargetIdentifier(RenderTargetIdentifier renderTargetIdentifier, int mipLevel, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x4E18AC0", Offset = "0x4E18AC0", VA = "0x4E18AC0")]
	public RenderTargetIdentifier(Texture tex)
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x4E18BD0", Offset = "0x4E18BD0", VA = "0x4E18BD0")]
	public RenderTargetIdentifier(RenderBuffer buf, int mipLevel = 0, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x4E18BF0", Offset = "0x4E18BF0", VA = "0x4E18BF0")]
	public static implicit operator RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x4E18C20", Offset = "0x4E18C20", VA = "0x4E18C20")]
	public static implicit operator RenderTargetIdentifier(int nameID)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x4E18C40", Offset = "0x4E18C40", VA = "0x4E18C40")]
	public static implicit operator RenderTargetIdentifier(Texture tex)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x4E18CB0", Offset = "0x4E18CB0", VA = "0x4E18CB0")]
	public static implicit operator RenderTargetIdentifier(RenderBuffer buf)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x4E18CE0", Offset = "0x4E18CE0", VA = "0x4E18CE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x4E18FD0", Offset = "0x4E18FD0", VA = "0x4E18FD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x4E19020", Offset = "0x4E19020", VA = "0x4E19020", Slot = "4")]
	public bool Equals(RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x4E19070", Offset = "0x4E19070", VA = "0x4E19070", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
