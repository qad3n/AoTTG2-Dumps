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

[Token(Token = "0x20000A1")]
[DebuggerTypeProxy(typeof(MemberExpressionProxy))]
public class MemberExpression : Expression
{
	[Token(Token = "0x170000C3")]
	public MemberInfo Member
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x5DCE230", Offset = "0x5DCD230", VA = "0x5DCE230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public Expression Expression
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x5DD2B80", Offset = "0x5DD1B80", VA = "0x5DD2B80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x5DD2E60", Offset = "0x5DD1E60", VA = "0x5DD2E60", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x5DD2B90", Offset = "0x5DD1B90", VA = "0x5DD2B90")]
	internal MemberExpression(Expression expression)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x5DD2C00", Offset = "0x5DD1C00", VA = "0x5DD2C00")]
	internal static PropertyExpression Make(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x5DD2D30", Offset = "0x5DD1D30", VA = "0x5DD2D30")]
	internal static FieldExpression Make(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x5DD2E70", Offset = "0x5DD1E70", VA = "0x5DD2E70", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual MemberInfo GetMember()
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x5DD2EA0", Offset = "0x5DD1EA0", VA = "0x5DD2EA0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x5DD0750", Offset = "0x5DCF750", VA = "0x5DD0750")]
	public MemberExpression Update(Expression expression)
	{
		return null;
	}
}
