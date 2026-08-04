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
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x4509BA0", Offset = "0x4509BA0", VA = "0x4509BA0")]
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
		[Address(RVA = "0x4509BB0", Offset = "0x4509BB0", VA = "0x4509BB0")]
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
		[Address(RVA = "0x4508760", Offset = "0x4508760", VA = "0x4508760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public bool HasValue
	{
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x45087D0", Offset = "0x45087D0", VA = "0x45087D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public Type RuntimeType
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x4509BC0", Offset = "0x4509BC0", VA = "0x4509BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public Type LimitType
	{
		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x4508900", Offset = "0x4508900", VA = "0x4508900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x4509A90", Offset = "0x4509A90", VA = "0x4509A90")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4509B70", Offset = "0x4509B70", VA = "0x4509B70")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions, object value)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4509CF0", Offset = "0x4509CF0", VA = "0x4509CF0", Slot = "4")]
	public virtual DynamicMetaObject BindConvert(ConvertBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4509D60", Offset = "0x4509D60", VA = "0x4509D60", Slot = "5")]
	public virtual DynamicMetaObject BindGetMember(GetMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4509DC0", Offset = "0x4509DC0", VA = "0x4509DC0", Slot = "6")]
	public virtual DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4509E20", Offset = "0x4509E20", VA = "0x4509E20", Slot = "7")]
	public virtual DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4509E90", Offset = "0x4509E90", VA = "0x4509E90", Slot = "8")]
	public virtual DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4509EF0", Offset = "0x4509EF0", VA = "0x4509EF0", Slot = "9")]
	public virtual DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4509F60", Offset = "0x4509F60", VA = "0x4509F60", Slot = "10")]
	public virtual DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4509FD0", Offset = "0x4509FD0", VA = "0x4509FD0", Slot = "11")]
	public virtual DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x450A030", Offset = "0x450A030", VA = "0x450A030", Slot = "12")]
	public virtual DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x450A090", Offset = "0x450A090", VA = "0x450A090", Slot = "13")]
	public virtual DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x450A100", Offset = "0x450A100", VA = "0x450A100", Slot = "14")]
	public virtual DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x450A160", Offset = "0x450A160", VA = "0x450A160", Slot = "15")]
	public virtual DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x450A1D0", Offset = "0x450A1D0", VA = "0x450A1D0", Slot = "16")]
	public virtual IEnumerable<string> GetDynamicMemberNames()
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x450A290", Offset = "0x450A290", VA = "0x450A290")]
	public static DynamicMetaObject Create(object value, Expression expression)
	{
		return null;
	}
}
