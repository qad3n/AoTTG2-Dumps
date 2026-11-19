// ==================== AoTTG2 cross-reference ====================
// Type: System.Configuration.ConfigurationElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5DA0E70", Offset = "0x5D9FE70", VA = "0x5DA0E70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5DA0EA0", Offset = "0x5D9FEA0", VA = "0x5DA0EA0", Slot = "5")]
	protected internal virtual void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5DA0ED0", Offset = "0x5D9FED0", VA = "0x5DA0ED0", Slot = "6")]
	protected internal virtual void InitializeDefault()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x5DA0F00", Offset = "0x5D9FF00", VA = "0x5DA0F00", Slot = "7")]
	protected internal virtual bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x5DA0F30", Offset = "0x5D9FF30", VA = "0x5DA0F30", Slot = "8")]
	protected virtual void PostDeserialize()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5DA0F60", Offset = "0x5D9FF60", VA = "0x5DA0F60", Slot = "9")]
	protected internal virtual void Reset(ConfigurationElement parentElement)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5DA0F90", Offset = "0x5D9FF90", VA = "0x5DA0F90", Slot = "10")]
	protected internal virtual void ResetModified()
	{
	}
}
