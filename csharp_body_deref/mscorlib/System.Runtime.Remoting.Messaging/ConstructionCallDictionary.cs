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

[Token(Token = "0x20003D5")]
internal class ConstructionCallDictionary : System.Runtime.Remoting.Messaging.MessageDictionary
{
	[Token(Token = "0x4000F7A")]
	[FieldOffset(Offset = "0x0")]
	public static string[] InternalKeys;

	[Token(Token = "0x6001EC0")]
	[Address(RVA = "0x19F4F10", Offset = "0x19F3510", VA = "0x1819F4F10")]
	public ConstructionCallDictionary(IConstructionCallMessage message)
	{
	}

	[Token(Token = "0x6001EC1")]
	[Address(RVA = "0x19F4760", Offset = "0x19F2D60", VA = "0x1819F4760", Slot = "21")]
	protected override object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001EC2")]
	[Address(RVA = "0x19F4AA0", Offset = "0x19F30A0", VA = "0x1819F4AA0", Slot = "22")]
	protected override void SetMethodProperty(string key, object value)
	{
	}
}
