// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.TitanType
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/TitanType.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A7")]
internal class TitanType
{
	[Token(Token = "0x400129D")]
	public const string Normal = "Normal";

	[Token(Token = "0x400129E")]
	public const string Abnormal = "Abnormal";

	[Token(Token = "0x400129F")]
	public const string Jumper = "Jumper";

	[Token(Token = "0x40012A0")]
	public const string Crawler = "Crawler";

	[Token(Token = "0x40012A1")]
	public const string Thrower = "Thrower";

	[Token(Token = "0x40012A2")]
	public const string Punk = "Punk";

	[Token(Token = "0x40012A3")]
	public const string Default = "Default";

	[Token(Token = "0x40012A4")]
	public const string Random = "Random";

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x5858820", Offset = "0x5857820", VA = "0x5858820")]
	public TitanType()
	{
		// Lifted from source/cpp/GameManagers/TitanType.c (GameManagers.TitanType$$.ctor): clean
		base();
		return;
	}
}
