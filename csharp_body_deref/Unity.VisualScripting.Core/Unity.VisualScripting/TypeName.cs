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
		[Token(Token = "0x4000882")]
		Name,
		[Token(Token = "0x4000883")]
		Array,
		[Token(Token = "0x4000884")]
		Generics,
		[Token(Token = "0x4000885")]
		Assembly
	}

	[Token(Token = "0x400087E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<string> names;

	[Token(Token = "0x400087F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<int> genericarities;

	[Token(Token = "0x17000195")]
	public string AssemblyDescription
	{
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x4A29FC0", Offset = "0x4A29FC0", VA = "0x4A29FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x4A29FD0", Offset = "0x4A29FD0", VA = "0x4A29FD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public string AssemblyName
	{
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x4A29FE0", Offset = "0x4A29FE0", VA = "0x4A29FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x4A29FF0", Offset = "0x4A29FF0", VA = "0x4A29FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public string AssemblyVersion
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x4A2A000", Offset = "0x4A2A000", VA = "0x4A2A000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x4A2A010", Offset = "0x4A2A010", VA = "0x4A2A010")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public string AssemblyCulture
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x4A2A020", Offset = "0x4A2A020", VA = "0x4A2A020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x4A2A030", Offset = "0x4A2A030", VA = "0x4A2A030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public string AssemblyPublicKeyToken
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x4A2A040", Offset = "0x4A2A040", VA = "0x4A2A040")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x4A2A050", Offset = "0x4A2A050", VA = "0x4A2A050")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public List<TypeName> GenericParameters
	{
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x4A2A060", Offset = "0x4A2A060", VA = "0x4A2A060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	public string Name
	{
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x4A2A070", Offset = "0x4A2A070", VA = "0x4A2A070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x4A2A080", Offset = "0x4A2A080", VA = "0x4A2A080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public bool IsArray
	{
		[Token(Token = "0x6000EE5")]
		[Address(RVA = "0x4A25010", Offset = "0x4A25010", VA = "0x4A25010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public string LastName
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x4A2A090", Offset = "0x4A2A090", VA = "0x4A2A090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4A25140", Offset = "0x4A25140", VA = "0x4A25140")]
	public static TypeName Parse(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x4A2A0E0", Offset = "0x4A2A0E0", VA = "0x4A2A0E0")]
	private TypeName(string s, ref int index)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x4A2B180", Offset = "0x4A2B180", VA = "0x4A2B180")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x4A25310", Offset = "0x4A25310", VA = "0x4A25310")]
	public void ReplaceNamespace(string oldNamespace, string newNamespace)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4A25670", Offset = "0x4A25670", VA = "0x4A25670")]
	public void ReplaceAssembly(string oldAssembly, string newAssembly)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4A251A0", Offset = "0x4A251A0", VA = "0x4A251A0")]
	public void ReplaceName(string oldTypeName, Type newType)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4A2B410", Offset = "0x4A2B410", VA = "0x4A2B410")]
	public void ReplaceName(string oldTypeName, string newTypeName, [Optional] AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4A2B880", Offset = "0x4A2B880", VA = "0x4A2B880")]
	private static string ToElementTypeName(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x4A2B900", Offset = "0x4A2B900", VA = "0x4A2B900")]
	private static string ToArrayOrType(string oldType, string newType)
	{
		return null;
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x4A2B970", Offset = "0x4A2B970", VA = "0x4A2B970")]
	public void SetAssemblyName(AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4A2B280", Offset = "0x4A2B280", VA = "0x4A2B280")]
	private void UpdateName()
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x4A2BA90", Offset = "0x4A2BA90", VA = "0x4A2BA90")]
	public string ToString(TypeNameDetail specification, TypeNameDetail genericsSpecification)
	{
		return null;
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4A2BE90", Offset = "0x4A2BE90", VA = "0x4A2BE90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4A25050", Offset = "0x4A25050", VA = "0x4A25050")]
	public string ToLooseString()
	{
		return null;
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4A2BEA0", Offset = "0x4A2BEA0", VA = "0x4A2BEA0")]
	public static string Simplify(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4A2BF10", Offset = "0x4A2BF10", VA = "0x4A2BF10")]
	public static string SimplifyFast(string typeName)
	{
		return null;
	}
}
