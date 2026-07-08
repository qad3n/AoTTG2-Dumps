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
		[Address(RVA = "0x3AFC5B0", Offset = "0x3AFC5B0", VA = "0x3AFC5B0", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x3AFC5E0", Offset = "0x3AFC5E0", VA = "0x3AFC5E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public override ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x3AFC610", Offset = "0x3AFC610", VA = "0x3AFC610", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x3AFC640", Offset = "0x3AFC640", VA = "0x3AFC640", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public override IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x3AFC670", Offset = "0x3AFC670", VA = "0x3AFC670", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x3AFC6A0", Offset = "0x3AFC6A0", VA = "0x3AFC6A0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public override JsonConverterCollection Converters
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x3AFC6D0", Offset = "0x3AFC6D0", VA = "0x3AFC6D0", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x3AFC700", Offset = "0x3AFC700", VA = "0x3AFC700", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x3AFC730", Offset = "0x3AFC730", VA = "0x3AFC730", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public override IContractResolver ContractResolver
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x3AFC760", Offset = "0x3AFC760", VA = "0x3AFC760", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x3AFC790", Offset = "0x3AFC790", VA = "0x3AFC790", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public override MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x3AFC7C0", Offset = "0x3AFC7C0", VA = "0x3AFC7C0", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x3AFC7F0", Offset = "0x3AFC7F0", VA = "0x3AFC7F0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x3AFC820", Offset = "0x3AFC820", VA = "0x3AFC820", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x3AFC850", Offset = "0x3AFC850", VA = "0x3AFC850", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public override ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x3AFC880", Offset = "0x3AFC880", VA = "0x3AFC880", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x3AFC8B0", Offset = "0x3AFC8B0", VA = "0x3AFC8B0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public override ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x3AFC8E0", Offset = "0x3AFC8E0", VA = "0x3AFC8E0", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x3AFC910", Offset = "0x3AFC910", VA = "0x3AFC910", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public override PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x3AFC940", Offset = "0x3AFC940", VA = "0x3AFC940", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x3AFC970", Offset = "0x3AFC970", VA = "0x3AFC970", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public override TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x3AFC9A0", Offset = "0x3AFC9A0", VA = "0x3AFC9A0", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x3AFC9D0", Offset = "0x3AFC9D0", VA = "0x3AFC9D0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public override MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x3AFCA00", Offset = "0x3AFCA00", VA = "0x3AFCA00", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x3AFCA30", Offset = "0x3AFCA30", VA = "0x3AFCA30", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public override FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x3AFCA60", Offset = "0x3AFCA60", VA = "0x3AFCA60", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x3AFCA90", Offset = "0x3AFCA90", VA = "0x3AFCA90", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x3AFCAC0", Offset = "0x3AFCAC0", VA = "0x3AFCAC0", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x3AFCAF0", Offset = "0x3AFCAF0", VA = "0x3AFCAF0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public override ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x3AFCB20", Offset = "0x3AFCB20", VA = "0x3AFCB20", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x3AFCB50", Offset = "0x3AFCB50", VA = "0x3AFCB50", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public override SerializationBinder Binder
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x3AFCB80", Offset = "0x3AFCB80", VA = "0x3AFCB80", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x3AFCBB0", Offset = "0x3AFCBB0", VA = "0x3AFCBB0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public override ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x3AFCBE0", Offset = "0x3AFCBE0", VA = "0x3AFCBE0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x3AFCC10", Offset = "0x3AFCC10", VA = "0x3AFCC10", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public override StreamingContext Context
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x3AFCC40", Offset = "0x3AFCC40", VA = "0x3AFCC40", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x3AFCC70", Offset = "0x3AFCC70", VA = "0x3AFCC70", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public override Formatting Formatting
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x3AFCCA0", Offset = "0x3AFCCA0", VA = "0x3AFCCA0", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x3AFCCD0", Offset = "0x3AFCCD0", VA = "0x3AFCCD0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public override DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x3AFCD00", Offset = "0x3AFCD00", VA = "0x3AFCD00", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x3AFCD30", Offset = "0x3AFCD30", VA = "0x3AFCD30", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public override DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x3AFCD60", Offset = "0x3AFCD60", VA = "0x3AFCD60", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x3AFCD90", Offset = "0x3AFCD90", VA = "0x3AFCD90", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public override DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x3AFCDC0", Offset = "0x3AFCDC0", VA = "0x3AFCDC0", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x3AFCDF0", Offset = "0x3AFCDF0", VA = "0x3AFCDF0", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public override FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x3AFCE20", Offset = "0x3AFCE20", VA = "0x3AFCE20", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x3AFCE50", Offset = "0x3AFCE50", VA = "0x3AFCE50", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public override FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x3AFCE80", Offset = "0x3AFCE80", VA = "0x3AFCE80", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x3AFCEB0", Offset = "0x3AFCEB0", VA = "0x3AFCEB0", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public override StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x3AFCEE0", Offset = "0x3AFCEE0", VA = "0x3AFCEE0", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x3AFCF10", Offset = "0x3AFCF10", VA = "0x3AFCF10", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public override string DateFormatString
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x3AFCF40", Offset = "0x3AFCF40", VA = "0x3AFCF40", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x3AFCF70", Offset = "0x3AFCF70", VA = "0x3AFCF70", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override CultureInfo Culture
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x3AFCFA0", Offset = "0x3AFCFA0", VA = "0x3AFCFA0", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x3AFCFD0", Offset = "0x3AFCFD0", VA = "0x3AFCFD0", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public override int? MaxDepth
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x3AFD000", Offset = "0x3AFD000", VA = "0x3AFD000", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x3AFD030", Offset = "0x3AFD030", VA = "0x3AFD030", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public override bool CheckAdditionalContent
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x3AFD060", Offset = "0x3AFD060", VA = "0x3AFD060", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x3AFD090", Offset = "0x3AFD090", VA = "0x3AFD090", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public override event EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x3AFC550", Offset = "0x3AFC550", VA = "0x3AFC550", Slot = "4")]
		add
		{
		}
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x3AFC580", Offset = "0x3AFC580", VA = "0x3AFC580", Slot = "5")]
		remove
		{
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x3AFD0C0", Offset = "0x3AFD0C0", VA = "0x3AFD0C0")]
	internal JsonSerializerInternalBase GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x3AFD0E0", Offset = "0x3AFD0E0", VA = "0x3AFD0E0")]
	public JsonSerializerProxy(JsonSerializerInternalReader serializerReader)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x3AF5D70", Offset = "0x3AF5D70", VA = "0x3AF5D70")]
	public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x3AFD170", Offset = "0x3AFD170", VA = "0x3AFD170", Slot = "66")]
	internal override object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x3AFD1B0", Offset = "0x3AFD1B0", VA = "0x3AFD1B0", Slot = "65")]
	internal override void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x3AFD1F0", Offset = "0x3AFD1F0", VA = "0x3AFD1F0", Slot = "67")]
	internal override void SerializeInternal(JsonWriter jsonWriter, object? value, Type? rootType)
	{
	}
}
