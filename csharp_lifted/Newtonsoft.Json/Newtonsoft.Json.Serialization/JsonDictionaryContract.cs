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
		[Address(RVA = "0x55D0F80", Offset = "0x55CFF80", VA = "0x55D0F80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x55D0F90", Offset = "0x55CFF90", VA = "0x55D0F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Type? DictionaryKeyType
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x55D0FB0", Offset = "0x55CFFB0", VA = "0x55D0FB0")]
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
		[Address(RVA = "0x55D0FC0", Offset = "0x55CFFC0", VA = "0x55D0FC0")]
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
		[Address(RVA = "0x55D0FD0", Offset = "0x55CFFD0", VA = "0x55D0FD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x55D0FE0", Offset = "0x55CFFE0", VA = "0x55D0FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x55D1000", Offset = "0x55D0000", VA = "0x55D1000")]
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
		[Address(RVA = "0x55D1010", Offset = "0x55D0010", VA = "0x55D1010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x55D10E0", Offset = "0x55D00E0", VA = "0x55D10E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x55D10F0", Offset = "0x55D00F0", VA = "0x55D10F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x55D1110", Offset = "0x55D0110", VA = "0x55D1110")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x55D1120", Offset = "0x55D0120", VA = "0x55D1120")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x55D1130", Offset = "0x55D0130", VA = "0x55D1130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x55C8BF0", Offset = "0x55C7BF0", VA = "0x55C8BF0")]
	public JsonDictionaryContract(Type underlyingType)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x55D11A0", Offset = "0x55D01A0", VA = "0x55D11A0")]
	internal IWrappedDictionary CreateWrapper(object dictionary)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x55D14B0", Offset = "0x55D04B0", VA = "0x55D14B0")]
	internal IDictionary CreateTemporaryDictionary()
	{
		return null;
	}
}
