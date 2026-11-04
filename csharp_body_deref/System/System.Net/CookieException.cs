// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000300")]
public class CookieException : FormatException, ISerializable
{
	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x27C50C0", Offset = "0x27C36C0", VA = "0x1827C50C0")]
	public CookieException()
	{
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x27C50A0", Offset = "0x27C36A0", VA = "0x1827C50A0")]
	internal CookieException(string message)
	{
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x27C50B0", Offset = "0x27C36B0", VA = "0x1827C50B0")]
	internal CookieException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected CookieException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x27C5080", Offset = "0x27C3680", VA = "0x1827C5080", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x27C5080", Offset = "0x27C3680", VA = "0x1827C5080", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
