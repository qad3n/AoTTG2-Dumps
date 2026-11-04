// ==================== AoTTG2 cross-reference ====================
// Type: System.Activator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000180")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Activator))]
public sealed class Activator
{
	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x1B5A670", Offset = "0x1B58C70", VA = "0x181B5A670")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x1B5A6E0", Offset = "0x1B58CE0", VA = "0x181B5A6E0")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x1B5A920", Offset = "0x1B58F20", VA = "0x181B5A920")]
	public static object CreateInstance(Type type, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x1B5A6A0", Offset = "0x1B58CA0", VA = "0x181B5A6A0")]
	public static object CreateInstance(Type type, object[] args, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x1B5A950", Offset = "0x1B58F50", VA = "0x181B5A950")]
	public static object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x1B5A6D0", Offset = "0x1B58CD0", VA = "0x181B5A6D0")]
	public static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x1B5A4D0", Offset = "0x1B58AD0", VA = "0x181B5A4D0")]
	internal static object CreateInstance(Type type, bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000DC7")]
	public static T CreateInstance<T>()
	{
		return (T)null;
	}
}
