using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002C")]
[DebuggerDisplay("Unicode ({unicode})  '{(char)unicode}'")]
internal struct TextProcessingElement
{
	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	public TextProcessingElementType elementType;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x4")]
	public uint unicode;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x8")]
	public int stringIndex;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0xC")]
	public int length;
}
