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
[Token(Token = "0x20004E4")]
public abstract class FieldInfo : MemberInfo
{
	[Token(Token = "0x170004A6")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002454")]
		[Address(RVA = "0x53D8050", Offset = "0x53D7050", VA = "0x53D8050", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A7")]
	public abstract FieldAttributes Attributes
	{
		[Token(Token = "0x6002455")]
		get;
	}

	[Token(Token = "0x170004A8")]
	public abstract Type FieldType
	{
		[Token(Token = "0x6002456")]
		get;
	}

	[Token(Token = "0x170004A9")]
	public bool IsInitOnly
	{
		[Token(Token = "0x6002457")]
		[Address(RVA = "0x53D8060", Offset = "0x53D7060", VA = "0x53D8060", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AA")]
	public bool IsLiteral
	{
		[Token(Token = "0x6002458")]
		[Address(RVA = "0x53D8080", Offset = "0x53D7080", VA = "0x53D8080", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AB")]
	public bool IsNotSerialized
	{
		[Token(Token = "0x6002459")]
		[Address(RVA = "0x53D80A0", Offset = "0x53D70A0", VA = "0x53D80A0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AC")]
	public bool IsSpecialName
	{
		[Token(Token = "0x600245A")]
		[Address(RVA = "0x53D80C0", Offset = "0x53D70C0", VA = "0x53D80C0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AD")]
	public bool IsStatic
	{
		[Token(Token = "0x600245B")]
		[Address(RVA = "0x53D80E0", Offset = "0x53D70E0", VA = "0x53D80E0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AE")]
	public bool IsPrivate
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x53D8100", Offset = "0x53D7100", VA = "0x53D8100", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AF")]
	public bool IsPublic
	{
		[Token(Token = "0x600245D")]
		[Address(RVA = "0x53D8120", Offset = "0x53D7120", VA = "0x53D8120", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B0")]
	public abstract RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x600245E")]
		get;
	}

	[Token(Token = "0x6002453")]
	[Address(RVA = "0x53D8040", Offset = "0x53D7040", VA = "0x53D8040")]
	protected FieldInfo()
	{
	}

	[Token(Token = "0x600245F")]
	[Address(RVA = "0x53D8140", Offset = "0x53D7140", VA = "0x53D8140", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002460")]
	[Address(RVA = "0x53D8150", Offset = "0x53D7150", VA = "0x53D8150", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002461")]
	[Address(RVA = "0x53D8160", Offset = "0x53D7160", VA = "0x53D8160")]
	public static bool operator ==(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002462")]
	[Address(RVA = "0x53D8190", Offset = "0x53D7190", VA = "0x53D8190")]
	public static bool operator !=(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002463")]
	public abstract object GetValue(object obj);

	[Token(Token = "0x6002464")]
	[Address(RVA = "0x53D81C0", Offset = "0x53D71C0", VA = "0x53D81C0", Slot = "27")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6002465")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x6002466")]
	[Address(RVA = "0x53D8230", Offset = "0x53D7230", VA = "0x53D8230", Slot = "29")]
	[CLSCompliant(false)]
	public virtual void SetValueDirect(TypedReference obj, object value)
	{
	}

	[Token(Token = "0x6002467")]
	[Address(RVA = "0x53D8280", Offset = "0x53D7280", VA = "0x53D8280", Slot = "30")]
	public virtual object GetRawConstantValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002468")]
	[Address(RVA = "0x53D82D0", Offset = "0x53D72D0", VA = "0x53D82D0")]
	private static extern FieldInfo internal_from_handle_type(IntPtr field_handle, IntPtr type_handle);

	[Token(Token = "0x6002469")]
	[Address(RVA = "0x53D82E0", Offset = "0x53D72E0", VA = "0x53D82E0")]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600246A")]
	[Address(RVA = "0x53D8340", Offset = "0x53D7340", VA = "0x53D8340")]
	[ComVisible(false)]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle, RuntimeTypeHandle declaringType)
	{
		return null;
	}

	[Token(Token = "0x600246B")]
	[Address(RVA = "0x53D83C0", Offset = "0x53D73C0", VA = "0x53D83C0", Slot = "31")]
	internal virtual int GetFieldOffset()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600246C")]
	[Address(RVA = "0x53D8410", Offset = "0x53D7410", VA = "0x53D8410")]
	private extern MarshalAsAttribute get_marshal_info();

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x53D8420", Offset = "0x53D7420", VA = "0x53D8420")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x600246E")]
	[Address(RVA = "0x53D8660", Offset = "0x53D7660", VA = "0x53D8660")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}
}
