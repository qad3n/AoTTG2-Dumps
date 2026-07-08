using System.Dynamic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000BE")]
internal class NoThrowGetBinderMember : GetMemberBinder
{
	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x28")]
	private readonly GetMemberBinder _innerBinder;

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x3AC16F0", Offset = "0x3AC16F0", VA = "0x3AC16F0")]
	public NoThrowGetBinderMember(GetMemberBinder innerBinder)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x3AC1730", Offset = "0x3AC1730", VA = "0x3AC1730", Slot = "9")]
	public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject? errorSuggestion)
	{
		return null;
	}
}
