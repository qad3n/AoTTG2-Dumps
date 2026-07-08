using System.Xml;
using Il2CppDummyDll;

namespace System.Configuration;

[Token(Token = "0x2000004")]
public abstract class ConfigurationSection : ConfigurationElement
{
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4165970", Offset = "0x4165970", VA = "0x4165970", Slot = "11")]
	protected internal virtual void DeserializeSection(XmlReader reader)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x41659A0", Offset = "0x41659A0", VA = "0x41659A0", Slot = "7")]
	protected internal override bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x41659D0", Offset = "0x41659D0", VA = "0x41659D0", Slot = "10")]
	protected internal override void ResetModified()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4165A00", Offset = "0x4165A00", VA = "0x4165A00", Slot = "12")]
	protected internal virtual string SerializeSection(ConfigurationElement parentElement, string name, ConfigurationSaveMode saveMode)
	{
		return null;
	}
}
