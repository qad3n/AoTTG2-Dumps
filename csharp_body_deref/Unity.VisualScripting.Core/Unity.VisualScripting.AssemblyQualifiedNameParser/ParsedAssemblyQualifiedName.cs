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
		[Address(RVA = "0x4A67830", Offset = "0x4A67830", VA = "0x4A67830")]
		public Block()
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public string AssemblyDescriptionString
	{
		[Token(Token = "0x6001329")]
		[Address(RVA = "0x4A67090", Offset = "0x4A67090", VA = "0x4A67090")]
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
		[Address(RVA = "0x4A670A0", Offset = "0x4A670A0", VA = "0x4A670A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x4A670B0", Offset = "0x4A670B0", VA = "0x4A670B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000220")]
	public string ShortAssemblyName
	{
		[Token(Token = "0x600132C")]
		[Address(RVA = "0x4A670C0", Offset = "0x4A670C0", VA = "0x4A670C0")]
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
		[Address(RVA = "0x4A670D0", Offset = "0x4A670D0", VA = "0x4A670D0")]
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
		[Address(RVA = "0x4A670E0", Offset = "0x4A670E0", VA = "0x4A670E0")]
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
		[Address(RVA = "0x4A670F0", Offset = "0x4A670F0", VA = "0x4A670F0")]
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
		[Address(RVA = "0x4A67100", Offset = "0x4A67100", VA = "0x4A67100")]
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
		[Address(RVA = "0x4A67110", Offset = "0x4A67110", VA = "0x4A67110")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x4A67120", Offset = "0x4A67120", VA = "0x4A67120")]
	public ParsedAssemblyQualifiedName(string AssemblyQualifiedName)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x4A678B0", Offset = "0x4A678B0", VA = "0x4A678B0")]
	private static string LookForPairThenRemove(List<string> strings, string Name)
	{
		return null;
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x4A679B0", Offset = "0x4A679B0", VA = "0x4A679B0")]
	public void Replace(string oldTypeName, string newTypeName)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x4A67B30", Offset = "0x4A67B30", VA = "0x4A67B30")]
	private string ToString(bool includeAssemblyDescription)
	{
		return null;
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x4A67DD0", Offset = "0x4A67DD0", VA = "0x4A67DD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
