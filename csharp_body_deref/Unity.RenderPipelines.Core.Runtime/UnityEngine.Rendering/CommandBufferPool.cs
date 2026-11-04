// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000026")]
public static class CommandBufferPool
{
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<CommandBuffer> s_BufferPool;

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x2ABB5A0", Offset = "0x2AB9BA0", VA = "0x182ABB5A0")]
	public static CommandBuffer Get()
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x2ABB650", Offset = "0x2AB9C50", VA = "0x182ABB650")]
	public static CommandBuffer Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x2ABB6F0", Offset = "0x2AB9CF0", VA = "0x182ABB6F0")]
	public static void Release(CommandBuffer buffer)
	{
	}
}
