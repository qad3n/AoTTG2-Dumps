// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BaseCommandBuffer
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x64B3F10", Offset = "0x64B2F10", VA = "0x64B3F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public int sizeInBytes
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x64B3F30", Offset = "0x64B2F30", VA = "0x64B3F30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x64B3EA0", Offset = "0x64B2EA0", VA = "0x64B3EA0")]
	internal BaseCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x64B3F50", Offset = "0x64B2F50", VA = "0x64B3F50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ThrowIfGlobalStateNotAllowed()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x64B3FD0", Offset = "0x64B2FD0", VA = "0x64B3FD0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ThrowIfRasterNotAllowed()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x64B4060", Offset = "0x64B3060", VA = "0x64B4060")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandle(in TextureHandle h)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x64B4270", Offset = "0x64B3270", VA = "0x64B4270")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandleRead(in TextureHandle h)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x64B4420", Offset = "0x64B3420", VA = "0x64B4420")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	protected internal void ValidateTextureHandleWrite(in TextureHandle h)
	{
	}
}
