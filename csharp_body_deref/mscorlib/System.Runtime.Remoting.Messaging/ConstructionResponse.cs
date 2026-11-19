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
[Token(Token = "0x20003AF")]
[CLSCompliant(false)]
[ComVisible(true)]
public class ConstructionResponse : MethodResponse, IConstructionReturnMessage, IMethodReturnMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x170003B3")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x5394990", Offset = "0x5393990", VA = "0x5394990", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x537EDA0", Offset = "0x537DDA0", VA = "0x537EDA0")]
	internal ConstructionResponse(object resultObject, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x538B2A0", Offset = "0x538A2A0", VA = "0x538B2A0")]
	internal ConstructionResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E9C")]
	[Address(RVA = "0x53948F0", Offset = "0x53938F0", VA = "0x53948F0")]
	internal ConstructionResponse(SerializationInfo info, StreamingContext context)
	{
	}
}
