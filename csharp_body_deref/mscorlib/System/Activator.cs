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

[Token(Token = "0x2000158")]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_Activator))]
[ComVisible(true)]
public sealed class Activator
{
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x54EB3A0", Offset = "0x54EA3A0", VA = "0x54EB3A0")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x54EB3B0", Offset = "0x54EA3B0", VA = "0x54EB3B0")]
	public static object CreateInstance(Type type, BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x54EC010", Offset = "0x54EB010", VA = "0x54EC010")]
	public static object CreateInstance(Type type, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x54EC030", Offset = "0x54EB030", VA = "0x54EC030")]
	public static object CreateInstance(Type type, object[] args, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x54EC050", Offset = "0x54EB050", VA = "0x54EC050")]
	public static object CreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x54EC060", Offset = "0x54EB060", VA = "0x54EC060")]
	public static object CreateInstance(Type type, bool nonPublic)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x54EC070", Offset = "0x54EB070", VA = "0x54EC070")]
	internal static object CreateInstance(Type type, bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000DA2")]
	public static T CreateInstance<T>()
	{
		return (T)null;
	}
}
