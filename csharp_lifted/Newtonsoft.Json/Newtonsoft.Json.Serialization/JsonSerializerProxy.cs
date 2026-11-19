// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonSerializerProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Globalization;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200012D")]
internal class JsonSerializerProxy : JsonSerializer
{
	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0xE0")]
	private readonly JsonSerializerInternalReader? _serializerReader;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0xE8")]
	private readonly JsonSerializerInternalWriter? _serializerWriter;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0xF0")]
	internal readonly JsonSerializer _serializer;

	[Token(Token = "0x1700014E")]
	public override IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x55E8F20", Offset = "0x55E7F20", VA = "0x55E8F20", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x55E8F50", Offset = "0x55E7F50", VA = "0x55E8F50", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public override ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x55E8F80", Offset = "0x55E7F80", VA = "0x55E8F80", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x55E8FB0", Offset = "0x55E7FB0", VA = "0x55E8FB0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public override IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x55E8FE0", Offset = "0x55E7FE0", VA = "0x55E8FE0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x55E9010", Offset = "0x55E8010", VA = "0x55E9010", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public override JsonConverterCollection Converters
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x55E9040", Offset = "0x55E8040", VA = "0x55E9040", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x55E9070", Offset = "0x55E8070", VA = "0x55E9070", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x55E90A0", Offset = "0x55E80A0", VA = "0x55E90A0", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public override IContractResolver ContractResolver
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x55E90D0", Offset = "0x55E80D0", VA = "0x55E90D0", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x55E9100", Offset = "0x55E8100", VA = "0x55E9100", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public override MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x55E9130", Offset = "0x55E8130", VA = "0x55E9130", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x55E9160", Offset = "0x55E8160", VA = "0x55E9160", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x55E9190", Offset = "0x55E8190", VA = "0x55E9190", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x55E91C0", Offset = "0x55E81C0", VA = "0x55E91C0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public override ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x55E91F0", Offset = "0x55E81F0", VA = "0x55E91F0", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x55E9220", Offset = "0x55E8220", VA = "0x55E9220", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public override ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x55E9250", Offset = "0x55E8250", VA = "0x55E9250", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x55E9280", Offset = "0x55E8280", VA = "0x55E9280", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public override PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x55E92B0", Offset = "0x55E82B0", VA = "0x55E92B0", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x55E92E0", Offset = "0x55E82E0", VA = "0x55E92E0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public override TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x55E9310", Offset = "0x55E8310", VA = "0x55E9310", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x55E9340", Offset = "0x55E8340", VA = "0x55E9340", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public override MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x55E9370", Offset = "0x55E8370", VA = "0x55E9370", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x55E93A0", Offset = "0x55E83A0", VA = "0x55E93A0", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public override FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x55E93D0", Offset = "0x55E83D0", VA = "0x55E93D0", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x55E9400", Offset = "0x55E8400", VA = "0x55E9400", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x55E9430", Offset = "0x55E8430", VA = "0x55E9430", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x55E9460", Offset = "0x55E8460", VA = "0x55E9460", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public override ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x55E9490", Offset = "0x55E8490", VA = "0x55E9490", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x55E94C0", Offset = "0x55E84C0", VA = "0x55E94C0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public override SerializationBinder Binder
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x55E94F0", Offset = "0x55E84F0", VA = "0x55E94F0", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x55E9520", Offset = "0x55E8520", VA = "0x55E9520", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public override ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x55E9550", Offset = "0x55E8550", VA = "0x55E9550", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x55E9580", Offset = "0x55E8580", VA = "0x55E9580", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public override StreamingContext Context
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x55E95B0", Offset = "0x55E85B0", VA = "0x55E95B0", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x55E95E0", Offset = "0x55E85E0", VA = "0x55E95E0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public override Formatting Formatting
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x55E9610", Offset = "0x55E8610", VA = "0x55E9610", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x55E9640", Offset = "0x55E8640", VA = "0x55E9640", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public override DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x55E9670", Offset = "0x55E8670", VA = "0x55E9670", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x55E96A0", Offset = "0x55E86A0", VA = "0x55E96A0", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public override DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x55E96D0", Offset = "0x55E86D0", VA = "0x55E96D0", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x55E9700", Offset = "0x55E8700", VA = "0x55E9700", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public override DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x55E9730", Offset = "0x55E8730", VA = "0x55E9730", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x55E9760", Offset = "0x55E8760", VA = "0x55E9760", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public override FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x55E9790", Offset = "0x55E8790", VA = "0x55E9790", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x55E97C0", Offset = "0x55E87C0", VA = "0x55E97C0", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public override FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x55E97F0", Offset = "0x55E87F0", VA = "0x55E97F0", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x55E9820", Offset = "0x55E8820", VA = "0x55E9820", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public override StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x55E9850", Offset = "0x55E8850", VA = "0x55E9850", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x55E9880", Offset = "0x55E8880", VA = "0x55E9880", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public override string DateFormatString
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x55E98B0", Offset = "0x55E88B0", VA = "0x55E98B0", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x55E98E0", Offset = "0x55E88E0", VA = "0x55E98E0", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override CultureInfo Culture
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x55E9910", Offset = "0x55E8910", VA = "0x55E9910", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x55E9940", Offset = "0x55E8940", VA = "0x55E9940", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public override int? MaxDepth
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x55E9970", Offset = "0x55E8970", VA = "0x55E9970", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x55E99A0", Offset = "0x55E89A0", VA = "0x55E99A0", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public override bool CheckAdditionalContent
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x55E99D0", Offset = "0x55E89D0", VA = "0x55E99D0", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x55E9A00", Offset = "0x55E8A00", VA = "0x55E9A00", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public override event EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x55E8EC0", Offset = "0x55E7EC0", VA = "0x55E8EC0", Slot = "4")]
		add
		{
		}
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x55E8EF0", Offset = "0x55E7EF0", VA = "0x55E8EF0", Slot = "5")]
		remove
		{
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x55E9A30", Offset = "0x55E8A30", VA = "0x55E9A30")]
	internal JsonSerializerInternalBase GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x55E9A50", Offset = "0x55E8A50", VA = "0x55E9A50")]
	public JsonSerializerProxy(JsonSerializerInternalReader serializerReader)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x55E2FA0", Offset = "0x55E1FA0", VA = "0x55E2FA0")]
	public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x55E9AE0", Offset = "0x55E8AE0", VA = "0x55E9AE0", Slot = "66")]
	internal override object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x55E9B20", Offset = "0x55E8B20", VA = "0x55E9B20", Slot = "65")]
	internal override void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x55E9B60", Offset = "0x55E8B60", VA = "0x55E9B60", Slot = "67")]
	internal override void SerializeInternal(JsonWriter jsonWriter, object? value, Type? rootType)
	{
	}
}
