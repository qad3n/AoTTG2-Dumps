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

[Token(Token = "0x20002A4")]
internal class CLBindingCache
{
	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x0")]
	private static CLBindingCache instance;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Dictionary<string, ICLMemberBinding>> _bindings;

	[Token(Token = "0x170001E5")]
	private static CLBindingCache Instance
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x3FB94B0", Offset = "0x3FB94B0", VA = "0x3FB94B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x3FB9610", Offset = "0x3FB9610", VA = "0x3FB9610")]
	public static bool GetOrCreateBinding(string typeName, string varName, out ICLMemberBinding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x3FB9590", Offset = "0x3FB9590", VA = "0x3FB9590")]
	public CLBindingCache()
	{
	}
}
