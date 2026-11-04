// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecurityException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002D7")]
[ComVisible(true)]
public class SecurityException : SystemException
{
	[Token(Token = "0x4000C33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string permissionState;

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x199B390", Offset = "0x1999990", VA = "0x18199B390")]
	public SecurityException()
	{
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x199B350", Offset = "0x1999950", VA = "0x18199B350")]
	public SecurityException(string message)
	{
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x199B3E0", Offset = "0x19999E0", VA = "0x18199B3E0")]
	protected SecurityException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x199B370", Offset = "0x1999970", VA = "0x18199B370")]
	public SecurityException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x199B2B0", Offset = "0x19998B0", VA = "0x18199B2B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x199B340", Offset = "0x1999940", VA = "0x18199B340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
