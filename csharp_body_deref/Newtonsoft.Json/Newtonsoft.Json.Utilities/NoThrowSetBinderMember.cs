// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.NoThrowSetBinderMember
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1C2B760", Offset = "0x1C29D60", VA = "0x181C2B760")]
	public NoThrowSetBinderMember(SetMemberBinder innerBinder)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x1C2B610", Offset = "0x1C29C10", VA = "0x181C2B610", Slot = "9")]
	public override DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject? errorSuggestion)
	{
		return null;
	}
}
