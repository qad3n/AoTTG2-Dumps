// ==================== AoTTG2 cross-reference ====================
// Type: System.Configuration.ConfigurationElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Configuration;

[Token(Token = "0x2000007")]
[DebuggerDisplay("Count = {Count}")]
public abstract class ConfigurationElementCollection : ConfigurationElement
{
	[Token(Token = "0x17000002")]
	protected virtual bool ThrowOnDuplicate
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x448AB30", Offset = "0x448AB30", VA = "0x448AB30", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000D")]
	protected abstract ConfigurationElement CreateNewElement();

	[Token(Token = "0x600000E")]
	protected abstract object GetElementKey(ConfigurationElement element);
}
