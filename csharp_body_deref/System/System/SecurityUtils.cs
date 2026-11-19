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
	[Address(RVA = "0x61D4F10", Offset = "0x61D3F10", VA = "0x61D4F10")]
	private static void DemandReflectionAccess(Type type)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x61D4F20", Offset = "0x61D3F20", VA = "0x61D4F20")]
	private static void DemandGrantSet(Assembly assembly)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x61D4F30", Offset = "0x61D3F30", VA = "0x61D4F30")]
	private static bool HasReflectionPermission(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x61D4F40", Offset = "0x61D3F40", VA = "0x61D4F40")]
	internal static object SecureCreateInstance(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x61D4F50", Offset = "0x61D3F50", VA = "0x61D4F50")]
	internal static object SecureCreateInstance(Type type, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x61D5010", Offset = "0x61D4010", VA = "0x61D5010")]
	internal static object SecureCreateInstance(Type type, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x61D5020", Offset = "0x61D4020", VA = "0x61D5020")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x61D5030", Offset = "0x61D4030", VA = "0x61D5030")]
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic, BindingFlags extraFlags)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x61D5160", Offset = "0x61D4160", VA = "0x61D5160")]
	private static bool GenericArgumentsAreVisible(MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x61D51F0", Offset = "0x61D41F0", VA = "0x61D51F0")]
	internal static object MethodInfoInvoke(MethodInfo method, object target, object[] args)
	{
		return null;
	}
}
