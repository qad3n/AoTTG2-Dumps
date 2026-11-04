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

[Token(Token = "0x20000B8")]
internal static class SecurityUtils
{
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void DemandReflectionAccess(Type type)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void DemandGrantSet(Assembly assembly)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x2840FC0", Offset = "0x283F5C0", VA = "0x182840FC0")]
	private static bool HasReflectionPermission(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x2841390", Offset = "0x283F990", VA = "0x182841390")]
	internal static object SecureCreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x2841450", Offset = "0x283FA50", VA = "0x182841450")]
	internal static object SecureCreateInstance(Type type, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x2841550", Offset = "0x283FB50", VA = "0x182841550")]
	internal static object SecureCreateInstance(Type type, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x28410D0", Offset = "0x283F6D0", VA = "0x1828410D0")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x2841230", Offset = "0x283F830", VA = "0x182841230")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic, BindingFlags extraFlags)
	{
		return null;
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x2840F20", Offset = "0x283F520", VA = "0x182840F20")]
	private static bool GenericArgumentsAreVisible(MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x2840FE0", Offset = "0x283F5E0", VA = "0x182840FE0")]
	internal static object MethodInfoInvoke(MethodInfo method, object target, object[] args)
	{
		return null;
	}
}
