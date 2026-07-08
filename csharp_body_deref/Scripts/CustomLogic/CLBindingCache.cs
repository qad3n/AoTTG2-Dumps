using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200026B")]
internal class CLBindingCache
{
	[Token(Token = "0x4000D0C")]
	[FieldOffset(Offset = "0x0")]
	private static CLBindingCache instance;

	[Token(Token = "0x4000D0D")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Dictionary<string, ICLMemberBinding>> _bindings;

	[Token(Token = "0x1700018C")]
	private static CLBindingCache Instance
	{
		[Token(Token = "0x6000E02")]
		[Address(RVA = "0x3CB3170", Offset = "0x3CB3170", VA = "0x3CB3170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x3CB32D0", Offset = "0x3CB32D0", VA = "0x3CB32D0")]
	public static bool GetOrCreateBinding(string typeName, string varName, out ICLMemberBinding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x3CB3250", Offset = "0x3CB3250", VA = "0x3CB3250")]
	public CLBindingCache()
	{
	}
}
