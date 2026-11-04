// ==================== AoTTG2 cross-reference ====================
// Type: Map.IMapVersionConverter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003BD")]
public interface IMapVersionConverter
{
	[Token(Token = "0x17000277")]
	string FromVersion
	{
		[Token(Token = "0x60017A2")]
		get;
	}

	[Token(Token = "0x17000278")]
	string ToVersion
	{
		[Token(Token = "0x60017A3")]
		get;
	}

	[Token(Token = "0x17000279")]
	bool IsReversible
	{
		[Token(Token = "0x60017A4")]
		get;
	}

	[Token(Token = "0x1700027A")]
	IReadOnlyList<string> Changes
	{
		[Token(Token = "0x60017A5")]
		get;
	}

	[Token(Token = "0x60017A6")]
	void Upgrade(MapScript mapScript);

	[Token(Token = "0x60017A7")]
	void Downgrade(MapScript mapScript);
}
