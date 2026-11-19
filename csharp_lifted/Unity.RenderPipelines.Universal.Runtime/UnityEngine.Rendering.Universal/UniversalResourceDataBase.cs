// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalResourceDataBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000D8")]
public abstract class UniversalResourceDataBase : ContextItem
{
	[Token(Token = "0x20000D9")]
	internal enum ActiveID
	{
		[Token(Token = "0x40004EE")]
		Camera,
		[Token(Token = "0x40004EF")]
		BackBuffer
	}

	[Token(Token = "0x17000197")]
	internal bool isAccessible
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x6641CB0", Offset = "0x6640CB0", VA = "0x6641CB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x6641CC0", Offset = "0x6640CC0", VA = "0x6641CC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x6639A80", Offset = "0x6638A80", VA = "0x6639A80")]
	internal void InitFrame()
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x663E940", Offset = "0x663D940", VA = "0x663E940")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x6641350", Offset = "0x6640350", VA = "0x6641350")]
	protected void CheckAndSetTextureHandle(ref TextureHandle handle, TextureHandle newHandle)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x66411C0", Offset = "0x66401C0", VA = "0x66411C0")]
	protected TextureHandle CheckAndGetTextureHandle(ref TextureHandle handle)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x6641060", Offset = "0x6640060", VA = "0x6641060")]
	protected void CheckAndSetTextureHandle(ref TextureHandle[] handle, TextureHandle[] newHandle)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x6640F00", Offset = "0x663FF00", VA = "0x6640F00")]
	protected TextureHandle[] CheckAndGetTextureHandle(ref TextureHandle[] handle)
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x6640CF0", Offset = "0x663FCF0", VA = "0x6640CF0")]
	protected bool CheckAndWarnAboutAccessibility()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x6641B30", Offset = "0x6640B30", VA = "0x6641B30")]
	protected UniversalResourceDataBase()
	{
	}
}
