using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection.Emit;

[Token(Token = "0x2000524")]
public sealed class DynamicMethod : MethodInfo
{
	[Token(Token = "0x17000596")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x600272C")]
		[Address(RVA = "0x4F01DD0", Offset = "0x4F01DD0", VA = "0x4F01DD0", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x17000597")]
	public override Type DeclaringType
	{
		[Token(Token = "0x600272D")]
		[Address(RVA = "0x4F01E10", Offset = "0x4F01E10", VA = "0x4F01E10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000598")]
	public override string Name
	{
		[Token(Token = "0x600272E")]
		[Address(RVA = "0x4F01E50", Offset = "0x4F01E50", VA = "0x4F01E50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000599")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x6002730")]
		[Address(RVA = "0x4F01ED0", Offset = "0x4F01ED0", VA = "0x4F01ED0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x1700059A")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002731")]
		[Address(RVA = "0x4F01F10", Offset = "0x4F01F10", VA = "0x4F01F10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600272F")]
	[Address(RVA = "0x4F01E90", Offset = "0x4F01E90", VA = "0x4F01E90", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x6002732")]
	[Address(RVA = "0x4F01F50", Offset = "0x4F01F50", VA = "0x4F01F50", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002733")]
	[Address(RVA = "0x4F01F90", Offset = "0x4F01F90", VA = "0x4F01F90", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002734")]
	[Address(RVA = "0x4F01FD0", Offset = "0x4F01FD0", VA = "0x4F01FD0", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x6002735")]
	[Address(RVA = "0x4F02010", Offset = "0x4F02010", VA = "0x4F02010", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002736")]
	[Address(RVA = "0x4F02050", Offset = "0x4F02050", VA = "0x4F02050", Slot = "32")]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002737")]
	[Address(RVA = "0x4F02090", Offset = "0x4F02090", VA = "0x4F02090", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}
}
