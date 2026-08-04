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
[Token(Token = "0x2000178")]
public class CookieException : FormatException, ISerializable
{
	[Token(Token = "0x6000918")]
	[Address(RVA = "0x49764A0", Offset = "0x49764A0", VA = "0x49764A0")]
	public CookieException()
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x496C550", Offset = "0x496C550", VA = "0x496C550")]
	internal CookieException(string message)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4973620", Offset = "0x4973620", VA = "0x4973620")]
	internal CookieException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x49764B0", Offset = "0x49764B0", VA = "0x49764B0")]
	protected CookieException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x49764C0", Offset = "0x49764C0", VA = "0x49764C0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x49764D0", Offset = "0x49764D0", VA = "0x49764D0", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
