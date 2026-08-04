// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005B")]
[DebuggerDisplay("Texture ({handle.index})")]
public struct TextureHandle
{
	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x0")]
	private static TextureHandle s_NullHandle;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x0")]
	internal ResourceHandle handle;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0xC")]
	private bool builtin;

	[Token(Token = "0x1700004E")]
	public static TextureHandle nullHandle
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x4B93030", Offset = "0x4B93030", VA = "0x4B93030")]
		get
		{
			return default(TextureHandle);
		}
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4B8A510", Offset = "0x4B8A510", VA = "0x4B8A510")]
	internal TextureHandle(int handle, bool shared = false, bool builtin = false)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4B87420", Offset = "0x4B87420", VA = "0x4B87420")]
	public static implicit operator RenderTargetIdentifier(TextureHandle texture)
	{
		return default(RenderTargetIdentifier);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4B93080", Offset = "0x4B93080", VA = "0x4B93080")]
	public static implicit operator Texture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4B87240", Offset = "0x4B87240", VA = "0x4B87240")]
	public static implicit operator RenderTexture(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4B93160", Offset = "0x4B93160", VA = "0x4B93160")]
	public static implicit operator RTHandle(TextureHandle texture)
	{
		return null;
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4B8EC00", Offset = "0x4B8EC00", VA = "0x4B8EC00")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4B93230", Offset = "0x4B93230", VA = "0x4B93230")]
	internal bool IsBuiltin()
	{
		return default(bool);
	}
}
