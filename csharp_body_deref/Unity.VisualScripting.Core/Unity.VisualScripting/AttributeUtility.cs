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
			[Token(Token = "0x400015C")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400015D")]
			[FieldOffset(Offset = "0x18")]
			private Attribute _003C_003E2__current;

			[Token(Token = "0x400015E")]
			[FieldOffset(Offset = "0x20")]
			private int _003C_003El__initialThreadId;

			[Token(Token = "0x400015F")]
			[FieldOffset(Offset = "0x28")]
			private List<Attribute> cache;

			[Token(Token = "0x4000160")]
			[FieldOffset(Offset = "0x30")]
			public List<Attribute> _003C_003E3__cache;

			[Token(Token = "0x4000161")]
			[FieldOffset(Offset = "0x38")]
			private Type attributeType;

			[Token(Token = "0x4000162")]
			[FieldOffset(Offset = "0x40")]
			public Type _003C_003E3__attributeType;

			[Token(Token = "0x4000163")]
			[FieldOffset(Offset = "0x48")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x1700011B")]
			private Attribute System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EAttribute_003E_002ECurrent
			{
				[Token(Token = "0x6000564")]
				[Address(RVA = "0x4CBD390", Offset = "0x4CBD390", VA = "0x4CBD390", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700011C")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000566")]
				[Address(RVA = "0x4CBD3E0", Offset = "0x4CBD3E0", VA = "0x4CBD3E0", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000561")]
			[Address(RVA = "0x4CBD270", Offset = "0x4CBD270", VA = "0x4CBD270")]
			[DebuggerHidden]
			public _003CGetAttributes_003Ed__12(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000562")]
			[Address(RVA = "0x4CBD2A0", Offset = "0x4CBD2A0", VA = "0x4CBD2A0", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000563")]
			[Address(RVA = "0x4CBD2B0", Offset = "0x4CBD2B0", VA = "0x4CBD2B0", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000565")]
			[Address(RVA = "0x4CBD3A0", Offset = "0x4CBD3A0", VA = "0x4CBD3A0", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000567")]
			[Address(RVA = "0x4CBD3F0", Offset = "0x4CBD3F0", VA = "0x4CBD3F0", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000568")]
			[Address(RVA = "0x4CBD4A0", Offset = "0x4CBD4A0", VA = "0x4CBD4A0", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x17000119")]
		public List<Attribute> inheritedAttributes
		{
			[Token(Token = "0x6000552")]
			[Address(RVA = "0x4CBCF50", Offset = "0x4CBCF50", VA = "0x4CBCF50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011A")]
		public List<Attribute> definedAttributes
		{
			[Token(Token = "0x6000553")]
			[Address(RVA = "0x4CBCF60", Offset = "0x4CBCF60", VA = "0x4CBCF60")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000554")]
		[Address(RVA = "0x4CBAE10", Offset = "0x4CBAE10", VA = "0x4CBAE10")]
		public AttributeCache(MemberInfo element)
		{
		}

		[Token(Token = "0x6000555")]
		[Address(RVA = "0x4CBB6D0", Offset = "0x4CBB6D0", VA = "0x4CBB6D0")]
		public AttributeCache(ParameterInfo element)
		{
		}

		[Token(Token = "0x6000556")]
		[Address(RVA = "0x4CBBF90", Offset = "0x4CBBF90", VA = "0x4CBBF90")]
		public AttributeCache(IAttributeProvider element)
		{
		}

		[Token(Token = "0x6000557")]
		[Address(RVA = "0x4CBCF70", Offset = "0x4CBCF70", VA = "0x4CBCF70")]
		private void Cache(Attribute[] attributeObjects, List<Attribute> cache)
		{
		}

		[Token(Token = "0x6000558")]
		[Address(RVA = "0x4CBD060", Offset = "0x4CBD060", VA = "0x4CBD060")]
		private bool HasAttribute(Type attributeType, List<Attribute> cache)
		{
			return default(bool);
		}

		[Token(Token = "0x6000559")]
		[Address(RVA = "0x4CBD120", Offset = "0x4CBD120", VA = "0x4CBD120")]
		private Attribute GetAttribute(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x600055A")]
		[Address(RVA = "0x4CBD1E0", Offset = "0x4CBD1E0", VA = "0x4CBD1E0")]
		[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__12))]
		private IEnumerable<Attribute> GetAttributes(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x600055B")]
		[Address(RVA = "0x4CBC480", Offset = "0x4CBC480", VA = "0x4CBC480")]
		public bool HasAttribute(Type attributeType, bool inherit = true)
		{
			return default(bool);
		}

		[Token(Token = "0x600055C")]
		[Address(RVA = "0x4CBC520", Offset = "0x4CBC520", VA = "0x4CBC520")]
		public Attribute GetAttribute(Type attributeType, bool inherit = true)
		{
			return null;
		}

		[Token(Token = "0x600055D")]
		[Address(RVA = "0x4CBC5C0", Offset = "0x4CBC5C0", VA = "0x4CBC5C0")]
		public IEnumerable<Attribute> GetAttributes(Type attributeType, bool inherit = true)
		{
			return null;
		}

		[Token(Token = "0x600055E")]
		public bool HasAttribute<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return default(bool);
		}

		[Token(Token = "0x600055F")]
		public TAttribute GetAttribute<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return null;
		}

		[Token(Token = "0x6000560")]
		public IEnumerable<TAttribute> GetAttributes<TAttribute>(bool inherit = true) where TAttribute : Attribute
		{
			return null;
		}
	}

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<object, AttributeCache> optimizedCaches;

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4CBAB10", Offset = "0x4CBAB10", VA = "0x4CBAB10")]
	private static AttributeCache GetAttributeCache(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4CBB3D0", Offset = "0x4CBB3D0", VA = "0x4CBB3D0")]
	private static AttributeCache GetAttributeCache(ParameterInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4CBBC90", Offset = "0x4CBBC90", VA = "0x4CBBC90")]
	private static AttributeCache GetAttributeCache(IAttributeProvider element)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4CBC420", Offset = "0x4CBC420", VA = "0x4CBC420")]
	public static void CacheAttributes(MemberInfo element)
	{
	}

	[Token(Token = "0x600053A")]
	internal static IEnumerable<T> GetAttributeOfEnumMember<T>(this Enum enumVal) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4CA4BE0", Offset = "0x4CA4BE0", VA = "0x4CA4BE0")]
	public static bool HasAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4CBC490", Offset = "0x4CBC490", VA = "0x4CBC490")]
	public static Attribute GetAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4CBC530", Offset = "0x4CBC530", VA = "0x4CBC530")]
	public static IEnumerable<Attribute> GetAttributes(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	public static bool HasAttribute<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x600053F")]
	public static TAttribute GetAttribute<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000540")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this MemberInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4CBC5D0", Offset = "0x4CBC5D0", VA = "0x4CBC5D0")]
	public static void CacheAttributes(ParameterInfo element)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4CBC630", Offset = "0x4CBC630", VA = "0x4CBC630")]
	public static bool HasAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4CBC6C0", Offset = "0x4CBC6C0", VA = "0x4CBC6C0")]
	public static Attribute GetAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4CBC750", Offset = "0x4CBC750", VA = "0x4CBC750")]
	public static IEnumerable<Attribute> GetAttributes(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	public static bool HasAttribute<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000546")]
	public static TAttribute GetAttribute<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000547")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this ParameterInfo element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4CBC7E0", Offset = "0x4CBC7E0", VA = "0x4CBC7E0")]
	public static void CacheAttributes(IAttributeProvider element)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4CBC840", Offset = "0x4CBC840", VA = "0x4CBC840")]
	public static bool HasAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4CBC8D0", Offset = "0x4CBC8D0", VA = "0x4CBC8D0")]
	public static Attribute GetAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4CBC960", Offset = "0x4CBC960", VA = "0x4CBC960")]
	public static IEnumerable<Attribute> GetAttributes(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	public static bool HasAttribute<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	public static TAttribute GetAttribute<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x600054E")]
	public static IEnumerable<TAttribute> GetAttributes<TAttribute>(this IAttributeProvider element, bool inherit = true) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4CBC9F0", Offset = "0x4CBC9F0", VA = "0x4CBC9F0")]
	public static bool CheckCondition(Type type, object target, string conditionMemberName, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000550")]
	public static bool CheckCondition<T>(T target, string conditionMemberName, bool fallback)
	{
		return default(bool);
	}
}
