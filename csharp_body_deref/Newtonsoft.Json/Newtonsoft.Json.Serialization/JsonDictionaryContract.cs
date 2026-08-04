// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonDictionaryContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200011C")]
public class JsonDictionaryContract : JsonContainerContract
{
	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0xE0")]
	private readonly Type? _genericCollectionDefinitionType;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0xE8")]
	private Type? _genericWrapperType;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0xF0")]
	private ObjectConstructor<object>? _genericWrapperCreator;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0xF8")]
	private Func<object>? _genericTemporaryDictionaryCreator;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x108")]
	private readonly ConstructorInfo? _parameterizedConstructor;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x110")]
	private ObjectConstructor<object>? _overrideCreator;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x118")]
	private ObjectConstructor<object>? _parameterizedCreator;

	[Token(Token = "0x17000114")]
	public Func<string, string>? DictionaryKeyResolver
	{
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x3DD8880", Offset = "0x3DD8880", VA = "0x3DD8880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x3DD8890", Offset = "0x3DD8890", VA = "0x3DD8890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Type? DictionaryKeyType
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x3DD88B0", Offset = "0x3DD88B0", VA = "0x3DD88B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000116")]
	public Type? DictionaryValueType
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x3DD88C0", Offset = "0x3DD88C0", VA = "0x3DD88C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	internal JsonContract? KeyContract
	{
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x3DD88D0", Offset = "0x3DD88D0", VA = "0x3DD88D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x3DD88E0", Offset = "0x3DD88E0", VA = "0x3DD88E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x3DD8900", Offset = "0x3DD8900", VA = "0x3DD8900")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000119")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x3DD8910", Offset = "0x3DD8910", VA = "0x3DD8910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x3DD89E0", Offset = "0x3DD89E0", VA = "0x3DD89E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x3DD89F0", Offset = "0x3DD89F0", VA = "0x3DD89F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x3DD8A10", Offset = "0x3DD8A10", VA = "0x3DD8A10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x3DD8A20", Offset = "0x3DD8A20", VA = "0x3DD8A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x3DD8A30", Offset = "0x3DD8A30", VA = "0x3DD8A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x3DD0300", Offset = "0x3DD0300", VA = "0x3DD0300")]
	public JsonDictionaryContract(Type underlyingType)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x3DD8AA0", Offset = "0x3DD8AA0", VA = "0x3DD8AA0")]
	internal IWrappedDictionary CreateWrapper(object dictionary)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x3DD8DB0", Offset = "0x3DD8DB0", VA = "0x3DD8DB0")]
	internal IDictionary CreateTemporaryDictionary()
	{
		return null;
	}
}
