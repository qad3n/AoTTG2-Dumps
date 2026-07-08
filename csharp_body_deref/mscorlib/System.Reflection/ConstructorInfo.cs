using System.Diagnostics;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004D3")]
public abstract class ConstructorInfo : MethodBase
{
	[Token(Token = "0x40013D7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ConstructorName;

	[Token(Token = "0x40013D8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TypeConstructorName;

	[Token(Token = "0x170004A0")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60023E5")]
		[Address(RVA = "0x4EEAC40", Offset = "0x4EEAC40", VA = "0x4EEAC40", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x4EEAC20", Offset = "0x4EEAC20", VA = "0x4EEAC20")]
	protected ConstructorInfo()
	{
	}

	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x4EEAC50", Offset = "0x4EEAC50", VA = "0x4EEAC50")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object Invoke(object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60023E7")]
	public abstract object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x4EEAC80", Offset = "0x4EEAC80", VA = "0x4EEAC80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x4EEACA0", Offset = "0x4EEACA0", VA = "0x4EEACA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x4EEACC0", Offset = "0x4EEACC0", VA = "0x4EEACC0")]
	public static bool operator ==(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x4EEACF0", Offset = "0x4EEACF0", VA = "0x4EEACF0")]
	public static bool operator !=(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}
}
