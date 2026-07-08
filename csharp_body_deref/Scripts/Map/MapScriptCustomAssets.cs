using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000240")]
public class MapScriptCustomAssets : BaseCSVContainer
{
	[Token(Token = "0x4000C9B")]
	[FieldOffset(Offset = "0x10")]
	public List<string> CustomAssets;

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x3CAFCC0", Offset = "0x3CAFCC0", VA = "0x3CAFCC0")]
	public MapScriptCustomAssets()
	{
	}
}
