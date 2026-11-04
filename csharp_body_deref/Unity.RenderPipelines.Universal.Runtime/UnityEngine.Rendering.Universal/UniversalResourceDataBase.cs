// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalResourceDataBase
// Update status: NEW in this game update
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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020")]
	internal void InitFrame()
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x2C50070", Offset = "0x2C4E670", VA = "0x182C50070")]
	protected void CheckAndSetTextureHandle(ref TextureHandle handle, TextureHandle newHandle)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x2C4FF70", Offset = "0x2C4E570", VA = "0x182C4FF70")]
	protected TextureHandle CheckAndGetTextureHandle(ref TextureHandle handle)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x2C50100", Offset = "0x2C4E700", VA = "0x182C50100")]
	protected void CheckAndSetTextureHandle(ref TextureHandle[] handle, TextureHandle[] newHandle)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x2C4FE30", Offset = "0x2C4E430", VA = "0x182C4FE30")]
	protected TextureHandle[] CheckAndGetTextureHandle(ref TextureHandle[] handle)
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x2C50220", Offset = "0x2C4E820", VA = "0x182C50220")]
	protected bool CheckAndWarnAboutAccessibility()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected UniversalResourceDataBase()
	{
	}
}
