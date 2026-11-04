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
		[Address(RVA = "0x1C69C70", Offset = "0x1C68270", VA = "0x181C69C70", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x1C6A220", Offset = "0x1C68820", VA = "0x181C6A220", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public override ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x1C69D00", Offset = "0x1C68300", VA = "0x181C69D00", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x1C6A2B0", Offset = "0x1C688B0", VA = "0x181C6A2B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public override IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x1C69A60", Offset = "0x1C68060", VA = "0x181C69A60", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x1C6A010", Offset = "0x1C68610", VA = "0x181C6A010", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public override JsonConverterCollection Converters
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x1C69910", Offset = "0x1C67F10", VA = "0x181C69910", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x1C69A30", Offset = "0x1C68030", VA = "0x181C69A30", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x1C69FE0", Offset = "0x1C685E0", VA = "0x181C69FE0", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public override IContractResolver ContractResolver
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x1C698E0", Offset = "0x1C67EE0", VA = "0x181C698E0", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x1C69EC0", Offset = "0x1C684C0", VA = "0x181C69EC0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public override MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x1C69B80", Offset = "0x1C68180", VA = "0x181C69B80", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x1C6A130", Offset = "0x1C68730", VA = "0x181C6A130", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x1C69BB0", Offset = "0x1C681B0", VA = "0x181C69BB0", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x1C6A160", Offset = "0x1C68760", VA = "0x181C6A160", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public override ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x1C69BE0", Offset = "0x1C681E0", VA = "0x181C69BE0", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x1C6A190", Offset = "0x1C68790", VA = "0x181C6A190", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public override ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x1C69C40", Offset = "0x1C68240", VA = "0x181C69C40", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x1C6A1F0", Offset = "0x1C687F0", VA = "0x181C6A1F0", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public override PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x1C69C10", Offset = "0x1C68210", VA = "0x181C69C10", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x1C6A1C0", Offset = "0x1C687C0", VA = "0x181C6A1C0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public override TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x1C69D90", Offset = "0x1C68390", VA = "0x181C69D90", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x1C6A340", Offset = "0x1C68940", VA = "0x181C6A340", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public override MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x1C69B50", Offset = "0x1C68150", VA = "0x181C69B50", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x1C6A100", Offset = "0x1C68700", VA = "0x181C6A100", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public override FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x1C69D60", Offset = "0x1C68360", VA = "0x181C69D60", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x1C6A310", Offset = "0x1C68910", VA = "0x181C6A310", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x1C69D30", Offset = "0x1C68330", VA = "0x181C69D30", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x1C6A2E0", Offset = "0x1C688E0", VA = "0x181C6A2E0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public override ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x1C69870", Offset = "0x1C67E70", VA = "0x181C69870", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x1C69E50", Offset = "0x1C68450", VA = "0x181C69E50", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public override SerializationBinder Binder
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x1C69810", Offset = "0x1C67E10", VA = "0x181C69810", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x1C69DF0", Offset = "0x1C683F0", VA = "0x181C69DF0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public override ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x1C69CA0", Offset = "0x1C682A0", VA = "0x181C69CA0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x1C6A250", Offset = "0x1C68850", VA = "0x181C6A250", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public override StreamingContext Context
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x1C698A0", Offset = "0x1C67EA0", VA = "0x181C698A0", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x1C69E80", Offset = "0x1C68480", VA = "0x181C69E80", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public override Formatting Formatting
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x1C69AF0", Offset = "0x1C680F0", VA = "0x181C69AF0", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x1C6A0A0", Offset = "0x1C686A0", VA = "0x181C6A0A0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public override DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x1C69970", Offset = "0x1C67F70", VA = "0x181C69970", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x1C69F20", Offset = "0x1C68520", VA = "0x181C69F20", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public override DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x1C69A00", Offset = "0x1C68000", VA = "0x181C69A00", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x1C69FB0", Offset = "0x1C685B0", VA = "0x181C69FB0", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public override DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x1C699D0", Offset = "0x1C67FD0", VA = "0x181C699D0", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x1C69F80", Offset = "0x1C68580", VA = "0x181C69F80", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public override FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x1C69A90", Offset = "0x1C68090", VA = "0x181C69A90", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x1C6A040", Offset = "0x1C68640", VA = "0x181C6A040", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public override FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x1C69AC0", Offset = "0x1C680C0", VA = "0x181C69AC0", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x1C6A070", Offset = "0x1C68670", VA = "0x181C6A070", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public override StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x1C69CD0", Offset = "0x1C682D0", VA = "0x181C69CD0", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x1C6A280", Offset = "0x1C68880", VA = "0x181C6A280", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public override string DateFormatString
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x1C699A0", Offset = "0x1C67FA0", VA = "0x181C699A0", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x1C69F50", Offset = "0x1C68550", VA = "0x181C69F50", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override CultureInfo Culture
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x1C69940", Offset = "0x1C67F40", VA = "0x181C69940", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x1C69EF0", Offset = "0x1C684F0", VA = "0x181C69EF0", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public override int? MaxDepth
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x1C69B20", Offset = "0x1C68120", VA = "0x181C69B20", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x1C6A0D0", Offset = "0x1C686D0", VA = "0x181C6A0D0", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public override bool CheckAdditionalContent
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x1C69840", Offset = "0x1C67E40", VA = "0x181C69840", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x1C69E20", Offset = "0x1C68420", VA = "0x181C69E20", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public override event EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x1C697E0", Offset = "0x1C67DE0", VA = "0x181C697E0", Slot = "4")]
		add
		{
		}
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x1C69DC0", Offset = "0x1C683C0", VA = "0x181C69DC0", Slot = "5")]
		remove
		{
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x1C69600", Offset = "0x1C67C00", VA = "0x181C69600")]
	internal JsonSerializerInternalBase GetInternalSerializer()
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x1C69750", Offset = "0x1C67D50", VA = "0x181C69750")]
	public JsonSerializerProxy(JsonSerializerInternalReader serializerReader)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x1C696C0", Offset = "0x1C67CC0", VA = "0x181C696C0")]
	public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x1C695B0", Offset = "0x1C67BB0", VA = "0x181C695B0", Slot = "66")]
	internal override object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x1C69620", Offset = "0x1C67C20", VA = "0x181C69620", Slot = "65")]
	internal override void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x1C69670", Offset = "0x1C67C70", VA = "0x181C69670", Slot = "67")]
	internal override void SerializeInternal(JsonWriter jsonWriter, object? value, Type? rootType)
	{
	}
}
