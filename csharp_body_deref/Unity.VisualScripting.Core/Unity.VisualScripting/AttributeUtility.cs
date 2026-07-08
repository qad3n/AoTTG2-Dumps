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
				[Address(RVA = "0x49987C0", Offset = "0x49987C0", VA = "0x49987C0", Slot = "6")]
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
				[Address(RVA = "0x4998810", Offset = "0x4998810", VA = "0x4998810", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000561")]
			[Address(RVA = "0x49986A0", Offset = "0x49986A0", VA = "0x49986A0")]
			[DebuggerHidden]
			public _003CGetAttributes_003Ed__12(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000562")]
			[Address(RVA = "0x49986D0", Offset = "0x49986D0", VA = "0x49986D0", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000563")]
			[Address(RVA = "0x49986E0", Offset = "0x49986E0", VA = "0x49986E0", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000565")]
			[Address(RVA = "0x49987D0", Offset = "0x49987D0", VA = "0x49987D0", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000567")]
			[Address(RVA = "0x4998820", Offset = "0x4998820", VA = "0x4998820", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<Attribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EAttribute_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000568")]
			[Address(RVA = "0x49988D0", Offset = "0x49988D0", VA = "0x49988D0", Slot = "5")]
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
			[Address(RVA = "0x4998380", Offset = "0x4998380", VA = "0x4998380")]
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
			[Address(RVA = "0x4998390", Offset = "0x4998390", VA = "0x4998390")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000554")]
		[Address(RVA = "0x4996240", Offset = "0x4996240", VA = "0x4996240")]
		public AttributeCache(MemberInfo element)
		{
		}

		[Token(Token = "0x6000555")]
		[Address(RVA = "0x4996B00", Offset = "0x4996B00", VA = "0x4996B00")]
		public AttributeCache(ParameterInfo element)
		{
		}

		[Token(Token = "0x6000556")]
		[Address(RVA = "0x49973C0", Offset = "0x49973C0", VA = "0x49973C0")]
		public AttributeCache(IAttributeProvider element)
		{
		}

		[Token(Token = "0x6000557")]
		[Address(RVA = "0x49983A0", Offset = "0x49983A0", VA = "0x49983A0")]
		private void Cache(Attribute[] attributeObjects, List<Attribute> cache)
		{
		}

		[Token(Token = "0x6000558")]
		[Address(RVA = "0x4998490", Offset = "0x4998490", VA = "0x4998490")]
		private bool HasAttribute(Type attributeType, List<Attribute> cache)
		{
			return default(bool);
		}

		[Token(Token = "0x6000559")]
		[Address(RVA = "0x4998550", Offset = "0x4998550", VA = "0x4998550")]
		private Attribute GetAttribute(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x600055A")]
		[Address(RVA = "0x4998610", Offset = "0x4998610", VA = "0x4998610")]
		[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__12))]
		private IEnumerable<Attribute> GetAttributes(Type attributeType, List<Attribute> cache)
		{
			return null;
		}

		[Token(Token = "0x600055B")]
		[Address(RVA = "0x49978B0", Offset = "0x49978B0", VA = "0x49978B0")]
		public bool HasAttribute(Type attributeType, bool inherit = true)
		{
			return default(bool);
		}

		[Token(Token = "0x600055C")]
		[Address(RVA = "0x4997950", Offset = "0x4997950", VA = "0x4997950")]
		public Attribute GetAttribute(Type attributeType, bool inherit = true)
		{
			return null;
		}

		[Token(Token = "0x600055D")]
		[Address(RVA = "0x49979F0", Offset = "0x49979F0", VA = "0x49979F0")]
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
	[Address(RVA = "0x4995F40", Offset = "0x4995F40", VA = "0x4995F40")]
	private static AttributeCache GetAttributeCache(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4996800", Offset = "0x4996800", VA = "0x4996800")]
	private static AttributeCache GetAttributeCache(ParameterInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x49970C0", Offset = "0x49970C0", VA = "0x49970C0")]
	private static AttributeCache GetAttributeCache(IAttributeProvider element)
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4997850", Offset = "0x4997850", VA = "0x4997850")]
	public static void CacheAttributes(MemberInfo element)
	{
	}

	[Token(Token = "0x600053A")]
	internal static IEnumerable<T> GetAttributeOfEnumMember<T>(this Enum enumVal) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4980010", Offset = "0x4980010", VA = "0x4980010")]
	public static bool HasAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x49978C0", Offset = "0x49978C0", VA = "0x49978C0")]
	public static Attribute GetAttribute(this MemberInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4997960", Offset = "0x4997960", VA = "0x4997960")]
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
	[Address(RVA = "0x4997A00", Offset = "0x4997A00", VA = "0x4997A00")]
	public static void CacheAttributes(ParameterInfo element)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4997A60", Offset = "0x4997A60", VA = "0x4997A60")]
	public static bool HasAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4997AF0", Offset = "0x4997AF0", VA = "0x4997AF0")]
	public static Attribute GetAttribute(this ParameterInfo element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4997B80", Offset = "0x4997B80", VA = "0x4997B80")]
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
	[Address(RVA = "0x4997C10", Offset = "0x4997C10", VA = "0x4997C10")]
	public static void CacheAttributes(IAttributeProvider element)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4997C70", Offset = "0x4997C70", VA = "0x4997C70")]
	public static bool HasAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4997D00", Offset = "0x4997D00", VA = "0x4997D00")]
	public static Attribute GetAttribute(this IAttributeProvider element, Type attributeType, bool inherit = true)
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4997D90", Offset = "0x4997D90", VA = "0x4997D90")]
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
	[Address(RVA = "0x4997E20", Offset = "0x4997E20", VA = "0x4997E20")]
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
