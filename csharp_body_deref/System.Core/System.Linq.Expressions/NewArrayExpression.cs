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

[Token(Token = "0x20000B4")]
[DebuggerTypeProxy(typeof(NewArrayExpressionProxy))]
public class NewArrayExpression : Expression
{
	[Token(Token = "0x170000DB")]
	public sealed override Type Type
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x44BF6F0", Offset = "0x44BF6F0", VA = "0x44BF6F0", Slot = "5")]
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
		[Address(RVA = "0x44BF700", Offset = "0x44BF700", VA = "0x44BF700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x44BF4A0", Offset = "0x44BF4A0", VA = "0x44BF4A0")]
	internal NewArrayExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x44BF520", Offset = "0x44BF520", VA = "0x44BF520")]
	internal static NewArrayExpression Make(ExpressionType nodeType, Type type, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x44BF710", Offset = "0x44BF710", VA = "0x44BF710", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x44BAB30", Offset = "0x44BAB30", VA = "0x44BAB30")]
	public NewArrayExpression Update(IEnumerable<Expression> expressions)
	{
		return null;
	}
}
