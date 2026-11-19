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

[Token(Token = "0x200044E")]
internal class CLBindingCache
{
	[Token(Token = "0x40015B2")]
	[FieldOffset(Offset = "0x0")]
	private static CLBindingCache instance;

	[Token(Token = "0x40015B3")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Dictionary<string, ICLMemberBinding>> _bindings;

	[Token(Token = "0x170002DB")]
	private static CLBindingCache Instance
	{
		[Token(Token = "0x6001AA5")]
		[Address(RVA = "0x58A9A60", Offset = "0x58A8A60", VA = "0x58A9A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x58A9BC0", Offset = "0x58A8BC0", VA = "0x58A9BC0")]
	public static bool GetOrCreateBinding(string typeName, string varName, out ICLMemberBinding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x58A9B40", Offset = "0x58A8B40", VA = "0x58A9B40")]
	public CLBindingCache()
	{
	}
}
