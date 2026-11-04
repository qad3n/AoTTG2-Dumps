// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BaseCommandBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001D")]
public class BaseCommandBuffer
{
	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x10")]
	protected internal CommandBuffer m_WrappedCommandBuffer;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x18")]
	internal RenderGraphPass m_ExecutingPass;

	[Token(Token = "0x1700002B")]
	public string name
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x2ABA620", Offset = "0x2AB8C20", VA = "0x182ABA620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public int sizeInBytes
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x2ABA640", Offset = "0x2AB8C40", VA = "0x182ABA640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2ABA5B0", Offset = "0x2AB8BB0", VA = "0x182ABA5B0")]
	internal BaseCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2AB9CA0", Offset = "0x2AB82A0", VA = "0x182AB9CA0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ThrowIfGlobalStateNotAllowed()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2AB9D40", Offset = "0x2AB8340", VA = "0x182AB9D40")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ThrowIfRasterNotAllowed()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2ABA360", Offset = "0x2AB8960", VA = "0x182ABA360")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandle(in TextureHandle h)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2AB9E90", Offset = "0x2AB8490", VA = "0x182AB9E90")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandleRead(in TextureHandle h)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2ABA090", Offset = "0x2AB8690", VA = "0x182ABA090")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandleWrite(in TextureHandle h)
	{
	}
}
