// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting.AssemblyQualifiedNameParser;

[Token(Token = "0x2000226")]
public class ParsedAssemblyQualifiedName
{
	[Token(Token = "0x2000227")]
	private class Block
	{
		[Token(Token = "0x40009F4")]
		[FieldOffset(Offset = "0x10")]
		internal int startIndex;

		[Token(Token = "0x40009F5")]
		[FieldOffset(Offset = "0x14")]
		internal int endIndex;

		[Token(Token = "0x40009F6")]
		[FieldOffset(Offset = "0x18")]
		internal int level;

		[Token(Token = "0x40009F7")]
		[FieldOffset(Offset = "0x20")]
		internal Block parentBlock;

		[Token(Token = "0x40009F8")]
		[FieldOffset(Offset = "0x28")]
		internal readonly List<Block> innerBlocks;

		[Token(Token = "0x40009F9")]
		[FieldOffset(Offset = "0x30")]
		internal ParsedAssemblyQualifiedName parsedAssemblyQualifiedName;

		[Token(Token = "0x6001344")]
		[Address(RVA = "0x2E6F440", Offset = "0x2E6DA40", VA = "0x182E6F440")]
		public Block()
		{
		}
	}

	[Token(Token = "0x17000221")]
	public string AssemblyDescriptionString
	{
		[Token(Token = "0x6001336")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public string TypeName
	{
		[Token(Token = "0x6001337")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001338")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000223")]
	public string ShortAssemblyName
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000224")]
	public string Version
	{
		[Token(Token = "0x600133A")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public string Culture
	{
		[Token(Token = "0x600133B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000226")]
	public string PublicKeyToken
	{
		[Token(Token = "0x600133C")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000227")]
	public List<ParsedAssemblyQualifiedName> GenericParameters
	{
		[Token(Token = "0x600133D")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000228")]
	public int GenericParameterCount
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x2E6F9F0", Offset = "0x2E6DFF0", VA = "0x182E6F9F0")]
	public ParsedAssemblyQualifiedName(string AssemblyQualifiedName)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x2E6F530", Offset = "0x2E6DB30", VA = "0x182E6F530")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x2E6F620", Offset = "0x2E6DC20", VA = "0x182E6F620")]
	public void Replace(string oldTypeName, string newTypeName)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x2E6F770", Offset = "0x2E6DD70", VA = "0x182E6F770")]
	private string ToString(bool includeAssemblyDescription)
	{
		return null;
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x2E6F9E0", Offset = "0x2E6DFE0", VA = "0x182E6F9E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
