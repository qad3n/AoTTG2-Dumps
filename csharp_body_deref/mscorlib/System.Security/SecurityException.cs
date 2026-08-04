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
[Token(Token = "0x20002A8")]
[ComVisible(true)]
public class SecurityException : SystemException
{
	[Token(Token = "0x4000C26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string permissionState;

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x3B20BC0", Offset = "0x3B20BC0", VA = "0x3B20BC0")]
	public SecurityException()
	{
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x3B20C10", Offset = "0x3B20C10", VA = "0x3B20C10")]
	public SecurityException(string message)
	{
	}

	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x3B20C30", Offset = "0x3B20C30", VA = "0x3B20C30")]
	protected SecurityException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x3B20D50", Offset = "0x3B20D50", VA = "0x3B20D50")]
	public SecurityException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x3B20D70", Offset = "0x3B20D70", VA = "0x3B20D70", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x3B20E60", Offset = "0x3B20E60", VA = "0x3B20E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
