using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000478")]
internal class CLProperty : BaseModel
{
	[Token(Token = "0x1700091E")]
	public TypeReference Type
	{
		[Token(Token = "0x6002FCB")]
		[Address(RVA = "0x3E7A840", Offset = "0x3E7A840", VA = "0x3E7A840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FCC")]
		[Address(RVA = "0x3E7A850", Offset = "0x3E7A850", VA = "0x3E7A850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700091F")]
	[JsonProperty("label")]
	public string Name
	{
		[Token(Token = "0x6002FCD")]
		[Address(RVA = "0x3E7A860", Offset = "0x3E7A860", VA = "0x3E7A860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FCE")]
		[Address(RVA = "0x3E7A870", Offset = "0x3E7A870", VA = "0x3E7A870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000920")]
	public XmlInfo Info
	{
		[Token(Token = "0x6002FCF")]
		[Address(RVA = "0x3E7A880", Offset = "0x3E7A880", VA = "0x3E7A880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD0")]
		[Address(RVA = "0x3E7A890", Offset = "0x3E7A890", VA = "0x3E7A890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000921")]
	[JsonProperty("readonly")]
	public bool IsReadonly
	{
		[Token(Token = "0x6002FD1")]
		[Address(RVA = "0x3E7A8A0", Offset = "0x3E7A8A0", VA = "0x3E7A8A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FD2")]
		[Address(RVA = "0x3E7A8B0", Offset = "0x3E7A8B0", VA = "0x3E7A8B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000922")]
	[JsonIgnore]
	public string[] EnumNames
	{
		[Token(Token = "0x6002FD3")]
		[Address(RVA = "0x3E7A8C0", Offset = "0x3E7A8C0", VA = "0x3E7A8C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD4")]
		[Address(RVA = "0x3E7A8D0", Offset = "0x3E7A8D0", VA = "0x3E7A8D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002FD5")]
	[Address(RVA = "0x3E7A8E0", Offset = "0x3E7A8E0", VA = "0x3E7A8E0")]
	public CLProperty()
	{
	}
}
