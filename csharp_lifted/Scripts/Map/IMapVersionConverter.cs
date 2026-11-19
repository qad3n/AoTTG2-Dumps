// ==================== AoTTG2 cross-reference ====================
// Type: Map.IMapVersionConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200041C")]
public interface IMapVersionConverter
{
	[Token(Token = "0x170002B8")]
	string FromVersion
	{
		[Token(Token = "0x6001A19")]
		get;
	}

	[Token(Token = "0x170002B9")]
	string ToVersion
	{
		[Token(Token = "0x6001A1A")]
		get;
	}

	[Token(Token = "0x170002BA")]
	bool IsReversible
	{
		[Token(Token = "0x6001A1B")]
		get;
	}

	[Token(Token = "0x170002BB")]
	IReadOnlyList<string> Changes
	{
		[Token(Token = "0x6001A1C")]
		get;
	}

	[Token(Token = "0x6001A1D")]
	void Upgrade(MapScript mapScript);

	[Token(Token = "0x6001A1E")]
	void Downgrade(MapScript mapScript);
}
