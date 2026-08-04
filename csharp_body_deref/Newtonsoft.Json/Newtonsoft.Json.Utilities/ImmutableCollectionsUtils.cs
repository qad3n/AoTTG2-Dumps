// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000CA")]
internal static class ImmutableCollectionsUtils
{
	[Token(Token = "0x20000CB")]
	internal class ImmutableCollectionTypeInfo
	{
		[Token(Token = "0x170000D4")]
		public string ContractTypeName
		{
			[Token(Token = "0x6000636")]
			[Address(RVA = "0x3DBB470", Offset = "0x3DBB470", VA = "0x3DBB470")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000637")]
			[Address(RVA = "0x3DBB480", Offset = "0x3DBB480", VA = "0x3DBB480")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D5")]
		public string CreatedTypeName
		{
			[Token(Token = "0x6000638")]
			[Address(RVA = "0x3DBB490", Offset = "0x3DBB490", VA = "0x3DBB490")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000639")]
			[Address(RVA = "0x3DBB4A0", Offset = "0x3DBB4A0", VA = "0x3DBB4A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000D6")]
		public string BuilderTypeName
		{
			[Token(Token = "0x600063A")]
			[Address(RVA = "0x3DBB4B0", Offset = "0x3DBB4B0", VA = "0x3DBB4B0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600063B")]
			[Address(RVA = "0x3DBB4C0", Offset = "0x3DBB4C0", VA = "0x3DBB4C0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000635")]
		[Address(RVA = "0x3DBB410", Offset = "0x3DBB410", VA = "0x3DBB410")]
		public ImmutableCollectionTypeInfo(string contractTypeName, string createdTypeName, string builderTypeName)
		{
		}
	}

	[Token(Token = "0x4000461")]
	private const string ImmutableListGenericInterfaceTypeName = "System.Collections.Immutable.IImmutableList`1";

	[Token(Token = "0x4000462")]
	private const string ImmutableQueueGenericInterfaceTypeName = "System.Collections.Immutable.IImmutableQueue`1";

	[Token(Token = "0x4000463")]
	private const string ImmutableStackGenericInterfaceTypeName = "System.Collections.Immutable.IImmutableStack`1";

	[Token(Token = "0x4000464")]
	private const string ImmutableSetGenericInterfaceTypeName = "System.Collections.Immutable.IImmutableSet`1";

	[Token(Token = "0x4000465")]
	private const string ImmutableArrayTypeName = "System.Collections.Immutable.ImmutableArray";

	[Token(Token = "0x4000466")]
	private const string ImmutableArrayGenericTypeName = "System.Collections.Immutable.ImmutableArray`1";

	[Token(Token = "0x4000467")]
	private const string ImmutableListTypeName = "System.Collections.Immutable.ImmutableList";

	[Token(Token = "0x4000468")]
	private const string ImmutableListGenericTypeName = "System.Collections.Immutable.ImmutableList`1";

	[Token(Token = "0x4000469")]
	private const string ImmutableQueueTypeName = "System.Collections.Immutable.ImmutableQueue";

	[Token(Token = "0x400046A")]
	private const string ImmutableQueueGenericTypeName = "System.Collections.Immutable.ImmutableQueue`1";

	[Token(Token = "0x400046B")]
	private const string ImmutableStackTypeName = "System.Collections.Immutable.ImmutableStack";

	[Token(Token = "0x400046C")]
	private const string ImmutableStackGenericTypeName = "System.Collections.Immutable.ImmutableStack`1";

	[Token(Token = "0x400046D")]
	private const string ImmutableSortedSetTypeName = "System.Collections.Immutable.ImmutableSortedSet";

	[Token(Token = "0x400046E")]
	private const string ImmutableSortedSetGenericTypeName = "System.Collections.Immutable.ImmutableSortedSet`1";

	[Token(Token = "0x400046F")]
	private const string ImmutableHashSetTypeName = "System.Collections.Immutable.ImmutableHashSet";

	[Token(Token = "0x4000470")]
	private const string ImmutableHashSetGenericTypeName = "System.Collections.Immutable.ImmutableHashSet`1";

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IList<ImmutableCollectionTypeInfo> ArrayContractImmutableCollectionDefinitions;

	[Token(Token = "0x4000472")]
	private const string ImmutableDictionaryGenericInterfaceTypeName = "System.Collections.Immutable.IImmutableDictionary`2";

	[Token(Token = "0x4000473")]
	private const string ImmutableDictionaryTypeName = "System.Collections.Immutable.ImmutableDictionary";

	[Token(Token = "0x4000474")]
	private const string ImmutableDictionaryGenericTypeName = "System.Collections.Immutable.ImmutableDictionary`2";

	[Token(Token = "0x4000475")]
	private const string ImmutableSortedDictionaryTypeName = "System.Collections.Immutable.ImmutableSortedDictionary";

	[Token(Token = "0x4000476")]
	private const string ImmutableSortedDictionaryGenericTypeName = "System.Collections.Immutable.ImmutableSortedDictionary`2";

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IList<ImmutableCollectionTypeInfo> DictionaryContractImmutableCollectionDefinitions;

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x3DB9E20", Offset = "0x3DB9E20", VA = "0x3DB9E20")]
	internal static bool TryBuildImmutableForArrayContract(Type underlyingType, Type collectionItemType, [NotNullWhen(true)] out Type? createdType, [NotNullWhen(true)] out ObjectConstructor<object>? parameterizedCreator)
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x3DBA310", Offset = "0x3DBA310", VA = "0x3DBA310")]
	internal static bool TryBuildImmutableForDictionaryContract(Type underlyingType, Type keyItemType, Type valueItemType, [NotNullWhen(true)] out Type? createdType, [NotNullWhen(true)] out ObjectConstructor<object>? parameterizedCreator)
	{
		return default(bool);
	}
}
