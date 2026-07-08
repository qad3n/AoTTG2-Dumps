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
		[Address(RVA = "0x4189DA0", Offset = "0x4189DA0", VA = "0x4189DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4189CF0", Offset = "0x4189CF0", VA = "0x4189CF0")]
	internal ScopeExpression(IReadOnlyList<ParameterExpression> variables)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4189D60", Offset = "0x4189D60", VA = "0x4189D60", Slot = "13")]
	internal override ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4189DB0", Offset = "0x4189DB0", VA = "0x4189DB0")]
	internal IReadOnlyList<ParameterExpression> ReuseOrValidateVariables(ReadOnlyCollection<ParameterExpression> variables)
	{
		return null;
	}
}
