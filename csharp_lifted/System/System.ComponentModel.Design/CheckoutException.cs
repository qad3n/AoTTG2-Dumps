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
[Token(Token = "0x20001F0")]
public class CheckoutException : ExternalException
{
	[Token(Token = "0x400073D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly CheckoutException Canceled;

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x627C8B0", Offset = "0x627B8B0", VA = "0x627C8B0")]
	public CheckoutException()
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x627C8C0", Offset = "0x627B8C0", VA = "0x627C8C0")]
	public CheckoutException(string message, int errorCode)
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x627C8D0", Offset = "0x627B8D0", VA = "0x627C8D0")]
	protected CheckoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
