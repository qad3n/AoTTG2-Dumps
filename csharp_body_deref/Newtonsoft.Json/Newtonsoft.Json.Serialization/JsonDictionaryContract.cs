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
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public Type? DictionaryKeyType
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
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
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
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
		[Address(RVA = "0x187BC60", Offset = "0x187A260", VA = "0x18187BC60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x1BD5220", Offset = "0x1BD3820", VA = "0x181BD5220")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x1C41DE0", Offset = "0x1C403E0", VA = "0x181C41DE0")]
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
		[Address(RVA = "0x1C41D00", Offset = "0x1C40300", VA = "0x181C41D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x1C41E00", Offset = "0x1C40400", VA = "0x181C41E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x1C41CE0", Offset = "0x1C402E0", VA = "0x181C41CE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x1C41DF0", Offset = "0x1C403F0", VA = "0x181C41DF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x1C41C70", Offset = "0x1C40270", VA = "0x181C41C70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x1C41020", Offset = "0x1C3F620", VA = "0x181C41020")]
	public JsonDictionaryContract(Type underlyingType)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x1C40CE0", Offset = "0x1C3F2E0", VA = "0x181C40CE0")]
	internal IWrappedDictionary CreateWrapper(object dictionary)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x1C40A30", Offset = "0x1C3F030", VA = "0x181C40A30")]
	internal IDictionary CreateTemporaryDictionary()
	{
		return null;
	}
}
