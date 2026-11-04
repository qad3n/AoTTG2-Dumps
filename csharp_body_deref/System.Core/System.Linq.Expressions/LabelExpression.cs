// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.LabelExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000090")]
[DebuggerTypeProxy(typeof(LabelExpressionProxy))]
public sealed class LabelExpression : Expression
{
	[Token(Token = "0x1700009C")]
	public sealed override Type Type
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x19BCDF0", Offset = "0x19BB3F0", VA = "0x1819BCDF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x847150", Offset = "0x845750", VA = "0x180847150", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700009E")]
	public LabelTarget Target
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	public Expression DefaultValue
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x243B9C0", Offset = "0x2439FC0", VA = "0x18243B9C0")]
	internal LabelExpression(LabelTarget label, Expression defaultValue)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x243B900", Offset = "0x2439F00", VA = "0x18243B900", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x243B930", Offset = "0x2439F30", VA = "0x18243B930")]
	public LabelExpression Update(LabelTarget target, Expression defaultValue)
	{
		return null;
	}
}
