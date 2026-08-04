// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNameTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000E7")]
public abstract class XmlNameTable
{
	[Token(Token = "0x6000BFC")]
	public abstract string Get(string array);

	[Token(Token = "0x6000BFD")]
	public abstract string Add(char[] array, int offset, int length);

	[Token(Token = "0x6000BFE")]
	public abstract string Add(string array);

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x4800BC0", Offset = "0x4800BC0", VA = "0x4800BC0")]
	protected XmlNameTable()
	{
	}
}
