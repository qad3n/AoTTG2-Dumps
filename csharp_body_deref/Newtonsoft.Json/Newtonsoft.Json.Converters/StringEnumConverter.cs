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
		[Address(RVA = "0x3E46750", Offset = "0x3E46750", VA = "0x3E46750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x3E467B0", Offset = "0x3E467B0", VA = "0x3E467B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x3E46860", Offset = "0x3E46860", VA = "0x3E46860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0x3E46870", Offset = "0x3E46870", VA = "0x3E46870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool AllowIntegerValues
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x3E46880", Offset = "0x3E46880", VA = "0x3E46880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x3E46890", Offset = "0x3E46890", VA = "0x3E46890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x3E468A0", Offset = "0x3E468A0", VA = "0x3E468A0")]
	public StringEnumConverter()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x3E468B0", Offset = "0x3E468B0", VA = "0x3E468B0")]
	[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
	public StringEnumConverter(bool camelCaseText)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x3E46930", Offset = "0x3E46930", VA = "0x3E46930")]
	public StringEnumConverter(NamingStrategy namingStrategy, bool allowIntegerValues = true)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x3E46970", Offset = "0x3E46970", VA = "0x3E46970")]
	public StringEnumConverter(Type namingStrategyType)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x3E46A10", Offset = "0x3E46A10", VA = "0x3E46A10")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x3E46AB0", Offset = "0x3E46AB0", VA = "0x3E46AB0")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x3E46B60", Offset = "0x3E46B60", VA = "0x3E46B60", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x3E46D30", Offset = "0x3E46D30", VA = "0x3E46D30", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x3E472A0", Offset = "0x3E472A0", VA = "0x3E472A0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}
}
