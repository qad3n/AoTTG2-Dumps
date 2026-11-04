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
[Token(Token = "0x2000547")]
internal class RuntimeMethodInfo : MethodInfo, ISerializable
{
	[Token(Token = "0x400153E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x400153F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x4001540")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000567")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x6002708")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000568")]
	public override Module Module
	{
		[Token(Token = "0x6002709")]
		[Address(RVA = "0x1A6F8C0", Offset = "0x1A6DEC0", VA = "0x181A6F8C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000569")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600270A")]
		[Address(RVA = "0x1A70220", Offset = "0x1A6E820", VA = "0x181A70220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056A")]
	public override ParameterInfo ReturnParameter
	{
		[Token(Token = "0x600271C")]
		[Address(RVA = "0x1A6ACE0", Offset = "0x1A692E0", VA = "0x181A6ACE0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056B")]
	public override Type ReturnType
	{
		[Token(Token = "0x600271D")]
		[Address(RVA = "0x1A702A0", Offset = "0x1A6E8A0", VA = "0x181A702A0", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056C")]
	public override int MetadataToken
	{
		[Token(Token = "0x600271E")]
		[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700056D")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x6002726")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700056E")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x6002727")]
		[Address(RVA = "0x1A6CA30", Offset = "0x1A6B030", VA = "0x181A6CA30", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700056F")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x6002728")]
		[Address(RVA = "0x1A6CA40", Offset = "0x1A6B040", VA = "0x181A6CA40", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x17000570")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002729")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600272A")]
		[Address(RVA = "0x1A6CAB0", Offset = "0x1A6B0B0", VA = "0x181A6CAB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override string Name
	{
		[Token(Token = "0x600272B")]
		[Address(RVA = "0x1A6CAF0", Offset = "0x1A6B0F0", VA = "0x181A6CAF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000573")]
	public override extern bool IsGenericMethodDefinition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002738")]
		[Address(RVA = "0x1A70200", Offset = "0x1A6E800", VA = "0x181A70200", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000574")]
	public override extern bool IsGenericMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002739")]
		[Address(RVA = "0x1A70210", Offset = "0x1A6E810", VA = "0x181A70210", Slot = "27")]
		get;
	}

	[Token(Token = "0x17000575")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x600273A")]
		[Address(RVA = "0x1A70120", Offset = "0x1A6E720", VA = "0x181A70120", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000576")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x600273C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600270B")]
	[Address(RVA = "0x1A6E500", Offset = "0x1A6CB00", VA = "0x181A6E500", Slot = "37")]
	internal override string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x600270C")]
	[Address(RVA = "0x1A6E4C0", Offset = "0x1A6CAC0", VA = "0x181A6E4C0", Slot = "45")]
	public override Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x600270D")]
	[Address(RVA = "0x1A6E4E0", Offset = "0x1A6CAE0", VA = "0x181A6E4E0", Slot = "46")]
	public override Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x600270E")]
	[Address(RVA = "0x1A70090", Offset = "0x1A6E690", VA = "0x181A70090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600270F")]
	[Address(RVA = "0x1A6F8C0", Offset = "0x1A6DEC0", VA = "0x181A6F8C0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6002710")]
	[Address(RVA = "0x1A6F200", Offset = "0x1A6D800", VA = "0x181A6F200", Slot = "48")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002711")]
	[Address(RVA = "0x1A6FFF0", Offset = "0x1A6E5F0", VA = "0x181A6FFF0")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x6002712")]
	[Address(RVA = "0x1A6F1E0", Offset = "0x1A6D7E0", VA = "0x181A6F1E0")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6002713")]
	[Address(RVA = "0x1A6F1F0", Offset = "0x1A6D7F0", VA = "0x181A6F1F0")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6002714")]
	[Address(RVA = "0x1A6F1C0", Offset = "0x1A6D7C0", VA = "0x181A6F1C0")]
	internal static MethodBase GetMethodFromHandleInternalType(IntPtr method_handle, IntPtr type_handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002715")]
	[Address(RVA = "0x1A6F1D0", Offset = "0x1A6D7D0", VA = "0x181A6F1D0")]
	private static extern MethodBase GetMethodFromHandleInternalType_native(IntPtr method_handle, IntPtr type_handle, bool genericCheck);

	[Token(Token = "0x6002716")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	internal RuntimeMethodInfo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002717")]
	[Address(RVA = "0x1A702E0", Offset = "0x1A6E8E0", VA = "0x181A702E0")]
	internal static extern string get_name(MethodBase method);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002718")]
	[Address(RVA = "0x1A702D0", Offset = "0x1A6E8D0", VA = "0x181A702D0")]
	internal static extern System.Reflection.RuntimeMethodInfo get_base_method(System.Reflection.RuntimeMethodInfo method, bool definition);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002719")]
	[Address(RVA = "0x1A6CAE0", Offset = "0x1A6B0E0", VA = "0x181A6CAE0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeMethodInfo method);

	[Token(Token = "0x600271A")]
	[Address(RVA = "0x1A6E800", Offset = "0x1A6CE00", VA = "0x181A6E800", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x600271B")]
	[Address(RVA = "0x1A6E810", Offset = "0x1A6CE10", VA = "0x181A6E810")]
	internal MethodInfo GetBaseMethod()
	{
		return null;
	}

	[Token(Token = "0x600271F")]
	[Address(RVA = "0x1A6C300", Offset = "0x1A6A900", VA = "0x181A6C300", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x6002720")]
	[Address(RVA = "0x1A6F470", Offset = "0x1A6DA70", VA = "0x181A6F470", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x6002721")]
	[Address(RVA = "0x1A6C4D0", Offset = "0x1A6AAD0", VA = "0x181A6C4D0", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x6002722")]
	[Address(RVA = "0x1A6F440", Offset = "0x1A6DA40", VA = "0x181A6F440", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002723")]
	[Address(RVA = "0x1A6F950", Offset = "0x1A6DF50", VA = "0x181A6F950")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x6002724")]
	[Address(RVA = "0x1A6F960", Offset = "0x1A6DF60", VA = "0x181A6F960", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002725")]
	[Address(RVA = "0x1A6E170", Offset = "0x1A6C770", VA = "0x181A6E170")]
	internal static void ConvertValues(Binder binder, object[] args, ParameterInfo[] pinfo, CultureInfo culture, BindingFlags invokeAttr)
	{
	}

	[Token(Token = "0x600272C")]
	[Address(RVA = "0x1A6FC00", Offset = "0x1A6E200", VA = "0x181A6FC00", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600272D")]
	[Address(RVA = "0x1A6E890", Offset = "0x1A6CE90", VA = "0x181A6E890", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600272E")]
	[Address(RVA = "0x1A6E820", Offset = "0x1A6CE20", VA = "0x181A6E820", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600272F")]
	[Address(RVA = "0x1A6F430", Offset = "0x1A6DA30", VA = "0x181A6F430")]
	internal extern void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out string entryPoint, out string dllName);

	[Token(Token = "0x6002730")]
	[Address(RVA = "0x1A6F710", Offset = "0x1A6DD10", VA = "0x181A6F710")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x6002731")]
	[Address(RVA = "0x1A6F500", Offset = "0x1A6DB00", VA = "0x181A6F500")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x6002732")]
	[Address(RVA = "0x1A6E8F0", Offset = "0x1A6CEF0", VA = "0x181A6E8F0")]
	private CustomAttributeData GetDllImportAttributeData()
	{
		return null;
	}

	[Token(Token = "0x6002733")]
	[Address(RVA = "0x1A6FC80", Offset = "0x1A6E280", VA = "0x181A6FC80", Slot = "43")]
	public override MethodInfo MakeGenericMethod(params Type[] methodInstantiation)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002734")]
	[Address(RVA = "0x1A6FC70", Offset = "0x1A6E270", VA = "0x181A6FC70")]
	private extern MethodInfo MakeGenericMethod_impl(Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002735")]
	[Address(RVA = "0x1A6F130", Offset = "0x1A6D730", VA = "0x181A6F130", Slot = "29")]
	public override extern Type[] GetGenericArguments();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002736")]
	[Address(RVA = "0x1A6F140", Offset = "0x1A6D740", VA = "0x181A6F140")]
	private extern MethodInfo GetGenericMethodDefinition_impl();

	[Token(Token = "0x6002737")]
	[Address(RVA = "0x1A6F150", Offset = "0x1A6D750", VA = "0x181A6F150", Slot = "42")]
	public override MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x600273B")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}
}
