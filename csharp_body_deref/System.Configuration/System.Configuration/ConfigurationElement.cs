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
		[Address(RVA = "0x448A920", Offset = "0x448A920", VA = "0x448A920", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x448A950", Offset = "0x448A950", VA = "0x448A950", Slot = "5")]
	protected internal virtual void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x448A980", Offset = "0x448A980", VA = "0x448A980", Slot = "6")]
	protected internal virtual void InitializeDefault()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x448A9B0", Offset = "0x448A9B0", VA = "0x448A9B0", Slot = "7")]
	protected internal virtual bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x448A9E0", Offset = "0x448A9E0", VA = "0x448A9E0", Slot = "8")]
	protected virtual void PostDeserialize()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x448AA10", Offset = "0x448AA10", VA = "0x448AA10", Slot = "9")]
	protected internal virtual void Reset(ConfigurationElement parentElement)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x448AA40", Offset = "0x448AA40", VA = "0x448AA40", Slot = "10")]
	protected internal virtual void ResetModified()
	{
	}
}
