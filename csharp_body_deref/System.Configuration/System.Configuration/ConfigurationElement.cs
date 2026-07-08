using System.Reflection;
using System.Xml;
using Il2CppDummyDll;

namespace System.Configuration;

[Token(Token = "0x2000002")]
[DefaultMember("Item")]
public abstract class ConfigurationElement
{
	[Token(Token = "0x17000001")]
	protected internal virtual ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4165820", Offset = "0x4165820", VA = "0x4165820", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4165850", Offset = "0x4165850", VA = "0x4165850", Slot = "5")]
	protected internal virtual void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4165880", Offset = "0x4165880", VA = "0x4165880", Slot = "6")]
	protected internal virtual void InitializeDefault()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x41658B0", Offset = "0x41658B0", VA = "0x41658B0", Slot = "7")]
	protected internal virtual bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x41658E0", Offset = "0x41658E0", VA = "0x41658E0", Slot = "8")]
	protected virtual void PostDeserialize()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4165910", Offset = "0x4165910", VA = "0x4165910", Slot = "9")]
	protected internal virtual void Reset(ConfigurationElement parentElement)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4165940", Offset = "0x4165940", VA = "0x4165940", Slot = "10")]
	protected internal virtual void ResetModified()
	{
	}
}
