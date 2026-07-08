using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A0")]
[DebuggerTypeProxy(typeof(MemberExpressionProxy))]
public class MemberExpression : Expression
{
	[Token(Token = "0x170000C1")]
	public MemberInfo Member
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x41931F0", Offset = "0x41931F0", VA = "0x41931F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public Expression Expression
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x4197C10", Offset = "0x4197C10", VA = "0x4197C10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x4197EF0", Offset = "0x4197EF0", VA = "0x4197EF0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4197C20", Offset = "0x4197C20", VA = "0x4197C20")]
	internal MemberExpression(Expression expression)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4197C90", Offset = "0x4197C90", VA = "0x4197C90")]
	internal static PropertyExpression Make(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4197DC0", Offset = "0x4197DC0", VA = "0x4197DC0")]
	internal static FieldExpression Make(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4197F00", Offset = "0x4197F00", VA = "0x4197F00", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual MemberInfo GetMember()
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4197F30", Offset = "0x4197F30", VA = "0x4197F30", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4195780", Offset = "0x4195780", VA = "0x4195780")]
	public MemberExpression Update(Expression expression)
	{
		return null;
	}
}
