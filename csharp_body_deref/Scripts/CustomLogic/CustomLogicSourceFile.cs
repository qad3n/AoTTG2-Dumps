using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044A")]
public class CustomLogicSourceFile
{
	[Token(Token = "0x170008DB")]
	public string Name
	{
		[Token(Token = "0x6002E5F")]
		[Address(RVA = "0x3E591F0", Offset = "0x3E591F0", VA = "0x3E591F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008DC")]
	public string Content
	{
		[Token(Token = "0x6002E60")]
		[Address(RVA = "0x3E59200", Offset = "0x3E59200", VA = "0x3E59200")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008DD")]
	public CustomLogicSourceType Type
	{
		[Token(Token = "0x6002E61")]
		[Address(RVA = "0x3E59210", Offset = "0x3E59210", VA = "0x3E59210")]
		[CompilerGenerated]
		get
		{
			return default(CustomLogicSourceType);
		}
	}

	[Token(Token = "0x170008DE")]
	public int StartLine
	{
		[Token(Token = "0x6002E62")]
		[Address(RVA = "0x3E59220", Offset = "0x3E59220", VA = "0x3E59220")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002E63")]
		[Address(RVA = "0x3E59230", Offset = "0x3E59230", VA = "0x3E59230")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170008DF")]
	public int EndLine
	{
		[Token(Token = "0x6002E64")]
		[Address(RVA = "0x3E59240", Offset = "0x3E59240", VA = "0x3E59240")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002E65")]
		[Address(RVA = "0x3E59250", Offset = "0x3E59250", VA = "0x3E59250")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170008E0")]
	public int MapLogicOffset
	{
		[Token(Token = "0x6002E66")]
		[Address(RVA = "0x3E59260", Offset = "0x3E59260", VA = "0x3E59260")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002E67")]
		[Address(RVA = "0x3E59270", Offset = "0x3E59270", VA = "0x3E59270")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170008E1")]
	public int LineCount
	{
		[Token(Token = "0x6002E6A")]
		[Address(RVA = "0x3E59340", Offset = "0x3E59340", VA = "0x3E59340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002E68")]
	[Address(RVA = "0x3E59280", Offset = "0x3E59280", VA = "0x3E59280")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type)
	{
	}

	[Token(Token = "0x6002E69")]
	[Address(RVA = "0x3E592E0", Offset = "0x3E592E0", VA = "0x3E592E0")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type, int mapLogicOffset)
	{
	}
}
