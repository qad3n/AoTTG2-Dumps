// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.AttributeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000E0")]
public static class AttributeUtility
{
	[Token(Token = "0x20000E1")]
	private class AttributeCache
	{
		[Token(Token = "0x20000E2")]
		[CompilerGenerated]
		private sealed class _003CGetAttributes_003Ed__12 : IEnumerable<Attribute>, IEnumerable, IEnumerator<Attribute>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400015A")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400015B")]
			[FieldOffset(Offset = "0x18")]
			private Attribute _003C_003E2__current;

			[Token(Token = "0x400015C")]
			[FieldOffset(Offset = "0x20")]
			private int _003C_003El__initialThreadId;

			[Token(Token = "0x400015D")]
			[FieldOffset(Offset = "0x28")]
			private List<Attribute> cache;

			[Token(Token = "0x400015E")]
			[FieldOffset(Offset = "0x30")]
			public List<Attribute> _003C_003E3__cache;

			[Token(Token = "0x400015F")]
			[FieldOffset(Offset = "0x38")]
			private Type attributeType;

			[Token(Token = "0x4000160")]
			[FieldOffset(Offset = "0x40")]
			public Type _003C_003E3__attributeType;

			[Token(Token = "0x4000161")]
			[FieldOffset(Offset = "0x48")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x1700011E")]
			private Attribute System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EAttribute_003E_002ECurrent
			{
				[Token(Token = "0x600056E")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700011F")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000570")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600056B")]
			[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
			[DebuggerHidden]
			public _003CGetAttributes_003Ed__12(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x600056C")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x600056D")]
			[Address(RVA = "0x2DBA4B0", Offset = "0x2DB8AB0", VA = "0x182DBA4B0", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x600056F")]
			[Address(RVA = "0x2DBA650", Offset = "0x2DB8C50", VA = "0x182DBA650", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000571")]
			[Address(RVA = "0x2DBA5A0", Offset = "0x2DB8BA0", VA = "0x182DBA5A0", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000572")]
			[Address(RVA = "0x2DBA5A0", Offset = "0x2DB8BA0", VA = "0x182DBA5A0", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x1700011C")]
		public List<Attribute> inheritedAttributes
		{
			[Token(Token = "0x600055C")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011D")]
		public List<Attribute> definedAttributes
		{
			[Token(Token = "0x600055D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600055E")]
		[Address(RVA = "0x2D9A490", Offset = "0x2D98A90", VA = "0x182D9A490")]
		public AttributeCache(MemberInfo element)
		{
		}

		[Token(Token = "0x600055F")]
		[Address(RVA = "0x2D99EB0", Offset = "0x2D984B0", VA = "0x182D99EB0")]
		public AttributeCache(ParameterInfo element)
		{
		}

		[Token(Token = "0x6000560")]
		[Address(RVA = "0x2D99AC0", Offset = "0x2D980C0", VA = "0x182D99AC0")]
		public AttributeCache(IAttributeProvider element)
		{
		}

		[Token(Token = "0x6000561")]
		[Address(RVA = "0x2D99550", Offset = "0x2D97B50", VA = "0x182D99550")]
		private void Cache(Attribute[] attributeObjects, List<Attribute> cache)
		{
		}

		[Token(Token = "0x6000562")]
		[Address(RVA = "0x2D99A10", Offset = "0x2D98010", VA = "0x182D99A10")]
		private bool HasAttribute(Type attributeType, List<Attribute> cache)
		{
			return default(bool);
		}

		[Token(Token = "0x6000563")]
		[Address(RVA = "0x2D99760", Offset = "0x2D97D60", VA = "0x182D99760")]
		private Attribute GetAttribute(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x6000564")]
		[Address(RVA = "0x2D99840", Offset = "0x2D97E40", VA = "0x182D99840")]
		[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__12))]
		private IEnumerable<Attribute> GetAttributes(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x6000565")]
		[Address(RVA = "0x2D998D0", Offset = "0x2D97ED0", VA = "0x182D998D0")]
		public bool HasAttribute(Type attributeType, bool inherit = true)
		{
			return default(bool);
		}

		[Token(Token = "0x6000566")]
		[Address(RVA = "0x2D99630", Offset = "0x2D97C30", VA = "0x182D99630")]
		public Attribute GetAttribute(Type attributeType, bool inherit = true)
		{
			return null;
		}

		[Token(Token = "0x6000567")]
		[Address(RVA = "0x2D99820", Offset = "0x2D97E20", VA = "0x182D99820")]
		public IEnumerable<Attribute> GetAttributes(Type attributeType, bool inherit = true)
		{
			return null;
		}

		[Token(Token = "0x6000568")]
		public bool HasAttribute<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return default(bool);
		}

		[Token(Token = "0x6000569")]
		public TAttribute GetAttribute<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return null;
		}

		[Token(Token = "0x600056A")]
		public IEnumerable<TAttribute> GetAttributes<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return null;
		}
	}

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<object, AttributeCache> optimizedCaches;

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x2D9AE40", Offset = "0x2D99440", VA = "0x182D9AE40")]
	private static AttributeCache GetAttributeCache(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x2D9B2C0", Offset = "0x2D998C0", VA = "0x182D9B2C0")]
	private static AttributeCache GetAttributeCache(ParameterInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x2D9B080", Offset = "0x2D99680", VA = "0x182D9B080")]
	private static AttributeCache GetAttributeCache(IAttributeProvider element)
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x2D9AAC0", Offset = "0x2D990C0", VA = "0x182D9AAC0")]
	public static void CacheAttributes(MemberInfo element)
	{
	}

	[Token(Token = "0x6000544")]
	internal static IEnumerable<T> GetAttributeOfEnumMember<T>(this Enum enumVal) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x2D9BCC0", Offset = "0x2D9A2C0", VA = "0x182D9BCC0")]
	public static bool HasAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x2D9B500", Offset = "0x2D99B00", VA = "0x182D9B500")]
	public static Attribute GetAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2D9B980", Offset = "0x2D99F80", VA = "0x182D9B980")]
	public static IEnumerable<Attribute> GetAttributes(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000548")]
	public static bool HasAttribute<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	public static TAttribute GetAttribute<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x600054A")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2D9AB10", Offset = "0x2D99110", VA = "0x182D9AB10")]
	public static void CacheAttributes(ParameterInfo element)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x2D9BE50", Offset = "0x2D9A450", VA = "0x182D9BE50")]
	public static bool HasAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x2D9B680", Offset = "0x2D99C80", VA = "0x182D9B680")]
	public static Attribute GetAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x2D9BA10", Offset = "0x2D9A010", VA = "0x182D9BA10")]
	public static IEnumerable<Attribute> GetAttributes(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	public static bool HasAttribute<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000550")]
	public static TAttribute GetAttribute<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000551")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x2D9AA70", Offset = "0x2D99070", VA = "0x182D9AA70")]
	public static void CacheAttributes(IAttributeProvider element)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2D9BB30", Offset = "0x2D9A130", VA = "0x182D9BB30")]
	public static bool HasAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x2D9B800", Offset = "0x2D99E00", VA = "0x182D9B800")]
	public static Attribute GetAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x2D9BAA0", Offset = "0x2D9A0A0", VA = "0x182D9BAA0")]
	public static IEnumerable<Attribute> GetAttributes(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	public static bool HasAttribute<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000557")]
	public static TAttribute GetAttribute<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000558")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2D9AB60", Offset = "0x2D99160", VA = "0x182D9AB60")]
	public static bool CheckCondition(Type type, object target, string conditionMemberName, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600055A")]
	public static bool CheckCondition<T>(T target, string conditionMemberName, bool fallback)
	{
		return default(bool);
	}
}
