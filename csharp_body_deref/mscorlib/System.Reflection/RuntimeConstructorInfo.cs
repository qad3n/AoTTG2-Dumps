// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeConstructorInfo
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
[Token(Token = "0x2000521")]
internal class RuntimeConstructorInfo : ConstructorInfo, ISerializable
{
	[Token(Token = "0x40014A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x40014A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x40014A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000576")]
	public override Module Module
	{
		[Token(Token = "0x600270B")]
		[Address(RVA = "0x53EAD60", Offset = "0x53E9D60", VA = "0x53EAD60", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000577")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x600270D")]
		[Address(RVA = "0x53EAE60", Offset = "0x53E9E60", VA = "0x53EAE60")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000578")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x600270E")]
		[Address(RVA = "0x53EAE70", Offset = "0x53E9E70", VA = "0x53EAE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000579")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x600271B")]
		[Address(RVA = "0x53EB620", Offset = "0x53EA620", VA = "0x53EB620", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700057A")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x600271C")]
		[Address(RVA = "0x53EB630", Offset = "0x53EA630", VA = "0x53EB630", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x1700057B")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x600271D")]
		[Address(RVA = "0x53EB640", Offset = "0x53EA640", VA = "0x53EB640", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700057C")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x600271E")]
		[Address(RVA = "0x53EB670", Offset = "0x53EA670", VA = "0x53EB670", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057D")]
	public override Type ReflectedType
	{
		[Token(Token = "0x600271F")]
		[Address(RVA = "0x53EB6B0", Offset = "0x53EA6B0", VA = "0x53EB6B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057E")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002720")]
		[Address(RVA = "0x53EB6C0", Offset = "0x53EA6C0", VA = "0x53EB6C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057F")]
	public override string Name
	{
		[Token(Token = "0x6002721")]
		[Address(RVA = "0x53EB6F0", Offset = "0x53EA6F0", VA = "0x53EB6F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000580")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x6002727")]
		[Address(RVA = "0x53EB870", Offset = "0x53EA870", VA = "0x53EB870", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000581")]
	public override int MetadataToken
	{
		[Token(Token = "0x6002728")]
		[Address(RVA = "0x53EB880", Offset = "0x53EA880", VA = "0x53EB880", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600270C")]
	[Address(RVA = "0x53EADE0", Offset = "0x53E9DE0", VA = "0x53EADE0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x600270F")]
	[Address(RVA = "0x53EAEE0", Offset = "0x53E9EE0", VA = "0x53EAEE0", Slot = "41")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002710")]
	[Address(RVA = "0x53E1D10", Offset = "0x53E0D10", VA = "0x53E1D10")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x6002711")]
	[Address(RVA = "0x53EB020", Offset = "0x53EA020", VA = "0x53EB020")]
	internal void SerializationInvoke(object target, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002712")]
	[Address(RVA = "0x53EB160", Offset = "0x53EA160", VA = "0x53EB160", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x6002713")]
	[Address(RVA = "0x53EB190", Offset = "0x53EA190", VA = "0x53EB190", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x6002714")]
	[Address(RVA = "0x53EB1A0", Offset = "0x53EA1A0", VA = "0x53EB1A0", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x6002715")]
	[Address(RVA = "0x53EB1B0", Offset = "0x53EA1B0", VA = "0x53EB1B0", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002716")]
	[Address(RVA = "0x53EB1D0", Offset = "0x53EA1D0", VA = "0x53EB1D0")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x6002717")]
	[Address(RVA = "0x53EB1E0", Offset = "0x53EA1E0", VA = "0x53EB1E0", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002718")]
	[Address(RVA = "0x53EB2E0", Offset = "0x53EA2E0", VA = "0x53EB2E0")]
	private object DoInvoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002719")]
	[Address(RVA = "0x53EB4B0", Offset = "0x53EA4B0", VA = "0x53EB4B0")]
	public object InternalInvoke(object obj, object[] parameters, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x600271A")]
	[Address(RVA = "0x53EB600", Offset = "0x53EA600", VA = "0x53EB600", Slot = "40")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002722")]
	[Address(RVA = "0x53EB700", Offset = "0x53EA700", VA = "0x53EB700", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002723")]
	[Address(RVA = "0x53EB760", Offset = "0x53EA760", VA = "0x53EB760", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002724")]
	[Address(RVA = "0x53EB7B0", Offset = "0x53EA7B0", VA = "0x53EB7B0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002725")]
	[Address(RVA = "0x53EB810", Offset = "0x53EA810", VA = "0x53EB810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002726")]
	[Address(RVA = "0x53EB860", Offset = "0x53EA860", VA = "0x53EB860")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002729")]
	[Address(RVA = "0x53EB890", Offset = "0x53EA890", VA = "0x53EB890")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeConstructorInfo method);

	[Token(Token = "0x600272A")]
	[Address(RVA = "0x53EB8A0", Offset = "0x53EA8A0", VA = "0x53EB8A0")]
	public RuntimeConstructorInfo()
	{
	}
}
