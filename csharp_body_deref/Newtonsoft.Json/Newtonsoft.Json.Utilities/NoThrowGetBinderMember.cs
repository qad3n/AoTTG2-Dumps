// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.NoThrowGetBinderMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1C2B5C0", Offset = "0x1C29BC0", VA = "0x181C2B5C0")]
	public NoThrowGetBinderMember(GetMemberBinder innerBinder)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x1C2B470", Offset = "0x1C29A70", VA = "0x181C2B470", Slot = "9")]
	public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject? errorSuggestion)
	{
		return null;
	}
}
