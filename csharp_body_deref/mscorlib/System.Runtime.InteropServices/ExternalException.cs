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
[Token(Token = "0x2000460")]
public class ExternalException : SystemException
{
	[Token(Token = "0x1700045F")]
	public virtual int ErrorCode
	{
		[Token(Token = "0x600221D")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002218")]
	[Address(RVA = "0x1A290E0", Offset = "0x1A276E0", VA = "0x181A290E0")]
	public ExternalException()
	{
	}

	[Token(Token = "0x6002219")]
	[Address(RVA = "0x1A2A4C0", Offset = "0x1A28AC0", VA = "0x181A2A4C0")]
	public ExternalException(string message)
	{
	}

	[Token(Token = "0x600221A")]
	[Address(RVA = "0x1A2A4E0", Offset = "0x1A28AE0", VA = "0x181A2A4E0")]
	public ExternalException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600221B")]
	[Address(RVA = "0x1A2A500", Offset = "0x1A28B00", VA = "0x181A2A500")]
	public ExternalException(string message, int errorCode)
	{
	}

	[Token(Token = "0x600221C")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected ExternalException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600221E")]
	[Address(RVA = "0x1A2A2F0", Offset = "0x1A288F0", VA = "0x181A2A2F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
