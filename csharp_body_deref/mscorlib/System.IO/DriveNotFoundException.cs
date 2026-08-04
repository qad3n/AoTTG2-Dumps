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
[Token(Token = "0x2000559")]
public class DriveNotFoundException : IOException
{
	[Token(Token = "0x600291B")]
	[Address(RVA = "0x3BFCC50", Offset = "0x3BFCC50", VA = "0x3BFCC50")]
	public DriveNotFoundException()
	{
	}

	[Token(Token = "0x600291C")]
	[Address(RVA = "0x3BFCC90", Offset = "0x3BFCC90", VA = "0x3BFCC90")]
	public DriveNotFoundException(string message)
	{
	}

	[Token(Token = "0x600291D")]
	[Address(RVA = "0x3BFCCB0", Offset = "0x3BFCCB0", VA = "0x3BFCCB0")]
	protected DriveNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
