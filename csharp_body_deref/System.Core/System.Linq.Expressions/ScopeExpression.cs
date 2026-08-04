// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ScopeExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006D")]
internal class ScopeExpression : BlockExpression
{
	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<ParameterExpression> _variables;

	[Token(Token = "0x17000064")]
	protected IReadOnlyList<ParameterExpression> VariablesList
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x44AEEA0", Offset = "0x44AEEA0", VA = "0x44AEEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x44AEDF0", Offset = "0x44AEDF0", VA = "0x44AEDF0")]
	internal ScopeExpression(IReadOnlyList<ParameterExpression> variables)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x44AEE60", Offset = "0x44AEE60", VA = "0x44AEE60", Slot = "13")]
	internal override ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x44AEEB0", Offset = "0x44AEEB0", VA = "0x44AEEB0")]
	internal IReadOnlyList<ParameterExpression> ReuseOrValidateVariables(ReadOnlyCollection<ParameterExpression> variables)
	{
		return null;
	}
}
