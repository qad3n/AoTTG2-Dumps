// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ExternalException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x2000439")]
public class ExternalException : SystemException
{
	[Token(Token = "0x1700045E")]
	public virtual int ErrorCode
	{
		[Token(Token = "0x60021F3")]
		[Address(RVA = "0x53C4330", Offset = "0x53C3330", VA = "0x53C4330", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60021EE")]
	[Address(RVA = "0x53C4280", Offset = "0x53C3280", VA = "0x53C4280")]
	public ExternalException()
	{
	}

	[Token(Token = "0x60021EF")]
	[Address(RVA = "0x53C42C0", Offset = "0x53C32C0", VA = "0x53C42C0")]
	public ExternalException(string message)
	{
	}

	[Token(Token = "0x60021F0")]
	[Address(RVA = "0x53C42E0", Offset = "0x53C32E0", VA = "0x53C42E0")]
	public ExternalException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60021F1")]
	[Address(RVA = "0x53C4300", Offset = "0x53C3300", VA = "0x53C4300")]
	public ExternalException(string message, int errorCode)
	{
	}

	[Token(Token = "0x60021F2")]
	[Address(RVA = "0x53C4320", Offset = "0x53C3320", VA = "0x53C4320")]
	protected ExternalException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60021F4")]
	[Address(RVA = "0x53C4340", Offset = "0x53C3340", VA = "0x53C4340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
