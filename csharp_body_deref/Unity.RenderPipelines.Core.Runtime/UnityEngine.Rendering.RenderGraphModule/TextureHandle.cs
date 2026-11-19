// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200029E")]
[DebuggerDisplay("Texture ({handle.index})")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public readonly struct TextureHandle : IEquatable<TextureHandle>
{
	[Token(Token = "0x4000BAE")]
	[FieldOffset(Offset = "0x0")]
	private static TextureHandle s_NullHandle;

	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ResourceHandle handle;

	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0xC")]
	private readonly bool builtin;

	[Token(Token = "0x17000259")]
	public static TextureHandle nullHandle
	{
		[Token(Token = "0x60012C7")]
		[Address(RVA = "0x6585170", Offset = "0x6584170", VA = "0x6585170")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x65851C0", Offset = "0x65841C0", VA = "0x65851C0")]
	internal TextureHandle(in ResourceHandle h)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x6580FE0", Offset = "0x657FFE0", VA = "0x6580FE0")]
	internal TextureHandle(int handle, bool shared = false, bool builtin = false)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x65851E0", Offset = "0x65841E0", VA = "0x65851E0")]
	public static implicit operator RenderTargetIdentifier(TextureHandle texture)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x6585420", Offset = "0x6584420", VA = "0x6585420")]
	public static implicit operator Texture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x6585630", Offset = "0x6584630", VA = "0x6585630")]
	public static implicit operator RenderTexture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x6585840", Offset = "0x6584840", VA = "0x6585840")]
	public static implicit operator RTHandle(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x6585A40", Offset = "0x6584A40", VA = "0x6585A40", Slot = "4")]
	public bool Equals(TextureHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x6585B00", Offset = "0x6584B00", VA = "0x6585B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x6585C30", Offset = "0x6584C30", VA = "0x6585C30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x6585D50", Offset = "0x6584D50", VA = "0x6585D50")]
	public static bool operator ==(TextureHandle lhs, TextureHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x6585E10", Offset = "0x6584E10", VA = "0x6585E10")]
	public static bool operator !=(TextureHandle lhs, TextureHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x6585ED0", Offset = "0x6584ED0", VA = "0x6585ED0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x6585FC0", Offset = "0x6584FC0", VA = "0x6585FC0")]
	internal bool IsBuiltin()
	{
		return default(bool);
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x6585FD0", Offset = "0x6584FD0", VA = "0x6585FD0")]
	public TextureDesc GetDescriptor(RenderGraph renderGraph)
	{
		return default(TextureDesc);
	}
}
