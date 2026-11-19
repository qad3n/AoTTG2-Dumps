// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.StringEnumConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BC")]
public class StringEnumConverter : JsonConverter
{
	[Token(Token = "0x17000251")]
	[Obsolete("StringEnumConverter.CamelCaseText is obsolete. Set StringEnumConverter.NamingStrategy with CamelCaseNamingStrategy instead.")]
	public bool CamelCaseText
	{
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x5638370", Offset = "0x5637370", VA = "0x5638370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x56383D0", Offset = "0x56373D0", VA = "0x56383D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x5638490", Offset = "0x5637490", VA = "0x5638490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0x56384A0", Offset = "0x56374A0", VA = "0x56384A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool AllowIntegerValues
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x56384B0", Offset = "0x56374B0", VA = "0x56384B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x56384C0", Offset = "0x56374C0", VA = "0x56384C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x56384D0", Offset = "0x56374D0", VA = "0x56384D0")]
	public StringEnumConverter()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x56384E0", Offset = "0x56374E0", VA = "0x56384E0")]
	[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
	public StringEnumConverter(bool camelCaseText)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x5638560", Offset = "0x5637560", VA = "0x5638560")]
	public StringEnumConverter(NamingStrategy namingStrategy, bool allowIntegerValues = true)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x56385A0", Offset = "0x56375A0", VA = "0x56385A0")]
	public StringEnumConverter(Type namingStrategyType)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x5638640", Offset = "0x5637640", VA = "0x5638640")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x56386E0", Offset = "0x56376E0", VA = "0x56386E0")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x5638790", Offset = "0x5637790", VA = "0x5638790", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x5638970", Offset = "0x5637970", VA = "0x5638970", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x5638E00", Offset = "0x5637E00", VA = "0x5638E00", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}
}
