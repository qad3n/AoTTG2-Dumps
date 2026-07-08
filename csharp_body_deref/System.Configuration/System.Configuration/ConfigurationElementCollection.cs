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
		[Address(RVA = "0x4165A30", Offset = "0x4165A30", VA = "0x4165A30", Slot = "11")]
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
