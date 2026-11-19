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
[Token(Token = "0x20002B0")]
[ComVisible(true)]
public class SecurityException : SystemException
{
	[Token(Token = "0x4000B93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string permissionState;

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x532AA10", Offset = "0x5329A10", VA = "0x532AA10")]
	public SecurityException()
	{
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x532AA60", Offset = "0x5329A60", VA = "0x532AA60")]
	public SecurityException(string message)
	{
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x532AA80", Offset = "0x5329A80", VA = "0x532AA80")]
	protected SecurityException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x532ABA0", Offset = "0x5329BA0", VA = "0x532ABA0")]
	public SecurityException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x532ABC0", Offset = "0x5329BC0", VA = "0x532ABC0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x532ACB0", Offset = "0x5329CB0", VA = "0x532ACB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
