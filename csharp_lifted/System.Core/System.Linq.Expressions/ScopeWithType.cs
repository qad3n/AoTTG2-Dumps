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

[Token(Token = "0x2000071")]
internal sealed class ScopeWithType : ScopeN
{
	[Token(Token = "0x1700006A")]
	public sealed override Type Type
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x5DC57E0", Offset = "0x5DC47E0", VA = "0x5DC57E0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x5DC5750", Offset = "0x5DC4750", VA = "0x5DC5750")]
	internal ScopeWithType(IReadOnlyList<ParameterExpression> variables, IReadOnlyList<Expression> expressions, Type type)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x5DC57F0", Offset = "0x5DC47F0", VA = "0x5DC57F0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
