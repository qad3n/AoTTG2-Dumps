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

[Token(Token = "0x2000267")]
public class DynamicMetaObject
{
	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DynamicMetaObject[] EmptyMetaObjects;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_noValueSentinel;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _value;

	[Token(Token = "0x17000264")]
	public Expression Expression
	{
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x5E1EC60", Offset = "0x5E1DC60", VA = "0x5E1EC60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public BindingRestrictions Restrictions
	{
		[Token(Token = "0x6000BE0")]
		[Address(RVA = "0x5E1EC70", Offset = "0x5E1DC70", VA = "0x5E1EC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public object Value
	{
		[Token(Token = "0x6000BE1")]
		[Address(RVA = "0x5E1D830", Offset = "0x5E1C830", VA = "0x5E1D830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public bool HasValue
	{
		[Token(Token = "0x6000BE2")]
		[Address(RVA = "0x5E1D8A0", Offset = "0x5E1C8A0", VA = "0x5E1D8A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000268")]
	public Type RuntimeType
	{
		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x5E1EC80", Offset = "0x5E1DC80", VA = "0x5E1EC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	public Type LimitType
	{
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x5E1D9D0", Offset = "0x5E1C9D0", VA = "0x5E1D9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x5E1EB50", Offset = "0x5E1DB50", VA = "0x5E1EB50")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions)
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x5E1EC30", Offset = "0x5E1DC30", VA = "0x5E1EC30")]
	public DynamicMetaObject(Expression expression, BindingRestrictions restrictions, object value)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x5E1EDB0", Offset = "0x5E1DDB0", VA = "0x5E1EDB0", Slot = "4")]
	public virtual DynamicMetaObject BindConvert(ConvertBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x5E1EE20", Offset = "0x5E1DE20", VA = "0x5E1EE20", Slot = "5")]
	public virtual DynamicMetaObject BindGetMember(GetMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x5E1EE80", Offset = "0x5E1DE80", VA = "0x5E1EE80", Slot = "6")]
	public virtual DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5E1EEE0", Offset = "0x5E1DEE0", VA = "0x5E1EEE0", Slot = "7")]
	public virtual DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x5E1EF50", Offset = "0x5E1DF50", VA = "0x5E1EF50", Slot = "8")]
	public virtual DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5E1EFB0", Offset = "0x5E1DFB0", VA = "0x5E1EFB0", Slot = "9")]
	public virtual DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5E1F020", Offset = "0x5E1E020", VA = "0x5E1F020", Slot = "10")]
	public virtual DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x5E1F090", Offset = "0x5E1E090", VA = "0x5E1F090", Slot = "11")]
	public virtual DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x5E1F0F0", Offset = "0x5E1E0F0", VA = "0x5E1F0F0", Slot = "12")]
	public virtual DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x5E1F150", Offset = "0x5E1E150", VA = "0x5E1F150", Slot = "13")]
	public virtual DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x5E1F1C0", Offset = "0x5E1E1C0", VA = "0x5E1F1C0", Slot = "14")]
	public virtual DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x5E1F220", Offset = "0x5E1E220", VA = "0x5E1F220", Slot = "15")]
	public virtual DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x5E1F290", Offset = "0x5E1E290", VA = "0x5E1F290", Slot = "16")]
	public virtual IEnumerable<string> GetDynamicMemberNames()
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x5E1F350", Offset = "0x5E1E350", VA = "0x5E1F350")]
	public static DynamicMetaObject Create(object value, Expression expression)
	{
		return null;
	}
}
