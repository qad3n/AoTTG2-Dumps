// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000CB")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x243D420", Offset = "0x243BA20", VA = "0x18243D420", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public Expression Object
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x24293C0", Offset = "0x24279C0", VA = "0x1824293C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	[ExcludeFromCodeCoverage]
	public virtual int ArgumentCount
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x243D3F0", Offset = "0x243B9F0", VA = "0x18243D3F0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x243C5B0", Offset = "0x243ABB0", VA = "0x18243C5B0")]
	internal MethodCallExpression(MethodInfo method)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
	internal virtual Expression GetInstance()
	{
		return null;
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x243D360", Offset = "0x243B960", VA = "0x18243D360", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x243D3C0", Offset = "0x243B9C0", VA = "0x18243D3C0", Slot = "13")]
	[ExcludeFromCodeCoverage]
	internal virtual MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x243D390", Offset = "0x243B990", VA = "0x18243D390", Slot = "14")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}
}
