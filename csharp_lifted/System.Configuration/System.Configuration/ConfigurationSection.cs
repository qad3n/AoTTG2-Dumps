// ==================== AoTTG2 cross-reference ====================
// Type: System.Configuration.ConfigurationSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml;
using Il2CppDummyDll;

namespace System.Configuration;

[Token(Token = "0x2000004")]
public abstract class ConfigurationSection : ConfigurationElement
{
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5DA0FC0", Offset = "0x5D9FFC0", VA = "0x5DA0FC0", Slot = "11")]
	protected internal virtual void DeserializeSection(XmlReader reader)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5DA0FF0", Offset = "0x5D9FFF0", VA = "0x5DA0FF0", Slot = "7")]
	protected internal override bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5DA1020", Offset = "0x5DA0020", VA = "0x5DA1020", Slot = "10")]
	protected internal override void ResetModified()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5DA1050", Offset = "0x5DA0050", VA = "0x5DA1050", Slot = "12")]
	protected internal virtual string SerializeSection(ConfigurationElement parentElement, string name, ConfigurationSaveMode saveMode)
	{
		return null;
	}
}
