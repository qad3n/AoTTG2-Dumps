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
		[Address(RVA = "0x3DF1F00", Offset = "0x3DF1F00", VA = "0x3DF1F00", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x3DF1F30", Offset = "0x3DF1F30", VA = "0x3DF1F30", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public override ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x3DF1F60", Offset = "0x3DF1F60", VA = "0x3DF1F60", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x3DF1F90", Offset = "0x3DF1F90", VA = "0x3DF1F90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public override IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x3DF1FC0", Offset = "0x3DF1FC0", VA = "0x3DF1FC0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x3DF1FF0", Offset = "0x3DF1FF0", VA = "0x3DF1FF0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public override JsonConverterCollection Converters
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x3DF2020", Offset = "0x3DF2020", VA = "0x3DF2020", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x3DF2050", Offset = "0x3DF2050", VA = "0x3DF2050", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x3DF2080", Offset = "0x3DF2080", VA = "0x3DF2080", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public override IContractResolver ContractResolver
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x3DF20B0", Offset = "0x3DF20B0", VA = "0x3DF20B0", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x3DF20E0", Offset = "0x3DF20E0", VA = "0x3DF20E0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public override MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x3DF2110", Offset = "0x3DF2110", VA = "0x3DF2110", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x3DF2140", Offset = "0x3DF2140", VA = "0x3DF2140", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x3DF2170", Offset = "0x3DF2170", VA = "0x3DF2170", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x3DF21A0", Offset = "0x3DF21A0", VA = "0x3DF21A0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public override ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x3DF21D0", Offset = "0x3DF21D0", VA = "0x3DF21D0", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x3DF2200", Offset = "0x3DF2200", VA = "0x3DF2200", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public override ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x3DF2230", Offset = "0x3DF2230", VA = "0x3DF2230", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x3DF2260", Offset = "0x3DF2260", VA = "0x3DF2260", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public override PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x3DF2290", Offset = "0x3DF2290", VA = "0x3DF2290", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x3DF22C0", Offset = "0x3DF22C0", VA = "0x3DF22C0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public override TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x3DF22F0", Offset = "0x3DF22F0", VA = "0x3DF22F0", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x3DF2320", Offset = "0x3DF2320", VA = "0x3DF2320", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public override MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x3DF2350", Offset = "0x3DF2350", VA = "0x3DF2350", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x3DF2380", Offset = "0x3DF2380", VA = "0x3DF2380", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public override FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x3DF23B0", Offset = "0x3DF23B0", VA = "0x3DF23B0", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x3DF23E0", Offset = "0x3DF23E0", VA = "0x3DF23E0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x3DF2410", Offset = "0x3DF2410", VA = "0x3DF2410", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x3DF2440", Offset = "0x3DF2440", VA = "0x3DF2440", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public override ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x3DF2470", Offset = "0x3DF2470", VA = "0x3DF2470", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x3DF24A0", Offset = "0x3DF24A0", VA = "0x3DF24A0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public override SerializationBinder Binder
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x3DF24D0", Offset = "0x3DF24D0", VA = "0x3DF24D0", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x3DF2500", Offset = "0x3DF2500", VA = "0x3DF2500", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public override ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x3DF2530", Offset = "0x3DF2530", VA = "0x3DF2530", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x3DF2560", Offset = "0x3DF2560", VA = "0x3DF2560", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public override StreamingContext Context
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x3DF2590", Offset = "0x3DF2590", VA = "0x3DF2590", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x3DF25C0", Offset = "0x3DF25C0", VA = "0x3DF25C0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public override Formatting Formatting
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x3DF25F0", Offset = "0x3DF25F0", VA = "0x3DF25F0", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x3DF2620", Offset = "0x3DF2620", VA = "0x3DF2620", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public override DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x3DF2650", Offset = "0x3DF2650", VA = "0x3DF2650", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x3DF2680", Offset = "0x3DF2680", VA = "0x3DF2680", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public override DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x3DF26B0", Offset = "0x3DF26B0", VA = "0x3DF26B0", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x3DF26E0", Offset = "0x3DF26E0", VA = "0x3DF26E0", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public override DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x3DF2710", Offset = "0x3DF2710", VA = "0x3DF2710", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x3DF2740", Offset = "0x3DF2740", VA = "0x3DF2740", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public override FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x3DF2770", Offset = "0x3DF2770", VA = "0x3DF2770", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x3DF27A0", Offset = "0x3DF27A0", VA = "0x3DF27A0", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public override FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x3DF27D0", Offset = "0x3DF27D0", VA = "0x3DF27D0", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x3DF2800", Offset = "0x3DF2800", VA = "0x3DF2800", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public override StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x3DF2830", Offset = "0x3DF2830", VA = "0x3DF2830", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x3DF2860", Offset = "0x3DF2860", VA = "0x3DF2860", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public override string DateFormatString
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x3DF2890", Offset = "0x3DF2890", VA = "0x3DF2890", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x3DF28C0", Offset = "0x3DF28C0", VA = "0x3DF28C0", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override CultureInfo Culture
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x3DF28F0", Offset = "0x3DF28F0", VA = "0x3DF28F0", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x3DF2920", Offset = "0x3DF2920", VA = "0x3DF2920", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public override int? MaxDepth
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x3DF2950", Offset = "0x3DF2950", VA = "0x3DF2950", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x3DF2980", Offset = "0x3DF2980", VA = "0x3DF2980", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public override bool CheckAdditionalContent
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x3DF29B0", Offset = "0x3DF29B0", VA = "0x3DF29B0", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x3DF29E0", Offset = "0x3DF29E0", VA = "0x3DF29E0", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public override event EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x3DF1EA0", Offset = "0x3DF1EA0", VA = "0x3DF1EA0", Slot = "4")]
		add
		{
		}
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x3DF1ED0", Offset = "0x3DF1ED0", VA = "0x3DF1ED0", Slot = "5")]
		remove
		{
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x3DF2A10", Offset = "0x3DF2A10", VA = "0x3DF2A10")]
	internal JsonSerializerInternalBase GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x3DF2A30", Offset = "0x3DF2A30", VA = "0x3DF2A30")]
	public JsonSerializerProxy(JsonSerializerInternalReader serializerReader)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x3DEB6C0", Offset = "0x3DEB6C0", VA = "0x3DEB6C0")]
	public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x3DF2AC0", Offset = "0x3DF2AC0", VA = "0x3DF2AC0", Slot = "66")]
	internal override object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x3DF2B00", Offset = "0x3DF2B00", VA = "0x3DF2B00", Slot = "65")]
	internal override void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x3DF2B40", Offset = "0x3DF2B40", VA = "0x3DF2B40", Slot = "67")]
	internal override void SerializeInternal(JsonWriter jsonWriter, object? value, Type? rootType)
	{
	}
}
