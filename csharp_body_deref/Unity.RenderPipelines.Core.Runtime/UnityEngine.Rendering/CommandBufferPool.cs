// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000063")]
public static class CommandBufferPool
{
	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<CommandBuffer> s_BufferPool;

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4B95DE0", Offset = "0x4B95DE0", VA = "0x4B95DE0")]
	public static CommandBuffer Get()
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4B95EA0", Offset = "0x4B95EA0", VA = "0x4B95EA0")]
	public static CommandBuffer Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4B95F60", Offset = "0x4B95F60", VA = "0x4B95F60")]
	public static void Release(CommandBuffer buffer)
	{
	}
}
