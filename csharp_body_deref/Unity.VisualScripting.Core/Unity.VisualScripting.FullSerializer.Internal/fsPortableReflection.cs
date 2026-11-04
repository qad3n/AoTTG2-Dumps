// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
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

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x200021D")]
public static class fsPortableReflection
{
	[Token(Token = "0x200021E")]
	private struct AttributeQuery
	{
		[Token(Token = "0x40009DC")]
		[FieldOffset(Offset = "0x0")]
		public MemberInfo MemberInfo;

		[Token(Token = "0x40009DD")]
		[FieldOffset(Offset = "0x8")]
		public Type AttributeType;
	}

	[Token(Token = "0x200021F")]
	private class AttributeQueryComparator : IEqualityComparer<AttributeQuery>
	{
		[Token(Token = "0x6001315")]
		[Address(RVA = "0x2E6F380", Offset = "0x2E6D980", VA = "0x182E6F380", Slot = "4")]
		public bool Equals(AttributeQuery x, AttributeQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001316")]
		[Address(RVA = "0x2E6F3E0", Offset = "0x2E6D9E0", VA = "0x182E6F3E0", Slot = "5")]
		public int GetHashCode(AttributeQuery obj)
		{
			return default(int);
		}

		[Token(Token = "0x6001317")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public AttributeQueryComparator()
		{
		}
	}

	[Token(Token = "0x2000220")]
	[CompilerGenerated]
	private sealed class _003CGetFlattenedMethods_003Ed__18 : IEnumerable<MethodInfo>, IEnumerable, IEnumerator<MethodInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009DE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009DF")]
		[FieldOffset(Offset = "0x18")]
		private MethodInfo _003C_003E2__current;

		[Token(Token = "0x40009E0")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40009E1")]
		[FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x40009E2")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x40009E3")]
		[FieldOffset(Offset = "0x38")]
		private string methodName;

		[Token(Token = "0x40009E4")]
		[FieldOffset(Offset = "0x40")]
		public string _003C_003E3__methodName;

		[Token(Token = "0x40009E5")]
		[FieldOffset(Offset = "0x48")]
		private MethodInfo[] _003Cmethods_003E5__2;

		[Token(Token = "0x40009E6")]
		[FieldOffset(Offset = "0x50")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700021F")]
		private MethodInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMethodInfo_003E_002ECurrent
		{
			[Token(Token = "0x600131B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000220")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600131D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001318")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetFlattenedMethods_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001319")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600131A")]
		[Address(RVA = "0x2E6FF30", Offset = "0x2E6E530", VA = "0x182E6FF30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600131C")]
		[Address(RVA = "0x2E70200", Offset = "0x2E6E800", VA = "0x182E70200", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600131E")]
		[Address(RVA = "0x2E70150", Offset = "0x2E6E750", VA = "0x182E70150", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600131F")]
		[Address(RVA = "0x2E70150", Offset = "0x2E6E750", VA = "0x182E70150", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x0")]
	public static Type[] EmptyTypes;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x8")]
	private static IDictionary<AttributeQuery, Attribute> _cachedAttributeQueries;

	[Token(Token = "0x40009DB")]
	[FieldOffset(Offset = "0x10")]
	private static BindingFlags DeclaredFlags;

	[Token(Token = "0x60012FC")]
	public static bool HasAttribute<TAttribute>(MemberInfo element)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FD")]
	public static bool HasAttribute<TAttribute>(MemberInfo element, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x2E720E0", Offset = "0x2E706E0", VA = "0x182E720E0")]
	public static bool HasAttribute(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x1B5D430", Offset = "0x1B5BA30", VA = "0x181B5D430")]
	public static bool HasAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x2E71110", Offset = "0x2E6F710", VA = "0x182E71110")]
	public static Attribute GetAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return null;
	}

	[Token(Token = "0x6001301")]
	public static TAttribute GetAttribute<TAttribute>(MemberInfo element, bool shouldCache) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6001302")]
	public static TAttribute GetAttribute<TAttribute>(MemberInfo element) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x2E71A30", Offset = "0x2E70030", VA = "0x182E71A30")]
	public static PropertyInfo GetDeclaredProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x2E71800", Offset = "0x2E6FE00", VA = "0x182E71800")]
	public static MethodInfo GetDeclaredMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x2E71390", Offset = "0x2E6F990", VA = "0x182E71390")]
	public static ConstructorInfo GetDeclaredConstructor(this Type type, Type[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x2E71550", Offset = "0x2E6FB50", VA = "0x182E71550")]
	public static ConstructorInfo[] GetDeclaredConstructors(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x2E71B60", Offset = "0x2E70160", VA = "0x182E71B60")]
	public static MemberInfo[] GetFlattenedMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x2E71D50", Offset = "0x2E70350", VA = "0x182E71D50")]
	public static MethodInfo GetFlattenedMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x2E71ED0", Offset = "0x2E704D0", VA = "0x182E71ED0")]
	[IteratorStateMachine(typeof(_003CGetFlattenedMethods_003Ed__18))]
	public static IEnumerable<MethodInfo> GetFlattenedMethods(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x2E71F60", Offset = "0x2E70560", VA = "0x182E71F60")]
	public static PropertyInfo GetFlattenedProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x2E71650", Offset = "0x2E6FC50", VA = "0x182E71650")]
	public static MemberInfo GetDeclaredMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x2E71930", Offset = "0x2E6FF30", VA = "0x182E71930")]
	public static MethodInfo[] GetDeclaredMethods(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x2E719B0", Offset = "0x2E6FFB0", VA = "0x182E719B0")]
	public static PropertyInfo[] GetDeclaredProperties(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x2E715D0", Offset = "0x2E6FBD0", VA = "0x182E715D0")]
	public static FieldInfo[] GetDeclaredFields(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x2E71780", Offset = "0x2E6FD80", VA = "0x182E71780")]
	public static MemberInfo[] GetDeclaredMembers(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static MemberInfo AsMemberInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x2E72140", Offset = "0x2E70740", VA = "0x182E72140")]
	public static bool IsType(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x2E710C0", Offset = "0x2E6F6C0", VA = "0x182E710C0")]
	public static Type AsType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static Type Resolve(this Type type)
	{
		return null;
	}
}
