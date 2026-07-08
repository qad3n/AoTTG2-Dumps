using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000244")]
public class MapScriptBaseMaterial : BaseCSVRowItem
{
	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Shader;

	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public Color255 Color;

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x3CAFF80", Offset = "0x3CAFF80", VA = "0x3CAFF80")]
	public MapScriptBaseMaterial()
	{
	}
}
