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
		[Address(RVA = "0x3B50E00", Offset = "0x3B50E00", VA = "0x3B50E00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x3B50E60", Offset = "0x3B50E60", VA = "0x3B50E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x3B50F10", Offset = "0x3B50F10", VA = "0x3B50F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0x3B50F20", Offset = "0x3B50F20", VA = "0x3B50F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool AllowIntegerValues
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x3B50F30", Offset = "0x3B50F30", VA = "0x3B50F30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x3B50F40", Offset = "0x3B50F40", VA = "0x3B50F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x3B50F50", Offset = "0x3B50F50", VA = "0x3B50F50")]
	public StringEnumConverter()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x3B50F60", Offset = "0x3B50F60", VA = "0x3B50F60")]
	[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
	public StringEnumConverter(bool camelCaseText)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x3B50FE0", Offset = "0x3B50FE0", VA = "0x3B50FE0")]
	public StringEnumConverter(NamingStrategy namingStrategy, bool allowIntegerValues = true)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x3B51020", Offset = "0x3B51020", VA = "0x3B51020")]
	public StringEnumConverter(Type namingStrategyType)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x3B510C0", Offset = "0x3B510C0", VA = "0x3B510C0")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x3B51160", Offset = "0x3B51160", VA = "0x3B51160")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x3B51210", Offset = "0x3B51210", VA = "0x3B51210", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x3B513E0", Offset = "0x3B513E0", VA = "0x3B513E0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x3B51950", Offset = "0x3B51950", VA = "0x3B51950", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}
}
