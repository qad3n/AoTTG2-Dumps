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
[Token(Token = "0x2000526")]
internal class RuntimePropertyInfo : PropertyInfo, ISerializable
{
	[Token(Token = "0x2000527")]
	private delegate object GetterAdapter(object _this);

	[Token(Token = "0x2000528")]
	private delegate R Getter<T, R>(T _this);

	[Token(Token = "0x2000529")]
	private delegate R StaticGetter<R>();

	[Token(Token = "0x40014B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x40014BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal IntPtr prop;

	[Token(Token = "0x40014BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Reflection.MonoPropertyInfo info;

	[Token(Token = "0x40014BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Reflection.PInfo cached;

	[Token(Token = "0x40014BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GetterAdapter cached_getter;

	[Token(Token = "0x17000588")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002747")]
		[Address(RVA = "0x53ECDE0", Offset = "0x53EBDE0", VA = "0x53ECDE0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000589")]
	public override Module Module
	{
		[Token(Token = "0x6002748")]
		[Address(RVA = "0x53ECDF0", Offset = "0x53EBDF0", VA = "0x53ECDF0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058A")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600274A")]
		[Address(RVA = "0x53ECF60", Offset = "0x53EBF60", VA = "0x53ECF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058B")]
	public override PropertyAttributes Attributes
	{
		[Token(Token = "0x6002751")]
		[Address(RVA = "0x53ED2D0", Offset = "0x53EC2D0", VA = "0x53ED2D0", Slot = "18")]
		get
		{
			return default(PropertyAttributes);
		}
	}

	[Token(Token = "0x1700058C")]
	public override bool CanRead
	{
		[Token(Token = "0x6002752")]
		[Address(RVA = "0x53ED300", Offset = "0x53EC300", VA = "0x53ED300", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058D")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002753")]
		[Address(RVA = "0x53ED330", Offset = "0x53EC330", VA = "0x53ED330", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058E")]
	public override Type PropertyType
	{
		[Token(Token = "0x6002754")]
		[Address(RVA = "0x53ED360", Offset = "0x53EC360", VA = "0x53ED360", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058F")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002755")]
		[Address(RVA = "0x53ED420", Offset = "0x53EC420", VA = "0x53ED420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000590")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002756")]
		[Address(RVA = "0x53ED450", Offset = "0x53EC450", VA = "0x53ED450", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000591")]
	public override string Name
	{
		[Token(Token = "0x6002757")]
		[Address(RVA = "0x53ED480", Offset = "0x53EC480", VA = "0x53ED480", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000592")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002763")]
		[Address(RVA = "0x53EDCE0", Offset = "0x53ECCE0", VA = "0x53EDCE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002746")]
	[Address(RVA = "0x53ECDD0", Offset = "0x53EBDD0", VA = "0x53ECDD0")]
	internal static extern void get_property_info(System.Reflection.RuntimePropertyInfo prop, ref System.Reflection.MonoPropertyInfo info, System.Reflection.PInfo req_info);

	[Token(Token = "0x6002749")]
	[Address(RVA = "0x53ECEF0", Offset = "0x53EBEF0", VA = "0x53ECEF0")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x600274B")]
	[Address(RVA = "0x53ECE70", Offset = "0x53EBE70", VA = "0x53ECE70")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600274C")]
	[Address(RVA = "0x53ECFD0", Offset = "0x53EBFD0", VA = "0x53ECFD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600274D")]
	[Address(RVA = "0x53ECFE0", Offset = "0x53EBFE0", VA = "0x53ECFE0")]
	private string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x600274E")]
	[Address(RVA = "0x53ED150", Offset = "0x53EC150", VA = "0x53ED150", Slot = "31")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600274F")]
	[Address(RVA = "0x53ED290", Offset = "0x53EC290", VA = "0x53ED290")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x6002750")]
	[Address(RVA = "0x53ED2A0", Offset = "0x53EC2A0", VA = "0x53ED2A0")]
	private void CachePropertyInfo(System.Reflection.PInfo flags)
	{
	}

	[Token(Token = "0x6002758")]
	[Address(RVA = "0x53ED4B0", Offset = "0x53EC4B0", VA = "0x53ED4B0", Slot = "24")]
	public override MethodInfo GetGetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6002759")]
	[Address(RVA = "0x53ED520", Offset = "0x53EC520", VA = "0x53ED520", Slot = "17")]
	public override ParameterInfo[] GetIndexParameters()
	{
		return null;
	}

	[Token(Token = "0x600275A")]
	[Address(RVA = "0x53ED700", Offset = "0x53EC700", VA = "0x53ED700", Slot = "26")]
	public override MethodInfo GetSetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600275B")]
	[Address(RVA = "0x53ED770", Offset = "0x53EC770", VA = "0x53ED770", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600275C")]
	[Address(RVA = "0x53ED7D0", Offset = "0x53EC7D0", VA = "0x53ED7D0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600275D")]
	[Address(RVA = "0x53ED820", Offset = "0x53EC820", VA = "0x53ED820", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600275E")]
	private static object GetterAdapterFrame<T, R>(Getter<T, R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x600275F")]
	private static object StaticGetterAdapterFrame<R>(StaticGetter<R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x6002760")]
	[Address(RVA = "0x53ED880", Offset = "0x53EC880", VA = "0x53ED880", Slot = "27")]
	public override object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x6002761")]
	[Address(RVA = "0x53ED8B0", Offset = "0x53EC8B0", VA = "0x53ED8B0", Slot = "28")]
	public override object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002762")]
	[Address(RVA = "0x53EDAC0", Offset = "0x53ECAC0", VA = "0x53EDAC0", Slot = "30")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002764")]
	[Address(RVA = "0x53EDCF0", Offset = "0x53ECCF0", VA = "0x53EDCF0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimePropertyInfo monoProperty);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002765")]
	[Address(RVA = "0x53EDD00", Offset = "0x53ECD00", VA = "0x53EDD00")]
	private static extern PropertyInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002766")]
	[Address(RVA = "0x53EDD10", Offset = "0x53ECD10", VA = "0x53EDD10")]
	internal static PropertyInfo GetPropertyFromHandle(Mono.RuntimePropertyHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002767")]
	[Address(RVA = "0x53EDDA0", Offset = "0x53ECDA0", VA = "0x53EDDA0")]
	public RuntimePropertyInfo()
	{
	}
}
