using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000476")]
internal class CLMethod : BaseModel
{
	[Token(Token = "0x17000913")]
	public CLParameter[] Parameters
	{
		[Token(Token = "0x6002FB3")]
		[Address(RVA = "0x3E7A6C0", Offset = "0x3E7A6C0", VA = "0x3E7A6C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FB4")]
		[Address(RVA = "0x3E7A6D0", Offset = "0x3E7A6D0", VA = "0x3E7A6D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000914")]
	public TypeReference ReturnType
	{
		[Token(Token = "0x6002FB5")]
		[Address(RVA = "0x3E7A6E0", Offset = "0x3E7A6E0", VA = "0x3E7A6E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FB6")]
		[Address(RVA = "0x3E7A6F0", Offset = "0x3E7A6F0", VA = "0x3E7A6F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000915")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x6002FB7")]
		[Address(RVA = "0x3E7A700", Offset = "0x3E7A700", VA = "0x3E7A700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FB8")]
		[Address(RVA = "0x3E7A710", Offset = "0x3E7A710", VA = "0x3E7A710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000916")]
	public XmlInfo Info
	{
		[Token(Token = "0x6002FB9")]
		[Address(RVA = "0x3E7A720", Offset = "0x3E7A720", VA = "0x3E7A720")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FBA")]
		[Address(RVA = "0x3E7A730", Offset = "0x3E7A730", VA = "0x3E7A730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002FBB")]
	[Address(RVA = "0x3E7A740", Offset = "0x3E7A740", VA = "0x3E7A740")]
	public CLMethod()
	{
	}
}
