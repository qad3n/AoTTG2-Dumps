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
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x243DC60", Offset = "0x243C260", VA = "0x18243DC60")]
	internal NewArrayExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x243DA80", Offset = "0x243C080", VA = "0x18243DA80")]
	internal static NewArrayExpression Make(ExpressionType nodeType, Type type, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x243DA50", Offset = "0x243C050", VA = "0x18243DA50", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x243DB00", Offset = "0x243C100", VA = "0x18243DB00")]
	public NewArrayExpression Update(IEnumerable<Expression> expressions)
	{
		return null;
	}
}
