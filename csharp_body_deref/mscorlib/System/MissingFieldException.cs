// ==================== AoTTG2 cross-reference ====================
// Type: System.MissingFieldException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000143")]
public class MissingFieldException : MissingMemberException, ISerializable
{
	[Token(Token = "0x17000115")]
	public override string Message
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x54E2090", Offset = "0x54E1090", VA = "0x54E2090", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x54E1D80", Offset = "0x54E0D80", VA = "0x54E1D80")]
	public MissingFieldException()
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x54E1DE0", Offset = "0x54E0DE0", VA = "0x54E1DE0")]
	public MissingFieldException(string message)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x54E1E00", Offset = "0x54E0E00", VA = "0x54E1E00")]
	public MissingFieldException(string className, string fieldName)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x54E1EC0", Offset = "0x54E0EC0", VA = "0x54E1EC0")]
	protected MissingFieldException(SerializationInfo info, StreamingContext context)
	{
	}
}
