using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering.RenderGraphModule;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000009")]
public class BaseCommandBuffer
{
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x10")]
	protected internal CommandBuffer m_WrappedCommandBuffer;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x18")]
	internal RenderGraphPass m_ExecutingPass;

	[Token(Token = "0x17000009")]
	public string name
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x48457E0", Offset = "0x48457E0", VA = "0x48457E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public int sizeInBytes
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4845800", Offset = "0x4845800", VA = "0x4845800")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4845770", Offset = "0x4845770", VA = "0x4845770")]
	internal BaseCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4845820", Offset = "0x4845820", VA = "0x4845820")]
	protected internal void ThrowIfGlobalStateNotAllowed()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4845830", Offset = "0x4845830", VA = "0x4845830")]
	protected internal void ValidateTextureHandle(TextureHandle h)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4845840", Offset = "0x4845840", VA = "0x4845840")]
	protected internal void ValidateTextureHandleRead(TextureHandle h)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4845850", Offset = "0x4845850", VA = "0x4845850")]
	protected internal void ValidateTextureHandleWrite(TextureHandle h)
	{
	}
}
