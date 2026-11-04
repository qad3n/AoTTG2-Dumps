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
[Token(Token = "0x200058F")]
internal class EraInfo
{
	[Token(Token = "0x4001726")]
	[FieldOffset(Offset = "0x10")]
	internal int era;

	[Token(Token = "0x4001727")]
	[FieldOffset(Offset = "0x18")]
	internal long ticks;

	[Token(Token = "0x4001728")]
	[FieldOffset(Offset = "0x20")]
	internal int yearOffset;

	[Token(Token = "0x4001729")]
	[FieldOffset(Offset = "0x24")]
	internal int minEraYear;

	[Token(Token = "0x400172A")]
	[FieldOffset(Offset = "0x28")]
	internal int maxEraYear;

	[Token(Token = "0x400172B")]
	[FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 4)]
	internal string eraName;

	[Token(Token = "0x400172C")]
	[FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 4)]
	internal string abbrevEraName;

	[Token(Token = "0x400172D")]
	[FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 4)]
	internal string englishEraName;

	[Token(Token = "0x60029BC")]
	[Address(RVA = "0x1AA3930", Offset = "0x1AA1F30", VA = "0x181AA3930")]
	internal EraInfo(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear)
	{
	}

	[Token(Token = "0x60029BD")]
	[Address(RVA = "0x1AA3820", Offset = "0x1AA1E20", VA = "0x181AA3820")]
	internal EraInfo(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear, string eraName, string abbrevEraName, string englishEraName)
	{
	}
}
