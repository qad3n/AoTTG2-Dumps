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
		[Address(RVA = "0x3AE2F30", Offset = "0x3AE2F30", VA = "0x3AE2F30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x3AE2F40", Offset = "0x3AE2F40", VA = "0x3AE2F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Type? DictionaryKeyType
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x3AE2F60", Offset = "0x3AE2F60", VA = "0x3AE2F60")]
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
		[Address(RVA = "0x3AE2F70", Offset = "0x3AE2F70", VA = "0x3AE2F70")]
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
		[Address(RVA = "0x3AE2F80", Offset = "0x3AE2F80", VA = "0x3AE2F80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x3AE2F90", Offset = "0x3AE2F90", VA = "0x3AE2F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x3AE2FB0", Offset = "0x3AE2FB0", VA = "0x3AE2FB0")]
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
		[Address(RVA = "0x3AE2FC0", Offset = "0x3AE2FC0", VA = "0x3AE2FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x3AE3090", Offset = "0x3AE3090", VA = "0x3AE3090")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x3AE30A0", Offset = "0x3AE30A0", VA = "0x3AE30A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x3AE30C0", Offset = "0x3AE30C0", VA = "0x3AE30C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x3AE30D0", Offset = "0x3AE30D0", VA = "0x3AE30D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x3AE30E0", Offset = "0x3AE30E0", VA = "0x3AE30E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x3ADA9B0", Offset = "0x3ADA9B0", VA = "0x3ADA9B0")]
	public JsonDictionaryContract(Type underlyingType)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x3AE3150", Offset = "0x3AE3150", VA = "0x3AE3150")]
	internal IWrappedDictionary CreateWrapper(object dictionary)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x3AE3460", Offset = "0x3AE3460", VA = "0x3AE3460")]
	internal IDictionary CreateTemporaryDictionary()
	{
		return null;
	}
}
