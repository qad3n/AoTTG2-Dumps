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
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x44BD1A0", Offset = "0x44BD1A0", VA = "0x44BD1A0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000CB")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x44BD1B0", Offset = "0x44BD1B0", VA = "0x44BD1B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x44BD1E0", Offset = "0x44BD1E0", VA = "0x44BD1E0")]
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
		[Address(RVA = "0x44B8620", Offset = "0x44B8620", VA = "0x44B8620")]
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
		[Address(RVA = "0x44BD280", Offset = "0x44BD280", VA = "0x44BD280", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x44BD120", Offset = "0x44BD120", VA = "0x44BD120")]
	internal MethodCallExpression(MethodInfo method)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x44BD190", Offset = "0x44BD190", VA = "0x44BD190", Slot = "12")]
	internal virtual Expression GetInstance()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x44BD1F0", Offset = "0x44BD1F0", VA = "0x44BD1F0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x44BD220", Offset = "0x44BD220", VA = "0x44BD220", Slot = "13")]
	[ExcludeFromCodeCoverage]
	internal virtual MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x44BD250", Offset = "0x44BD250", VA = "0x44BD250", Slot = "14")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}
}
