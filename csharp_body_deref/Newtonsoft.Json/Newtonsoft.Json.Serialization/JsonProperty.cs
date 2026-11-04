// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000123")]
public class JsonProperty
{
	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x10")]
	internal Required? _required;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x18")]
	internal bool _hasExplicitDefaultValue;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x20")]
	private object? _defaultValue;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x28")]
	private bool _hasGeneratedDefaultValue;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x30")]
	private string? _propertyName;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x38")]
	internal bool _skipPropertyNameEscape;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x40")]
	private Type? _propertyType;

	[Token(Token = "0x1700012E")]
	internal JsonContract? PropertyContract
	{
		[Token(Token = "0x6000862")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000863")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public string? PropertyName
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000865")]
		[Address(RVA = "0x1C44300", Offset = "0x1C42900", VA = "0x181C44300")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public Type? DeclaringType
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000867")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public int? Order
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x1C442F0", Offset = "0x1C428F0", VA = "0x181C442F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public string? UnderlyingName
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public IValueProvider? ValueProvider
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public IAttributeProvider? AttributeProvider
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Type? PropertyType
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x1C44390", Offset = "0x1C42990", VA = "0x181C44390")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000873")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	[Obsolete("MemberConverter is obsolete. Use Converter instead.")]
	public JsonConverter? MemberConverter
	{
		[Token(Token = "0x6000874")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000875")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public bool Ignored
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool Readable
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x1C44210", Offset = "0x1C42810", VA = "0x181C44210")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x1C44400", Offset = "0x1C42A00", VA = "0x181C44400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public bool Writable
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x1BF1B90", Offset = "0x1BF0190", VA = "0x181BF1B90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x1BF1D40", Offset = "0x1BF0340", VA = "0x181BF1D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool HasMemberAttribute
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x1C44180", Offset = "0x1C42780", VA = "0x181C44180")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x1C44280", Offset = "0x1C42880", VA = "0x181C44280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public object? DefaultValue
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x1C44170", Offset = "0x1C42770", VA = "0x181C44170")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x1C44260", Offset = "0x1C42860", VA = "0x181C44260")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public Required Required
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x1C44220", Offset = "0x1C42820", VA = "0x181C44220")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x1C44420", Offset = "0x1C42A20", VA = "0x181C44420")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool IsRequiredSpecified
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x1C441A0", Offset = "0x1C427A0", VA = "0x181C441A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool? IsReference
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x1C44190", Offset = "0x1C42790", VA = "0x181C44190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x1C44290", Offset = "0x1C42890", VA = "0x181C44290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public NullValueHandling? NullValueHandling
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x1C442D0", Offset = "0x1C428D0", VA = "0x181C442D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public DefaultValueHandling? DefaultValueHandling
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x12C0A50", Offset = "0x12BF050", VA = "0x1812C0A50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public ReferenceLoopHandling? ReferenceLoopHandling
	{
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x1C44410", Offset = "0x1C42A10", VA = "0x181C44410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public ObjectCreationHandling? ObjectCreationHandling
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x1C442E0", Offset = "0x1C428E0", VA = "0x181C442E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TypeNameHandling? TypeNameHandling
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088F")]
		[Address(RVA = "0x1C44480", Offset = "0x1C42A80", VA = "0x181C44480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public Predicate<object>? ShouldSerialize
	{
		[Token(Token = "0x6000890")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public Predicate<object>? ShouldDeserialize
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public Predicate<object>? GetIsSpecified
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000895")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public Action<object, object?>? SetIsSpecified
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x1C441E0", Offset = "0x1C427E0", VA = "0x181C441E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x1C442A0", Offset = "0x1C428A0", VA = "0x181C442A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x600089D")]
		[Address(RVA = "0x1C44200", Offset = "0x1C42800", VA = "0x181C44200")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x1C442C0", Offset = "0x1C428C0", VA = "0x181C442C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x1C441F0", Offset = "0x1C427F0", VA = "0x181C441F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x1C442B0", Offset = "0x1C428B0", VA = "0x181C442B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x1C44050", Offset = "0x1C42650", VA = "0x181C44050")]
	internal object? GetResolvedDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x1C44100", Offset = "0x1C42700", VA = "0x181C44100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x1C44120", Offset = "0x1C42720", VA = "0x181C44120")]
	internal void WritePropertyName(JsonWriter writer)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public JsonProperty()
	{
	}
}
