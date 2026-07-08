using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000B")]
[DebuggerDisplay("{familyName} - {styleName}")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct FontReference
{
	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x0")]
	public string familyName;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x8")]
	public string styleName;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x10")]
	public int faceIndex;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x18")]
	public string filePath;
}
