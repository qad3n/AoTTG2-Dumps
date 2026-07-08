using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000005")]
public struct FontWeightPair
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	public FontAsset regularTypeface;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x8")]
	public FontAsset italicTypeface;
}
