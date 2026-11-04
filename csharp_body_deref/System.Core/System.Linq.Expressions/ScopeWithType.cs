// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ScopeWithType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x243F080", Offset = "0x243D680", VA = "0x18243F080")]
	internal ScopeWithType(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> expressions, Type type)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x243EEF0", Offset = "0x243D4F0", VA = "0x18243EEF0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
