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
		[Token(Token = "0x40009F6")]
		[FieldOffset(Offset = "0x10")]
		internal int startIndex;

		[Token(Token = "0x40009F7")]
		[FieldOffset(Offset = "0x14")]
		internal int endIndex;

		[Token(Token = "0x40009F8")]
		[FieldOffset(Offset = "0x18")]
		internal int level;

		[Token(Token = "0x40009F9")]
		[FieldOffset(Offset = "0x20")]
		internal Block parentBlock;

		[Token(Token = "0x40009FA")]
		[FieldOffset(Offset = "0x28")]
		internal readonly List<Block> innerBlocks;

		[Token(Token = "0x40009FB")]
		[FieldOffset(Offset = "0x30")]
		internal ParsedAssemblyQualifiedName parsedAssemblyQualifiedName;

		[Token(Token = "0x6001337")]
		[Address(RVA = "0x4D8F050", Offset = "0x4D8F050", VA = "0x4D8F050")]
		public Block()
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public string AssemblyDescriptionString
	{
		[Token(Token = "0x6001329")]
		[Address(RVA = "0x4D8E8B0", Offset = "0x4D8E8B0", VA = "0x4D8E8B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	public string TypeName
	{
		[Token(Token = "0x600132A")]
		[Address(RVA = "0x4D8E8C0", Offset = "0x4D8E8C0", VA = "0x4D8E8C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x4D8E8D0", Offset = "0x4D8E8D0", VA = "0x4D8E8D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000220")]
	public string ShortAssemblyName
	{
		[Token(Token = "0x600132C")]
		[Address(RVA = "0x4D8E8E0", Offset = "0x4D8E8E0", VA = "0x4D8E8E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000221")]
	public string Version
	{
		[Token(Token = "0x600132D")]
		[Address(RVA = "0x4D8E8F0", Offset = "0x4D8E8F0", VA = "0x4D8E8F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public string Culture
	{
		[Token(Token = "0x600132E")]
		[Address(RVA = "0x4D8E900", Offset = "0x4D8E900", VA = "0x4D8E900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	public string PublicKeyToken
	{
		[Token(Token = "0x600132F")]
		[Address(RVA = "0x4D8E910", Offset = "0x4D8E910", VA = "0x4D8E910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000224")]
	public List<ParsedAssemblyQualifiedName> GenericParameters
	{
		[Token(Token = "0x6001330")]
		[Address(RVA = "0x4D8E920", Offset = "0x4D8E920", VA = "0x4D8E920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public int GenericParameterCount
	{
		[Token(Token = "0x6001331")]
		[Address(RVA = "0x4D8E930", Offset = "0x4D8E930", VA = "0x4D8E930")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x4D8E940", Offset = "0x4D8E940", VA = "0x4D8E940")]
	public ParsedAssemblyQualifiedName(string AssemblyQualifiedName)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x4D8F0D0", Offset = "0x4D8F0D0", VA = "0x4D8F0D0")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x4D8F1D0", Offset = "0x4D8F1D0", VA = "0x4D8F1D0")]
	public void Replace(string oldTypeName, string newTypeName)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x4D8F350", Offset = "0x4D8F350", VA = "0x4D8F350")]
	private string ToString(bool includeAssemblyDescription)
	{
		return null;
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x4D8F5F0", Offset = "0x4D8F5F0", VA = "0x4D8F5F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
