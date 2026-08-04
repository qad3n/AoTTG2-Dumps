// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonSerializerSettings
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
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000033")]
public class JsonSerializerSettings
{
	[Token(Token = "0x40000BE")]
	internal const ReferenceLoopHandling DefaultReferenceLoopHandling = ReferenceLoopHandling.Error;

	[Token(Token = "0x40000BF")]
	internal const MissingMemberHandling DefaultMissingMemberHandling = MissingMemberHandling.Ignore;

	[Token(Token = "0x40000C0")]
	internal const NullValueHandling DefaultNullValueHandling = NullValueHandling.Include;

	[Token(Token = "0x40000C1")]
	internal const DefaultValueHandling DefaultDefaultValueHandling = DefaultValueHandling.Include;

	[Token(Token = "0x40000C2")]
	internal const ObjectCreationHandling DefaultObjectCreationHandling = ObjectCreationHandling.Auto;

	[Token(Token = "0x40000C3")]
	internal const PreserveReferencesHandling DefaultPreserveReferencesHandling = PreserveReferencesHandling.None;

	[Token(Token = "0x40000C4")]
	internal const ConstructorHandling DefaultConstructorHandling = ConstructorHandling.Default;

	[Token(Token = "0x40000C5")]
	internal const TypeNameHandling DefaultTypeNameHandling = TypeNameHandling.None;

	[Token(Token = "0x40000C6")]
	internal const MetadataPropertyHandling DefaultMetadataPropertyHandling = MetadataPropertyHandling.Default;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly StreamingContext DefaultContext;

	[Token(Token = "0x40000C8")]
	internal const Formatting DefaultFormatting = Formatting.None;

	[Token(Token = "0x40000C9")]
	internal const DateFormatHandling DefaultDateFormatHandling = DateFormatHandling.IsoDateFormat;

	[Token(Token = "0x40000CA")]
	internal const DateTimeZoneHandling DefaultDateTimeZoneHandling = DateTimeZoneHandling.RoundtripKind;

	[Token(Token = "0x40000CB")]
	internal const DateParseHandling DefaultDateParseHandling = DateParseHandling.DateTime;

	[Token(Token = "0x40000CC")]
	internal const FloatParseHandling DefaultFloatParseHandling = FloatParseHandling.Double;

	[Token(Token = "0x40000CD")]
	internal const FloatFormatHandling DefaultFloatFormatHandling = FloatFormatHandling.String;

	[Token(Token = "0x40000CE")]
	internal const StringEscapeHandling DefaultStringEscapeHandling = StringEscapeHandling.Default;

	[Token(Token = "0x40000CF")]
	internal const TypeNameAssemblyFormatHandling DefaultTypeNameAssemblyFormatHandling = TypeNameAssemblyFormatHandling.Simple;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly CultureInfo DefaultCulture;

	[Token(Token = "0x40000D1")]
	internal const bool DefaultCheckAdditionalContent = false;

	[Token(Token = "0x40000D2")]
	internal const string DefaultDateFormatString = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.FFFFFFFK";

	[Token(Token = "0x40000D3")]
	internal const int DefaultMaxDepth = 64;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x10")]
	internal Formatting? _formatting;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x18")]
	internal DateFormatHandling? _dateFormatHandling;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x20")]
	internal DateTimeZoneHandling? _dateTimeZoneHandling;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x28")]
	internal DateParseHandling? _dateParseHandling;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	internal FloatFormatHandling? _floatFormatHandling;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x38")]
	internal FloatParseHandling? _floatParseHandling;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x40")]
	internal StringEscapeHandling? _stringEscapeHandling;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x48")]
	internal CultureInfo? _culture;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x50")]
	internal bool? _checkAdditionalContent;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x54")]
	internal int? _maxDepth;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x5C")]
	internal bool _maxDepthSet;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x60")]
	internal string? _dateFormatString;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x68")]
	internal bool _dateFormatStringSet;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x6C")]
	internal TypeNameAssemblyFormatHandling? _typeNameAssemblyFormatHandling;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x74")]
	internal DefaultValueHandling? _defaultValueHandling;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x7C")]
	internal PreserveReferencesHandling? _preserveReferencesHandling;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x84")]
	internal NullValueHandling? _nullValueHandling;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x8C")]
	internal ObjectCreationHandling? _objectCreationHandling;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x94")]
	internal MissingMemberHandling? _missingMemberHandling;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x9C")]
	internal ReferenceLoopHandling? _referenceLoopHandling;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0xA8")]
	internal StreamingContext? _context;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0xC0")]
	internal ConstructorHandling? _constructorHandling;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0xC8")]
	internal TypeNameHandling? _typeNameHandling;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0xD0")]
	internal MetadataPropertyHandling? _metadataPropertyHandling;

