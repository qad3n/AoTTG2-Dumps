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
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x44BC810", Offset = "0x44BC810", VA = "0x44BC810", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x44BC830", Offset = "0x44BC830", VA = "0x44BC830", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700009E")]
	public LabelTarget Target
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x44BC840", Offset = "0x44BC840", VA = "0x44BC840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	public Expression DefaultValue
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x44BC850", Offset = "0x44BC850", VA = "0x44BC850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x44BC790", Offset = "0x44BC790", VA = "0x44BC790")]
	internal LabelExpression(LabelTarget label, Expression defaultValue)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x44BC860", Offset = "0x44BC860", VA = "0x44BC860", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x44BA600", Offset = "0x44BA600", VA = "0x44BA600")]
	public LabelExpression Update(LabelTarget target, Expression defaultValue)
	{
		return null;
	}
}
