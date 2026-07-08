using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000479")]
internal class CLType : BaseModel
{
	[Token(Token = "0x17000923")]
	public string Name
	{
		[Token(Token = "0x6002FD6")]
		[Address(RVA = "0x3E7A8F0", Offset = "0x3E7A8F0", VA = "0x3E7A8F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD7")]
		[Address(RVA = "0x3E7A900", Offset = "0x3E7A900", VA = "0x3E7A900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000924")]
	public XmlInfo Info
	{
		[Token(Token = "0x6002FD8")]
		[Address(RVA = "0x3E7A910", Offset = "0x3E7A910", VA = "0x3E7A910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD9")]
		[Address(RVA = "0x3E7A920", Offset = "0x3E7A920", VA = "0x3E7A920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000925")]
	[JsonIgnore]
	public bool IsStatic
	{
		[Token(Token = "0x6002FDA")]
		[Address(RVA = "0x3E7A930", Offset = "0x3E7A930", VA = "0x3E7A930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FDB")]
		[Address(RVA = "0x3E7A940", Offset = "0x3E7A940", VA = "0x3E7A940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000926")]
	[JsonIgnore]
	public bool IsAbstract
	{
		[Token(Token = "0x6002FDC")]
		[Address(RVA = "0x3E7A950", Offset = "0x3E7A950", VA = "0x3E7A950")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FDD")]
		[Address(RVA = "0x3E7A960", Offset = "0x3E7A960", VA = "0x3E7A960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000927")]
	[JsonIgnore]
	public bool InheritBaseMembers
	{
		[Token(Token = "0x6002FDE")]
		[Address(RVA = "0x3E7A970", Offset = "0x3E7A970", VA = "0x3E7A970")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FDF")]
		[Address(RVA = "0x3E7A980", Offset = "0x3E7A980", VA = "0x3E7A980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000928")]
	[JsonIgnore]
	public bool IsComponent
	{
		[Token(Token = "0x6002FE0")]
		[Address(RVA = "0x3E7A990", Offset = "0x3E7A990", VA = "0x3E7A990")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FE1")]
		[Address(RVA = "0x3E7A9A0", Offset = "0x3E7A9A0", VA = "0x3E7A9A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000929")]
	[JsonIgnore]
	public string[] TypeParameters
	{
		[Token(Token = "0x6002FE2")]
		[Address(RVA = "0x3E7A9B0", Offset = "0x3E7A9B0", VA = "0x3E7A9B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FE3")]
		[Address(RVA = "0x3E7A9C0", Offset = "0x3E7A9C0", VA = "0x3E7A9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092A")]
	[JsonIgnore]
	public string Category
	{
		[Token(Token = "0x6002FE4")]
		[Address(RVA = "0x3E7A9D0", Offset = "0x3E7A9D0", VA = "0x3E7A9D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FE5")]
		[Address(RVA = "0x3E7A9E0", Offset = "0x3E7A9E0", VA = "0x3E7A9E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092B")]
	[JsonIgnore]
	public CLType BaseType
	{
		[Token(Token = "0x6002FE6")]
		[Address(RVA = "0x3E7A9F0", Offset = "0x3E7A9F0", VA = "0x3E7A9F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FE7")]
		[Address(RVA = "0x3E7AA00", Offset = "0x3E7AA00", VA = "0x3E7AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092C")]
	public CLConstructor[] Constructors
	{
		[Token(Token = "0x6002FE8")]
		[Address(RVA = "0x3E7AA10", Offset = "0x3E7AA10", VA = "0x3E7AA10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FE9")]
		[Address(RVA = "0x3E7AA20", Offset = "0x3E7AA20", VA = "0x3E7AA20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092D")]
	[JsonProperty("staticFields")]
	public CLProperty[] StaticProperties
	{
		[Token(Token = "0x6002FEA")]
		[Address(RVA = "0x3E7AA30", Offset = "0x3E7AA30", VA = "0x3E7AA30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FEB")]
		[Address(RVA = "0x3E7AA40", Offset = "0x3E7AA40", VA = "0x3E7AA40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092E")]
	[JsonProperty("instanceFields")]
	public CLProperty[] InstanceProperties
	{
		[Token(Token = "0x6002FEC")]
		[Address(RVA = "0x3E7AA50", Offset = "0x3E7AA50", VA = "0x3E7AA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FED")]
		[Address(RVA = "0x3E7AA60", Offset = "0x3E7AA60", VA = "0x3E7AA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700092F")]
	public CLMethod[] StaticMethods
	{
		[Token(Token = "0x6002FEE")]
		[Address(RVA = "0x3E7AA70", Offset = "0x3E7AA70", VA = "0x3E7AA70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FEF")]
		[Address(RVA = "0x3E7AA80", Offset = "0x3E7AA80", VA = "0x3E7AA80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000930")]
	public CLMethod[] InstanceMethods
	{
		[Token(Token = "0x6002FF0")]
		[Address(RVA = "0x3E7AA90", Offset = "0x3E7AA90", VA = "0x3E7AA90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FF1")]
		[Address(RVA = "0x3E7AAA0", Offset = "0x3E7AAA0", VA = "0x3E7AAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000931")]
	public string Kind
	{
		[Token(Token = "0x6002FF2")]
		[Address(RVA = "0x3E7AAB0", Offset = "0x3E7AAB0", VA = "0x3E7AAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000932")]
	public string BaseTypeName
	{
		[Token(Token = "0x6002FF3")]
		[Address(RVA = "0x3E7AB00", Offset = "0x3E7AB00", VA = "0x3E7AB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FF4")]
	[Address(RVA = "0x3E7AB30", Offset = "0x3E7AB30", VA = "0x3E7AB30")]
	public CLType()
	{
	}
}
