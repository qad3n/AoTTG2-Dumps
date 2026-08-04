// ==================== AoTTG2 cross-reference ====================
// Type: System.SecurityUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000079")]
internal static class SecurityUtils
{
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x48F89C0", Offset = "0x48F89C0", VA = "0x48F89C0")]
	private static void DemandReflectionAccess(Type type)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x48F89D0", Offset = "0x48F89D0", VA = "0x48F89D0")]
	private static void DemandGrantSet(Assembly assembly)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x48F89E0", Offset = "0x48F89E0", VA = "0x48F89E0")]
	private static bool HasReflectionPermission(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x48F89F0", Offset = "0x48F89F0", VA = "0x48F89F0")]
	internal static object SecureCreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x48F8A00", Offset = "0x48F8A00", VA = "0x48F8A00")]
	internal static object SecureCreateInstance(Type type, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x48F8AC0", Offset = "0x48F8AC0", VA = "0x48F8AC0")]
	internal static object SecureCreateInstance(Type type, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x48F8AD0", Offset = "0x48F8AD0", VA = "0x48F8AD0")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x48F8AE0", Offset = "0x48F8AE0", VA = "0x48F8AE0")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic, BindingFlags extraFlags)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x48F8C10", Offset = "0x48F8C10", VA = "0x48F8C10")]
	private static bool GenericArgumentsAreVisible(MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x48F8CA0", Offset = "0x48F8CA0", VA = "0x48F8CA0")]
	internal static object MethodInfoInvoke(MethodInfo method, object target, object[] args)
	{
		return null;
	}
}
