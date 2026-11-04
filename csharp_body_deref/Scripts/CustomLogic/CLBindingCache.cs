// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLBindingCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLBindingCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003EF")]
internal class CLBindingCache
{
	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0x0")]
	private static CLBindingCache instance;

	[Token(Token = "0x4001413")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Dictionary<string, ICLMemberBinding>> _bindings;

	[Token(Token = "0x1700029A")]
	private static CLBindingCache Instance
	{
		[Token(Token = "0x600182E")]
		[Address(RVA = "0x1ECD800", Offset = "0x1ECBE00", VA = "0x181ECD800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x1ECD4E0", Offset = "0x1ECBAE0", VA = "0x181ECD4E0")]
	public static bool GetOrCreateBinding(string typeName, string varName, out ICLMemberBinding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x1ECD780", Offset = "0x1ECBD80", VA = "0x181ECD780")]
	public CLBindingCache()
	{
	}
}
