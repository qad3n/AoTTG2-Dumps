// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.EraInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x200056A")]
internal class EraInfo
{
	[Token(Token = "0x400168D")]
	[FieldOffset(Offset = "0x10")]
	internal int era;

	[Token(Token = "0x400168E")]
	[FieldOffset(Offset = "0x18")]
	internal long ticks;

	[Token(Token = "0x400168F")]
	[FieldOffset(Offset = "0x20")]
	internal int yearOffset;

	[Token(Token = "0x4001690")]
	[FieldOffset(Offset = "0x24")]
	internal int minEraYear;

	[Token(Token = "0x4001691")]
	[FieldOffset(Offset = "0x28")]
	internal int maxEraYear;

	[Token(Token = "0x4001692")]
	[FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 4)]
	internal string eraName;

	[Token(Token = "0x4001693")]
	[FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 4)]
	internal string abbrevEraName;

	[Token(Token = "0x4001694")]
	[FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 4)]
	internal string englishEraName;

	[Token(Token = "0x600299B")]
	[Address(RVA = "0x542E060", Offset = "0x542D060", VA = "0x542E060")]
	internal EraInfo(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear)
	{
	}

	[Token(Token = "0x600299C")]
	[Address(RVA = "0x542E120", Offset = "0x542D120", VA = "0x542E120")]
	internal EraInfo(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear, string eraName, string abbrevEraName, string englishEraName)
	{
	}
}
