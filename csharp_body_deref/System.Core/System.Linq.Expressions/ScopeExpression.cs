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

[Token(Token = "0x200006E")]
internal class ScopeExpression : BlockExpression
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<ParameterExpression> _variables;

	[Token(Token = "0x17000066")]
	protected IReadOnlyList<ParameterExpression> VariablesList
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x5DC4FB0", Offset = "0x5DC3FB0", VA = "0x5DC4FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x5DC4F00", Offset = "0x5DC3F00", VA = "0x5DC4F00")]
	internal ScopeExpression(IReadOnlyList<ParameterExpression> variables)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x5DC4F70", Offset = "0x5DC3F70", VA = "0x5DC4F70", Slot = "13")]
	internal override ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x5DC4FC0", Offset = "0x5DC3FC0", VA = "0x5DC4FC0")]
	internal IReadOnlyList<ParameterExpression> ReuseOrValidateVariables(ReadOnlyCollection<ParameterExpression> variables)
	{
		return null;
	}
}
