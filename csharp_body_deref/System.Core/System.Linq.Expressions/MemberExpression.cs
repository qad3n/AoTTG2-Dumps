// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MemberExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public Expression Expression
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x1AB5F20", Offset = "0x1AB4520", VA = "0x181AB5F20", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x243C4A0", Offset = "0x243AAA0", VA = "0x18243C4A0")]
	internal MemberExpression(Expression expression)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x243C360", Offset = "0x243A960", VA = "0x18243C360")]
	internal static PropertyExpression Make(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x243C2B0", Offset = "0x243A8B0", VA = "0x18243C2B0")]
	internal static FieldExpression Make(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x243C280", Offset = "0x243A880", VA = "0x18243C280", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual MemberInfo GetMember()
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x243C250", Offset = "0x243A850", VA = "0x18243C250", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x243C410", Offset = "0x243AA10", VA = "0x18243C410")]
	public MemberExpression Update(Expression expression)
	{
		return null;
	}
}
