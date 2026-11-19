// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonSerializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000032")]
public class JsonSerializer
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	internal TypeNameHandling _typeNameHandling;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x14")]
	internal TypeNameAssemblyFormatHandling _typeNameAssemblyFormatHandling;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x18")]
	internal PreserveReferencesHandling _preserveReferencesHandling;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x1C")]
	internal ReferenceLoopHandling _referenceLoopHandling;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x20")]
	internal MissingMemberHandling _missingMemberHandling;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x24")]
	internal ObjectCreationHandling _objectCreationHandling;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x28")]
	internal NullValueHandling _nullValueHandling;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x2C")]
	internal DefaultValueHandling _defaultValueHandling;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x30")]
	internal ConstructorHandling _constructorHandling;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x34")]
	internal MetadataPropertyHandling _metadataPropertyHandling;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x38")]
	internal JsonConverterCollection? _converters;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x40")]
	internal IContractResolver _contractResolver;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x48")]
	internal ITraceWriter? _traceWriter;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x50")]
	internal IEqualityComparer? _equalityComparer;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x58")]
	internal ISerializationBinder _serializationBinder;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x60")]
	internal StreamingContext _context;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x70")]
	private IReferenceResolver? _referenceResolver;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x78")]
	private Formatting? _formatting;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x80")]
	private DateFormatHandling? _dateFormatHandling;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x88")]
	private DateTimeZoneHandling? _dateTimeZoneHandling;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x90")]
	private DateParseHandling? _dateParseHandling;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x98")]
	private FloatFormatHandling? _floatFormatHandling;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0xA0")]
	private FloatParseHandling? _floatParseHandling;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0xA8")]
	private StringEscapeHandling? _stringEscapeHandling;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0xB0")]
	private CultureInfo _culture;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0xB8")]
	private int? _maxDepth;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0xC0")]
	private bool _maxDepthSet;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0xC1")]
	private bool? _checkAdditionalContent;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xC8")]
	private string? _dateFormatString;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0xD0")]
	private bool _dateFormatStringSet;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0xD8")]
	[CompilerGenerated]
	private EventHandler<Newtonsoft.Json.Serialization.ErrorEventArgs>? m_Error;

	[Token(Token = "0x17000042")]
	public virtual IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x55636E0", Offset = "0x55626E0", VA = "0x55636E0", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x55637E0", Offset = "0x55627E0", VA = "0x55637E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public virtual SerializationBinder Binder
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x5563860", Offset = "0x5562860", VA = "0x5563860", Slot = "8")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x5563940", Offset = "0x5562940", VA = "0x5563940", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public virtual ISerializationBinder SerializationBinder
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x5563A30", Offset = "0x5562A30", VA = "0x5563A30", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x5563A40", Offset = "0x5562A40", VA = "0x5563A40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public virtual ITraceWriter? TraceWriter
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x5563AC0", Offset = "0x5562AC0", VA = "0x5563AC0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x5563AD0", Offset = "0x5562AD0", VA = "0x5563AD0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public virtual IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x5563AE0", Offset = "0x5562AE0", VA = "0x5563AE0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x5563AF0", Offset = "0x5562AF0", VA = "0x5563AF0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public virtual TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x5563B00", Offset = "0x5562B00", VA = "0x5563B00", Slot = "16")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x5563B10", Offset = "0x5562B10", VA = "0x5563B10", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public virtual FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x5563B70", Offset = "0x5562B70", VA = "0x5563B70", Slot = "18")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x5563B80", Offset = "0x5562B80", VA = "0x5563B80", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public virtual TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x5563BE0", Offset = "0x5562BE0", VA = "0x5563BE0", Slot = "20")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x5563BF0", Offset = "0x5562BF0", VA = "0x5563BF0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public virtual PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5563C50", Offset = "0x5562C50", VA = "0x5563C50", Slot = "22")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x5563C60", Offset = "0x5562C60", VA = "0x5563C60", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public virtual ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5563CC0", Offset = "0x5562CC0", VA = "0x5563CC0", Slot = "24")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5563CD0", Offset = "0x5562CD0", VA = "0x5563CD0", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public virtual MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x5563D30", Offset = "0x5562D30", VA = "0x5563D30", Slot = "26")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x5563D40", Offset = "0x5562D40", VA = "0x5563D40", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public virtual NullValueHandling NullValueHandling
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x5563DA0", Offset = "0x5562DA0", VA = "0x5563DA0", Slot = "28")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x5563DB0", Offset = "0x5562DB0", VA = "0x5563DB0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x5563E10", Offset = "0x5562E10", VA = "0x5563E10", Slot = "30")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x5563E20", Offset = "0x5562E20", VA = "0x5563E20", Slot = "31")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public virtual ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x5563E80", Offset = "0x5562E80", VA = "0x5563E80", Slot = "32")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x5563E90", Offset = "0x5562E90", VA = "0x5563E90", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public virtual ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x5563EF0", Offset = "0x5562EF0", VA = "0x5563EF0", Slot = "34")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x5563F00", Offset = "0x5562F00", VA = "0x5563F00", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public virtual MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x5563F60", Offset = "0x5562F60", VA = "0x5563F60", Slot = "36")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x5563F70", Offset = "0x5562F70", VA = "0x5563F70", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public virtual JsonConverterCollection Converters
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x5563FD0", Offset = "0x5562FD0", VA = "0x5563FD0", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public virtual IContractResolver ContractResolver
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x5564070", Offset = "0x5563070", VA = "0x5564070", Slot = "39")]
		get
		{
			return null;
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x5564080", Offset = "0x5563080", VA = "0x5564080", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public virtual StreamingContext Context
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x5564150", Offset = "0x5563150", VA = "0x5564150", Slot = "41")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x5564160", Offset = "0x5563160", VA = "0x5564160", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public virtual Formatting Formatting
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x5564180", Offset = "0x5563180", VA = "0x5564180", Slot = "43")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x55641B0", Offset = "0x55631B0", VA = "0x55641B0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public virtual DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x5564200", Offset = "0x5563200", VA = "0x5564200", Slot = "45")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x5564230", Offset = "0x5563230", VA = "0x5564230", Slot = "46")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public virtual DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x5564290", Offset = "0x5563290", VA = "0x5564290", Slot = "47")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x55642E0", Offset = "0x55632E0", VA = "0x55642E0", Slot = "48")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public virtual DateParseHandling DateParseHandling
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x5564340", Offset = "0x5563340", VA = "0x5564340", Slot = "49")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x5564390", Offset = "0x5563390", VA = "0x5564390", Slot = "50")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public virtual FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x55643F0", Offset = "0x55633F0", VA = "0x55643F0", Slot = "51")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x5564420", Offset = "0x5563420", VA = "0x5564420", Slot = "52")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public virtual FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x5564480", Offset = "0x5563480", VA = "0x5564480", Slot = "53")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x55644B0", Offset = "0x55634B0", VA = "0x55644B0", Slot = "54")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public virtual StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x5564510", Offset = "0x5563510", VA = "0x5564510", Slot = "55")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x5564540", Offset = "0x5563540", VA = "0x5564540", Slot = "56")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public virtual string DateFormatString
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x55645A0", Offset = "0x55635A0", VA = "0x55645A0", Slot = "57")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x55645F0", Offset = "0x55635F0", VA = "0x55645F0", Slot = "58")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public virtual CultureInfo Culture
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x5564610", Offset = "0x5563610", VA = "0x5564610", Slot = "59")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x5564680", Offset = "0x5563680", VA = "0x5564680", Slot = "60")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public virtual int? MaxDepth
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x55646A0", Offset = "0x55636A0", VA = "0x55646A0", Slot = "61")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x55646B0", Offset = "0x55636B0", VA = "0x55646B0", Slot = "62")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public virtual bool CheckAdditionalContent
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x5564770", Offset = "0x5563770", VA = "0x5564770", Slot = "63")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x55647A0", Offset = "0x55637A0", VA = "0x55647A0", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public virtual event EventHandler<Newtonsoft.Json.Serialization.ErrorEventArgs>? Error
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x5563580", Offset = "0x5562580", VA = "0x5563580", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x5563630", Offset = "0x5562630", VA = "0x5563630", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5559BD0", Offset = "0x5558BD0", VA = "0x5559BD0")]
	internal bool IsCheckAdditionalContentSet()
	{
		return default(bool);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x5564800", Offset = "0x5563800", VA = "0x5564800")]
	public JsonSerializer()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x5564960", Offset = "0x5563960", VA = "0x5564960")]
	public static JsonSerializer Create()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x55649A0", Offset = "0x55639A0", VA = "0x55649A0")]
	public static JsonSerializer Create(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5565320", Offset = "0x5564320", VA = "0x5565320")]
	public static JsonSerializer CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x55594D0", Offset = "0x55584D0", VA = "0x55594D0")]
	public static JsonSerializer CreateDefault(JsonSerializerSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x5564A00", Offset = "0x5563A00", VA = "0x5564A00")]
	private static void ApplySerializerSettings(JsonSerializer serializer, JsonSerializerSettings settings)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x55656E0", Offset = "0x55646E0", VA = "0x55656E0")]
	[DebuggerStepThrough]
	public void Populate(TextReader reader, object target)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x555A050", Offset = "0x5559050", VA = "0x555A050")]
	[DebuggerStepThrough]
	public void Populate(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x5565760", Offset = "0x5564760", VA = "0x5565760", Slot = "65")]
	internal virtual void PopulateInternal(JsonReader reader, object target)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5566320", Offset = "0x5565320", VA = "0x5566320")]
	[DebuggerStepThrough]
	public object Deserialize(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5566340", Offset = "0x5565340", VA = "0x5566340")]
	[DebuggerStepThrough]
	public object Deserialize(TextReader reader, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[DebuggerStepThrough]
	public T? Deserialize<T>(JsonReader reader)
	{
		return (T?)null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5559D60", Offset = "0x5558D60", VA = "0x5559D60")]
	[DebuggerStepThrough]
	public object? Deserialize(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x55663C0", Offset = "0x55653C0", VA = "0x55663C0", Slot = "66")]
	internal virtual object? DeserializeInternal(JsonReader reader, Type? objectType)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x5565A30", Offset = "0x5564A30", VA = "0x5565A30")]
	internal void SetupReader(JsonReader reader, out CultureInfo? previousCulture, out DateTimeZoneHandling? previousDateTimeZoneHandling, out DateParseHandling? previousDateParseHandling, out FloatParseHandling? previousFloatParseHandling, out int? previousMaxDepth, out string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x5566040", Offset = "0x5565040", VA = "0x5566040")]
	private void ResetReader(JsonReader reader, CultureInfo? previousCulture, DateTimeZoneHandling? previousDateTimeZoneHandling, DateParseHandling? previousDateParseHandling, FloatParseHandling? previousFloatParseHandling, int? previousMaxDepth, string? previousDateFormatString)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x55666A0", Offset = "0x55656A0", VA = "0x55666A0")]
	public void Serialize(TextWriter textWriter, object? value)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x5559740", Offset = "0x5558740", VA = "0x5559740")]
	public void Serialize(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x5566740", Offset = "0x5565740", VA = "0x5566740")]
	public void Serialize(TextWriter textWriter, object? value, Type objectType)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x5566720", Offset = "0x5565720", VA = "0x5566720")]
	public void Serialize(JsonWriter jsonWriter, object? value)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x5565FC0", Offset = "0x5564FC0", VA = "0x5565FC0")]
	private TraceJsonReader CreateTraceJsonReader(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x55667C0", Offset = "0x55657C0", VA = "0x55667C0", Slot = "67")]
	internal virtual void SerializeInternal(JsonWriter jsonWriter, object? value, Type? objectType)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x5563760", Offset = "0x5562760", VA = "0x5563760")]
	internal IReferenceResolver GetReferenceResolver()
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5566EA0", Offset = "0x5565EA0", VA = "0x5566EA0")]
	internal JsonConverter GetMatchingConverter(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5566EB0", Offset = "0x5565EB0", VA = "0x5566EB0")]
	internal static JsonConverter GetMatchingConverter(IList<JsonConverter>? converters, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5567030", Offset = "0x5566030", VA = "0x5567030")]
	internal void OnError(Newtonsoft.Json.Serialization.ErrorEventArgs e)
	{
	}
}
