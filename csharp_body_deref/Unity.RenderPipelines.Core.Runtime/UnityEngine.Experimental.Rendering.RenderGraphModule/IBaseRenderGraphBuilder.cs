// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.IBaseRenderGraphBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200001A")]
public interface IBaseRenderGraphBuilder : IDisposable
{
	[Token(Token = "0x200001B")]
	[Flags]
	public enum AccessFlags
	{
		[Token(Token = "0x4000064")]
		None = 0,
		[Token(Token = "0x4000065")]
		Read = 1,
		[Token(Token = "0x4000066")]
		Write = 2,
		[Token(Token = "0x4000067")]
		Discard = 4,
		[Token(Token = "0x4000068")]
		WriteAll = 6,
		[Token(Token = "0x4000069")]
		AllowGrab = 8,
		[Token(Token = "0x400006A")]
		GrabRead = 9,
		[Token(Token = "0x400006B")]
		ReadWrite = 3
	}

	[Token(Token = "0x600032A")]
	TextureHandle UseTexture(in TextureHandle input, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x600032B")]
	BufferHandle UseBuffer(in BufferHandle input, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x600032C")]
	TextureHandle CreateTransientTexture(in TextureDesc desc);

	[Token(Token = "0x600032D")]
	TextureHandle CreateTransientTexture(in TextureHandle texture);

	[Token(Token = "0x600032E")]
	BufferHandle CreateTransientBuffer(in BufferDesc desc);

	[Token(Token = "0x600032F")]
	BufferHandle CreateTransientBuffer(in BufferHandle computebuffer);

	[Token(Token = "0x6000330")]
	void UseRendererList(in RendererListHandle input);

	[Token(Token = "0x6000331")]
	void EnableAsyncCompute(bool value);

	[Token(Token = "0x6000332")]
	void AllowPassCulling(bool value);

	[Token(Token = "0x6000333")]
	void AllowGlobalStateModification(bool value);
}
