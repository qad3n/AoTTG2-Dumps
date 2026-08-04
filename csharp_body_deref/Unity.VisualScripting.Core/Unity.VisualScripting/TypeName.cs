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
		[Address(RVA = "0x4D4EB90", Offset = "0x4D4EB90", VA = "0x4D4EB90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x4D4EBA0", Offset = "0x4D4EBA0", VA = "0x4D4EBA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public string AssemblyName
	{
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x4D4EBB0", Offset = "0x4D4EBB0", VA = "0x4D4EBB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x4D4EBC0", Offset = "0x4D4EBC0", VA = "0x4D4EBC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public string AssemblyVersion
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x4D4EBD0", Offset = "0x4D4EBD0", VA = "0x4D4EBD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x4D4EBE0", Offset = "0x4D4EBE0", VA = "0x4D4EBE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public string AssemblyCulture
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x4D4EBF0", Offset = "0x4D4EBF0", VA = "0x4D4EBF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x4D4EC00", Offset = "0x4D4EC00", VA = "0x4D4EC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public string AssemblyPublicKeyToken
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x4D4EC10", Offset = "0x4D4EC10", VA = "0x4D4EC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x4D4EC20", Offset = "0x4D4EC20", VA = "0x4D4EC20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public List<TypeName> GenericParameters
	{
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x4D4EC30", Offset = "0x4D4EC30", VA = "0x4D4EC30")]
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
		[Address(RVA = "0x4D4EC40", Offset = "0x4D4EC40", VA = "0x4D4EC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x4D4EC50", Offset = "0x4D4EC50", VA = "0x4D4EC50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public bool IsArray
	{
		[Token(Token = "0x6000EE5")]
		[Address(RVA = "0x4D49BE0", Offset = "0x4D49BE0", VA = "0x4D49BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public string LastName
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x4D4EC60", Offset = "0x4D4EC60", VA = "0x4D4EC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4D49D10", Offset = "0x4D49D10", VA = "0x4D49D10")]
	public static TypeName Parse(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x4D4ECB0", Offset = "0x4D4ECB0", VA = "0x4D4ECB0")]
	private TypeName(string s, ref int index)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x4D4FD50", Offset = "0x4D4FD50", VA = "0x4D4FD50")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x4D49EE0", Offset = "0x4D49EE0", VA = "0x4D49EE0")]
	public void ReplaceNamespace(string oldNamespace, string newNamespace)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4D4A240", Offset = "0x4D4A240", VA = "0x4D4A240")]
	public void ReplaceAssembly(string oldAssembly, string newAssembly)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4D49D70", Offset = "0x4D49D70", VA = "0x4D49D70")]
	public void ReplaceName(string oldTypeName, Type newType)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4D4FFE0", Offset = "0x4D4FFE0", VA = "0x4D4FFE0")]
	public void ReplaceName(string oldTypeName, string newTypeName, [Optional] AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4D50450", Offset = "0x4D50450", VA = "0x4D50450")]
	private static string ToElementTypeName(string s)
	{
		return null;
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x4D504D0", Offset = "0x4D504D0", VA = "0x4D504D0")]
	private static string ToArrayOrType(string oldType, string newType)
	{
		return null;
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x4D50540", Offset = "0x4D50540", VA = "0x4D50540")]
	public void SetAssemblyName(AssemblyName newAssemblyName)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4D4FE50", Offset = "0x4D4FE50", VA = "0x4D4FE50")]
	private void UpdateName()
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x4D50660", Offset = "0x4D50660", VA = "0x4D50660")]
	public string ToString(TypeNameDetail specification, TypeNameDetail genericsSpecification)
	{
		return null;
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4D50A60", Offset = "0x4D50A60", VA = "0x4D50A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4D49C20", Offset = "0x4D49C20", VA = "0x4D49C20")]
	public string ToLooseString()
	{
		return null;
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4D50A70", Offset = "0x4D50A70", VA = "0x4D50A70")]
	public static string Simplify(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4D50AE0", Offset = "0x4D50AE0", VA = "0x4D50AE0")]
	public static string SimplifyFast(string typeName)
	{
		return null;
	}
}
