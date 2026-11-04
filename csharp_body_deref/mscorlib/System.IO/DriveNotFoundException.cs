// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DriveNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000683")]
public class DriveNotFoundException : IOException
{
	[Token(Token = "0x60031F9")]
	[Address(RVA = "0x1AE7CC0", Offset = "0x1AE62C0", VA = "0x181AE7CC0")]
	public DriveNotFoundException()
	{
	}

	[Token(Token = "0x60031FA")]
	[Address(RVA = "0x1AE7CA0", Offset = "0x1AE62A0", VA = "0x181AE7CA0")]
	public DriveNotFoundException(string message)
	{
	}

	[Token(Token = "0x60031FB")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected DriveNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
