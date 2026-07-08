using System.Xml;
using Il2CppDummyDll;

namespace System.Configuration;

[Token(Token = "0x200000A")]
public sealed class IgnoreSection : ConfigurationSection
{
	[Token(Token = "0x17000003")]
	protected internal override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4165AA0", Offset = "0x4165AA0", VA = "0x4165AA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4165A70", Offset = "0x4165A70", VA = "0x4165A70")]
	public IgnoreSection()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4165AD0", Offset = "0x4165AD0", VA = "0x4165AD0", Slot = "11")]
	protected internal override void DeserializeSection(XmlReader xmlReader)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4165B00", Offset = "0x4165B00", VA = "0x4165B00", Slot = "7")]
	protected internal override bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4165B30", Offset = "0x4165B30", VA = "0x4165B30", Slot = "9")]
	protected internal override void Reset(ConfigurationElement parentSection)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4165B60", Offset = "0x4165B60", VA = "0x4165B60", Slot = "10")]
	protected internal override void ResetModified()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4165B90", Offset = "0x4165B90", VA = "0x4165B90", Slot = "12")]
	protected internal override string SerializeSection(ConfigurationElement parentSection, string name, ConfigurationSaveMode saveMode)
	{
		return null;
	}
}
