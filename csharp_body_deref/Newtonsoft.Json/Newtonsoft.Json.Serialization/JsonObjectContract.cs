// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonObjectContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000121")]
public class JsonObjectContract : JsonContainerContract
{
	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0xF8")]
	internal bool ExtensionDataIsJToken;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0xF9")]
	private bool? _hasRequiredOrDefaultValueProperties;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x100")]
	private ObjectConstructor<object>? _overrideCreator;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x108")]
	private ObjectConstructor<object>? _parameterizedCreator;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x110")]
	private JsonPropertyCollection? _creatorParameters;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x118")]
	private Type? _extensionDataValueType;

	[Token(Token = "0x17000120")]
	public MemberSerialization MemberSerialization
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x55D2570", Offset = "0x55D1570", VA = "0x55D2570")]
		[CompilerGenerated]
		get
		{
			return default(MemberSerialization);
		}
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x55D2580", Offset = "0x55D1580", VA = "0x55D2580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public MissingMemberHandling? MissingMemberHandling
	{
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x55D2590", Offset = "0x55D1590", VA = "0x55D2590")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x55D25A0", Offset = "0x55D15A0", VA = "0x55D25A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public Required? ItemRequired
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x55D25B0", Offset = "0x55D15B0", VA = "0x55D25B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x55D25C0", Offset = "0x55D15C0", VA = "0x55D25C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public NullValueHandling? ItemNullValueHandling
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x55D25D0", Offset = "0x55D15D0", VA = "0x55D25D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x55D25E0", Offset = "0x55D15E0", VA = "0x55D25E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public JsonPropertyCollection Properties
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x55D25F0", Offset = "0x55D15F0", VA = "0x55D25F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	public JsonPropertyCollection CreatorParameters
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x55C3B10", Offset = "0x55C2B10", VA = "0x55C3B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x55D2600", Offset = "0x55D1600", VA = "0x55D2600")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x55D2610", Offset = "0x55D1610", VA = "0x55D2610")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x55D2630", Offset = "0x55D1630", VA = "0x55D2630")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x55D2640", Offset = "0x55D1640", VA = "0x55D2640")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public ExtensionDataSetter? ExtensionDataSetter
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x55D2660", Offset = "0x55D1660", VA = "0x55D2660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x55D2670", Offset = "0x55D1670", VA = "0x55D2670")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public ExtensionDataGetter? ExtensionDataGetter
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x55D2690", Offset = "0x55D1690", VA = "0x55D2690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x55D26A0", Offset = "0x55D16A0", VA = "0x55D26A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public Type? ExtensionDataValueType
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x55D26C0", Offset = "0x55D16C0", VA = "0x55D26C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x55C50C0", Offset = "0x55C40C0", VA = "0x55C50C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public Func<string, string>? ExtensionDataNameResolver
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x55D26D0", Offset = "0x55D16D0", VA = "0x55D26D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x55D26E0", Offset = "0x55D16E0", VA = "0x55D26E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	internal bool HasRequiredOrDefaultValueProperties
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x55D2700", Offset = "0x55D1700", VA = "0x55D2700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x55C3290", Offset = "0x55C2290", VA = "0x55C3290")]
	public JsonObjectContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x55D2B70", Offset = "0x55D1B70", VA = "0x55D2B70")]
	internal object GetUninitializedObject()
	{
		return null;
	}
}
