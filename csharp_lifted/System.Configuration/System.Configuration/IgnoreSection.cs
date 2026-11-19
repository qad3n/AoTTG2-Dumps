// ==================== AoTTG2 cross-reference ====================
// Type: System.Configuration.IgnoreSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5DA10F0", Offset = "0x5DA00F0", VA = "0x5DA10F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5DA10C0", Offset = "0x5DA00C0", VA = "0x5DA10C0")]
	public IgnoreSection()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5DA1120", Offset = "0x5DA0120", VA = "0x5DA1120", Slot = "11")]
	protected internal override void DeserializeSection(XmlReader xmlReader)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5DA1150", Offset = "0x5DA0150", VA = "0x5DA1150", Slot = "7")]
	protected internal override bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5DA1180", Offset = "0x5DA0180", VA = "0x5DA1180", Slot = "9")]
	protected internal override void Reset(ConfigurationElement parentSection)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5DA11B0", Offset = "0x5DA01B0", VA = "0x5DA11B0", Slot = "10")]
	protected internal override void ResetModified()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5DA11E0", Offset = "0x5DA01E0", VA = "0x5DA11E0", Slot = "12")]
	protected internal override string SerializeSection(ConfigurationElement parentSection, string name, ConfigurationSaveMode saveMode)
	{
		return null;
	}
}
