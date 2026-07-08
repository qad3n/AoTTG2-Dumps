using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection.Emit;

[Token(Token = "0x200052B")]
public sealed class MethodBuilder : MethodInfo
{
	[Token(Token = "0x170005B1")]
	public override MethodAttributes Attributes
	{
		[Token(Token = "0x6002785")]
		[Address(RVA = "0x4F03230", Offset = "0x4F03230", VA = "0x4F03230", Slot = "17")]
		get
		{
			return default(MethodAttributes);
		}
	}

	[Token(Token = "0x170005B2")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6002786")]
		[Address(RVA = "0x4F03270", Offset = "0x4F03270", VA = "0x4F03270", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B3")]
	public override RuntimeMethodHandle MethodHandle
	{
		[Token(Token = "0x6002787")]
		[Address(RVA = "0x4F032B0", Offset = "0x4F032B0", VA = "0x4F032B0", Slot = "33")]
		get
		{
			return default(RuntimeMethodHandle);
		}
	}

	[Token(Token = "0x170005B4")]
	public override string Name
	{
		[Token(Token = "0x6002788")]
		[Address(RVA = "0x4F032F0", Offset = "0x4F032F0", VA = "0x4F032F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B5")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6002789")]
		[Address(RVA = "0x4F03330", Offset = "0x4F03330", VA = "0x4F03330", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600278A")]
	[Address(RVA = "0x4F03370", Offset = "0x4F03370", VA = "0x4F03370", Slot = "44")]
	public override MethodInfo GetBaseDefinition()
	{
		return null;
	}

	[Token(Token = "0x600278B")]
	[Address(RVA = "0x4F033B0", Offset = "0x4F033B0", VA = "0x4F033B0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600278C")]
	[Address(RVA = "0x4F033F0", Offset = "0x4F033F0", VA = "0x4F033F0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600278D")]
	[Address(RVA = "0x4F03430", Offset = "0x4F03430", VA = "0x4F03430", Slot = "18")]
	public override MethodImplAttributes GetMethodImplementationFlags()
	{
		return default(MethodImplAttributes);
	}

	[Token(Token = "0x600278E")]
	[Address(RVA = "0x4F03470", Offset = "0x4F03470", VA = "0x4F03470", Slot = "16")]
	public override ParameterInfo[] GetParameters()
	{
		return null;
	}

	[Token(Token = "0x600278F")]
	[Address(RVA = "0x4F034B0", Offset = "0x4F034B0", VA = "0x4F034B0", Slot = "32")]
	public override object Invoke(object obj, BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6002790")]
	[Address(RVA = "0x4F034F0", Offset = "0x4F034F0", VA = "0x4F034F0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}
}
