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
	[Address(RVA = "0x4EA4E40", Offset = "0x4EA4E40", VA = "0x4EA4E40")]
	public ConstructionCallDictionary(IConstructionCallMessage message)
	{
	}

	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x4EA5FE0", Offset = "0x4EA5FE0", VA = "0x4EA5FE0", Slot = "21")]
	protected override object GetMethodProperty(string key)
	{
		return null;
	}

	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x4EA69A0", Offset = "0x4EA69A0", VA = "0x4EA69A0", Slot = "22")]
	protected override void SetMethodProperty(string key, object value)
	{
	}
}
