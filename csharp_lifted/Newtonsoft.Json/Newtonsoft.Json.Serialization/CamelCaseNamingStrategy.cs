// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.CamelCaseNamingStrategy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x20000F8")]
public class CamelCaseNamingStrategy : NamingStrategy
{
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x55C10D0", Offset = "0x55C00D0", VA = "0x55C10D0")]
	public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames)
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x55C10F0", Offset = "0x55C00F0", VA = "0x55C10F0")]
	public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x55C1120", Offset = "0x55C0120", VA = "0x55C1120")]
	public CamelCaseNamingStrategy()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x55C1130", Offset = "0x55C0130", VA = "0x55C1130", Slot = "7")]
	protected override string ResolvePropertyName(string name)
	{
		return null;
	}
}
