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
		[Address(RVA = "0x3D1BB70", Offset = "0x3D1BB70", VA = "0x3D1BB70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	internal string DisplayFullName
	{
		[Token(Token = "0x600107C")]
		[Address(RVA = "0x3D1C120", Offset = "0x3D1C120", VA = "0x3D1C120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x3D1BB80", Offset = "0x3D1BB80", VA = "0x3D1BB80")]
	private string GetDisplayFullName(DisplayNameFormat flags)
	{
		return null;
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x3D1C160", Offset = "0x3D1C160", VA = "0x3D1C160")]
	private StringBuilder GetModifierString(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x3D07500", Offset = "0x3D07500", VA = "0x3D07500")]
	internal static System.TypeSpec Parse(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x3D1B7D0", Offset = "0x3D1B7D0", VA = "0x3D1B7D0")]
	internal static string UnescapeInternalName(string displayName)
	{
		return null;
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x3D075D0", Offset = "0x3D075D0", VA = "0x3D075D0")]
	internal Type Resolve(Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError, bool ignoreCase, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x3D1D0E0", Offset = "0x3D1D0E0", VA = "0x3D1D0E0")]
	private void AddName(string type_name)
	{
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x3D1D330", Offset = "0x3D1D330", VA = "0x3D1D330")]
	private void AddModifier(System.ModifierSpec md)
	{
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x3D1D420", Offset = "0x3D1D420", VA = "0x3D1D420")]
	private static void SkipSpace(string name, ref int pos)
	{
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x3D1D4A0", Offset = "0x3D1D4A0", VA = "0x3D1D4A0")]
	private static void BoundCheck(int idx, string s)
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x3D1D2C0", Offset = "0x3D1D2C0", VA = "0x3D1D2C0")]
	private static System.TypeIdentifier ParsedTypeIdentifier(string displayName)
	{
		return null;
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x3D1C380", Offset = "0x3D1C380", VA = "0x3D1C380")]
	private static System.TypeSpec Parse(string name, ref int p, bool is_recurse, bool allow_aqn)
	{
		return null;
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x3D1D520", Offset = "0x3D1D520", VA = "0x3D1D520")]
	public TypeSpec()
	{
	}
}
