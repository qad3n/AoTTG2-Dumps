// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.BufferHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000048")]
[DebuggerDisplay("Buffer ({handle.index})")]
public struct BufferHandle
{
	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	private static BufferHandle s_NullHandle;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x0")]
	internal ResourceHandle handle;

	[Token(Token = "0x17000046")]
	public static BufferHandle nullHandle
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x4B8D6C0", Offset = "0x4B8D6C0", VA = "0x4B8D6C0")]
		get
		{
			return default(BufferHandle);
		}
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4B8A2A0", Offset = "0x4B8A2A0", VA = "0x4B8A2A0")]
	internal BufferHandle(int handle, bool shared = false)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4B8D7A0", Offset = "0x4B8D7A0", VA = "0x4B8D7A0")]
	public static implicit operator GraphicsBuffer(BufferHandle buffer)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4B8D860", Offset = "0x4B8D860", VA = "0x4B8D860")]
	public bool IsValid()
	{
		return default(bool);
	}
}
