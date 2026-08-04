// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ConstructionResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B8CCD0", Offset = "0x3B8CCD0", VA = "0x3B8CCD0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x3B76580", Offset = "0x3B76580", VA = "0x3B76580")]
	internal ConstructionResponse(object resultObject, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x3B833E0", Offset = "0x3B833E0", VA = "0x3B833E0")]
	internal ConstructionResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x3B8CC30", Offset = "0x3B8CC30", VA = "0x3B8CC30")]
	internal ConstructionResponse(SerializationInfo info, StreamingContext context)
	{
	}
}
