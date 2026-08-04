// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BD2A80", Offset = "0x3BD2A80", VA = "0x3BD2A80", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x170004BA")]
	public bool IsAbstract
	{
		[Token(Token = "0x6002441")]
		[Address(RVA = "0x3BD2A90", Offset = "0x3BD2A90", VA = "0x3BD2A90", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BB")]
	public bool IsConstructor
	{
		[Token(Token = "0x6002442")]
		[Address(RVA = "0x3BD2AB0", Offset = "0x3BD2AB0", VA = "0x3BD2AB0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BC")]
	public bool IsFinal
	{
		[Token(Token = "0x6002443")]
		[Address(RVA = "0x3BD2B60", Offset = "0x3BD2B60", VA = "0x3BD2B60", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BD")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x3BD2B80", Offset = "0x3BD2B80", VA = "0x3BD2B80", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BE")]
	public bool IsStatic
	{
		[Token(Token = "0x6002445")]
		[Address(RVA = "0x3BD2B40", Offset = "0x3BD2B40", VA = "0x3BD2B40", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsVirtual
	{
		[Token(Token = "0x6002446")]
		[Address(RVA = "0x3BD2BA0", Offset = "0x3BD2BA0", VA = "0x3BD2BA0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsPublic
	{
		[Token(Token = "0x6002447")]
		[Address(RVA = "0x3BD2BC0", Offset = "0x3BD2BC0", VA = "0x3BD2BC0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public virtual bool IsGenericMethod
	{
		[Token(Token = "0x6002448")]
		[Address(RVA = "0x3BD2BE0", Offset = "0x3BD2BE0", VA = "0x3BD2BE0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public virtual bool IsGenericMethodDefinition
	{
		[Token(Token = "0x6002449")]
		[Address(RVA = "0x3BD2BF0", Offset = "0x3BD2BF0", VA = "0x3BD2BF0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C3")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x600244B")]
		[Address(RVA = "0x3BD2C50", Offset = "0x3BD2C50", VA = "0x3BD2C50", Slot = "30")]
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
		[Address(RVA = "0x3BD2C90", Offset = "0x3BD2C90", VA = "0x3BD2C90", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600243C")]
	[Address(RVA = "0x3BD0750", Offset = "0x3BD0750", VA = "0x3BD0750")]
	protected MethodBase()
	{
	}

	[Token(Token = "0x600243D")]
	public abstract ParameterInfo[] GetParameters();

	[Token(Token = "0x600243F")]
	public abstract MethodImplAttributes GetMethodImplementationFlags();

	[Token(Token = "0x600244A")]
	[Address(RVA = "0x3BD2C00", Offset = "0x3BD2C00", VA = "0x3BD2C00", Slot = "29")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x600244C")]
	[Address(RVA = "0x3BD2C60", Offset = "0x3BD2C60", VA = "0x3BD2C60", Slot = "31")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(object obj, object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600244D")]
	public abstract object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x6002450")]
	[Address(RVA = "0x3BD07B0", Offset = "0x3BD07B0", VA = "0x3BD07B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002451")]
	[Address(RVA = "0x3BD07D0", Offset = "0x3BD07D0", VA = "0x3BD07D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002452")]
	[Address(RVA = "0x3BD27D0", Offset = "0x3BD27D0", VA = "0x3BD27D0")]
	public static bool operator ==(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002453")]
	[Address(RVA = "0x3BD27C0", Offset = "0x3BD27C0", VA = "0x3BD27C0")]
	public static bool operator !=(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002454")]
	[Address(RVA = "0x3BD2D20", Offset = "0x3BD2D20", VA = "0x3BD2D20", Slot = "35")]
	internal virtual ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x6002455")]
	[Address(RVA = "0x3BD2D40", Offset = "0x3BD2D40", VA = "0x3BD2D40", Slot = "36")]
	internal virtual int GetParametersCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002456")]
	[Address(RVA = "0x3BD2D60", Offset = "0x3BD2D60", VA = "0x3BD2D60", Slot = "37")]
	internal virtual string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6002457")]
	[Address(RVA = "0x3BD3090", Offset = "0x3BD3090", VA = "0x3BD3090", Slot = "38")]
	internal virtual Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6002458")]
	[Address(RVA = "0x3BD31C0", Offset = "0x3BD31C0", VA = "0x3BD31C0", Slot = "39")]
	internal virtual ParameterInfo[] GetParametersNoCopy()
	{
		return null;
	}

	[Token(Token = "0x6002459")]
	[Address(RVA = "0x3BD31E0", Offset = "0x3BD31E0", VA = "0x3BD31E0")]
	public static MethodBase GetMethodFromHandle(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600245A")]
	[Address(RVA = "0x3BD2E80", Offset = "0x3BD2E80", VA = "0x3BD2E80")]
	internal static string ConstructParameters(Type[] parameterTypes, CallingConventions callingConvention, bool serialization)
	{
		return null;
	}
}
