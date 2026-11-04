// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonArrayContract
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

[Token(Token = "0x2000112")]
public class JsonArrayContract : JsonContainerContract
{
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0xD0")]
	private readonly Type? _genericCollectionDefinitionType;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0xD8")]
	private Type? _genericWrapperType;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0xE0")]
	private ObjectConstructor<object>? _genericWrapperCreator;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0xE8")]
	private Func<object>? _genericTemporaryCollectionCreator;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0xF8")]
	private readonly ConstructorInfo? _parameterizedConstructor;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x100")]
	private ObjectConstructor<object>? _parameterizedCreator;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x108")]
	private ObjectConstructor<object>? _overrideCreator;

	[Token(Token = "0x170000F9")]
	public Type? CollectionItemType
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public bool IsMultidimensionalArray
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x1ABF0C0", Offset = "0x1ABD6C0", VA = "0x181ABF0C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool IsArray
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x1C3F930", Offset = "0x1C3DF30", VA = "0x181C3F930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool ShouldCreateWrapper
	{
		[Token(Token = "0x60007CF")]
		[Address(RVA = "0x1C3FA20", Offset = "0x1C3E020", VA = "0x181C3FA20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal bool CanDeserialize
	{
		[Token(Token = "0x60007D0")]
		[Address(RVA = "0x1C3F8A0", Offset = "0x1C3DEA0", VA = "0x181C3F8A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x1C3FA30", Offset = "0x1C3E030", VA = "0x181C3FA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal ObjectConstructor<object>? ParameterizedCreator
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x1C3F940", Offset = "0x1C3DF40", VA = "0x181C3F940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public ObjectConstructor<object>? OverrideCreator
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x1C3FA50", Offset = "0x1C3E050", VA = "0x181C3FA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public bool HasParameterizedCreator
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x1C3F920", Offset = "0x1C3DF20", VA = "0x181C3F920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x1C3FA40", Offset = "0x1C3E040", VA = "0x181C3FA40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	internal bool HasParameterizedCreatorInternal
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x1C3F8B0", Offset = "0x1C3DEB0", VA = "0x181C3F8B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x1C3E480", Offset = "0x1C3CA80", VA = "0x181C3E480")]
	public JsonArrayContract(Type underlyingType)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x1C3DE60", Offset = "0x1C3C460", VA = "0x181C3DE60")]
	internal IWrappedCollection CreateWrapper(object list)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x1C3DC00", Offset = "0x1C3C200", VA = "0x181C3DC00")]
	internal IList CreateTemporaryCollection()
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x1C3E2E0", Offset = "0x1C3C8E0", VA = "0x181C3E2E0")]
	private void StoreFSharpListCreatorIfNecessary(Type underlyingType)
	{
	}
}
