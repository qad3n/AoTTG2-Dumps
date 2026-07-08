using System.Diagnostics;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004E6")]
public abstract class MethodBase : MemberInfo
{
	[Token(Token = "0x170004B8")]
	public abstract MethodAttributes Attributes
	{
		[Token(Token = "0x600243E")]
		get;
	}

	[Token(Token = "0x170004B9")]
	public virtual CallingConventions CallingConvention
	{
		[Token(Token = "0x6002440")]
		[Address(RVA = "0x4EECF60", Offset = "0x4EECF60", VA = "0x4EECF60", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x170004BA")]
	public bool IsAbstract
	{
		[Token(Token = "0x6002441")]
		[Address(RVA = "0x4EECF70", Offset = "0x4EECF70", VA = "0x4EECF70", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BB")]
	public bool IsConstructor
	{
		[Token(Token = "0x6002442")]
		[Address(RVA = "0x4EECF90", Offset = "0x4EECF90", VA = "0x4EECF90", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BC")]
	public bool IsFinal
	{
		[Token(Token = "0x6002443")]
		[Address(RVA = "0x4EED040", Offset = "0x4EED040", VA = "0x4EED040", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BD")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x4EED060", Offset = "0x4EED060", VA = "0x4EED060", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BE")]
	public bool IsStatic
	{
		[Token(Token = "0x6002445")]
		[Address(RVA = "0x4EED020", Offset = "0x4EED020", VA = "0x4EED020", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsVirtual
	{
		[Token(Token = "0x6002446")]
		[Address(RVA = "0x4EED080", Offset = "0x4EED080", VA = "0x4EED080", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsPublic
	{
		[Token(Token = "0x6002447")]
		[Address(RVA = "0x4EED0A0", Offset = "0x4EED0A0", VA = "0x4EED0A0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public virtual bool IsGenericMethod
	{
		[Token(Token = "0x6002448")]
		[Address(RVA = "0x4EED0C0", Offset = "0x4EED0C0", VA = "0x4EED0C0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public virtual bool IsGenericMethodDefinition
	{
		[Token(Token = "0x6002449")]
		[Address(RVA = "0x4EED0D0", Offset = "0x4EED0D0", VA = "0x4EED0D0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C3")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x600244B")]
		[Address(RVA = "0x4EED130", Offset = "0x4EED130", VA = "0x4EED130", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C4")]
	public abstract RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x600244E")]
		get;
	}

	[Token(Token = "0x170004C5")]
	public virtual bool IsSecurityCritical
	{
		[Token(Token = "0x600244F")]
		[Address(RVA = "0x4EED170", Offset = "0x4EED170", VA = "0x4EED170", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600243C")]
	[Address(RVA = "0x4EEAC30", Offset = "0x4EEAC30", VA = "0x4EEAC30")]
	protected MethodBase()
	{
	}

	[Token(Token = "0x600243D")]
	public abstract ParameterInfo[] GetParameters();

	[Token(Token = "0x600243F")]
	public abstract MethodImplAttributes GetMethodImplementationFlags();

	[Token(Token = "0x600244A")]
	[Address(RVA = "0x4EED0E0", Offset = "0x4EED0E0", VA = "0x4EED0E0", Slot = "29")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x600244C")]
	[Address(RVA = "0x4EED140", Offset = "0x4EED140", VA = "0x4EED140", Slot = "31")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(object obj, object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600244D")]
	public abstract object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x6002450")]
	[Address(RVA = "0x4EEAC90", Offset = "0x4EEAC90", VA = "0x4EEAC90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002451")]
	[Address(RVA = "0x4EEACB0", Offset = "0x4EEACB0", VA = "0x4EEACB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002452")]
	[Address(RVA = "0x4EECCB0", Offset = "0x4EECCB0", VA = "0x4EECCB0")]
	public static bool operator ==(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002453")]
	[Address(RVA = "0x4EECCA0", Offset = "0x4EECCA0", VA = "0x4EECCA0")]
	public static bool operator !=(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002454")]
	[Address(RVA = "0x4EED200", Offset = "0x4EED200", VA = "0x4EED200", Slot = "35")]
	internal virtual ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x6002455")]
	[Address(RVA = "0x4EED220", Offset = "0x4EED220", VA = "0x4EED220", Slot = "36")]
	internal virtual int GetParametersCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002456")]
	[Address(RVA = "0x4EED240", Offset = "0x4EED240", VA = "0x4EED240", Slot = "37")]
	internal virtual string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6002457")]
	[Address(RVA = "0x4EED570", Offset = "0x4EED570", VA = "0x4EED570", Slot = "38")]
	internal virtual Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6002458")]
	[Address(RVA = "0x4EED6A0", Offset = "0x4EED6A0", VA = "0x4EED6A0", Slot = "39")]
	internal virtual ParameterInfo[] GetParametersNoCopy()
	{
		return null;
	}

	[Token(Token = "0x6002459")]
	[Address(RVA = "0x4EED6C0", Offset = "0x4EED6C0", VA = "0x4EED6C0")]
	public static MethodBase GetMethodFromHandle(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600245A")]
	[Address(RVA = "0x4EED360", Offset = "0x4EED360", VA = "0x4EED360")]
	internal static string ConstructParameters(Type[] parameterTypes, CallingConventions callingConvention, bool serialization)
	{
		return null;
	}
}
