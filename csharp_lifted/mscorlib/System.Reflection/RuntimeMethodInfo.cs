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
[Token(Token = "0x2000520")]
internal class RuntimeMethodInfo : MethodInfo, ISerializable
{
	[Token(Token = "0x400149E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x400149F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x40014A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000566")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026D6")]
		[Address(RVA = "0x53E88C0", Offset = "0x53E78C0", VA = "0x53E88C0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000567")]
	public override Module Module
	{
		[Token(Token = "0x60026D7")]
		[Address(RVA = "0x53E88D0", Offset = "0x53E78D0", VA = "0x53E88D0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000568")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026D8")]
		[Address(RVA = "0x53E89D0", Offset = "0x53E79D0", VA = "0x53E89D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000569")]
	public override ParameterInfo ReturnParameter
	{
		[Token(Token = "0x60026EA")]
		[Address(RVA = "0x53E9340", Offset = "0x53E8340", VA = "0x53E9340", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056A")]
	public override Type ReturnType
	{
		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x53E9390", Offset = "0x53E8390", VA = "0x53E9390", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056B")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026EC")]
		[Address(RVA = "0x53E93C0", Offset = "0x53E83C0", VA = "0x53E93C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700056C")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60026F4")]
		[Address(RVA = "0x53E9AA0", Offset = "0x53E8AA0", VA = "0x53E9AA0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700056D")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x60026F5")]
		[Address(RVA = "0x53E9AB0", Offset = "0x53E8AB0", VA = "0x53E9AB0", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700056E")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x60026F6")]
		[Address(RVA = "0x53E9AC0", Offset = "0x53E8AC0", VA = "0x53E9AC0", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700056F")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026F7")]
		[Address(RVA = "0x53E9AF0", Offset = "0x53E8AF0", VA = "0x53E9AF0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026F8")]
		[Address(RVA = "0x53E9B00", Offset = "0x53E8B00", VA = "0x53E9B00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	public override string Name
	{
		[Token(Token = "0x60026F9")]
		[Address(RVA = "0x53E9B30", Offset = "0x53E8B30", VA = "0x53E9B30", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000572")]
	public override extern bool IsGenericMethodDefinition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002706")]
		[Address(RVA = "0x53EAC60", Offset = "0x53E9C60", VA = "0x53EAC60", Slot = "28")]
		get;
	}

	[Token(Token = "0x17000573")]
	public override extern bool IsGenericMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002707")]
		[Address(RVA = "0x53EAC70", Offset = "0x53E9C70", VA = "0x53EAC70", Slot = "27")]
		get;
	}

	[Token(Token = "0x17000574")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002708")]
		[Address(RVA = "0x53EAC80", Offset = "0x53E9C80", VA = "0x53EAC80", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000575")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x600270A")]
		[Address(RVA = "0x53EAD50", Offset = "0x53E9D50", VA = "0x53EAD50", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60026D9")]
	[Address(RVA = "0x53E8A40", Offset = "0x53E7A40", VA = "0x53E8A40", Slot = "37")]
	internal override string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x60026DA")]
	[Address(RVA = "0x53E8FD0", Offset = "0x53E7FD0", VA = "0x53E8FD0", Slot = "45")]
	public override Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x60026DB")]
	[Address(RVA = "0x53E8FE0", Offset = "0x53E7FE0", VA = "0x53E8FE0", Slot = "46")]
	public override Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x60026DC")]
	[Address(RVA = "0x53E9000", Offset = "0x53E8000", VA = "0x53E9000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026DD")]
	[Address(RVA = "0x53E8950", Offset = "0x53E7950", VA = "0x53E8950")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x53E9080", Offset = "0x53E8080", VA = "0x53E9080", Slot = "48")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026DF")]
	[Address(RVA = "0x53E1D30", Offset = "0x53E0D30", VA = "0x53E1D30")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x53E92B0", Offset = "0x53E82B0", VA = "0x53E92B0")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x53E92D0", Offset = "0x53E82D0", VA = "0x53E92D0")]
	internal static MethodBase GetMethodFromHandleNoGenericCheck(RuntimeMethodHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}

	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x53DA610", Offset = "0x53D9610", VA = "0x53DA610")]
	internal static MethodBase GetMethodFromHandleInternalType(IntPtr method_handle, IntPtr type_handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x53E92C0", Offset = "0x53E82C0", VA = "0x53E92C0")]
	private static extern MethodBase GetMethodFromHandleInternalType_native(IntPtr method_handle, IntPtr type_handle, bool genericCheck);

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x53E92E0", Offset = "0x53E82E0", VA = "0x53E92E0")]
	internal RuntimeMethodInfo()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x53E92F0", Offset = "0x53E82F0", VA = "0x53E92F0")]
	internal static extern string get_name(MethodBase method);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E6")]
	[Address(RVA = "0x53E9300", Offset = "0x53E8300", VA = "0x53E9300")]
	internal static extern System.Reflection.RuntimeMethodInfo get_base_method(System.Reflection.RuntimeMethodInfo method, bool definition);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026E7")]
	[Address(RVA = "0x53E9310", Offset = "0x53E8310", VA = "0x53E9310")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeMethodInfo method);

	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x53E9320", Offset = "0x53E8320", VA = "0x53E9320", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x60026E9")]
	[Address(RVA = "0x53E9330", Offset = "0x53E8330", VA = "0x53E9330")]
	internal MethodInfo GetBaseMethod()
	{
		return null;
	}

	[Token(Token = "0x60026ED")]
	[Address(RVA = "0x53E93D0", Offset = "0x53E83D0", VA = "0x53E93D0", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x53E9400", Offset = "0x53E8400", VA = "0x53E9400", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x53E9480", Offset = "0x53E8480", VA = "0x53E9480", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x60026F0")]
	[Address(RVA = "0x53E9490", Offset = "0x53E8490", VA = "0x53E9490", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x53E94B0", Offset = "0x53E84B0", VA = "0x53E94B0")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x60026F2")]
	[Address(RVA = "0x53E94C0", Offset = "0x53E84C0", VA = "0x53E94C0", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x53E9790", Offset = "0x53E8790", VA = "0x53E9790")]
	internal static void ConvertValues(Binder binder, object[] args, ParameterInfo[] pinfo, CultureInfo culture, BindingFlags invokeAttr)
	{
	}

	[Token(Token = "0x60026FA")]
	[Address(RVA = "0x53E9B40", Offset = "0x53E8B40", VA = "0x53E9B40", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026FB")]
	[Address(RVA = "0x53E9BA0", Offset = "0x53E8BA0", VA = "0x53E9BA0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026FC")]
	[Address(RVA = "0x53E9BF0", Offset = "0x53E8BF0", VA = "0x53E9BF0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026FD")]
	[Address(RVA = "0x53E9C50", Offset = "0x53E8C50", VA = "0x53E9C50")]
	internal extern void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out string entryPoint, out string dllName);

	[Token(Token = "0x60026FE")]
	[Address(RVA = "0x53E9C60", Offset = "0x53E8C60", VA = "0x53E9C60")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60026FF")]
	[Address(RVA = "0x53E9E00", Offset = "0x53E8E00", VA = "0x53E9E00")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x6002700")]
	[Address(RVA = "0x53EA010", Offset = "0x53E9010", VA = "0x53EA010")]
	private CustomAttributeData GetDllImportAttributeData()
	{
		return null;
	}

	[Token(Token = "0x6002701")]
	[Address(RVA = "0x53EA8B0", Offset = "0x53E98B0", VA = "0x53EA8B0", Slot = "43")]
	public override MethodInfo MakeGenericMethod(params Type[] methodInstantiation)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002702")]
	[Address(RVA = "0x53EABE0", Offset = "0x53E9BE0", VA = "0x53EABE0")]
	private extern MethodInfo MakeGenericMethod_impl(Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002703")]
	[Address(RVA = "0x53EABF0", Offset = "0x53E9BF0", VA = "0x53EABF0", Slot = "29")]
	public override extern Type[] GetGenericArguments();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002704")]
	[Address(RVA = "0x53EAC00", Offset = "0x53E9C00", VA = "0x53EAC00")]
	private extern MethodInfo GetGenericMethodDefinition_impl();

	[Token(Token = "0x6002705")]
	[Address(RVA = "0x53EAC10", Offset = "0x53E9C10", VA = "0x53EAC10", Slot = "42")]
	public override MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002709")]
	[Address(RVA = "0x53EAD40", Offset = "0x53E9D40", VA = "0x53EAD40")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}
}
