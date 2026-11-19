// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.NewArrayExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B5")]
[DebuggerTypeProxy(typeof(NewArrayExpressionProxy))]
public class NewArrayExpression : Expression
{
	[Token(Token = "0x170000DD")]
	public sealed override Type Type
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x5DD5510", Offset = "0x5DD4510", VA = "0x5DD5510", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x5DD5520", Offset = "0x5DD4520", VA = "0x5DD5520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5DD52D0", Offset = "0x5DD42D0", VA = "0x5DD52D0")]
	internal NewArrayExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5DD5350", Offset = "0x5DD4350", VA = "0x5DD5350")]
	internal static NewArrayExpression Make(ExpressionType nodeType, Type type, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5DD5530", Offset = "0x5DD4530", VA = "0x5DD5530", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x5DD09D0", Offset = "0x5DCF9D0", VA = "0x5DD09D0")]
	public NewArrayExpression Update(IEnumerable<Expression> expressions)
	{
		return null;
	}
}
