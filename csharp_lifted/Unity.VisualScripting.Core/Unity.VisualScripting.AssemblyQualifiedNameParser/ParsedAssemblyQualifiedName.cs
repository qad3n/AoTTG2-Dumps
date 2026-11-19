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
		[Address(RVA = "0x6875220", Offset = "0x6874220", VA = "0x6875220")]
		public Block()
		{
		}
	}

	[Token(Token = "0x17000221")]
	public string AssemblyDescriptionString
	{
		[Token(Token = "0x6001336")]
		[Address(RVA = "0x6874AB0", Offset = "0x6873AB0", VA = "0x6874AB0")]
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
		[Address(RVA = "0x6874AC0", Offset = "0x6873AC0", VA = "0x6874AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001338")]
		[Address(RVA = "0x6874AD0", Offset = "0x6873AD0", VA = "0x6874AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000223")]
	public string ShortAssemblyName
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x6874AE0", Offset = "0x6873AE0", VA = "0x6874AE0")]
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
		[Address(RVA = "0x6874AF0", Offset = "0x6873AF0", VA = "0x6874AF0")]
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
		[Address(RVA = "0x6874B00", Offset = "0x6873B00", VA = "0x6874B00")]
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
		[Address(RVA = "0x6874B10", Offset = "0x6873B10", VA = "0x6874B10")]
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
		[Address(RVA = "0x6874B20", Offset = "0x6873B20", VA = "0x6874B20")]
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
		[Address(RVA = "0x6874B30", Offset = "0x6873B30", VA = "0x6874B30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x6874B40", Offset = "0x6873B40", VA = "0x6874B40")]
	public ParsedAssemblyQualifiedName(string AssemblyQualifiedName)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x68752A0", Offset = "0x68742A0", VA = "0x68752A0")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x6875390", Offset = "0x6874390", VA = "0x6875390")]
	public void Replace(string oldTypeName, string newTypeName)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x6875500", Offset = "0x6874500", VA = "0x6875500")]
	private string ToString(bool includeAssemblyDescription)
	{
		return null;
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x6875790", Offset = "0x6874790", VA = "0x6875790", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
