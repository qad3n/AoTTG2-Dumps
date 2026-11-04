// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetIdentifier
// Update status: CHANGED in this game update
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
	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RenderTargetIdentifier Invalid;

	[Token(Token = "0x40008CD")]
	public const int AllDepthSlices = -1;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x0")]
	private BuiltinRenderTextureType m_Type;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x4")]
	private int m_NameID;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x8")]
	private int m_InstanceID;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_BufferPointer;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x18")]
	private int m_MipLevel;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x1C")]
	private CubemapFace m_CubeFace;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x20")]
	private int m_DepthSlice;

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x2F554C0", Offset = "0x2F53AC0", VA = "0x182F554C0")]
	public RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x2F55420", Offset = "0x2F53A20", VA = "0x182F55420")]
	public RenderTargetIdentifier(string name)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x2F55400", Offset = "0x2F53A00", VA = "0x182F55400")]
	public RenderTargetIdentifier(int nameID)
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x2F55490", Offset = "0x2F53A90", VA = "0x182F55490")]
	public RenderTargetIdentifier(int nameID, int mipLevel = 0, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x2F55460", Offset = "0x2F53A60", VA = "0x182F55460")]
	public RenderTargetIdentifier(RenderTargetIdentifier renderTargetIdentifier, int mipLevel, CubemapFace cubeFace = CubemapFace.Unknown, int depthSlice = 0)
	{
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x2F554E0", Offset = "0x2F53AE0", VA = "0x182F554E0")]
	public RenderTargetIdentifier(Texture tex)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x2F556C0", Offset = "0x2F53CC0", VA = "0x182F556C0")]
	public static implicit operator RenderTargetIdentifier(BuiltinRenderTextureType type)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x2F558B0", Offset = "0x2F53EB0", VA = "0x182F558B0")]
	public static implicit operator RenderTargetIdentifier(string name)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x2F55710", Offset = "0x2F53D10", VA = "0x182F55710")]
	public static implicit operator RenderTargetIdentifier(int nameID)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x2F55760", Offset = "0x2F53D60", VA = "0x182F55760")]
	public static implicit operator RenderTargetIdentifier(Texture tex)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x2F55070", Offset = "0x2F53670", VA = "0x182F55070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x2F55020", Offset = "0x2F53620", VA = "0x182F55020", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x2F54FD0", Offset = "0x2F535D0", VA = "0x182F54FD0", Slot = "4")]
	public bool Equals(RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x2F54EA0", Offset = "0x2F534A0", VA = "0x182F54EA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x2F555F0", Offset = "0x2F53BF0", VA = "0x182F555F0")]
	public static bool operator ==(RenderTargetIdentifier lhs, RenderTargetIdentifier rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x2F55930", Offset = "0x2F53F30", VA = "0x182F55930")]
	public static bool operator !=(RenderTargetIdentifier lhs, RenderTargetIdentifier rhs)
	{
		return default(bool);
	}
}
