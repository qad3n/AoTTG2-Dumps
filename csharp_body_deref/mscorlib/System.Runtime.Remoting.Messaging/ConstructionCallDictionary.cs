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

[Token(Token = "0x20003A6")]
internal class ConstructionCallDictionary : System.Runtime.Remoting.Messaging.MessageDictionary
{
	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x0")]
	public static string[] InternalKeys;

	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x3B8A960", Offset = "0x3B8A960", VA = "0x3B8A960")]
	public ConstructionCallDictionary(IConstructionCallMessage message)
	{
	}

	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x3B8BB00", Offset = "0x3B8BB00", VA = "0x3B8BB00", Slot = "21")]
	protected override object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x3B8C4C0", Offset = "0x3B8C4C0", VA = "0x3B8C4C0", Slot = "22")]
	protected override void SetMethodProperty(string key, object value)
	{
	}
}
