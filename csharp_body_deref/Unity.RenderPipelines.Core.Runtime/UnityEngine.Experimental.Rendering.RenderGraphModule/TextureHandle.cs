using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000057")]
[DebuggerDisplay("Texture ({handle.index})")]
public struct TextureHandle
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	private static TextureHandle s_NullHandle;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	internal ResourceHandle handle;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0xC")]
	private bool builtin;

	[Token(Token = "0x17000049")]
	public static TextureHandle nullHandle
	{
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x486DD80", Offset = "0x486DD80", VA = "0x486DD80")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4865420", Offset = "0x4865420", VA = "0x4865420")]
	internal TextureHandle(int handle, bool shared = false, bool builtin = false)
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4862330", Offset = "0x4862330", VA = "0x4862330")]
	public static implicit operator RenderTargetIdentifier(TextureHandle texture)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x486DDD0", Offset = "0x486DDD0", VA = "0x486DDD0")]
	public static implicit operator Texture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4862150", Offset = "0x4862150", VA = "0x4862150")]
	public static implicit operator RenderTexture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x486DEB0", Offset = "0x486DEB0", VA = "0x486DEB0")]
	public static implicit operator RTHandle(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4869B10", Offset = "0x4869B10", VA = "0x4869B10")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x486DF80", Offset = "0x486DF80", VA = "0x486DF80")]
	internal bool IsBuiltin()
	{
		return default(bool);
	}
}
