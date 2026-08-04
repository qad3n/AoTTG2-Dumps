// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.BaseCommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B6A8D0", Offset = "0x4B6A8D0", VA = "0x4B6A8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public int sizeInBytes
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4B6A8F0", Offset = "0x4B6A8F0", VA = "0x4B6A8F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B6A860", Offset = "0x4B6A860", VA = "0x4B6A860")]
	internal BaseCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B6A910", Offset = "0x4B6A910", VA = "0x4B6A910")]
	protected internal void ThrowIfGlobalStateNotAllowed()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B6A920", Offset = "0x4B6A920", VA = "0x4B6A920")]
	protected internal void ValidateTextureHandle(TextureHandle h)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B6A930", Offset = "0x4B6A930", VA = "0x4B6A930")]
	protected internal void ValidateTextureHandleRead(TextureHandle h)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B6A940", Offset = "0x4B6A940", VA = "0x4B6A940")]
	protected internal void ValidateTextureHandleWrite(TextureHandle h)
	{
	}
}
