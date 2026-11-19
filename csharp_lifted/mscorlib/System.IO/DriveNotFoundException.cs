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
[Token(Token = "0x200065C")]
public class DriveNotFoundException : IOException
{
	[Token(Token = "0x60031B3")]
	[Address(RVA = "0x54769E0", Offset = "0x54759E0", VA = "0x54769E0")]
	public DriveNotFoundException()
	{
	}

	[Token(Token = "0x60031B4")]
	[Address(RVA = "0x5476A20", Offset = "0x5475A20", VA = "0x5476A20")]
	public DriveNotFoundException(string message)
	{
	}

	[Token(Token = "0x60031B5")]
	[Address(RVA = "0x5476A40", Offset = "0x5475A40", VA = "0x5476A40")]
	protected DriveNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
