// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.DynamicMetaObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000266")]
public class DynamicMetaObject
{
	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DynamicMetaObject[] EmptyMetaObjects;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_noValueSentinel;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _value;

	[Token(Token = "0x17000262")]
	public Expression Expression
	{
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public BindingRestrictions Restrictions
	{
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public object Value
	{
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x246C550", Offset = "0x246AB50", VA = "0x18246C550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public bool HasValue
	{
		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x246C340", Offset = "0x246A940", VA = "0x18246C340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public Type RuntimeType
	{
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x246C480", Offset = "0x246AA80", VA = "0x18246C480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public Type LimitType
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x246C3A0", Offset = "0x246A9A0", VA = "0x18246C3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x246C260", Offset = "0x246A860", VA = "0x18246C260")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions)
	{
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x246C170", Offset = "0x246A770", VA = "0x18246C170")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions, object value)
	{
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x246B8B0", Offset = "0x2469EB0", VA = "0x18246B8B0", Slot = "4")]
	public virtual DynamicMetaObject BindConvert(ConvertBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x246BB30", Offset = "0x246A130", VA = "0x18246BB30", Slot = "5")]
	public virtual DynamicMetaObject BindGetMember(GetMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x246BD20", Offset = "0x246A320", VA = "0x18246BD20", Slot = "6")]
	public virtual DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x246BA40", Offset = "0x246A040", VA = "0x18246BA40", Slot = "7")]
	public virtual DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x246BAB0", Offset = "0x246A0B0", VA = "0x18246BAB0", Slot = "8")]
	public virtual DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x246BCA0", Offset = "0x246A2A0", VA = "0x18246BCA0", Slot = "9")]
	public virtual DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x246B9B0", Offset = "0x2469FB0", VA = "0x18246B9B0", Slot = "10")]
	public virtual DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x246BBA0", Offset = "0x246A1A0", VA = "0x18246BBA0", Slot = "11")]
	public virtual DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x246BC20", Offset = "0x246A220", VA = "0x18246BC20", Slot = "12")]
	public virtual DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x246B920", Offset = "0x2469F20", VA = "0x18246B920", Slot = "13")]
	public virtual DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x246BDA0", Offset = "0x246A3A0", VA = "0x18246BDA0", Slot = "14")]
	public virtual DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x246B820", Offset = "0x2469E20", VA = "0x18246B820", Slot = "15")]
	public virtual DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x246C080", Offset = "0x246A680", VA = "0x18246C080", Slot = "16")]
	public virtual IEnumerable<string> GetDynamicMemberNames()
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x246BE10", Offset = "0x246A410", VA = "0x18246BE10")]
	public static DynamicMetaObject Create(object value, Expression expression)
	{
		return null;
	}
}
