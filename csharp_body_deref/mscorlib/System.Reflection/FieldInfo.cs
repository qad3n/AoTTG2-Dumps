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
[Token(Token = "0x20004DB")]
public abstract class FieldInfo : MemberInfo
{
	[Token(Token = "0x170004A4")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002404")]
		[Address(RVA = "0x3BD0DF0", Offset = "0x3BD0DF0", VA = "0x3BD0DF0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A5")]
	public abstract FieldAttributes Attributes
	{
		[Token(Token = "0x6002405")]
		get;
	}

	[Token(Token = "0x170004A6")]
	public abstract Type FieldType
	{
		[Token(Token = "0x6002406")]
		get;
	}

	[Token(Token = "0x170004A7")]
	public bool IsInitOnly
	{
		[Token(Token = "0x6002407")]
		[Address(RVA = "0x3BD0E00", Offset = "0x3BD0E00", VA = "0x3BD0E00", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A8")]
	public bool IsLiteral
	{
		[Token(Token = "0x6002408")]
		[Address(RVA = "0x3BD0E20", Offset = "0x3BD0E20", VA = "0x3BD0E20", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A9")]
	public bool IsNotSerialized
	{
		[Token(Token = "0x6002409")]
		[Address(RVA = "0x3BD0E40", Offset = "0x3BD0E40", VA = "0x3BD0E40", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AA")]
	public bool IsSpecialName
	{
		[Token(Token = "0x600240A")]
		[Address(RVA = "0x3BD0E60", Offset = "0x3BD0E60", VA = "0x3BD0E60", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AB")]
	public bool IsStatic
	{
		[Token(Token = "0x600240B")]
		[Address(RVA = "0x3BD0E80", Offset = "0x3BD0E80", VA = "0x3BD0E80", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AC")]
	public bool IsPrivate
	{
		[Token(Token = "0x600240C")]
		[Address(RVA = "0x3BD0EA0", Offset = "0x3BD0EA0", VA = "0x3BD0EA0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AD")]
	public bool IsPublic
	{
		[Token(Token = "0x600240D")]
		[Address(RVA = "0x3BD0EC0", Offset = "0x3BD0EC0", VA = "0x3BD0EC0", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AE")]
	public abstract RuntimeFieldHandle FieldHandle
	{
		[Token(Token = "0x600240E")]
		get;
	}

	[Token(Token = "0x6002403")]
	[Address(RVA = "0x3BD0DE0", Offset = "0x3BD0DE0", VA = "0x3BD0DE0")]
	protected FieldInfo()
	{
	}

	[Token(Token = "0x600240F")]
	[Address(RVA = "0x3BD0EE0", Offset = "0x3BD0EE0", VA = "0x3BD0EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002410")]
	[Address(RVA = "0x3BD0EF0", Offset = "0x3BD0EF0", VA = "0x3BD0EF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002411")]
	[Address(RVA = "0x3BD0F00", Offset = "0x3BD0F00", VA = "0x3BD0F00")]
	public static bool operator ==(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002412")]
	[Address(RVA = "0x3BD0F30", Offset = "0x3BD0F30", VA = "0x3BD0F30")]
	public static bool operator !=(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002413")]
	public abstract object GetValue(object obj);

	[Token(Token = "0x6002414")]
	[Address(RVA = "0x3BD0F60", Offset = "0x3BD0F60", VA = "0x3BD0F60", Slot = "27")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6002415")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x6002416")]
	[Address(RVA = "0x3BD0FD0", Offset = "0x3BD0FD0", VA = "0x3BD0FD0", Slot = "29")]
	[CLSCompliant(false)]
	public virtual void SetValueDirect(TypedReference obj, object value)
	{
	}

	[Token(Token = "0x6002417")]
	[Address(RVA = "0x3BD1020", Offset = "0x3BD1020", VA = "0x3BD1020", Slot = "30")]
	public virtual object GetRawConstantValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x3BD1070", Offset = "0x3BD1070", VA = "0x3BD1070")]
	private static extern FieldInfo internal_from_handle_type(IntPtr field_handle, IntPtr type_handle);

	[Token(Token = "0x6002419")]
	[Address(RVA = "0x3BD1080", Offset = "0x3BD1080", VA = "0x3BD1080")]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600241A")]
	[Address(RVA = "0x3BD10E0", Offset = "0x3BD10E0", VA = "0x3BD10E0")]
	[ComVisible(false)]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle, RuntimeTypeHandle declaringType)
	{
		return null;
	}

	[Token(Token = "0x600241B")]
	[Address(RVA = "0x3BD1160", Offset = "0x3BD1160", VA = "0x3BD1160", Slot = "31")]
	internal virtual int GetFieldOffset()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x3BD11B0", Offset = "0x3BD11B0", VA = "0x3BD11B0")]
	private extern MarshalAsAttribute get_marshal_info();

	[Token(Token = "0x600241D")]
	[Address(RVA = "0x3BD11C0", Offset = "0x3BD11C0", VA = "0x3BD11C0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x600241E")]
	[Address(RVA = "0x3BD1410", Offset = "0x3BD1410", VA = "0x3BD1410")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}
}
