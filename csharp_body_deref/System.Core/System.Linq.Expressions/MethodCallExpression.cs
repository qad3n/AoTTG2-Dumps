using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A6")]
[DebuggerTypeProxy(typeof(MethodCallExpressionProxy))]
public class MethodCallExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x170000CA")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x41980A0", Offset = "0x41980A0", VA = "0x41980A0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000CB")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x41980B0", Offset = "0x41980B0", VA = "0x41980B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x41980E0", Offset = "0x41980E0", VA = "0x41980E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public Expression Object
	{
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x4193520", Offset = "0x4193520", VA = "0x4193520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	[ExcludeFromCodeCoverage]
	public virtual int ArgumentCount
	{
		[Token(Token = "0x600048D")]
		[Address(RVA = "0x4198180", Offset = "0x4198180", VA = "0x4198180", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4198020", Offset = "0x4198020", VA = "0x4198020")]
	internal MethodCallExpression(MethodInfo method)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4198090", Offset = "0x4198090", VA = "0x4198090", Slot = "12")]
	internal virtual Expression GetInstance()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x41980F0", Offset = "0x41980F0", VA = "0x41980F0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4198120", Offset = "0x4198120", VA = "0x4198120", Slot = "13")]
	[ExcludeFromCodeCoverage]
	internal virtual MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4198150", Offset = "0x4198150", VA = "0x4198150", Slot = "14")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}
}
