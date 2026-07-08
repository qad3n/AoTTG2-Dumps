using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000070")]
internal sealed class ScopeWithType : ScopeN
{
	[Token(Token = "0x17000068")]
	public sealed override Type Type
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x418A610", Offset = "0x418A610", VA = "0x418A610", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x418A580", Offset = "0x418A580", VA = "0x418A580")]
	internal ScopeWithType(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> expressions, Type type)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x418A620", Offset = "0x418A620", VA = "0x418A620", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
