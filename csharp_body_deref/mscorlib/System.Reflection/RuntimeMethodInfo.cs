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
		[Address(RVA = "0x4EFC1D0", Offset = "0x4EFC1D0", VA = "0x4EFC1D0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000565")]
	public override Module Module
	{
		[Token(Token = "0x6002686")]
		[Address(RVA = "0x4EFC1E0", Offset = "0x4EFC1E0", VA = "0x4EFC1E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x6002687")]
		[Address(RVA = "0x4EFC2E0", Offset = "0x4EFC2E0", VA = "0x4EFC2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	public override ParameterInfo ReturnParameter
	{
		[Token(Token = "0x6002699")]
		[Address(RVA = "0x4EFCA90", Offset = "0x4EFCA90", VA = "0x4EFCA90", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000568")]
	public override Type ReturnType
	{
		[Token(Token = "0x600269A")]
		[Address(RVA = "0x4EFCAE0", Offset = "0x4EFCAE0", VA = "0x4EFCAE0", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000569")]
	public override int MetadataToken
	{
		[Token(Token = "0x600269B")]
		[Address(RVA = "0x4EFCB10", Offset = "0x4EFCB10", VA = "0x4EFCB10", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700056A")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60026A3")]
		[Address(RVA = "0x4EFD1C0", Offset = "0x4EFD1C0", VA = "0x4EFD1C0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700056B")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x60026A4")]
		[Address(RVA = "0x4EFD1D0", Offset = "0x4EFD1D0", VA = "0x4EFD1D0", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700056C")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x60026A5")]
		[Address(RVA = "0x4EFD1E0", Offset = "0x4EFD1E0", VA = "0x4EFD1E0", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700056D")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026A6")]
		[Address(RVA = "0x4EFD210", Offset = "0x4EFD210", VA = "0x4EFD210", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056E")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026A7")]
		[Address(RVA = "0x4EFD220", Offset = "0x4EFD220", VA = "0x4EFD220", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056F")]
	public override string Name
	{
		[Token(Token = "0x60026A8")]
		[Address(RVA = "0x4EFD250", Offset = "0x4EFD250", VA = "0x4EFD250", Slot = "8")]
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
		[Address(RVA = "0x4EFE4C0", Offset = "0x4EFE4C0", VA = "0x4EFE4C0", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000571")]
	public override extern bool IsGenericMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60026B6")]
		[Address(RVA = "0x4EFE4D0", Offset = "0x4EFE4D0", VA = "0x4EFE4D0", Slot = "27")]
		get;
	}

	[Token(Token = "0x17000572")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x60026B7")]
		[Address(RVA = "0x4EFE4E0", Offset = "0x4EFE4E0", VA = "0x4EFE4E0", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000573")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x60026B9")]
		[Address(RVA = "0x4EFE5B0", Offset = "0x4EFE5B0", VA = "0x4EFE5B0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002688")]
	[Address(RVA = "0x4EFC350", Offset = "0x4EFC350", VA = "0x4EFC350", Slot = "37")]
	internal override string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6002689")]
	[Address(RVA = "0x4EFC740", Offset = "0x4EFC740", VA = "0x4EFC740", Slot = "45")]
	public override Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x600268A")]
	[Address(RVA = "0x4EFC750", Offset = "0x4EFC750", VA = "0x4EFC750", Slot = "46")]
	public override Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x600268B")]
	[Address(RVA = "0x4EFC770", Offset = "0x4EFC770", VA = "0x4EFC770", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600268C")]
	[Address(RVA = "0x4EFC260", Offset = "0x4EFC260", VA = "0x4EFC260")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600268D")]
	[Address(RVA = "0x4EFC7F0", Offset = "0x4EFC7F0", VA = "0x4EFC7F0", Slot = "48")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600268E")]
	[Address(RVA = "0x4EF55E0", Offset = "0x4EF55E0", VA = "0x4EF55E0")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x600268F")]
	[Address(RVA = "0x4EFCA00", Offset = "0x4EFCA00", VA = "0x4EFCA00")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002690")]
	[Address(RVA = "0x4EFCA20", Offset = "0x4EFCA20", VA = "0x4EFCA20")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002691")]
	[Address(RVA = "0x4EED890", Offset = "0x4EED890", VA = "0x4EED890")]
	internal static MethodBase GetMethodFromHandleInternalType(IntPtr method_handle, IntPtr type_handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002692")]
	[Address(RVA = "0x4EFCA10", Offset = "0x4EFCA10", VA = "0x4EFCA10")]
	private static extern MethodBase GetMethodFromHandleInternalType_native(IntPtr method_handle, IntPtr type_handle, bool genericCheck);

	[Token(Token = "0x6002693")]
	[Address(RVA = "0x4EFCA30", Offset = "0x4EFCA30", VA = "0x4EFCA30")]
	internal RuntimeMethodInfo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002694")]
	[Address(RVA = "0x4EFCA40", Offset = "0x4EFCA40", VA = "0x4EFCA40")]
	internal static extern string get_name(MethodBase method);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002695")]
	[Address(RVA = "0x4EFCA50", Offset = "0x4EFCA50", VA = "0x4EFCA50")]
	internal static extern System.Reflection.RuntimeMethodInfo get_base_method(System.Reflection.RuntimeMethodInfo method, bool definition);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002696")]
	[Address(RVA = "0x4EFCA60", Offset = "0x4EFCA60", VA = "0x4EFCA60")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeMethodInfo method);

	[Token(Token = "0x6002697")]
	[Address(RVA = "0x4EFCA70", Offset = "0x4EFCA70", VA = "0x4EFCA70", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002698")]
	[Address(RVA = "0x4EFCA80", Offset = "0x4EFCA80", VA = "0x4EFCA80")]
	internal MethodInfo GetBaseMethod()
	{
		return null;
	}

	[Token(Token = "0x600269C")]
	[Address(RVA = "0x4EFCB20", Offset = "0x4EFCB20", VA = "0x4EFCB20", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x600269D")]
	[Address(RVA = "0x4EFCB50", Offset = "0x4EFCB50", VA = "0x4EFCB50", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x600269E")]
	[Address(RVA = "0x4EFCBD0", Offset = "0x4EFCBD0", VA = "0x4EFCBD0", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x600269F")]
	[Address(RVA = "0x4EFCBE0", Offset = "0x4EFCBE0", VA = "0x4EFCBE0", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026A0")]
	[Address(RVA = "0x4EFCC00", Offset = "0x4EFCC00", VA = "0x4EFCC00")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x60026A1")]
	[Address(RVA = "0x4EFCC10", Offset = "0x4EFCC10", VA = "0x4EFCC10", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026A2")]
	[Address(RVA = "0x4EFCEE0", Offset = "0x4EFCEE0", VA = "0x4EFCEE0")]
	internal static void ConvertValues(Binder binder, object[] args, ParameterInfo[] pinfo, CultureInfo culture, BindingFlags invokeAttr)
	{
	}

	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x4EFD260", Offset = "0x4EFD260", VA = "0x4EFD260", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026AA")]
	[Address(RVA = "0x4EFD2C0", Offset = "0x4EFD2C0", VA = "0x4EFD2C0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026AB")]
	[Address(RVA = "0x4EFD310", Offset = "0x4EFD310", VA = "0x4EFD310", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026AC")]
	[Address(RVA = "0x4EFD370", Offset = "0x4EFD370", VA = "0x4EFD370")]
	internal extern void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out string entryPoint, out string dllName);

	[Token(Token = "0x60026AD")]
	[Address(RVA = "0x4EFD380", Offset = "0x4EFD380", VA = "0x4EFD380")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60026AE")]
	[Address(RVA = "0x4EFD510", Offset = "0x4EFD510", VA = "0x4EFD510")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x60026AF")]
	[Address(RVA = "0x4EFD710", Offset = "0x4EFD710", VA = "0x4EFD710")]
	private CustomAttributeData GetDllImportAttributeData()
	{
		return null;
	}

	[Token(Token = "0x60026B0")]
	[Address(RVA = "0x4EFE110", Offset = "0x4EFE110", VA = "0x4EFE110", Slot = "43")]
	public override MethodInfo MakeGenericMethod(params Type[] methodInstantiation)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B1")]
	[Address(RVA = "0x4EFE440", Offset = "0x4EFE440", VA = "0x4EFE440")]
	private extern MethodInfo MakeGenericMethod_impl(Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B2")]
	[Address(RVA = "0x4EFE450", Offset = "0x4EFE450", VA = "0x4EFE450", Slot = "29")]
	public override extern Type[] GetGenericArguments();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026B3")]
	[Address(RVA = "0x4EFE460", Offset = "0x4EFE460", VA = "0x4EFE460")]
	private extern MethodInfo GetGenericMethodDefinition_impl();

	[Token(Token = "0x60026B4")]
	[Address(RVA = "0x4EFE470", Offset = "0x4EFE470", VA = "0x4EFE470", Slot = "42")]
	public override MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x60026B8")]
	[Address(RVA = "0x4EFE5A0", Offset = "0x4EFE5A0", VA = "0x4EFE5A0")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}
}
