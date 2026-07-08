using System.Diagnostics;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004F1")]
public abstract class PropertyInfo : MemberInfo
{
	[Token(Token = "0x170004D8")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002493")]
		[Address(RVA = "0x4EEEBC0", Offset = "0x4EEEBC0", VA = "0x4EEEBC0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004D9")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x6002494")]
		get;
	}

	[Token(Token = "0x170004DA")]
	public abstract PropertyAttributes Attributes
	{
		[Token(Token = "0x6002496")]
		get;
	}

	[Token(Token = "0x170004DB")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6002497")]
		[Address(RVA = "0x4EEEBD0", Offset = "0x4EEEBD0", VA = "0x4EEEBD0", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DC")]
	public abstract bool CanRead
	{
		[Token(Token = "0x6002498")]
		get;
	}

	[Token(Token = "0x170004DD")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x6002499")]
		get;
	}

	[Token(Token = "0x170004DE")]
	public virtual MethodInfo GetMethod
	{
		[Token(Token = "0x600249A")]
		[Address(RVA = "0x4EEEBF0", Offset = "0x4EEEBF0", VA = "0x4EEEBF0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002492")]
	[Address(RVA = "0x4EEEBB0", Offset = "0x4EEEBB0", VA = "0x4EEEBB0")]
	protected PropertyInfo()
	{
	}

	[Token(Token = "0x6002495")]
	public abstract ParameterInfo[] GetIndexParameters();

	[Token(Token = "0x600249B")]
	[Address(RVA = "0x4EEEC10", Offset = "0x4EEEC10", VA = "0x4EEEC10", Slot = "23")]
	public MethodInfo GetGetMethod()
	{
		return null;
	}

	[Token(Token = "0x600249C")]
	public abstract MethodInfo GetGetMethod(bool nonPublic);

	[Token(Token = "0x600249D")]
	[Address(RVA = "0x4EEEC30", Offset = "0x4EEEC30", VA = "0x4EEEC30", Slot = "25")]
	public MethodInfo GetSetMethod()
	{
		return null;
	}

	[Token(Token = "0x600249E")]
	public abstract MethodInfo GetSetMethod(bool nonPublic);

	[Token(Token = "0x600249F")]
	[Address(RVA = "0x4EEEC50", Offset = "0x4EEEC50", VA = "0x4EEEC50")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x4EEEC70", Offset = "0x4EEEC70", VA = "0x4EEEC70", Slot = "27")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public virtual object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x60024A1")]
	public abstract object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x60024A2")]
	[Address(RVA = "0x4EEECA0", Offset = "0x4EEECA0", VA = "0x4EEECA0")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x4EEECC0", Offset = "0x4EEECC0", VA = "0x4EEECC0", Slot = "29")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public virtual void SetValue(object obj, object value, object[] index)
	{
	}

	[Token(Token = "0x60024A4")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x4EEECF0", Offset = "0x4EEECF0", VA = "0x4EEECF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A6")]
	[Address(RVA = "0x4EEED00", Offset = "0x4EEED00", VA = "0x4EEED00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024A7")]
	[Address(RVA = "0x4EECF20", Offset = "0x4EECF20", VA = "0x4EECF20")]
	public static bool operator ==(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A8")]
	[Address(RVA = "0x4EECEF0", Offset = "0x4EECEF0", VA = "0x4EECEF0")]
	public static bool operator !=(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}
}
