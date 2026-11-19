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
[Token(Token = "0x20004EF")]
public abstract class MethodBase : MemberInfo
{
	[Token(Token = "0x170004BA")]
	public abstract MethodAttributes Attributes
	{
		[Token(Token = "0x600248E")]
		get;
	}

	[Token(Token = "0x170004BB")]
	public virtual CallingConventions CallingConvention
	{
		[Token(Token = "0x6002490")]
		[Address(RVA = "0x53D9C60", Offset = "0x53D8C60", VA = "0x53D9C60", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x170004BC")]
	public bool IsAbstract
	{
		[Token(Token = "0x6002491")]
		[Address(RVA = "0x53D9C70", Offset = "0x53D8C70", VA = "0x53D9C70", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BD")]
	public bool IsConstructor
	{
		[Token(Token = "0x6002492")]
		[Address(RVA = "0x53D9C90", Offset = "0x53D8C90", VA = "0x53D9C90", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BE")]
	public bool IsFinal
	{
		[Token(Token = "0x6002493")]
		[Address(RVA = "0x53D9D40", Offset = "0x53D8D40", VA = "0x53D9D40", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6002494")]
		[Address(RVA = "0x53D9D60", Offset = "0x53D8D60", VA = "0x53D9D60", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsStatic
	{
		[Token(Token = "0x6002495")]
		[Address(RVA = "0x53D9D20", Offset = "0x53D8D20", VA = "0x53D9D20", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public bool IsVirtual
	{
		[Token(Token = "0x6002496")]
		[Address(RVA = "0x53D9D80", Offset = "0x53D8D80", VA = "0x53D9D80", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public bool IsPublic
	{
		[Token(Token = "0x6002497")]
		[Address(RVA = "0x53D9DA0", Offset = "0x53D8DA0", VA = "0x53D9DA0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C3")]
	public virtual bool IsGenericMethod
	{
		[Token(Token = "0x6002498")]
		[Address(RVA = "0x53D9DC0", Offset = "0x53D8DC0", VA = "0x53D9DC0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C4")]
	public virtual bool IsGenericMethodDefinition
	{
		[Token(Token = "0x6002499")]
		[Address(RVA = "0x53D9DD0", Offset = "0x53D8DD0", VA = "0x53D9DD0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C5")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x600249B")]
		[Address(RVA = "0x53D9E30", Offset = "0x53D8E30", VA = "0x53D9E30", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C6")]
	public abstract RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x600249E")]
		get;
	}

	[Token(Token = "0x170004C7")]
	public virtual bool IsSecurityCritical
	{
		[Token(Token = "0x600249F")]
		[Address(RVA = "0x53D9E70", Offset = "0x53D8E70", VA = "0x53D9E70", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600248C")]
	[Address(RVA = "0x53D79B0", Offset = "0x53D69B0", VA = "0x53D79B0")]
	protected MethodBase()
	{
	}

	[Token(Token = "0x600248D")]
	public abstract ParameterInfo[] GetParameters();

	[Token(Token = "0x600248F")]
	public abstract MethodImplAttributes GetMethodImplementationFlags();

	[Token(Token = "0x600249A")]
	[Address(RVA = "0x53D9DE0", Offset = "0x53D8DE0", VA = "0x53D9DE0", Slot = "29")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x600249C")]
	[Address(RVA = "0x53D9E40", Offset = "0x53D8E40", VA = "0x53D9E40", Slot = "31")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object Invoke(object obj, object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600249D")]
	public abstract object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x53D7A10", Offset = "0x53D6A10", VA = "0x53D7A10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A1")]
	[Address(RVA = "0x53D7A30", Offset = "0x53D6A30", VA = "0x53D7A30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024A2")]
	[Address(RVA = "0x53D99D0", Offset = "0x53D89D0", VA = "0x53D99D0")]
	public static bool operator ==(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x53D99C0", Offset = "0x53D89C0", VA = "0x53D99C0")]
	public static bool operator !=(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x53D9F00", Offset = "0x53D8F00", VA = "0x53D9F00", Slot = "35")]
	internal virtual ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x53D9F20", Offset = "0x53D8F20", VA = "0x53D9F20", Slot = "36")]
	internal virtual int GetParametersCount()
	{
		return default(int);
	}

	[Token(Token = "0x60024A6")]
	[Address(RVA = "0x53D9F40", Offset = "0x53D8F40", VA = "0x53D9F40", Slot = "37")]
	internal virtual string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x60024A7")]
	[Address(RVA = "0x53DA2F0", Offset = "0x53D92F0", VA = "0x53DA2F0", Slot = "38")]
	internal virtual Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x60024A8")]
	[Address(RVA = "0x53DA420", Offset = "0x53D9420", VA = "0x53DA420", Slot = "39")]
	internal virtual ParameterInfo[] GetParametersNoCopy()
	{
		return null;
	}

	[Token(Token = "0x60024A9")]
	[Address(RVA = "0x53DA440", Offset = "0x53D9440", VA = "0x53DA440")]
	public static MethodBase GetMethodFromHandle(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60024AA")]
	[Address(RVA = "0x53DA060", Offset = "0x53D9060", VA = "0x53DA060")]
	internal static string ConstructParameters(Type[] parameterTypes, CallingConventions callingConvention, bool serialization)
	{
		return null;
	}
}
