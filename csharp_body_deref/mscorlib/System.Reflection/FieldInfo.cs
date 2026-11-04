// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.FieldInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x200050B")]
public abstract class FieldInfo : MemberInfo
{
	[Token(Token = "0x170004A7")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002486")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A8")]
	public abstract FieldAttributes Attributes
	{
		[Token(Token = "0x6002487")]
		get;
	}

	[Token(Token = "0x170004A9")]
	public abstract Type FieldType
	{
		[Token(Token = "0x6002488")]
		get;
	}

	[Token(Token = "0x170004AA")]
	public bool IsInitOnly
	{
		[Token(Token = "0x6002489")]
		[Address(RVA = "0x1A45950", Offset = "0x1A43F50", VA = "0x181A45950", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AB")]
	public bool IsLiteral
	{
		[Token(Token = "0x600248A")]
		[Address(RVA = "0x1A45970", Offset = "0x1A43F70", VA = "0x181A45970", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AC")]
	public bool IsNotSerialized
	{
		[Token(Token = "0x600248B")]
		[Address(RVA = "0x1A45990", Offset = "0x1A43F90", VA = "0x181A45990", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AD")]
	public bool IsSpecialName
	{
		[Token(Token = "0x600248C")]
		[Address(RVA = "0x1A45A10", Offset = "0x1A44010", VA = "0x181A45A10", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AE")]
	public bool IsStatic
	{
		[Token(Token = "0x600248D")]
		[Address(RVA = "0x1A45A40", Offset = "0x1A44040", VA = "0x181A45A40", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AF")]
	public bool IsPrivate
	{
		[Token(Token = "0x600248E")]
		[Address(RVA = "0x1A459C0", Offset = "0x1A43FC0", VA = "0x181A459C0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B0")]
	public bool IsPublic
	{
		[Token(Token = "0x600248F")]
		[Address(RVA = "0x1A459E0", Offset = "0x1A43FE0", VA = "0x181A459E0", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B1")]
	public abstract RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x6002490")]
		get;
	}

	[Token(Token = "0x6002485")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected FieldInfo()
	{
	}

	[Token(Token = "0x6002491")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002492")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002493")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002494")]
	[Address(RVA = "0x1A44730", Offset = "0x1A42D30", VA = "0x181A44730")]
	public static bool operator !=(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002495")]
	public abstract object GetValue(object obj);

	[Token(Token = "0x6002496")]
	[Address(RVA = "0x1A458D0", Offset = "0x1A43ED0", VA = "0x181A458D0", Slot = "27")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6002497")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x6002498")]
	[Address(RVA = "0x1A45880", Offset = "0x1A43E80", VA = "0x181A45880", Slot = "29")]
	[CLSCompliant(false)]
	public virtual void SetValueDirect(TypedReference obj, object value)
	{
	}

	[Token(Token = "0x6002499")]
	[Address(RVA = "0x1A45830", Offset = "0x1A43E30", VA = "0x181A45830", Slot = "30")]
	public virtual object GetRawConstantValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600249A")]
	[Address(RVA = "0x1A45A60", Offset = "0x1A44060", VA = "0x181A45A60")]
	private static extern FieldInfo internal_from_handle_type(IntPtr field_handle, IntPtr type_handle);

	[Token(Token = "0x600249B")]
	[Address(RVA = "0x1A44D20", Offset = "0x1A43320", VA = "0x181A44D20")]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600249C")]
	[Address(RVA = "0x1A44D90", Offset = "0x1A43390", VA = "0x181A44D90")]
	[ComVisible(false)]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle, RuntimeTypeHandle declaringType)
	{
		return null;
	}

	[Token(Token = "0x600249D")]
	[Address(RVA = "0x1A44E40", Offset = "0x1A43440", VA = "0x181A44E40", Slot = "31")]
	internal virtual int GetFieldOffset()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600249E")]
	[Address(RVA = "0x19E8C50", Offset = "0x19E7250", VA = "0x1819E8C50")]
	private extern MarshalAsAttribute get_marshal_info();

	[Token(Token = "0x600249F")]
	[Address(RVA = "0x1A455A0", Offset = "0x1A43BA0", VA = "0x181A455A0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x1A44E90", Offset = "0x1A43490", VA = "0x181A44E90")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}
}
