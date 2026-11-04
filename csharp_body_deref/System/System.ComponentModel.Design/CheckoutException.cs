// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.CheckoutException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Serializable]
[Token(Token = "0x200022F")]
public class CheckoutException : ExternalException
{
	[Token(Token = "0x400080C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly CheckoutException Canceled;

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x28CBEF0", Offset = "0x28CA4F0", VA = "0x1828CBEF0")]
	public CheckoutException()
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x28CBF00", Offset = "0x28CA500", VA = "0x1828CBF00")]
	public CheckoutException(string message, int errorCode)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected CheckoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
