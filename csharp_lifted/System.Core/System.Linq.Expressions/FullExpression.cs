// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.FullExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200009B")]
internal sealed class FullExpression<TDelegate> : ExpressionN<TDelegate>
{
	[Token(Token = "0x170000B7")]
	internal override string NameCore
	{
		[Token(Token = "0x600046C")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	internal override bool TailCallCore
	{
		[Token(Token = "0x600046D")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600046B")]
	public FullExpression(Expression body, string name, bool tailCall, IReadOnlyList<ParameterExpression> parameters)
	{
	}
}
