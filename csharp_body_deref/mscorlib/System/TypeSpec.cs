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

[Token(Token = "0x20001DA")]
internal class TypeSpec
{
	[Token(Token = "0x20001DB")]
	[Flags]
	internal enum DisplayNameFormat
	{
		[Token(Token = "0x400091E")]
		Default = 0,
		[Token(Token = "0x400091F")]
		WANT_ASSEMBLY = 1,
		[Token(Token = "0x4000920")]
		NO_MODIFIERS = 2
	}

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x10")]
	private System.TypeIdentifier name;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x18")]
	private string assembly_name;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x20")]
	private List<System.TypeIdentifier> nested;

	[Token(Token = "0x4000919")]
	[FieldOffset(Offset = "0x28")]
	private List<System.TypeSpec> generic_params;

	[Token(Token = "0x400091A")]
	[FieldOffset(Offset = "0x30")]
	private List<System.ModifierSpec> modifier_spec;

	[Token(Token = "0x400091B")]
	[FieldOffset(Offset = "0x38")]
	private bool is_byref;

	[Token(Token = "0x400091C")]
	[FieldOffset(Offset = "0x40")]
	private string display_fullname;

	[Token(Token = "0x17000181")]
	internal bool HasModifiers
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x1A1E5D0", Offset = "0x1A1CBD0", VA = "0x181A1E5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000182")]
	internal string DisplayFullName
	{
		[Token(Token = "0x60010D3")]
		[Address(RVA = "0x1BA8230", Offset = "0x1BA6830", VA = "0x181BA8230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x1BA6110", Offset = "0x1BA4710", VA = "0x181BA6110")]
	private string GetDisplayFullName(DisplayNameFormat flags)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x1BA65B0", Offset = "0x1BA4BB0", VA = "0x181BA65B0")]
	private StringBuilder GetModifierString(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x1BA76B0", Offset = "0x1BA5CB0", VA = "0x181BA76B0")]
	internal static System.TypeSpec Parse(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x1BA8150", Offset = "0x1BA6750", VA = "0x181BA8150")]
	internal static string UnescapeInternalName(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x1BA77B0", Offset = "0x1BA5DB0", VA = "0x181BA77B0")]
	internal Type Resolve(Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError, bool ignoreCase, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x1BA5F30", Offset = "0x1BA4530", VA = "0x181BA5F30")]
	private void AddName(string type_name)
	{
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x1BA5E30", Offset = "0x1BA4430", VA = "0x181BA5E30")]
	private void AddModifier(System.ModifierSpec md)
	{
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x1BA80D0", Offset = "0x1BA66D0", VA = "0x181BA80D0")]
	private static void SkipSpace(string name, ref int pos)
	{
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x1BA6080", Offset = "0x1BA4680", VA = "0x181BA6080")]
	private static void BoundCheck(int idx, string s)
	{
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x1BA77A0", Offset = "0x1BA5DA0", VA = "0x181BA77A0")]
	private static System.TypeIdentifier ParsedTypeIdentifier(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x1BA67A0", Offset = "0x1BA4DA0", VA = "0x181BA67A0")]
	private static System.TypeSpec Parse(string name, ref int p, bool is_recurse, bool allow_aqn)
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TypeSpec()
	{
	}
}
