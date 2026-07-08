using Il2CppDummyDll;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x2000008")]
public enum FontEngineError
{
	[Token(Token = "0x4000039")]
	Success = 0,
	[Token(Token = "0x400003A")]
	Invalid_File_Path = 1,
	[Token(Token = "0x400003B")]
	Invalid_File_Format = 2,
	[Token(Token = "0x400003C")]
	Invalid_File_Structure = 3,
	[Token(Token = "0x400003D")]
	Invalid_File = 4,
	[Token(Token = "0x400003E")]
	Invalid_Table = 8,
	[Token(Token = "0x400003F")]
	Invalid_Glyph_Index = 16,
	[Token(Token = "0x4000040")]
	Invalid_Character_Code = 17,
	[Token(Token = "0x4000041")]
	Invalid_Pixel_Size = 23,
	[Token(Token = "0x4000042")]
	Invalid_Library = 33,
	[Token(Token = "0x4000043")]
	Invalid_Face = 35,
	[Token(Token = "0x4000044")]
	Invalid_Library_or_Face = 41,
	[Token(Token = "0x4000045")]
	Atlas_Generation_Cancelled = 100,
	[Token(Token = "0x4000046")]
	Invalid_SharedTextureData = 101,
	[Token(Token = "0x4000047")]
	OpenTypeLayoutLookup_Mismatch = 116
}
