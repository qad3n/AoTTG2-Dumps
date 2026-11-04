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
[Token(Token = "0x200054D")]
internal class RuntimePropertyInfo : PropertyInfo, ISerializable
{
	[Token(Token = "0x200054E")]
	private delegate object GetterAdapter(object _this);

	[Token(Token = "0x200054F")]
	private delegate R Getter<T, R>(T _this);

	[Token(Token = "0x2000550")]
	private delegate R StaticGetter<R>();

	[Token(Token = "0x4001559")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr klass;

	[Token(Token = "0x400155A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal IntPtr prop;

	[Token(Token = "0x400155B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Reflection.MonoPropertyInfo info;

	[Token(Token = "0x400155C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Reflection.PInfo cached;

	[Token(Token = "0x400155D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GetterAdapter cached_getter;

	[Token(Token = "0x17000589")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002779")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700058A")]
	public override Module Module
	{
		[Token(Token = "0x600277A")]
		[Address(RVA = "0x1A72640", Offset = "0x1A70C40", VA = "0x181A72640", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058B")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600277C")]
		[Address(RVA = "0x1A72DD0", Offset = "0x1A713D0", VA = "0x181A72DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058C")]
	public override PropertyAttributes Attributes
	{
		[Token(Token = "0x6002783")]
		[Address(RVA = "0x1A72BE0", Offset = "0x1A711E0", VA = "0x181A72BE0", Slot = "18")]
		get
		{
			return default(PropertyAttributes);
		}
	}

	[Token(Token = "0x1700058D")]
	public override bool CanRead
	{
		[Token(Token = "0x6002784")]
		[Address(RVA = "0x1A72C20", Offset = "0x1A71220", VA = "0x181A72C20", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058E")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002785")]
		[Address(RVA = "0x1A72C60", Offset = "0x1A71260", VA = "0x181A72C60", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700058F")]
	public override Type PropertyType
	{
		[Token(Token = "0x6002786")]
		[Address(RVA = "0x1A72D20", Offset = "0x1A71320", VA = "0x181A72D20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000590")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002787")]
		[Address(RVA = "0x1A72E50", Offset = "0x1A71450", VA = "0x181A72E50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000591")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002788")]
		[Address(RVA = "0x1A72CA0", Offset = "0x1A712A0", VA = "0x181A72CA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000592")]
	public override string Name
	{
		[Token(Token = "0x6002789")]
		[Address(RVA = "0x1A72CE0", Offset = "0x1A712E0", VA = "0x181A72CE0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000593")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002795")]
		[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002778")]
	[Address(RVA = "0x1A72E90", Offset = "0x1A71490", VA = "0x181A72E90")]
	internal static extern void get_property_info(System.Reflection.RuntimePropertyInfo prop, ref System.Reflection.MonoPropertyInfo info, System.Reflection.PInfo req_info);

	[Token(Token = "0x600277B")]
	[Address(RVA = "0x1A71FC0", Offset = "0x1A705C0", VA = "0x181A71FC0")]
	internal System.RuntimeType GetDeclaringTypeInternal()
	{
		return null;
	}

	[Token(Token = "0x600277D")]
	[Address(RVA = "0x1A72640", Offset = "0x1A70C40", VA = "0x181A72640")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600277E")]
	[Address(RVA = "0x1A72BD0", Offset = "0x1A711D0", VA = "0x181A72BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600277F")]
	[Address(RVA = "0x1A71C30", Offset = "0x1A70230", VA = "0x181A71C30")]
	private string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6002780")]
	[Address(RVA = "0x1A72410", Offset = "0x1A70A10", VA = "0x181A72410", Slot = "31")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002781")]
	[Address(RVA = "0x1A72970", Offset = "0x1A70F70", VA = "0x181A72970")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x6002782")]
	[Address(RVA = "0x1A71BF0", Offset = "0x1A701F0", VA = "0x181A71BF0")]
	private void CachePropertyInfo(System.Reflection.PInfo flags)
	{
	}

	[Token(Token = "0x600278A")]
	[Address(RVA = "0x1A72040", Offset = "0x1A70640", VA = "0x181A72040", Slot = "24")]
	public override MethodInfo GetGetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600278B")]
	[Address(RVA = "0x1A720C0", Offset = "0x1A706C0", VA = "0x181A720C0", Slot = "17")]
	public override ParameterInfo[] GetIndexParameters()
	{
		return null;
	}

	[Token(Token = "0x600278C")]
	[Address(RVA = "0x1A726D0", Offset = "0x1A70CD0", VA = "0x181A726D0", Slot = "26")]
	public override MethodInfo GetSetMethod(bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600278D")]
	[Address(RVA = "0x1A72910", Offset = "0x1A70F10", VA = "0x181A72910", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600278E")]
	[Address(RVA = "0x1A71F10", Offset = "0x1A70510", VA = "0x181A71F10", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600278F")]
	[Address(RVA = "0x1A71F60", Offset = "0x1A70560", VA = "0x181A71F60", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002790")]
	private static object GetterAdapterFrame<T, R>(Getter<T, R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x6002791")]
	private static object StaticGetterAdapterFrame<R>(StaticGetter<R> getter, object obj)
	{
		return null;
	}

	[Token(Token = "0x6002792")]
	[Address(RVA = "0x1A4C1C0", Offset = "0x1A4A7C0", VA = "0x181A4C1C0", Slot = "27")]
	public override object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x6002793")]
	[Address(RVA = "0x1A72750", Offset = "0x1A70D50", VA = "0x181A72750", Slot = "28")]
	public override object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002794")]
	[Address(RVA = "0x1A72980", Offset = "0x1A70F80", VA = "0x181A72980", Slot = "30")]
	public override void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002796")]
	[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimePropertyInfo monoProperty);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002797")]
	[Address(RVA = "0x1A72EA0", Offset = "0x1A714A0", VA = "0x181A72EA0")]
	private static extern PropertyInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002798")]
	[Address(RVA = "0x1A72580", Offset = "0x1A70B80", VA = "0x181A72580")]
	internal static PropertyInfo GetPropertyFromHandle(Mono.RuntimePropertyHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002799")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RuntimePropertyInfo()
	{
	}
}
