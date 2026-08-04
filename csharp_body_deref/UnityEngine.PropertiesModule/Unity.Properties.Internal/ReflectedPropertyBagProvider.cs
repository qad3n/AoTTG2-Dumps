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

[Token(Token = "0x2000071")]
internal class ReflectedPropertyBagProvider
{
	[Token(Token = "0x2000073")]
	[CompilerGenerated]
	private sealed class _003CGetPropertyMembers_003Ed__22 : IEnumerable<MemberInfo>, IEnumerable, IEnumerator<MemberInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400011F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000120")]
		[FieldOffset(Offset = "0x18")]
		private MemberInfo _003C_003E2__current;

		[Token(Token = "0x4000121")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000122")]
		[FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x4000123")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x4000124")]
		[FieldOffset(Offset = "0x38")]
		private IOrderedEnumerable<MemberInfo> _003Cmembers_003E5__1;

		[Token(Token = "0x4000125")]
		[FieldOffset(Offset = "0x40")]
		private IEnumerator<MemberInfo> _003C_003Es__2;

		[Token(Token = "0x4000126")]
		[FieldOffset(Offset = "0x48")]
		private MemberInfo _003Cmember_003E5__3;

		[Token(Token = "0x4000127")]
		[FieldOffset(Offset = "0x50")]
		private bool _003ChasDontCreatePropertyAttribute_003E5__4;

		[Token(Token = "0x4000128")]
		[FieldOffset(Offset = "0x51")]
		private bool _003ChasCreatePropertyAttribute_003E5__5;

		[Token(Token = "0x4000129")]
		[FieldOffset(Offset = "0x52")]
		private bool _003ChasNonSerializedAttribute_003E5__6;

		[Token(Token = "0x400012A")]
		[FieldOffset(Offset = "0x53")]
		private bool _003ChasSerializedFieldAttribute_003E5__7;

		[Token(Token = "0x400012B")]
		[FieldOffset(Offset = "0x54")]
		private bool _003ChasSerializeReferenceAttribute_003E5__8;

		[Token(Token = "0x400012C")]
		[FieldOffset(Offset = "0x58")]
		private FieldInfo _003Cfield_003E5__9;

		[Token(Token = "0x17000052")]
		private MemberInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMemberInfo_003E_002ECurrent
		{
			[Token(Token = "0x6000203")]
			[Address(RVA = "0x4E9D880", Offset = "0x4E9D880", VA = "0x4E9D880", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000053")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000205")]
			[Address(RVA = "0x4E9D8D0", Offset = "0x4E9D8D0", VA = "0x4E9D8D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4E9C860", Offset = "0x4E9C860", VA = "0x4E9C860")]
		[DebuggerHidden]
		public _003CGetPropertyMembers_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000200")]
		[Address(RVA = "0x4E9CBD0", Offset = "0x4E9CBD0", VA = "0x4E9CBD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4E9CC80", Offset = "0x4E9CC80", VA = "0x4E9CC80", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4E9D7E0", Offset = "0x4E9D7E0", VA = "0x4E9D7E0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4E9D890", Offset = "0x4E9D890", VA = "0x4E9D890", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4E9D8E0", Offset = "0x4E9D8E0", VA = "0x4E9D8E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MemberInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMemberInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000207")]
		[Address(RVA = "0x4E9D980", Offset = "0x4E9D980", VA = "0x4E9D980", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x10")]
	private readonly MethodInfo m_CreatePropertyMethod;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x18")]
	private readonly MethodInfo m_CreatePropertyBagMethod;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x20")]
	private readonly MethodInfo m_CreateIndexedCollectionPropertyBagMethod;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x28")]
	private readonly MethodInfo m_CreateSetPropertyBagMethod;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x30")]
	private readonly MethodInfo m_CreateKeyValueCollectionPropertyBagMethod;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x38")]
	private readonly MethodInfo m_CreateKeyValuePairPropertyBagMethod;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x40")]
	private readonly MethodInfo m_CreateArrayPropertyBagMethod;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x48")]
	private readonly MethodInfo m_CreateListPropertyBagMethod;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x50")]
	private readonly MethodInfo m_CreateHashSetPropertyBagMethod;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x58")]
	private readonly MethodInfo m_CreateDictionaryPropertyBagMethod;

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4E9C0D0", Offset = "0x4E9C0D0", VA = "0x4E9C0D0")]
	public ReflectedPropertyBagProvider()
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4E9C520", Offset = "0x4E9C520", VA = "0x4E9C520")]
	public IPropertyBag CreatePropertyBag(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	public IPropertyBag<TContainer> CreatePropertyBag<TContainer>()
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Preserve]
	private void CreateProperty<TContainer, TValue>(IMemberInfo member, ReflectedPropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x60001F0")]
	[Preserve]
	private IPropertyBag<TList> CreateIndexedCollectionPropertyBag<TList, TElement>() where TList : IList<TElement>
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Preserve]
	private IPropertyBag<TSet> CreateSetPropertyBag<TSet, TValue>() where TSet : ISet<TValue>
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Preserve]
	private IPropertyBag<TDictionary> CreateKeyValueCollectionPropertyBag<TDictionary, TKey, TValue>() where TDictionary : IDictionary<TKey, TValue>
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Preserve]
	private IPropertyBag<KeyValuePair<TKey, TValue>> CreateKeyValuePairPropertyBag<TKey, TValue>()
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Preserve]
	private IPropertyBag<TElement[]> CreateArrayPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Preserve]
	private IPropertyBag<List<TElement>> CreateListPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Preserve]
	private IPropertyBag<HashSet<TElement>> CreateHashSetPropertyBag<TElement>()
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Preserve]
	private IPropertyBag<Dictionary<TKey, TValue>> CreateDictionaryPropertyBag<TKey, TValue>()
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4E9C7E0", Offset = "0x4E9C7E0", VA = "0x4E9C7E0")]
	[IteratorStateMachine(typeof(_003CGetPropertyMembers_003Ed__22))]
	private static IEnumerable<MemberInfo> GetPropertyMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4E9C890", Offset = "0x4E9C890", VA = "0x4E9C890")]
	private static bool IsValidMember(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4E9C9D0", Offset = "0x4E9C9D0", VA = "0x4E9C9D0")]
	private static bool IsValidPropertyType(Type type)
	{
		return default(bool);
	}
}
