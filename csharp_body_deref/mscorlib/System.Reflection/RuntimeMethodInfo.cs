// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeMethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000517")]
internal class RuntimeMethodInfo : MethodInfo, ISerializable
{
	[Token(Token = "0x400153F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x4001540")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x4001541")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000564")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002685")]
		[Address(RVA = "0x3BE1CF0", Offset = "0x3BE1CF0", VA = "0x3BE1CF0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000565")]
	public override Module Module
	{
		[Token(Token = "0x6002686")]
		[Address(RVA = "0x3BE1D00", Offset = "0x3BE1D00", VA = "0x3BE1D00", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002687")]
		[Address(RVA = "0x3BE1E00", Offset = "0x3BE1E00", VA = "0x3BE1E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	public override ParameterInfo ReturnParameter
	{
		[Token(Token = "0x6002699")]
		[Address(RVA = "0x3BE25B0", Offset = "0x3BE25B0", VA = "0x3BE25B0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000568")]
	public override Type ReturnType
	{
		[Token(Token = "0x600269A")]
		[Address(RVA = "0x3BE2600", Offset = "0x3BE2600", VA = "0x3BE2600", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000569")]
	public override int MetadataToken
	{
		[Token(Token = "0x600269B")]
		[Address(RVA = "0x3BE2630", Offset = "0x3BE2630", VA = "0x3BE2630", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700056A")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60026A3")]
		[Address(RVA = "0x3BE2CE0", Offset = "0x3BE2CE0", VA = "0x3BE2CE0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700056B")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x60026A4")]
		[Address(RVA = "0x3BE2CF0", Offset = "0x3BE2CF0", VA = "0x3BE2CF0", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700056C")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x60026A5")]
		[Address(RVA = "0x3BE2D00", Offset = "0x3BE2D00", VA = "0x3BE2D00", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700056D")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026A6")]
		[Address(RVA = "0x3BE2D30", Offset = "0x3BE2D30", VA = "0x3BE2D30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056E")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026A7")]
		[Address(RVA = "0x3BE2D40", Offset = "0x3BE2D40", VA = "0x3BE2D40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056F")]
	public override string Name
	{
		[Token(Token = "0x60026A8")]
		[Address(RVA = "0x3BE2D70", Offset = "0x3BE2D70", VA = "0x3BE2D70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override extern bool IsGenericMethodDefinition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60026B5")]
		[Address(RVA = "0x3BE3FE0", Offset = "0x3BE3FE0", VA = "0x3BE3FE0", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000571")]
	public override extern bool IsGenericMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60026B6")]
		[Address(RVA = "0x3BE3FF0", Offset = "0x3BE3FF0", VA = "0x3BE3FF0", Slot = "27")]
		get;
	}

	[Token(Token = "0x17000572")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x60026B7")]
		[Address(RVA = "0x3BE4000", Offset = "0x3BE4000", VA = "0x3BE4000", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x60026B9")]
		[Address(RVA = "0x3BE40D0", Offset = "0x3BE40D0", VA = "0x3BE40D0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002688")]
	[Address(RVA = "0x3BE1E70", Offset = "0x3BE1E70", VA = "0x3BE1E70", Slot = "37")]
	internal override string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6002689")]
	[Address(RVA = "0x3BE2260", Offset = "0x3BE2260", VA = "0x3BE2260", Slot = "45")]
	public override Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x600268A")]
	[Address(RVA = "0x3BE2270", Offset = "0x3BE2270", VA = "0x3BE2270", Slot = "46")]
	public override Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x600268B")]
	[Address(RVA = "0x3BE2290", Offset = "0x3BE2290", VA = "0x3BE2290", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600268C")]
	[Address(RVA = "0x3BE1D80", Offset = "0x3BE1D80", VA = "0x3BE1D80")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600268D")]
	[Address(RVA = "0x3BE2310", Offset = "0x3BE2310", VA = "0x3BE2310", Slot = "48")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600268E")]
	[Address(RVA = "0x3BDB100", Offset = "0x3BDB100", VA = "0x3BDB100")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x600268F")]
	[Address(RVA = "0x3BE2520", Offset = "0x3BE2520", VA = "0x3BE2520")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002690")]
	[Address(RVA = "0x3BE2540", Offset = "0x3BE2540", VA = "0x3BE2540")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002691")]
	[Address(RVA = "0x3BD33B0", Offset = "0x3BD33B0", VA = "0x3BD33B0")]
	internal static MethodBase GetMethodFromHandleInternalType(IntPtr method_handle, IntPtr type_handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002692")]
	[Address(RVA = "0x3BE2530", Offset = "0x3BE2530", VA = "0x3BE2530")]
	private static extern MethodBase GetMethodFromHandleInternalType_native(IntPtr method_handle, IntPtr type_handle, bool genericCheck);

	[Token(Token = "0x6002693")]
	[Address(RVA = "0x3BE2550", Offset = "0x3BE2550", VA = "0x3BE2550")]
	internal RuntimeMethodInfo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002694")]
	[Address(RVA = "0x3BE2560", Offset = "0x3BE2560", VA = "0x3BE2560")]
	internal static extern string get_name(MethodBase method);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002695")]
	[Address(RVA = "0x3BE2570", Offset = "0x3BE2570", VA = "0x3BE2570")]
	internal static extern System.Reflection.RuntimeMethodInfo get_base_method(System.Reflection.RuntimeMethodInfo method, bool definition);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002696")]
	[Address(RVA = "0x3BE2580", Offset = "0x3BE2580", VA = "0x3BE2580")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeMethodInfo method);

	[Token(Token = "0x6002697")]
	[Address(RVA = "0x3BE2590", Offset = "0x3BE2590", VA = "0x3BE2590", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002698")]
	[Address(RVA = "0x3BE25A0", Offset = "0x3BE25A0", VA = "0x3BE25A0")]
	internal MethodInfo GetBaseMethod()
	{
		return null;
	}

	[Token(Token = "0x600269C")]
	[Address(RVA = "0x3BE2640", Offset = "0x3BE2640", VA = "0x3BE2640", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x600269D")]
	[Address(RVA = "0x3BE2670", Offset = "0x3BE2670", VA = "0x3BE2670", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x600269E")]
	[Address(RVA = "0x3BE26F0", Offset = "0x3BE26F0", VA = "0x3BE26F0", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x600269F")]
	[Address(RVA = "0x3BE2700", Offset = "0x3BE2700", VA = "0x3BE2700", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026A0")]
	[Address(RVA = "0x3BE2720", Offset = "0x3BE2720", VA = "0x3BE2720")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x60026A1")]
	[Address(RVA = "0x3BE2730", Offset = "0x3BE2730", VA = "0x3BE2730", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026A2")]
	[Address(RVA = "0x3BE2A00", Offset = "0x3BE2A00", VA = "0x3BE2A00")]
	internal static void ConvertValues(Binder binder, object[] args, ParameterInfo[] pinfo, CultureInfo culture, BindingFlags invokeAttr)
	{
	}

	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x3BE2D80", Offset = "0x3BE2D80", VA = "0x3BE2D80", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026AA")]
	[Address(RVA = "0x3BE2DE0", Offset = "0x3BE2DE0", VA = "0x3BE2DE0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026AB")]
	[Address(RVA = "0x3BE2E30", Offset = "0x3BE2E30", VA = "0x3BE2E30", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026AC")]
	[Address(RVA = "0x3BE2E90", Offset = "0x3BE2E90", VA = "0x3BE2E90")]
	internal extern void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out string entryPoint, out string dllName);

	[Token(Token = "0x60026AD")]
	[Address(RVA = "0x3BE2EA0", Offset = "0x3BE2EA0", VA = "0x3BE2EA0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60026AE")]
	[Address(RVA = "0x3BE3030", Offset = "0x3BE3030", VA = "0x3BE3030")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x60026AF")]
	[Address(RVA = "0x3BE3230", Offset = "0x3BE3230", VA = "0x3BE3230")]
	private CustomAttributeData GetDllImportAttributeData()
	{
		return null;
	}

	[Token(Token = "0x60026B0")]
	[Address(RVA = "0x3BE3C30", Offset = "0x3BE3C30", VA = "0x3BE3C30", Slot = "43")]
	public override MethodInfo MakeGenericMethod(params Type[] methodInstantiation)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B1")]
	[Address(RVA = "0x3BE3F60", Offset = "0x3BE3F60", VA = "0x3BE3F60")]
	private extern MethodInfo MakeGenericMethod_impl(Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B2")]
	[Address(RVA = "0x3BE3F70", Offset = "0x3BE3F70", VA = "0x3BE3F70", Slot = "29")]
	public override extern Type[] GetGenericArguments();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B3")]
	[Address(RVA = "0x3BE3F80", Offset = "0x3BE3F80", VA = "0x3BE3F80")]
	private extern MethodInfo GetGenericMethodDefinition_impl();

	[Token(Token = "0x60026B4")]
	[Address(RVA = "0x3BE3F90", Offset = "0x3BE3F90", VA = "0x3BE3F90", Slot = "42")]
	public override MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x60026B8")]
	[Address(RVA = "0x3BE40C0", Offset = "0x3BE40C0", VA = "0x3BE40C0")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}
}
