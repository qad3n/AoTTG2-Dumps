// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.ReflectedPropertyBagProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Properties.Internal;

[Token(Token = "0x20000A4")]
internal class ReflectedPropertyBagProvider
{
	[Token(Token = "0x20000A6")]
	[CompilerGenerated]
	private sealed class _003CGetPropertyMembers_003Ed__22 : IEnumerable<MemberInfo>, IEnumerable, IEnumerator<MemberInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x18")]
		private MemberInfo _003C_003E2__current;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0x38")]
		private IOrderedEnumerable<MemberInfo> _003Cmembers_003E5__1;

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x40")]
		private IEnumerator<MemberInfo> _003C_003Es__2;

		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x48")]
		private MemberInfo _003Cmember_003E5__3;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x50")]
		private bool _003ChasDontCreatePropertyAttribute_003E5__4;

		[Token(Token = "0x40000B2")]
		[FieldOffset(Offset = "0x51")]
		private bool _003ChasCreatePropertyAttribute_003E5__5;

		[Token(Token = "0x40000B3")]
		[FieldOffset(Offset = "0x52")]
		private bool _003ChasNonSerializedAttribute_003E5__6;

		[Token(Token = "0x40000B4")]
		[FieldOffset(Offset = "0x53")]
		private bool _003ChasSerializedFieldAttribute_003E5__7;

		[Token(Token = "0x40000B5")]
		[FieldOffset(Offset = "0x54")]
		private bool _003ChasSerializeReferenceAttribute_003E5__8;

		[Token(Token = "0x40000B6")]
		[FieldOffset(Offset = "0x58")]
		private FieldInfo _003Cfield_003E5__9;

		[Token(Token = "0x17000089")]
		private MemberInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMemberInfo_003E_002ECurrent
		{
			[Token(Token = "0x600028E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700008A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000290")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600028A")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetPropertyMembers_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600028B")]
		[Address(RVA = "0x2FF5370", Offset = "0x2FF3970", VA = "0x182FF5370", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x2FF4990", Offset = "0x2FF2F90", VA = "0x182FF4990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600028D")]
		[Address(RVA = "0x2FF5400", Offset = "0x2FF3A00", VA = "0x182FF5400")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600028F")]
		[Address(RVA = "0x2FF5330", Offset = "0x2FF3930", VA = "0x182FF5330", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000291")]
		[Address(RVA = "0x2FF5290", Offset = "0x2FF3890", VA = "0x182FF5290", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MemberInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMemberInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x2FF5290", Offset = "0x2FF3890", VA = "0x182FF5290", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x10")]
	private readonly MethodInfo m_CreatePropertyMethod;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x18")]
	private readonly MethodInfo m_CreatePropertyBagMethod;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x20")]
	private readonly MethodInfo m_CreateIndexedCollectionPropertyBagMethod;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x28")]
	private readonly MethodInfo m_CreateSetPropertyBagMethod;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x30")]
	private readonly MethodInfo m_CreateKeyValueCollectionPropertyBagMethod;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x38")]
	private readonly MethodInfo m_CreateKeyValuePairPropertyBagMethod;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x40")]
	private readonly MethodInfo m_CreateArrayPropertyBagMethod;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x48")]
	private readonly MethodInfo m_CreateListPropertyBagMethod;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x50")]
	private readonly MethodInfo m_CreateHashSetPropertyBagMethod;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x58")]
	private readonly MethodInfo m_CreateDictionaryPropertyBagMethod;

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x2FF25F0", Offset = "0x2FF0BF0", VA = "0x182FF25F0")]
	public ReflectedPropertyBagProvider()
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x2FF2200", Offset = "0x2FF0800", VA = "0x182FF2200")]
	public IPropertyBag CreatePropertyBag(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	public IPropertyBag<TContainer> CreatePropertyBag<TContainer>()
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Preserve]
	private void CreateProperty<TContainer, TValue>(IMemberInfo member, ReflectedPropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x600027B")]
	[Preserve]
	private IPropertyBag<TList> CreateIndexedCollectionPropertyBag<TList, TElement>() where TList : IList<TElement>
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Preserve]
	private IPropertyBag<TSet> CreateSetPropertyBag<TSet, TValue>() where TSet : ISet<TValue>
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Preserve]
	private IPropertyBag<TDictionary> CreateKeyValueCollectionPropertyBag<TDictionary, TKey, TValue>() where TDictionary : IDictionary<TKey, TValue>
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Preserve]
	private IPropertyBag<KeyValuePair<TKey, TValue>> CreateKeyValuePairPropertyBag<TKey, TValue>()
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	[Preserve]
	private IPropertyBag<TElement[]> CreateArrayPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Preserve]
	private IPropertyBag<List<TElement>> CreateListPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Preserve]
	private IPropertyBag<HashSet<TElement>> CreateHashSetPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Preserve]
	private IPropertyBag<Dictionary<TKey, TValue>> CreateDictionaryPropertyBag<TKey, TValue>()
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2FF2350", Offset = "0x2FF0950", VA = "0x182FF2350")]
	[IteratorStateMachine(typeof(_003CGetPropertyMembers_003Ed__22))]
	private static IEnumerable<MemberInfo> GetPropertyMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2FF23D0", Offset = "0x2FF09D0", VA = "0x182FF23D0")]
	private static bool IsValidMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x2FF2510", Offset = "0x2FF0B10", VA = "0x182FF2510")]
	private static bool IsValidPropertyType(Type type)
	{
		return default(bool);
	}
}
