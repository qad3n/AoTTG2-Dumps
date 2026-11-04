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
[Token(Token = "0x20003D6")]
[ComVisible(true)]
[CLSCompliant(false)]
public class ConstructionResponse : MethodResponse, IConstructionReturnMessage, IMethodReturnMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x170003B4")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001EC7")]
		[Address(RVA = "0x19F5AA0", Offset = "0x19F40A0", VA = "0x1819F5AA0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001EC4")]
	[Address(RVA = "0x19F5950", Offset = "0x19F3F50", VA = "0x1819F5950")]
	internal ConstructionResponse(object resultObject, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EC5")]
	[Address(RVA = "0x19F5A10", Offset = "0x19F4010", VA = "0x1819F5A10")]
	internal ConstructionResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EC6")]
	[Address(RVA = "0x19F5A20", Offset = "0x19F4020", VA = "0x1819F5A20")]
	internal ConstructionResponse(SerializationInfo info, StreamingContext context)
	{
	}
}
