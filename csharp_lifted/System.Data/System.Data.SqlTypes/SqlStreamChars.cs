// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlStreamChars
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Token(Token = "0x20000BE")]
internal abstract class SqlStreamChars
{
	[Token(Token = "0x170001A0")]
	public abstract long Length
	{
		[Token(Token = "0x6000AF6")]
		get;
	}

	[Token(Token = "0x170001A1")]
	public abstract long Position
	{
		[Token(Token = "0x6000AF7")]
		get;
	}

	[Token(Token = "0x6000AF8")]
	public abstract int Read(char[] buffer, int offset, int count);

	[Token(Token = "0x6000AF9")]
	public abstract long Seek(long offset, SeekOrigin origin);
}