	[Token(Token = "0x17000060")]
	public ReferenceLoopHandling ReferenceLoopHandling
	{
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x3D64720", Offset = "0x3D64720", VA = "0x3D64720")]
		get
		{
			return default(ReferenceLoopHandling);
		}
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x3D66310", Offset = "0x3D66310", VA = "0x3D66310")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x3D64750", Offset = "0x3D64750", VA = "0x3D64750")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x3D66370", Offset = "0x3D66370", VA = "0x3D66370")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public ObjectCreationHandling ObjectCreationHandling
	{
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x3D64780", Offset = "0x3D64780", VA = "0x3D64780")]
		get
		{
			return default(ObjectCreationHandling);
		}
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x3D663D0", Offset = "0x3D663D0", VA = "0x3D663D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public NullValueHandling NullValueHandling
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x3D647B0", Offset = "0x3D647B0", VA = "0x3D647B0")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x3D66430", Offset = "0x3D66430", VA = "0x3D66430")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public DefaultValueHandling DefaultValueHandling
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x3D647E0", Offset = "0x3D647E0", VA = "0x3D647E0")]
		get
		{
			return default(DefaultValueHandling);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x3D66490", Offset = "0x3D66490", VA = "0x3D66490")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public IList<JsonConverter> Converters
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x3D664E0", Offset = "0x3D664E0", VA = "0x3D664E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x3D664F0", Offset = "0x3D664F0", VA = "0x3D664F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public PreserveReferencesHandling PreserveReferencesHandling
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x3D646F0", Offset = "0x3D646F0", VA = "0x3D646F0")]
		get
		{
			return default(PreserveReferencesHandling);
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x3D66510", Offset = "0x3D66510", VA = "0x3D66510")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public TypeNameHandling TypeNameHandling
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x3D64660", Offset = "0x3D64660", VA = "0x3D64660")]
		get
		{
			return default(TypeNameHandling);
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x3D66560", Offset = "0x3D66560", VA = "0x3D66560")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public MetadataPropertyHandling MetadataPropertyHandling
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x3D64690", Offset = "0x3D64690", VA = "0x3D64690")]
		get
		{
			return default(MetadataPropertyHandling);
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x3D665C0", Offset = "0x3D665C0", VA = "0x3D665C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	[Obsolete("TypeNameAssemblyFormat is obsolete. Use TypeNameAssemblyFormatHandling instead.")]
	public FormatterAssemblyStyle TypeNameAssemblyFormat
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x3D66620", Offset = "0x3D66620", VA = "0x3D66620")]
		get
		{
			return default(FormatterAssemblyStyle);
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x3D66650", Offset = "0x3D66650", VA = "0x3D66650")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x3D646C0", Offset = "0x3D646C0", VA = "0x3D646C0")]
		get
		{
			return default(TypeNameAssemblyFormatHandling);
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x3D666A0", Offset = "0x3D666A0", VA = "0x3D666A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public ConstructorHandling ConstructorHandling
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x3D64810", Offset = "0x3D64810", VA = "0x3D64810")]
		get
		{
			return default(ConstructorHandling);
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x3D666F0", Offset = "0x3D666F0", VA = "0x3D666F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public IContractResolver? ContractResolver
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x3D66750", Offset = "0x3D66750", VA = "0x3D66750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x3D66760", Offset = "0x3D66760", VA = "0x3D66760")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public IEqualityComparer? EqualityComparer
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x3D66780", Offset = "0x3D66780", VA = "0x3D66780")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x3D66790", Offset = "0x3D66790", VA = "0x3D66790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	[Obsolete("ReferenceResolver property is obsolete. Use the ReferenceResolverProvider property to set the IReferenceResolver: settings.ReferenceResolverProvider = () => resolver")]
	public IReferenceResolver? ReferenceResolver
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x3D667B0", Offset = "0x3D667B0", VA = "0x3D667B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3D667D0", Offset = "0x3D667D0", VA = "0x3D667D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public Func<IReferenceResolver?>? ReferenceResolverProvider
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x3D668C0", Offset = "0x3D668C0", VA = "0x3D668C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x3D668D0", Offset = "0x3D668D0", VA = "0x3D668D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public ITraceWriter? TraceWriter
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x3D668F0", Offset = "0x3D668F0", VA = "0x3D668F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3D66900", Offset = "0x3D66900", VA = "0x3D66900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	[Obsolete("Binder is obsolete. Use SerializationBinder instead.")]
	public SerializationBinder? Binder
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x3D66920", Offset = "0x3D66920", VA = "0x3D66920")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x3D669D0", Offset = "0x3D669D0", VA = "0x3D669D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public ISerializationBinder? SerializationBinder
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x3D66A50", Offset = "0x3D66A50", VA = "0x3D66A50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x3D66A60", Offset = "0x3D66A60", VA = "0x3D66A60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public EventHandler<ErrorEventArgs>? Error
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x3D66A80", Offset = "0x3D66A80", VA = "0x3D66A80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x3D66A90", Offset = "0x3D66A90", VA = "0x3D66A90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public StreamingContext Context
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x3D64840", Offset = "0x3D64840", VA = "0x3D64840")]
		get
		{
			return default(StreamingContext);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x3D66AB0", Offset = "0x3D66AB0", VA = "0x3D66AB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public string DateFormatString
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x3D66B40", Offset = "0x3D66B40", VA = "0x3D66B40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x3D66B80", Offset = "0x3D66B80", VA = "0x3D66B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public int? MaxDepth
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x3D66BA0", Offset = "0x3D66BA0", VA = "0x3D66BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3D66C10", Offset = "0x3D66C10", VA = "0x3D66C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public Formatting Formatting
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3D66CC0", Offset = "0x3D66CC0", VA = "0x3D66CC0")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3D66CF0", Offset = "0x3D66CF0", VA = "0x3D66CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x3D66D40", Offset = "0x3D66D40", VA = "0x3D66D40")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3D66D70", Offset = "0x3D66D70", VA = "0x3D66D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x3D66DC0", Offset = "0x3D66DC0", VA = "0x3D66DC0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3D66E10", Offset = "0x3D66E10", VA = "0x3D66E10")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3D66E60", Offset = "0x3D66E60", VA = "0x3D66E60")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3D66EB0", Offset = "0x3D66EB0", VA = "0x3D66EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3D66F00", Offset = "0x3D66F00", VA = "0x3D66F00")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3D66F30", Offset = "0x3D66F30", VA = "0x3D66F30")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3D66F80", Offset = "0x3D66F80", VA = "0x3D66F80")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3D66FB0", Offset = "0x3D66FB0", VA = "0x3D66FB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3D67000", Offset = "0x3D67000", VA = "0x3D67000")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3D67030", Offset = "0x3D67030", VA = "0x3D67030")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x3D67080", Offset = "0x3D67080", VA = "0x3D67080")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x3D670F0", Offset = "0x3D670F0", VA = "0x3D670F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool CheckAdditionalContent
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3D58D80", Offset = "0x3D58D80", VA = "0x3D58D80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3D67100", Offset = "0x3D67100", VA = "0x3D67100")]
		set
		{
		}
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3D67160", Offset = "0x3D67160", VA = "0x3D67160")]
	static JsonSerializerSettings()
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3D57D10", Offset = "0x3D57D10", VA = "0x3D57D10")]
	[DebuggerStepThrough]
	public JsonSerializerSettings()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3D671E0", Offset = "0x3D671E0", VA = "0x3D671E0")]
	public JsonSerializerSettings(JsonSerializerSettings original)
	{
	}
}
