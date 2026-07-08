using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000079")]
internal static class SecurityUtils
{
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x45D38C0", Offset = "0x45D38C0", VA = "0x45D38C0")]
	private static void DemandReflectionAccess(Type type)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x45D38D0", Offset = "0x45D38D0", VA = "0x45D38D0")]
	private static void DemandGrantSet(Assembly assembly)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x45D38E0", Offset = "0x45D38E0", VA = "0x45D38E0")]
	private static bool HasReflectionPermission(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x45D38F0", Offset = "0x45D38F0", VA = "0x45D38F0")]
	internal static object SecureCreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x45D3900", Offset = "0x45D3900", VA = "0x45D3900")]
	internal static object SecureCreateInstance(Type type, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x45D39C0", Offset = "0x45D39C0", VA = "0x45D39C0")]
	internal static object SecureCreateInstance(Type type, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x45D39D0", Offset = "0x45D39D0", VA = "0x45D39D0")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x45D39E0", Offset = "0x45D39E0", VA = "0x45D39E0")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic, BindingFlags extraFlags)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x45D3B10", Offset = "0x45D3B10", VA = "0x45D3B10")]
	private static bool GenericArgumentsAreVisible(MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x45D3BA0", Offset = "0x45D3BA0", VA = "0x45D3BA0")]
	internal static object MethodInfoInvoke(MethodInfo method, object target, object[] args)
	{
		return null;
	}
}
