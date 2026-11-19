// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ConstructionCallDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Activation;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AE")]
internal class ConstructionCallDictionary : System.Runtime.Remoting.Messaging.MessageDictionary
{
	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x0")]
	public static string[] InternalKeys;

	[Token(Token = "0x6001E96")]
	[Address(RVA = "0x53926B0", Offset = "0x53916B0", VA = "0x53926B0")]
	public ConstructionCallDictionary(IConstructionCallMessage message)
	{
	}

	[Token(Token = "0x6001E97")]
	[Address(RVA = "0x53937E0", Offset = "0x53927E0", VA = "0x53937E0", Slot = "21")]
	protected override object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001E98")]
	[Address(RVA = "0x5394180", Offset = "0x5393180", VA = "0x5394180", Slot = "22")]
	protected override void SetMethodProperty(string key, object value)
	{
	}
}
