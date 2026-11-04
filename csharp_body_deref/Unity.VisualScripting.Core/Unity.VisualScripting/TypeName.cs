// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000170")]
public class TypeName
{
	[Token(Token = "0x2000171")]
	private enum ParseState
	{
		[Token(Token = "0x4000880")]
		Name,
		[Token(Token = "0x4000881")]
		Array,
		[Token(Token = "0x4000882")]
		Generics,
		[Token(Token = "0x4000883")]
		Assembly
	}

	[Token(Token = "0x400087C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<string> names;

	[Token(Token = "0x400087D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<int> genericarities;

	[Token(Token = "0x17000198")]
	public string AssemblyDescription
	{
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public string AssemblyName
	{
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE5")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public string AssemblyVersion
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public string AssemblyCulture
	{
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public string AssemblyPublicKeyToken
	{
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public List<TypeName> GenericParameters
	{
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public string Name
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public bool IsArray
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x2E46540", Offset = "0x2E44B40", VA = "0x182E46540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A0")]
	public string LastName
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x2E46590", Offset = "0x2E44B90", VA = "0x182E46590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x2E44B70", Offset = "0x2E43170", VA = "0x182E44B70")]
	public static TypeName Parse(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x2E45B10", Offset = "0x2E44110", VA = "0x182E45B10")]
	private TypeName(string s, ref int index)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x2E44A80", Offset = "0x2E43080", VA = "0x182E44A80")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x2E450F0", Offset = "0x2E436F0", VA = "0x182E450F0")]
	public void ReplaceNamespace(string oldNamespace, string newNamespace)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x2E44BE0", Offset = "0x2E431E0", VA = "0x182E44BE0")]
	public void ReplaceAssembly(string oldAssembly, string newAssembly)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x2E45060", Offset = "0x2E43660", VA = "0x182E45060")]
	public void ReplaceName(string oldTypeName, Type newType)
	{
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x2E44D70", Offset = "0x2E43370", VA = "0x182E44D70")]
	public void ReplaceName(string oldTypeName, string newTypeName, [Optional] AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x2E455F0", Offset = "0x2E43BF0", VA = "0x182E455F0")]
	private static string ToElementTypeName(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x2E45580", Offset = "0x2E43B80", VA = "0x182E45580")]
	private static string ToArrayOrType(string oldType, string newType)
	{
		return null;
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x2E45330", Offset = "0x2E43930", VA = "0x182E45330")]
	public void SetAssemblyName(AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x2E45990", Offset = "0x2E43F90", VA = "0x182E45990")]
	private void UpdateName()
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x2E45680", Offset = "0x2E43C80", VA = "0x182E45680")]
	public string ToString(TypeNameDetail specification, TypeNameDetail genericsSpecification)
	{
		return null;
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x2E45980", Offset = "0x2E43F80", VA = "0x182E45980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x2E45670", Offset = "0x2E43C70", VA = "0x182E45670")]
	public string ToLooseString()
	{
		return null;
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x2E45500", Offset = "0x2E43B00", VA = "0x182E45500")]
	public static string Simplify(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x2E45450", Offset = "0x2E43A50", VA = "0x182E45450")]
	public static string SimplifyFast(string typeName)
	{
		return null;
	}
}
