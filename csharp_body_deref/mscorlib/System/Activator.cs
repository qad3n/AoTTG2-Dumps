using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000156")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Activator))]
public sealed class Activator
{
	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x50011E0", Offset = "0x50011E0", VA = "0x50011E0")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x50011F0", Offset = "0x50011F0", VA = "0x50011F0")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x5002040", Offset = "0x5002040", VA = "0x5002040")]
	public static object CreateInstance(Type type, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x5002060", Offset = "0x5002060", VA = "0x5002060")]
	public static object CreateInstance(Type type, object[] args, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x5002080", Offset = "0x5002080", VA = "0x5002080")]
	public static object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x5002090", Offset = "0x5002090", VA = "0x5002090")]
	public static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x50020A0", Offset = "0x50020A0", VA = "0x50020A0")]
	internal static object CreateInstance(Type type, bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D7A")]
	public static T CreateInstance<T>()
	{
		return (T)null;
	}
}
