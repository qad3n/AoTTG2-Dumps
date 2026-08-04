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
[Token(Token = "0x2000324")]
public class CheckoutException : ExternalException
{
	[Token(Token = "0x4000ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly CheckoutException Canceled;

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x48DF8F0", Offset = "0x48DF8F0", VA = "0x48DF8F0")]
	public CheckoutException()
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x48DF900", Offset = "0x48DF900", VA = "0x48DF900")]
	public CheckoutException(string message, int errorCode)
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x48DF910", Offset = "0x48DF910", VA = "0x48DF910")]
	protected CheckoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
