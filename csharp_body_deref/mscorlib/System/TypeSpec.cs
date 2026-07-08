using System.Collections.Generic;
using System.Reflection;
using System.Text;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AF")]
internal class TypeSpec
{
	[Token(Token = "0x20001B0")]
	[Flags]
	internal enum DisplayNameFormat
	{
		[Token(Token = "0x40008BA")]
		Default = 0,
		[Token(Token = "0x40008BB")]
		WANT_ASSEMBLY = 1,
		[Token(Token = "0x40008BC")]
		NO_MODIFIERS = 2
	}

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x10")]
	private System.TypeIdentifier name;

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x18")]
	private string assembly_name;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x20")]
	private List<System.TypeIdentifier> nested;

	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x28")]
	private List<System.TypeSpec> generic_params;

	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x30")]
	private List<System.ModifierSpec> modifier_spec;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x38")]
	private bool is_byref;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x40")]
	private string display_fullname;

	[Token(Token = "0x1700017F")]
	internal bool HasModifiers
	{
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x5036050", Offset = "0x5036050", VA = "0x5036050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	internal string DisplayFullName
	{
		[Token(Token = "0x600107C")]
		[Address(RVA = "0x5036600", Offset = "0x5036600", VA = "0x5036600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x5036060", Offset = "0x5036060", VA = "0x5036060")]
	private string GetDisplayFullName(DisplayNameFormat flags)
	{
		return null;
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x5036640", Offset = "0x5036640", VA = "0x5036640")]
	private StringBuilder GetModifierString(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x50219E0", Offset = "0x50219E0", VA = "0x50219E0")]
	internal static System.TypeSpec Parse(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x5035CB0", Offset = "0x5035CB0", VA = "0x5035CB0")]
	internal static string UnescapeInternalName(string displayName)
	{
		return null;
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x5021AB0", Offset = "0x5021AB0", VA = "0x5021AB0")]
	internal Type Resolve(Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError, bool ignoreCase, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x50375C0", Offset = "0x50375C0", VA = "0x50375C0")]
	private void AddName(string type_name)
	{
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x5037810", Offset = "0x5037810", VA = "0x5037810")]
	private void AddModifier(System.ModifierSpec md)
	{
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x5037900", Offset = "0x5037900", VA = "0x5037900")]
	private static void SkipSpace(string name, ref int pos)
	{
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x5037980", Offset = "0x5037980", VA = "0x5037980")]
	private static void BoundCheck(int idx, string s)
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x50377A0", Offset = "0x50377A0", VA = "0x50377A0")]
	private static System.TypeIdentifier ParsedTypeIdentifier(string displayName)
	{
		return null;
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x5036860", Offset = "0x5036860", VA = "0x5036860")]
	private static System.TypeSpec Parse(string name, ref int p, bool is_recurse, bool allow_aqn)
	{
		return null;
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x5037A00", Offset = "0x5037A00", VA = "0x5037A00")]
	public TypeSpec()
	{
	}
}
