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
		[Address(RVA = "0x3DDA8F0", Offset = "0x3DDA8F0", VA = "0x3DDA8F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x3DDA900", Offset = "0x3DDA900", VA = "0x3DDA900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public string? PropertyName
	{
		[Token(Token = "0x6000864")]
		[Address(RVA = "0x3DDA910", Offset = "0x3DDA910", VA = "0x3DDA910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000865")]
		[Address(RVA = "0x3DCDD60", Offset = "0x3DCDD60", VA = "0x3DCDD60")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public Type? DeclaringType
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x3DDA920", Offset = "0x3DDA920", VA = "0x3DDA920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000867")]
		[Address(RVA = "0x3DDA930", Offset = "0x3DDA930", VA = "0x3DDA930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public int? Order
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x3DDA940", Offset = "0x3DDA940", VA = "0x3DDA940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x3DDA950", Offset = "0x3DDA950", VA = "0x3DDA950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public string? UnderlyingName
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x3DDA960", Offset = "0x3DDA960", VA = "0x3DDA960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x3DDA970", Offset = "0x3DDA970", VA = "0x3DDA970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public IValueProvider? ValueProvider
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x3DDA980", Offset = "0x3DDA980", VA = "0x3DDA980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x3DDA990", Offset = "0x3DDA990", VA = "0x3DDA990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public IAttributeProvider? AttributeProvider
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x3DDA9A0", Offset = "0x3DDA9A0", VA = "0x3DDA9A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0x3DDA9B0", Offset = "0x3DDA9B0", VA = "0x3DDA9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Type? PropertyType
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x3DDA9C0", Offset = "0x3DDA9C0", VA = "0x3DDA9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x3DCD490", Offset = "0x3DCD490", VA = "0x3DCD490")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x3DDA9D0", Offset = "0x3DDA9D0", VA = "0x3DDA9D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x3DDA9E0", Offset = "0x3DDA9E0", VA = "0x3DDA9E0")]
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
		[Address(RVA = "0x3DDA9F0", Offset = "0x3DDA9F0", VA = "0x3DDA9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x3DDAA00", Offset = "0x3DDAA00", VA = "0x3DDAA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	public bool Ignored
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x3DDAA10", Offset = "0x3DDAA10", VA = "0x3DDAA10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x3DDAA20", Offset = "0x3DDAA20", VA = "0x3DDAA20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000139")]
	public bool Readable
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x3DDAA30", Offset = "0x3DDAA30", VA = "0x3DDAA30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x3DDAA40", Offset = "0x3DDAA40", VA = "0x3DDAA40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public bool Writable
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x3DDAA50", Offset = "0x3DDAA50", VA = "0x3DDAA50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x3DDAA60", Offset = "0x3DDAA60", VA = "0x3DDAA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool HasMemberAttribute
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x3DDAA70", Offset = "0x3DDAA70", VA = "0x3DDAA70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x3DDAA80", Offset = "0x3DDAA80", VA = "0x3DDAA80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public object? DefaultValue
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x3DCDDE0", Offset = "0x3DCDDE0", VA = "0x3DCDDE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x3DCDDF0", Offset = "0x3DCDDF0", VA = "0x3DCDDF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public Required Required
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x3DDA4E0", Offset = "0x3DDA4E0", VA = "0x3DDA4E0")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x3DDAB40", Offset = "0x3DDAB40", VA = "0x3DDAB40")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public bool IsRequiredSpecified
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x3DDAB90", Offset = "0x3DDAB90", VA = "0x3DDAB90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public bool? IsReference
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x3DDABC0", Offset = "0x3DDABC0", VA = "0x3DDABC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x3DDABD0", Offset = "0x3DDABD0", VA = "0x3DDABD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public NullValueHandling? NullValueHandling
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x3DDABE0", Offset = "0x3DDABE0", VA = "0x3DDABE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x3DDABF0", Offset = "0x3DDABF0", VA = "0x3DDABF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public DefaultValueHandling? DefaultValueHandling
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x3DDAC00", Offset = "0x3DDAC00", VA = "0x3DDAC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x3DDAC10", Offset = "0x3DDAC10", VA = "0x3DDAC10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public ReferenceLoopHandling? ReferenceLoopHandling
	{
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x3DDAC20", Offset = "0x3DDAC20", VA = "0x3DDAC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x3DDAC30", Offset = "0x3DDAC30", VA = "0x3DDAC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public ObjectCreationHandling? ObjectCreationHandling
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x3DDAC40", Offset = "0x3DDAC40", VA = "0x3DDAC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x3DDAC50", Offset = "0x3DDAC50", VA = "0x3DDAC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public TypeNameHandling? TypeNameHandling
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x3DDAC60", Offset = "0x3DDAC60", VA = "0x3DDAC60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600088F")]
		[Address(RVA = "0x3DDAC70", Offset = "0x3DDAC70", VA = "0x3DDAC70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public Predicate<object>? ShouldSerialize
	{
		[Token(Token = "0x6000890")]
		[Address(RVA = "0x3DDAC80", Offset = "0x3DDAC80", VA = "0x3DDAC80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x3DDAC90", Offset = "0x3DDAC90", VA = "0x3DDAC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public Predicate<object>? ShouldDeserialize
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x3DDACB0", Offset = "0x3DDACB0", VA = "0x3DDACB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x3DDACC0", Offset = "0x3DDACC0", VA = "0x3DDACC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public Predicate<object>? GetIsSpecified
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x3DDACE0", Offset = "0x3DDACE0", VA = "0x3DDACE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x3DDACF0", Offset = "0x3DDACF0", VA = "0x3DDACF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public Action<object, object?>? SetIsSpecified
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x3DDAD10", Offset = "0x3DDAD10", VA = "0x3DDAD10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x3DDAD20", Offset = "0x3DDAD20", VA = "0x3DDAD20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public JsonConverter? ItemConverter
	{
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x3DDAD70", Offset = "0x3DDAD70", VA = "0x3DDAD70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x3DDAD80", Offset = "0x3DDAD80", VA = "0x3DDAD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool? ItemIsReference
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x3DDADA0", Offset = "0x3DDADA0", VA = "0x3DDADA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x3DDADB0", Offset = "0x3DDADB0", VA = "0x3DDADB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public TypeNameHandling? ItemTypeNameHandling
	{
		[Token(Token = "0x600089D")]
		[Address(RVA = "0x3DDADC0", Offset = "0x3DDADC0", VA = "0x3DDADC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x3DDADD0", Offset = "0x3DDADD0", VA = "0x3DDADD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public ReferenceLoopHandling? ItemReferenceLoopHandling
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x3DDADE0", Offset = "0x3DDADE0", VA = "0x3DDADE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x3DDADF0", Offset = "0x3DDADF0", VA = "0x3DDADF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x3DDAA90", Offset = "0x3DDAA90", VA = "0x3DDAA90")]
	internal object? GetResolvedDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x3DDAD40", Offset = "0x3DDAD40", VA = "0x3DDAD40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x3DDAE00", Offset = "0x3DDAE00", VA = "0x3DDAE00")]
	internal void WritePropertyName(JsonWriter writer)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x3DCD480", Offset = "0x3DCD480", VA = "0x3DCD480")]
	public JsonProperty()
	{
	}
}
