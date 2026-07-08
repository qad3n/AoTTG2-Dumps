using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Activation;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A7")]
[CLSCompliant(false)]
[ComVisible(true)]
public class ConstructionResponse : MethodResponse, IConstructionReturnMessage, IMethodReturnMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x170003B2")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001E58")]
		[Address(RVA = "0x4EA71B0", Offset = "0x4EA71B0", VA = "0x4EA71B0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x4E90A60", Offset = "0x4E90A60", VA = "0x4E90A60")]
	internal ConstructionResponse(object resultObject, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x4E9D8C0", Offset = "0x4E9D8C0", VA = "0x4E9D8C0")]
	internal ConstructionResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x4EA7110", Offset = "0x4EA7110", VA = "0x4EA7110")]
	internal ConstructionResponse(SerializationInfo info, StreamingContext context)
	{
	}
}
