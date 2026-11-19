// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeSpec
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using System.Text;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001B2")]
internal class TypeSpec
{
	[Token(Token = "0x20001B3")]
	[Flags]
	internal enum DisplayNameFormat
	{
		[Token(Token = "0x400087C")]
		Default = 0,
		[Token(Token = "0x400087D")]
		WANT_ASSEMBLY = 1,
		[Token(Token = "0x400087E")]
		NO_MODIFIERS = 2
	}

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x10")]
	private System.TypeIdentifier name;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x18")]
	private string assembly_name;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x20")]
	private List<System.TypeIdentifier> nested;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x28")]
	private List<System.TypeSpec> generic_params;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x30")]
	private List<System.ModifierSpec> modifier_spec;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x38")]
	private bool is_byref;

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x40")]
	private string display_fullname;

	[Token(Token = "0x17000180")]
	internal bool HasModifiers
	{
		[Token(Token = "0x60010A7")]
		[Address(RVA = "0x551EEB0", Offset = "0x551DEB0", VA = "0x551EEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000181")]
	internal string DisplayFullName
	{
		[Token(Token = "0x60010AA")]
		[Address(RVA = "0x551F420", Offset = "0x551E420", VA = "0x551F420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x551EEC0", Offset = "0x551DEC0", VA = "0x551EEC0")]
	private string GetDisplayFullName(DisplayNameFormat flags)
	{
		return null;
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x551F460", Offset = "0x551E460", VA = "0x551F460")]
	private StringBuilder GetModifierString(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x550ADC0", Offset = "0x5509DC0", VA = "0x550ADC0")]
	internal static System.TypeSpec Parse(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x551EB10", Offset = "0x551DB10", VA = "0x551EB10")]
	internal static string UnescapeInternalName(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x550AE90", Offset = "0x5509E90", VA = "0x550AE90")]
	internal Type Resolve(Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError, bool ignoreCase, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x5520330", Offset = "0x551F330", VA = "0x5520330")]
	private void AddName(string type_name)
	{
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x5520580", Offset = "0x551F580", VA = "0x5520580")]
	private void AddModifier(System.ModifierSpec md)
	{
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x5520670", Offset = "0x551F670", VA = "0x5520670")]
	private static void SkipSpace(string name, ref int pos)
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x55206F0", Offset = "0x551F6F0", VA = "0x55206F0")]
	private static void BoundCheck(int idx, string s)
	{
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x5520510", Offset = "0x551F510", VA = "0x5520510")]
	private static System.TypeIdentifier ParsedTypeIdentifier(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x551F650", Offset = "0x551E650", VA = "0x551F650")]
	private static System.TypeSpec Parse(string name, ref int p, bool is_recurse, bool allow_aqn)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x5520770", Offset = "0x551F770", VA = "0x5520770")]
	public TypeSpec()
	{
	}
}
