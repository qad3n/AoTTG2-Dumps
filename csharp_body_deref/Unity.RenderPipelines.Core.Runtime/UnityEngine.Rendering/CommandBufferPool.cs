using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000063")]
public static class CommandBufferPool
{
	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<CommandBuffer> s_BufferPool;

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4870CF0", Offset = "0x4870CF0", VA = "0x4870CF0")]
	public static CommandBuffer Get()
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x4870DB0", Offset = "0x4870DB0", VA = "0x4870DB0")]
	public static CommandBuffer Get(string name)
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4870E70", Offset = "0x4870E70", VA = "0x4870E70")]
	public static void Release(CommandBuffer buffer)
	{
	}
}
