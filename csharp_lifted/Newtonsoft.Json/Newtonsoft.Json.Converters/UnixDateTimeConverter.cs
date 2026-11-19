// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.UnixDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BD")]
public class UnixDateTimeConverter : DateTimeConverterBase
{
	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DateTime UnixEpoch;

	[Token(Token = "0x17000254")]
	public bool AllowPreEpoch
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x5638E60", Offset = "0x5637E60", VA = "0x5638E60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x5638E70", Offset = "0x5637E70", VA = "0x5638E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x5638E80", Offset = "0x5637E80", VA = "0x5638E80")]
	public UnixDateTimeConverter()
	{
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x5638EA0", Offset = "0x5637EA0", VA = "0x5638EA0")]
	public UnixDateTimeConverter(bool allowPreEpoch)
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x5638EC0", Offset = "0x5637EC0", VA = "0x5638EC0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x5639110", Offset = "0x5638110", VA = "0x5639110", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}
}
