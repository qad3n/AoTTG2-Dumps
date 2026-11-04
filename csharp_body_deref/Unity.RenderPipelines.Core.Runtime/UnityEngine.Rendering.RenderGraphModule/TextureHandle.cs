// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureHandle
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BA70C0", Offset = "0x2BA56C0", VA = "0x182BA70C0")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x2BA6FF0", Offset = "0x2BA55F0", VA = "0x182BA6FF0")]
	internal TextureHandle(in ResourceHandle h)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x2BA7010", Offset = "0x2BA5610", VA = "0x182BA7010")]
	internal TextureHandle(int handle, bool shared = false, bool builtin = false)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x2BA7520", Offset = "0x2BA5B20", VA = "0x182BA7520")]
	public static implicit operator RenderTargetIdentifier(TextureHandle texture)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x2BA7400", Offset = "0x2BA5A00", VA = "0x182BA7400")]
	public static implicit operator Texture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x2BA71E0", Offset = "0x2BA57E0", VA = "0x182BA71E0")]
	public static implicit operator RenderTexture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x2BA7300", Offset = "0x2BA5900", VA = "0x182BA7300")]
	public static implicit operator RTHandle(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x2BA6D00", Offset = "0x2BA5300", VA = "0x182BA6D00", Slot = "4")]
	public bool Equals(TextureHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x2BA6DC0", Offset = "0x2BA53C0", VA = "0x182BA6DC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x2BA6F00", Offset = "0x2BA5500", VA = "0x182BA6F00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x2BA7120", Offset = "0x2BA5720", VA = "0x182BA7120")]
	public static bool operator ==(TextureHandle lhs, TextureHandle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x2BA7680", Offset = "0x2BA5C80", VA = "0x182BA7680")]
	public static bool operator !=(TextureHandle lhs, TextureHandle rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x2BA6FA0", Offset = "0x2BA55A0", VA = "0x182BA6FA0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x2BA6F90", Offset = "0x2BA5590", VA = "0x182BA6F90")]
	internal bool IsBuiltin()
	{
		return default(bool);
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x2BA6E80", Offset = "0x2BA5480", VA = "0x182BA6E80")]
	public TextureDesc GetDescriptor(RenderGraph renderGraph)
	{
		return default(TextureDesc);
	}
}
