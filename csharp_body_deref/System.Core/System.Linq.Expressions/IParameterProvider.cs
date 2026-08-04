// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.IParameterProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000086")]
internal interface IParameterProvider
{
	[Token(Token = "0x1700008B")]
	int ParameterCount
	{
		[Token(Token = "0x60003FD")]
		get;
	}

	[Token(Token = "0x60003FC")]
	ParameterExpression GetParameter(int index);
}
