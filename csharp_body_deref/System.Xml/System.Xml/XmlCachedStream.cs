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
	[Address(RVA = "0x44BEEE0", Offset = "0x44BEEE0", VA = "0x44BEEE0")]
	internal XmlCachedStream(Uri uri, Stream stream)
	{
	}
}
