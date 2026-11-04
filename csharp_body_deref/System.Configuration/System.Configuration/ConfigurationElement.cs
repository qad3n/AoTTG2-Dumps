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
		[Address(RVA = "0x23FF560", Offset = "0x23FDB60", VA = "0x1823FF560", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x23FF440", Offset = "0x23FDA40", VA = "0x1823FF440", Slot = "5")]
	protected internal virtual void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x23FF470", Offset = "0x23FDA70", VA = "0x1823FF470", Slot = "6")]
	protected internal virtual void InitializeDefault()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x23FF4A0", Offset = "0x23FDAA0", VA = "0x1823FF4A0", Slot = "7")]
	protected internal virtual bool IsModified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x23FF4D0", Offset = "0x23FDAD0", VA = "0x1823FF4D0", Slot = "8")]
	protected virtual void PostDeserialize()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x23FF530", Offset = "0x23FDB30", VA = "0x1823FF530", Slot = "9")]
	protected internal virtual void Reset(ConfigurationElement parentElement)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x23FF500", Offset = "0x23FDB00", VA = "0x1823FF500", Slot = "10")]
	protected internal virtual void ResetModified()
	{
	}
}
