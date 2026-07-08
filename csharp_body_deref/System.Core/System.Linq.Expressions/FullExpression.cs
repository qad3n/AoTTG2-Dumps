using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200009A")]
internal sealed class FullExpression<TDelegate> : ExpressionN<TDelegate>
{
	[Token(Token = "0x170000B5")]
	internal override string NameCore
	{
		[Token(Token = "0x6000462")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B6")]
	internal override bool TailCallCore
	{
		[Token(Token = "0x6000463")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000461")]
	public FullExpression(Expression body, string name, bool tailCall, IReadOnlyList<ParameterExpression> parameters)
	{
	}
}
