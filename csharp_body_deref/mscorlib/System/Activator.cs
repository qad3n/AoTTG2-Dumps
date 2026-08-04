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

[Token(Token = "0x2000156")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Activator))]
public sealed class Activator
{
	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x3CE6D00", Offset = "0x3CE6D00", VA = "0x3CE6D00")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x3CE6D10", Offset = "0x3CE6D10", VA = "0x3CE6D10")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x3CE7B60", Offset = "0x3CE7B60", VA = "0x3CE7B60")]
	public static object CreateInstance(Type type, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x3CE7B80", Offset = "0x3CE7B80", VA = "0x3CE7B80")]
	public static object CreateInstance(Type type, object[] args, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x3CE7BA0", Offset = "0x3CE7BA0", VA = "0x3CE7BA0")]
	public static object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x3CE7BB0", Offset = "0x3CE7BB0", VA = "0x3CE7BB0")]
	public static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x3CE7BC0", Offset = "0x3CE7BC0", VA = "0x3CE7BC0")]
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
