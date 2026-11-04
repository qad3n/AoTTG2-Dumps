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
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2429580", Offset = "0x2427B80", VA = "0x182429580")]
	internal ScopeExpression(IReadOnlyList<ParameterExpression> variables)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x243EBE0", Offset = "0x243D1E0", VA = "0x18243EBE0", Slot = "13")]
	internal override ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x243EC20", Offset = "0x243D220", VA = "0x18243EC20")]
	internal IReadOnlyList<ParameterExpression> ReuseOrValidateVariables(ReadOnlyCollection<ParameterExpression> variables)
	{
		return null;
	}
}
