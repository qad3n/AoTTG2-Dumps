// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.IArgumentProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000085")]
public interface IArgumentProvider
{
	[Token(Token = "0x1700008A")]
	int ArgumentCount
	{
		[Token(Token = "0x60003FB")]
		get;
	}

	[Token(Token = "0x60003FA")]
	Expression GetArgument(int index);
}
