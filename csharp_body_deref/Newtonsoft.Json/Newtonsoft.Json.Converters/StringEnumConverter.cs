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
		[Address(RVA = "0x1CAEFC0", Offset = "0x1CAD5C0", VA = "0x181CAEFC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x1CAF030", Offset = "0x1CAD630", VA = "0x181CAF030")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public NamingStrategy? NamingStrategy
	{
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool AllowIntegerValues
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EEE")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x1CAEDC0", Offset = "0x1CAD3C0", VA = "0x181CAEDC0")]
	public StringEnumConverter()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x1CAED40", Offset = "0x1CAD340", VA = "0x181CAED40")]
	[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
	public StringEnumConverter(bool camelCaseText)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x1CAECF0", Offset = "0x1CAD2F0", VA = "0x181CAECF0")]
	public StringEnumConverter(NamingStrategy namingStrategy, bool allowIntegerValues = true)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x1CAEDD0", Offset = "0x1CAD3D0", VA = "0x181CAEDD0")]
	public StringEnumConverter(Type namingStrategyType)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x1CAEE70", Offset = "0x1CAD470", VA = "0x181CAEE70")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x1CAEF20", Offset = "0x1CAD520", VA = "0x181CAEF20")]
	public StringEnumConverter(Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x1CAEAF0", Offset = "0x1CAD0F0", VA = "0x181CAEAF0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x1CAE6A0", Offset = "0x1CACCA0", VA = "0x181CAE6A0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x1CAE630", Offset = "0x1CACC30", VA = "0x181CAE630", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}
}
