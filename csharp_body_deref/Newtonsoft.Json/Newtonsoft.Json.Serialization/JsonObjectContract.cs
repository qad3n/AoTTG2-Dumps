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
		[Address(RVA = "0x3AE4560", Offset = "0x3AE4560", VA = "0x3AE4560")]
		[CompilerGenerated]
		get
		{
			return default(MemberSerialization);
		}
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x3AE4570", Offset = "0x3AE4570", VA = "0x3AE4570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public MissingMemberHandling? MissingMemberHandling
	{
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x3AE4580", Offset = "0x3AE4580", VA = "0x3AE4580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x3AE4590", Offset = "0x3AE4590", VA = "0x3AE4590")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public Required? ItemRequired
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x3AE45A0", Offset = "0x3AE45A0", VA = "0x3AE45A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x3AE45B0", Offset = "0x3AE45B0", VA = "0x3AE45B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public NullValueHandling? ItemNullValueHandling
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x3AE45C0", Offset = "0x3AE45C0", VA = "0x3AE45C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x3AE45D0", Offset = "0x3AE45D0", VA = "0x3AE45D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public JsonPropertyCollection Properties
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x3AE45E0", Offset = "0x3AE45E0", VA = "0x3AE45E0")]
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
		[Address(RVA = "0x3AD57F0", Offset = "0x3AD57F0", VA = "0x3AD57F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x3AE45F0", Offset = "0x3AE45F0", VA = "0x3AE45F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x3AE4600", Offset = "0x3AE4600", VA = "0x3AE4600")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x3AE4620", Offset = "0x3AE4620", VA = "0x3AE4620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x3AE4630", Offset = "0x3AE4630", VA = "0x3AE4630")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public ExtensionDataSetter? ExtensionDataSetter
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x3AE4650", Offset = "0x3AE4650", VA = "0x3AE4650")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x3AE4660", Offset = "0x3AE4660", VA = "0x3AE4660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public ExtensionDataGetter? ExtensionDataGetter
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x3AE4680", Offset = "0x3AE4680", VA = "0x3AE4680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x3AE4690", Offset = "0x3AE4690", VA = "0x3AE4690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public Type? ExtensionDataValueType
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x3AE46B0", Offset = "0x3AE46B0", VA = "0x3AE46B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x3AD6D90", Offset = "0x3AD6D90", VA = "0x3AD6D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public Func<string, string>? ExtensionDataNameResolver
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x3AE46C0", Offset = "0x3AE46C0", VA = "0x3AE46C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x3AE46D0", Offset = "0x3AE46D0", VA = "0x3AE46D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	internal bool HasRequiredOrDefaultValueProperties
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x3AE46F0", Offset = "0x3AE46F0", VA = "0x3AE46F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x3AD4F70", Offset = "0x3AD4F70", VA = "0x3AD4F70")]
	public JsonObjectContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x3AE4BC0", Offset = "0x3AE4BC0", VA = "0x3AE4BC0")]
	internal object GetUninitializedObject()
	{
		return null;
	}
}
