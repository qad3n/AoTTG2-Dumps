using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000518")]
internal class RuntimeConstructorInfo : ConstructorInfo, ISerializable
{
	[Token(Token = "0x4001542")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr mhandle;

	[Token(Token = "0x4001543")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string name;

	[Token(Token = "0x4001544")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type reftype;

	[Token(Token = "0x17000574")]
	public override Module Module
	{
		[Token(Token = "0x60026BA")]
		[Address(RVA = "0x4EFE5C0", Offset = "0x4EFE5C0", VA = "0x4EFE5C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000575")]
	internal BindingFlags BindingFlags
	{
		[Token(Token = "0x60026BC")]
		[Address(RVA = "0x4EFE6C0", Offset = "0x4EFE6C0", VA = "0x4EFE6C0")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x17000576")]
	private System.RuntimeType ReflectedTypeInternal
	{
		[Token(Token = "0x60026BD")]
		[Address(RVA = "0x4EFE6D0", Offset = "0x4EFE6D0", VA = "0x4EFE6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000577")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60026CA")]
		[Address(RVA = "0x4EFEE80", Offset = "0x4EFEE80", VA = "0x4EFEE80", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x17000578")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x60026CB")]
		[Address(RVA = "0x4EFEE90", Offset = "0x4EFEE90", VA = "0x4EFEE90", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x17000579")]
	public override CallingConventions CallingConvention
	{
		[Token(Token = "0x60026CC")]
		[Address(RVA = "0x4EFEEA0", Offset = "0x4EFEEA0", VA = "0x4EFEEA0", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x1700057A")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x4EFEED0", Offset = "0x4EFEED0", VA = "0x4EFEED0", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057B")]
	public override Type ReflectedType
	{
		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x4EFEF10", Offset = "0x4EFEF10", VA = "0x4EFEF10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057C")]
	public override Type DeclaringType
	{
		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x4EFEF20", Offset = "0x4EFEF20", VA = "0x4EFEF20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057D")]
	public override string Name
	{
		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x4EFEF50", Offset = "0x4EFEF50", VA = "0x4EFEF50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057E")]
	public override bool IsSecurityCritical
	{
		[Token(Token = "0x60026D6")]
		[Address(RVA = "0x4EFF0D0", Offset = "0x4EFF0D0", VA = "0x4EFF0D0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057F")]
	public override int MetadataToken
	{
		[Token(Token = "0x60026D7")]
		[Address(RVA = "0x4EFF0E0", Offset = "0x4EFF0E0", VA = "0x4EFF0E0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60026BB")]
	[Address(RVA = "0x4EFE640", Offset = "0x4EFE640", VA = "0x4EFE640")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x60026BE")]
	[Address(RVA = "0x4EFE740", Offset = "0x4EFE740", VA = "0x4EFE740", Slot = "41")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026BF")]
	[Address(RVA = "0x4EF55C0", Offset = "0x4EF55C0", VA = "0x4EF55C0")]
	internal string SerializationToString()
	{
		return null;
	}

	[Token(Token = "0x60026C0")]
	[Address(RVA = "0x4EFE880", Offset = "0x4EFE880", VA = "0x4EFE880")]
	internal void SerializationInvoke(object target, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60026C1")]
	[Address(RVA = "0x4EFE9C0", Offset = "0x4EFE9C0", VA = "0x4EFE9C0", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x4EFE9F0", Offset = "0x4EFE9F0", VA = "0x4EFE9F0", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x60026C3")]
	[Address(RVA = "0x4EFEA00", Offset = "0x4EFEA00", VA = "0x4EFEA00", Slot = "35")]
	internal override ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x4EFEA10", Offset = "0x4EFEA10", VA = "0x4EFEA10", Slot = "36")]
	internal override int GetParametersCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026C5")]
	[Address(RVA = "0x4EFEA30", Offset = "0x4EFEA30", VA = "0x4EFEA30")]
	internal extern object InternalInvoke(object obj, object[] parameters, out Exception exc);

	[Token(Token = "0x60026C6")]
	[Address(RVA = "0x4EFEA40", Offset = "0x4EFEA40", VA = "0x4EFEA40", Slot = "32")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026C7")]
	[Address(RVA = "0x4EFEB40", Offset = "0x4EFEB40", VA = "0x4EFEB40")]
	private object DoInvoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026C8")]
	[Address(RVA = "0x4EFED10", Offset = "0x4EFED10", VA = "0x4EFED10")]
	public object InternalInvoke(object obj, object[] parameters, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x60026C9")]
	[Address(RVA = "0x4EFEE60", Offset = "0x4EFEE60", VA = "0x4EFEE60", Slot = "40")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x60026D1")]
	[Address(RVA = "0x4EFEF60", Offset = "0x4EFEF60", VA = "0x4EFEF60", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026D2")]
	[Address(RVA = "0x4EFEFC0", Offset = "0x4EFEFC0", VA = "0x4EFEFC0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026D3")]
	[Address(RVA = "0x4EFF010", Offset = "0x4EFF010", VA = "0x4EFF010", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026D4")]
	[Address(RVA = "0x4EFF070", Offset = "0x4EFF070", VA = "0x4EFF070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60026D5")]
	[Address(RVA = "0x4EFF0C0", Offset = "0x4EFF0C0", VA = "0x4EFF0C0")]
	private static int get_core_clr_security_level()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026D8")]
	[Address(RVA = "0x4EFF0F0", Offset = "0x4EFF0F0", VA = "0x4EFF0F0")]
	internal static extern int get_metadata_token(System.Reflection.RuntimeConstructorInfo method);

	[Token(Token = "0x60026D9")]
	[Address(RVA = "0x4EFF100", Offset = "0x4EFF100", VA = "0x4EFF100")]
	public RuntimeConstructorInfo()
	{
	}
}
