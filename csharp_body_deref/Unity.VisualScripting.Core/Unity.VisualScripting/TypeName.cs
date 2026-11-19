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
		[Address(RVA = "0x683A190", Offset = "0x6839190", VA = "0x683A190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x683A1A0", Offset = "0x68391A0", VA = "0x683A1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public string AssemblyName
	{
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x683A1B0", Offset = "0x68391B0", VA = "0x683A1B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE5")]
		[Address(RVA = "0x683A1C0", Offset = "0x68391C0", VA = "0x683A1C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public string AssemblyVersion
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x683A1D0", Offset = "0x68391D0", VA = "0x683A1D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x683A1E0", Offset = "0x68391E0", VA = "0x683A1E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public string AssemblyCulture
	{
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x683A1F0", Offset = "0x68391F0", VA = "0x683A1F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x683A200", Offset = "0x6839200", VA = "0x683A200")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public string AssemblyPublicKeyToken
	{
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x683A210", Offset = "0x6839210", VA = "0x683A210")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x683A220", Offset = "0x6839220", VA = "0x683A220")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public List<TypeName> GenericParameters
	{
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0x683A230", Offset = "0x6839230", VA = "0x683A230")]
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
		[Address(RVA = "0x683A240", Offset = "0x6839240", VA = "0x683A240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x683A250", Offset = "0x6839250", VA = "0x683A250")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public bool IsArray
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x68356F0", Offset = "0x68346F0", VA = "0x68356F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A0")]
	public string LastName
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x683A260", Offset = "0x6839260", VA = "0x683A260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x6835820", Offset = "0x6834820", VA = "0x6835820")]
	public static TypeName Parse(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x683A2B0", Offset = "0x68392B0", VA = "0x683A2B0")]
	private TypeName(string s, ref int index)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x683AF70", Offset = "0x6839F70", VA = "0x683AF70")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x68359F0", Offset = "0x68349F0", VA = "0x68359F0")]
	public void ReplaceNamespace(string oldNamespace, string newNamespace)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x6835D40", Offset = "0x6834D40", VA = "0x6835D40")]
	public void ReplaceAssembly(string oldAssembly, string newAssembly)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x6835880", Offset = "0x6834880", VA = "0x6835880")]
	public void ReplaceName(string oldTypeName, Type newType)
	{
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x683B1E0", Offset = "0x683A1E0", VA = "0x683B1E0")]
	public void ReplaceName(string oldTypeName, string newTypeName, [Optional] AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x683B4D0", Offset = "0x683A4D0", VA = "0x683B4D0")]
	private static string ToElementTypeName(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x683B550", Offset = "0x683A550", VA = "0x683B550")]
	private static string ToArrayOrType(string oldType, string newType)
	{
		return null;
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x683B5C0", Offset = "0x683A5C0", VA = "0x683B5C0")]
	public void SetAssemblyName(AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x683B060", Offset = "0x683A060", VA = "0x683B060")]
	private void UpdateName()
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x683B6E0", Offset = "0x683A6E0", VA = "0x683B6E0")]
	public string ToString(TypeNameDetail specification, TypeNameDetail genericsSpecification)
	{
		return null;
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x683BA80", Offset = "0x683AA80", VA = "0x683BA80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x6835730", Offset = "0x6834730", VA = "0x6835730")]
	public string ToLooseString()
	{
		return null;
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x683BA90", Offset = "0x683AA90", VA = "0x683BA90")]
	public static string Simplify(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x683BB00", Offset = "0x683AB00", VA = "0x683BB00")]
	public static string SimplifyFast(string typeName)
	{
		return null;
	}
}
