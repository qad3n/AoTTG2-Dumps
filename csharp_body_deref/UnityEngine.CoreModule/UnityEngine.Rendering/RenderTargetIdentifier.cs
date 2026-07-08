using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B4")]
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

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x4AF1100", Offset = "0x4AF1100", VA = "0x4AF1100")]
	public RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x4AF1130", Offset = "0x4AF1130", VA = "0x4AF1130")]
	public RenderTargetIdentifier(int nameID)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x4AF1160", Offset = "0x4AF1160", VA = "0x4AF1160")]
	public RenderTargetIdentifier(RenderTargetIdentifier renderTargetIdentifier, int mipLevel, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x4AF1190", Offset = "0x4AF1190", VA = "0x4AF1190")]
	public RenderTargetIdentifier(Texture tex)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x4AF12A0", Offset = "0x4AF12A0", VA = "0x4AF12A0")]
	public RenderTargetIdentifier(RenderBuffer buf, int mipLevel = 0, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x4AF12C0", Offset = "0x4AF12C0", VA = "0x4AF12C0")]
	public static implicit operator RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x4AF12F0", Offset = "0x4AF12F0", VA = "0x4AF12F0")]
	public static implicit operator RenderTargetIdentifier(int nameID)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x4AF1310", Offset = "0x4AF1310", VA = "0x4AF1310")]
	public static implicit operator RenderTargetIdentifier(Texture tex)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x4AF1380", Offset = "0x4AF1380", VA = "0x4AF1380")]
	public static implicit operator RenderTargetIdentifier(RenderBuffer buf)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x4AF13B0", Offset = "0x4AF13B0", VA = "0x4AF13B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x4AF16A0", Offset = "0x4AF16A0", VA = "0x4AF16A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x4AF16F0", Offset = "0x4AF16F0", VA = "0x4AF16F0", Slot = "4")]
	public bool Equals(RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x4AF1740", Offset = "0x4AF1740", VA = "0x4AF1740", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
