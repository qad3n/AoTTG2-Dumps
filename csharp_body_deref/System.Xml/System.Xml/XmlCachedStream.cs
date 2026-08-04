// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlCachedStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000D9")]
internal class XmlCachedStream : MemoryStream
{
	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x50")]
	private Uri uri;

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x47FC640", Offset = "0x47FC640", VA = "0x47FC640")]
	internal XmlCachedStream(Uri uri, Stream stream)
	{
	}
}
