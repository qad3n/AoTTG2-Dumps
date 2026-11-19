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
[Token(Token = "0x20002C1")]
public class CookieException : FormatException, ISerializable
{
	[Token(Token = "0x600131A")]
	[Address(RVA = "0x62BC480", Offset = "0x62BB480", VA = "0x62BC480")]
	public CookieException()
	{
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x62B37F0", Offset = "0x62B27F0", VA = "0x62B37F0")]
	internal CookieException(string message)
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x62B9D20", Offset = "0x62B8D20", VA = "0x62B9D20")]
	internal CookieException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x62BC490", Offset = "0x62BB490", VA = "0x62BC490")]
	protected CookieException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x62BC4A0", Offset = "0x62BB4A0", VA = "0x62BC4A0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x62BC4B0", Offset = "0x62BB4B0", VA = "0x62BC4B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
