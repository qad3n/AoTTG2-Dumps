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
[Token(Token = "0x2000516")]
public abstract class MethodBase : MemberInfo
{
	[Token(Token = "0x170004BB")]
	public abstract MethodAttributes Attributes
	{
		[Token(Token = "0x60024C0")]
		get;
	}

	[Token(Token = "0x170004BC")]
	public virtual CallingConventions CallingConvention
	{
		[Token(Token = "0x60024C2")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "19")]
		get
		{
			return default(CallingConventions);
		}
	}

	[Token(Token = "0x170004BD")]
	public bool IsAbstract
	{
		[Token(Token = "0x60024C3")]
		[Address(RVA = "0x1A4AA30", Offset = "0x1A49030", VA = "0x181A4AA30", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BE")]
	public bool IsConstructor
	{
		[Token(Token = "0x60024C4")]
		[Address(RVA = "0x1A4AA60", Offset = "0x1A49060", VA = "0x181A4AA60", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsFinal
	{
		[Token(Token = "0x60024C5")]
		[Address(RVA = "0x1A4AAF0", Offset = "0x1A490F0", VA = "0x181A4AAF0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsSpecialName
	{
		[Token(Token = "0x60024C6")]
		[Address(RVA = "0x1A4AB70", Offset = "0x1A49170", VA = "0x181A4AB70", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public bool IsStatic
	{
		[Token(Token = "0x60024C7")]
		[Address(RVA = "0x1A4ABA0", Offset = "0x1A491A0", VA = "0x181A4ABA0", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public bool IsVirtual
	{
		[Token(Token = "0x60024C8")]
		[Address(RVA = "0x1A4ABC0", Offset = "0x1A491C0", VA = "0x181A4ABC0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C3")]
	public bool IsPublic
	{
		[Token(Token = "0x60024C9")]
		[Address(RVA = "0x1A4AB10", Offset = "0x1A49110", VA = "0x181A4AB10", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C4")]
	public virtual bool IsGenericMethod
	{
		[Token(Token = "0x60024CA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C5")]
	public virtual bool IsGenericMethodDefinition
	{
		[Token(Token = "0x60024CB")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C6")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x60024CD")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C7")]
	public abstract RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x60024D0")]
		get;
	}

	[Token(Token = "0x170004C8")]
	public virtual bool IsSecurityCritical
	{
		[Token(Token = "0x60024D1")]
		[Address(RVA = "0x1A4AB40", Offset = "0x1A49140", VA = "0x181A4AB40", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60024BE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MethodBase()
	{
	}

	[Token(Token = "0x60024BF")]
	public abstract ParameterInfo[] GetParameters();

	[Token(Token = "0x60024C1")]
	public abstract MethodImplAttributes GetMethodImplementationFlags();

	[Token(Token = "0x60024CC")]
	[Address(RVA = "0x1A4A610", Offset = "0x1A48C10", VA = "0x181A4A610", Slot = "29")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024CE")]
	[Address(RVA = "0x1A4A9F0", Offset = "0x1A48FF0", VA = "0x181A4A9F0", Slot = "31")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(object obj, object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60024CF")]
	public abstract object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x60024D2")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024D3")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024D4")]
	[Address(RVA = "0x1A4ABE0", Offset = "0x1A491E0", VA = "0x181A4ABE0")]
	public static bool operator ==(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024D5")]
	[Address(RVA = "0x1A4AE30", Offset = "0x1A49430", VA = "0x181A4AE30")]
	public static bool operator !=(MethodBase left, MethodBase right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024D6")]
	[Address(RVA = "0x1A4A9D0", Offset = "0x1A48FD0", VA = "0x181A4A9D0", Slot = "35")]
	internal virtual ParameterInfo[] GetParametersInternal()
	{
		return null;
	}

	[Token(Token = "0x60024D7")]
	[Address(RVA = "0x1A4A9A0", Offset = "0x1A48FA0", VA = "0x181A4A9A0", Slot = "36")]
	internal virtual int GetParametersCount()
	{
		return default(int);
	}

	[Token(Token = "0x60024D8")]
	[Address(RVA = "0x1A4A500", Offset = "0x1A48B00", VA = "0x181A4A500", Slot = "37")]
	internal virtual string FormatNameAndSig(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x60024D9")]
	[Address(RVA = "0x1A4A890", Offset = "0x1A48E90", VA = "0x181A4A890", Slot = "38")]
	internal virtual Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x60024DA")]
	[Address(RVA = "0x1A4A9D0", Offset = "0x1A48FD0", VA = "0x181A4A9D0", Slot = "39")]
	internal virtual ParameterInfo[] GetParametersNoCopy()
	{
		return null;
	}

	[Token(Token = "0x60024DB")]
	[Address(RVA = "0x1A4A660", Offset = "0x1A48C60", VA = "0x181A4A660")]
	public static MethodBase GetMethodFromHandle(RuntimeMethodHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60024DC")]
	[Address(RVA = "0x1A4A310", Offset = "0x1A48910", VA = "0x181A4A310")]
	internal static string ConstructParameters(Type[] parameterTypes, CallingConventions callingConvention, bool serialization)
	{
		return null;
	}
}
