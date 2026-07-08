using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000249")]
internal class MapTags
{
	[Token(Token = "0x4000CAD")]
	[FieldOffset(Offset = "0x0")]
	public static string CameraSpawnPoint;

	[Token(Token = "0x4000CAE")]
	[FieldOffset(Offset = "0x8")]
	public static string HumanSpawnPoint;

	[Token(Token = "0x4000CAF")]
	[FieldOffset(Offset = "0x10")]
	public static string HumanSpawnPointBlue;

	[Token(Token = "0x4000CB0")]
	[FieldOffset(Offset = "0x18")]
	public static string HumanSpawnPointRed;

	[Token(Token = "0x4000CB1")]
	[FieldOffset(Offset = "0x20")]
	public static string TitanSpawnPoint;

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x3CB0110", Offset = "0x3CB0110", VA = "0x3CB0110")]
	public MapTags()
	{
	}
}
