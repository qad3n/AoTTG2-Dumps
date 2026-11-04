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
	[FieldOffset(Offset = "0x100")]
	internal bool ExtensionDataIsJToken;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x101")]
	private bool? _hasRequiredOrDefaultValueProperties;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x108")]
	private ObjectConstructor<object>? _overrideCreator;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x110")]
	private ObjectConstructor<object>? _parameterizedCreator;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x118")]
	private JsonPropertyCollection? _creatorParameters;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x120")]
	private Type? _extensionDataValueType;

	[Token(Token = "0x17000120")]
	public MemberSerialization MemberSerialization
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
		[CompilerGenerated]
		get
		{
			return default(MemberSerialization);
		}
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x1C43490", Offset = "0x1C41A90", VA = "0x181C43490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public MissingMemberHandling? MissingMemberHandling
	{
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x1C43380", Offset = "0x1C41980", VA = "0x181C43380")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x1C434A0", Offset = "0x1C41AA0", VA = "0x181C434A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public Required? ItemRequired
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x1C43370", Offset = "0x1C41970", VA = "0x181C43370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x1C43480", Offset = "0x1C41A80", VA = "0x181C43480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public NullValueHandling? ItemNullValueHandling
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x1C43360", Offset = "0x1C41960", VA = "0x181C43360")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x1C43470", Offset = "0x1C41A70", VA = "0x181C43470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public JsonPropertyCollection Properties
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
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
		[Address(RVA = "0x1C42FF0", Offset = "0x1C415F0", VA = "0x181C42FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x1BD5400", Offset = "0x1BD3A00", VA = "0x181BD5400")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x1C41E00", Offset = "0x1C40400", VA = "0x181C41E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public ExtensionDataSetter? ExtensionDataSetter
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x1BD53E0", Offset = "0x1BD39E0", VA = "0x181BD53E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public ExtensionDataGetter? ExtensionDataGetter
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000856")]
		[Address(RVA = "0xB5BC50", Offset = "0xB5A250", VA = "0x180B5BC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public Type? ExtensionDataValueType
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x1C43390", Offset = "0x1C41990", VA = "0x181C43390")]
		set
		{
		}
	}

	[Token(Token = "0x1700012B")]
	public Func<string, string>? ExtensionDataNameResolver
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x1BD59A0", Offset = "0x1BD3FA0", VA = "0x181BD59A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	internal bool HasRequiredOrDefaultValueProperties
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x1C43080", Offset = "0x1C41680", VA = "0x181C43080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x1C42F60", Offset = "0x1C41560", VA = "0x181C42F60")]
	public JsonObjectContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x1C42E50", Offset = "0x1C41450", VA = "0x181C42E50")]
	internal object GetUninitializedObject()
	{
		return null;
	}
}
