// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimePropertyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Mono;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200051D")]
internal class RuntimePropertyInfo : PropertyInfo, ISerializable
{
	[Token(Token = "0x200051E")]
	private delegate object GetterAdapter(object _this);

	[Token(Token = "0x200051F")]
	private delegate R Getter<T, R>(T _this);

	[Token(Token = "0x2000520")]
	private delegate R StaticGetter<R>();

	[Token(Token = "0x400155A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x400155B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal IntPtr prop;

	[Token(Token = "0x400155C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Reflection.MonoPropertyInfo info;

	[Token(Token = "0x400155D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Reflection.PInfo cached;

	[Token(Token = "0x400155E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GetterAdapter cached_getter;

	[Token(Token = "0x17000586")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026F6")]
		[Address(RVA = "0x3BE6180", Offset = "0x3BE6180", VA = "0x3BE6180")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000587")]
	public override Module Module
	{
		[Token(Token = "0x60026F7")]
		[Address(RVA = "0x3BE6190", Offset = "0x3BE6190", VA = "0x3BE6190", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000588")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026F9")]
		[Address(RVA = "0x3BE6300", Offset = "0x3BE6300", VA = "0x3BE6300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000589")]
	public override PropertyAttributes Attributes
	{
		[Token(Token = "0x6002700")]
		[Address(RVA = "0x3BE6670", Offset = "0x3BE6670", VA = "0x3BE6670", Slot = "18")]
		get
		{
			return default(PropertyAttributes);
		}
	}

	[Token(Token = "0x1700058A")]
	public override bool CanRead
	{
		[Token(Token = "0x6002701")]
		[Address(RVA = "0x3BE66A0", Offset = "0x3BE66A0", VA = "0x3BE66A0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058B")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002702")]
		[Address(RVA = "0x3BE66D0", Offset = "0x3BE66D0", VA = "0x3BE66D0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058C")]
	public override Type PropertyType
	{
		[Token(Token = "0x6002703")]
		[Address(RVA = "0x3BE6700", Offset = "0x3BE6700", VA = "0x3BE6700", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058D")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002704")]
		[Address(RVA = "0x3BE67C0", Offset = "0x3BE67C0", VA = "0x3BE67C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058E")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002705")]
		[Address(RVA = "0x3BE67F0", Offset = "0x3BE67F0", VA = "0x3BE67F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058F")]
	public override string Name
	{
		[Token(Token = "0x6002706")]
		[Address(RVA = "0x3BE6820", Offset = "0x3BE6820", VA = "0x3BE6820", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000590")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002712")]
		[Address(RVA = "0x3BE70C0", Offset = "0x3BE70C0", VA = "0x3BE70C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F5")]
	[Address(RVA = "0x3BE6170", Offset = "0x3BE6170", VA = "0x3BE6170")]
	internal static extern void get_property_info(System.Reflection.RuntimePropertyInfo prop, ref System.Reflection.MonoPropertyInfo info, System.Reflection.PInfo req_info);

	[Token(Token = "0x60026F8")]
	[Address(RVA = "0x3BE6290", Offset = "0x3BE6290", VA = "0x3BE6290")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x60026FA")]
	[Address(RVA = "0x3BE6210", Offset = "0x3BE6210", VA = "0x3BE6210")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026FB")]
	[Address(RVA = "0x3BE6370", Offset = "0x3BE6370", VA = "0x3BE6370", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026FC")]
	[Address(RVA = "0x3BE6380", Offset = "0x3BE6380", VA = "0x3BE6380")]
	private string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x60026FD")]
	[Address(RVA = "0x3BE64F0", Offset = "0x3BE64F0", VA = "0x3BE64F0", Slot = "31")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026FE")]
	[Address(RVA = "0x3BE6630", Offset = "0x3BE6630", VA = "0x3BE6630")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x60026FF")]
	[Address(RVA = "0x3BE6640", Offset = "0x3BE6640", VA = "0x3BE6640")]
	private void CachePropertyInfo(System.Reflection.PInfo flags)
	{
	}

	[Token(Token = "0x6002707")]
	[Address(RVA = "0x3BE6850", Offset = "0x3BE6850", VA = "0x3BE6850", Slot = "24")]
	public override MethodInfo GetGetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6002708")]
	[Address(RVA = "0x3BE68C0", Offset = "0x3BE68C0", VA = "0x3BE68C0", Slot = "17")]
	public override ParameterInfo[] GetIndexParameters()
	{
		return null;
	}

	[Token(Token = "0x6002709")]
	[Address(RVA = "0x3BE6AB0", Offset = "0x3BE6AB0", VA = "0x3BE6AB0", Slot = "26")]
	public override MethodInfo GetSetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600270A")]
	[Address(RVA = "0x3BE6B20", Offset = "0x3BE6B20", VA = "0x3BE6B20", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600270B")]
	[Address(RVA = "0x3BE6B80", Offset = "0x3BE6B80", VA = "0x3BE6B80", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600270C")]
	[Address(RVA = "0x3BE6BD0", Offset = "0x3BE6BD0", VA = "0x3BE6BD0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600270D")]
	private static object GetterAdapterFrame<T, R>(Getter<T, R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x600270E")]
	private static object StaticGetterAdapterFrame<R>(StaticGetter<R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x600270F")]
	[Address(RVA = "0x3BE6C30", Offset = "0x3BE6C30", VA = "0x3BE6C30", Slot = "27")]
	public override object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x6002710")]
	[Address(RVA = "0x3BE6C60", Offset = "0x3BE6C60", VA = "0x3BE6C60", Slot = "28")]
	public override object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002711")]
	[Address(RVA = "0x3BE6E90", Offset = "0x3BE6E90", VA = "0x3BE6E90", Slot = "30")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002713")]
	[Address(RVA = "0x3BE70D0", Offset = "0x3BE70D0", VA = "0x3BE70D0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimePropertyInfo monoProperty);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002714")]
	[Address(RVA = "0x3BE70E0", Offset = "0x3BE70E0", VA = "0x3BE70E0")]
	private static extern PropertyInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002715")]
	[Address(RVA = "0x3BE70F0", Offset = "0x3BE70F0", VA = "0x3BE70F0")]
	internal static PropertyInfo GetPropertyFromHandle(Mono.RuntimePropertyHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002716")]
	[Address(RVA = "0x3BE7180", Offset = "0x3BE7180", VA = "0x3BE7180")]
	public RuntimePropertyInfo()
	{
	}
}
