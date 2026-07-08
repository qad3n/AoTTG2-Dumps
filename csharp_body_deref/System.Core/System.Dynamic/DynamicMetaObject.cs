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
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x41E4AA0", Offset = "0x41E4AA0", VA = "0x41E4AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public BindingRestrictions Restrictions
	{
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x41E4AB0", Offset = "0x41E4AB0", VA = "0x41E4AB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public object Value
	{
		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x41E3660", Offset = "0x41E3660", VA = "0x41E3660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public bool HasValue
	{
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x41E36D0", Offset = "0x41E36D0", VA = "0x41E36D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public Type RuntimeType
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x41E4AC0", Offset = "0x41E4AC0", VA = "0x41E4AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public Type LimitType
	{
		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x41E3800", Offset = "0x41E3800", VA = "0x41E3800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x41E4990", Offset = "0x41E4990", VA = "0x41E4990")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x41E4A70", Offset = "0x41E4A70", VA = "0x41E4A70")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions, object value)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x41E4BF0", Offset = "0x41E4BF0", VA = "0x41E4BF0", Slot = "4")]
	public virtual DynamicMetaObject BindConvert(ConvertBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x41E4C60", Offset = "0x41E4C60", VA = "0x41E4C60", Slot = "5")]
	public virtual DynamicMetaObject BindGetMember(GetMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x41E4CC0", Offset = "0x41E4CC0", VA = "0x41E4CC0", Slot = "6")]
	public virtual DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x41E4D20", Offset = "0x41E4D20", VA = "0x41E4D20", Slot = "7")]
	public virtual DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x41E4D90", Offset = "0x41E4D90", VA = "0x41E4D90", Slot = "8")]
	public virtual DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x41E4DF0", Offset = "0x41E4DF0", VA = "0x41E4DF0", Slot = "9")]
	public virtual DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x41E4E60", Offset = "0x41E4E60", VA = "0x41E4E60", Slot = "10")]
	public virtual DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x41E4ED0", Offset = "0x41E4ED0", VA = "0x41E4ED0", Slot = "11")]
	public virtual DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x41E4F30", Offset = "0x41E4F30", VA = "0x41E4F30", Slot = "12")]
	public virtual DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x41E4F90", Offset = "0x41E4F90", VA = "0x41E4F90", Slot = "13")]
	public virtual DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x41E5000", Offset = "0x41E5000", VA = "0x41E5000", Slot = "14")]
	public virtual DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x41E5060", Offset = "0x41E5060", VA = "0x41E5060", Slot = "15")]
	public virtual DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x41E50D0", Offset = "0x41E50D0", VA = "0x41E50D0", Slot = "16")]
	public virtual IEnumerable<string> GetDynamicMemberNames()
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x41E5190", Offset = "0x41E5190", VA = "0x41E5190")]
	public static DynamicMetaObject Create(object value, Expression expression)
	{
		return null;
	}
}
