using System.Dynamic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000BF")]
internal class NoThrowSetBinderMember : SetMemberBinder
{
	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x28")]
	private readonly SetMemberBinder _innerBinder;

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x3AC18B0", Offset = "0x3AC18B0", VA = "0x3AC18B0")]
	public NoThrowSetBinderMember(SetMemberBinder innerBinder)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x3AC18F0", Offset = "0x3AC18F0", VA = "0x3AC18F0", Slot = "9")]
	public override DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject? errorSuggestion)
	{
		return null;
	}
}
