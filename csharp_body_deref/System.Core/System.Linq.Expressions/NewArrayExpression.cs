using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B4")]
[DebuggerTypeProxy(typeof(NewArrayExpressionProxy))]
public class NewArrayExpression : Expression
{
	[Token(Token = "0x170000DB")]
	public sealed override Type Type
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x419A5F0", Offset = "0x419A5F0", VA = "0x419A5F0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x419A600", Offset = "0x419A600", VA = "0x419A600")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x419A3A0", Offset = "0x419A3A0", VA = "0x419A3A0")]
	internal NewArrayExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x419A420", Offset = "0x419A420", VA = "0x419A420")]
	internal static NewArrayExpression Make(ExpressionType nodeType, Type type, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x419A610", Offset = "0x419A610", VA = "0x419A610", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4195A30", Offset = "0x4195A30", VA = "0x4195A30")]
	public NewArrayExpression Update(IEnumerable<Expression> expressions)
	{
		return null;
	}
}
