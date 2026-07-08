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
		[Address(RVA = "0x4EEB2D0", Offset = "0x4EEB2D0", VA = "0x4EEB2D0", Slot = "7")]
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
		[Address(RVA = "0x4EEB2E0", Offset = "0x4EEB2E0", VA = "0x4EEB2E0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A8")]
	public bool IsLiteral
	{
		[Token(Token = "0x6002408")]
		[Address(RVA = "0x4EEB300", Offset = "0x4EEB300", VA = "0x4EEB300", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A9")]
	public bool IsNotSerialized
	{
		[Token(Token = "0x6002409")]
		[Address(RVA = "0x4EEB320", Offset = "0x4EEB320", VA = "0x4EEB320", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AA")]
	public bool IsSpecialName
	{
		[Token(Token = "0x600240A")]
		[Address(RVA = "0x4EEB340", Offset = "0x4EEB340", VA = "0x4EEB340", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AB")]
	public bool IsStatic
	{
		[Token(Token = "0x600240B")]
		[Address(RVA = "0x4EEB360", Offset = "0x4EEB360", VA = "0x4EEB360", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AC")]
	public bool IsPrivate
	{
		[Token(Token = "0x600240C")]
		[Address(RVA = "0x4EEB380", Offset = "0x4EEB380", VA = "0x4EEB380", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AD")]
	public bool IsPublic
	{
		[Token(Token = "0x600240D")]
		[Address(RVA = "0x4EEB3A0", Offset = "0x4EEB3A0", VA = "0x4EEB3A0", Slot = "24")]
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
	[Address(RVA = "0x4EEB2C0", Offset = "0x4EEB2C0", VA = "0x4EEB2C0")]
	protected FieldInfo()
	{
	}

	[Token(Token = "0x600240F")]
	[Address(RVA = "0x4EEB3C0", Offset = "0x4EEB3C0", VA = "0x4EEB3C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002410")]
	[Address(RVA = "0x4EEB3D0", Offset = "0x4EEB3D0", VA = "0x4EEB3D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002411")]
	[Address(RVA = "0x4EEB3E0", Offset = "0x4EEB3E0", VA = "0x4EEB3E0")]
	public static bool operator ==(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002412")]
	[Address(RVA = "0x4EEB410", Offset = "0x4EEB410", VA = "0x4EEB410")]
	public static bool operator !=(FieldInfo left, FieldInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002413")]
	public abstract object GetValue(object obj);

	[Token(Token = "0x6002414")]
	[Address(RVA = "0x4EEB440", Offset = "0x4EEB440", VA = "0x4EEB440", Slot = "27")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6002415")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x6002416")]
	[Address(RVA = "0x4EEB4B0", Offset = "0x4EEB4B0", VA = "0x4EEB4B0", Slot = "29")]
	[CLSCompliant(false)]
	public virtual void SetValueDirect(TypedReference obj, object value)
	{
	}

	[Token(Token = "0x6002417")]
	[Address(RVA = "0x4EEB500", Offset = "0x4EEB500", VA = "0x4EEB500", Slot = "30")]
	public virtual object GetRawConstantValue()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x4EEB550", Offset = "0x4EEB550", VA = "0x4EEB550")]
	private static extern FieldInfo internal_from_handle_type(IntPtr field_handle, IntPtr type_handle);

	[Token(Token = "0x6002419")]
	[Address(RVA = "0x4EEB560", Offset = "0x4EEB560", VA = "0x4EEB560")]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600241A")]
	[Address(RVA = "0x4EEB5C0", Offset = "0x4EEB5C0", VA = "0x4EEB5C0")]
	[ComVisible(false)]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle, RuntimeTypeHandle declaringType)
	{
		return null;
	}

	[Token(Token = "0x600241B")]
	[Address(RVA = "0x4EEB640", Offset = "0x4EEB640", VA = "0x4EEB640", Slot = "31")]
	internal virtual int GetFieldOffset()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x4EEB690", Offset = "0x4EEB690", VA = "0x4EEB690")]
	private extern MarshalAsAttribute get_marshal_info();

	[Token(Token = "0x600241D")]
	[Address(RVA = "0x4EEB6A0", Offset = "0x4EEB6A0", VA = "0x4EEB6A0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x600241E")]
	[Address(RVA = "0x4EEB8F0", Offset = "0x4EEB8F0", VA = "0x4EEB8F0")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}
}
