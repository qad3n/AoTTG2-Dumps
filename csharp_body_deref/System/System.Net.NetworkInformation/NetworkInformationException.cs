using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Serializable]
[Token(Token = "0x20001D6")]
public class NetworkInformationException : Win32Exception
{
	[Token(Token = "0x170002B7")]
	public override int ErrorCode
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x467F180", Offset = "0x467F180", VA = "0x467F180", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x467F120", Offset = "0x467F120", VA = "0x467F120")]
	public NetworkInformationException()
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x467F170", Offset = "0x467F170", VA = "0x467F170")]
	protected NetworkInformationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
