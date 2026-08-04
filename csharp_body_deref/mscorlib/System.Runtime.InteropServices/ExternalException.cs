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
[Token(Token = "0x2000431")]
public class ExternalException : SystemException
{
	[Token(Token = "0x1700045D")]
	public virtual int ErrorCode
	{
		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x3BBCCA0", Offset = "0x3BBCCA0", VA = "0x3BBCCA0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x3BBCBF0", Offset = "0x3BBCBF0", VA = "0x3BBCBF0")]
	public ExternalException()
	{
	}

	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x3BBCC30", Offset = "0x3BBCC30", VA = "0x3BBCC30")]
	public ExternalException(string message)
	{
	}

	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x3BBCC50", Offset = "0x3BBCC50", VA = "0x3BBCC50")]
	public ExternalException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x3BBCC70", Offset = "0x3BBCC70", VA = "0x3BBCC70")]
	public ExternalException(string message, int errorCode)
	{
	}

	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x3BBCC90", Offset = "0x3BBCC90", VA = "0x3BBCC90")]
	protected ExternalException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x3BBCCB0", Offset = "0x3BBCCB0", VA = "0x3BBCCB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
