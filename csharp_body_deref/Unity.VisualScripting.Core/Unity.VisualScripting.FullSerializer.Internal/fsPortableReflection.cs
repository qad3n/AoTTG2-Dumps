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
		[Token(Token = "0x40009DE")]
		[FieldOffset(Offset = "0x0")]
		public MemberInfo MemberInfo;

		[Token(Token = "0x40009DF")]
		[FieldOffset(Offset = "0x8")]
		public Type AttributeType;
	}

	[Token(Token = "0x200021F")]
	private class AttributeQueryComparator : IEqualityComparer<AttributeQuery>
	{
		[Token(Token = "0x6001308")]
		[Address(RVA = "0x4D8C820", Offset = "0x4D8C820", VA = "0x4D8C820", Slot = "4")]
		public bool Equals(AttributeQuery x, AttributeQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001309")]
		[Address(RVA = "0x4D8C880", Offset = "0x4D8C880", VA = "0x4D8C880", Slot = "5")]
		public int GetHashCode(AttributeQuery obj)
		{
			return default(int);
		}

		[Token(Token = "0x600130A")]
		[Address(RVA = "0x4D8C810", Offset = "0x4D8C810", VA = "0x4D8C810")]
		public AttributeQueryComparator()
		{
		}
	}

	[Token(Token = "0x2000220")]
	[CompilerGenerated]
	private sealed class _003CGetFlattenedMethods_003Ed__18 : IEnumerable<MethodInfo>, IEnumerable, IEnumerator<MethodInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009E0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009E1")]
		[FieldOffset(Offset = "0x18")]
		private MethodInfo _003C_003E2__current;

		[Token(Token = "0x40009E2")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40009E3")]
		[FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x40009E4")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x40009E5")]
		[FieldOffset(Offset = "0x38")]
		private string methodName;

		[Token(Token = "0x40009E6")]
		[FieldOffset(Offset = "0x40")]
		public string _003C_003E3__methodName;

		[Token(Token = "0x40009E7")]
		[FieldOffset(Offset = "0x48")]
		private MethodInfo[] _003Cmethods_003E5__2;

		[Token(Token = "0x40009E8")]
		[FieldOffset(Offset = "0x50")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700021C")]
		private MethodInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMethodInfo_003E_002ECurrent
		{
			[Token(Token = "0x600130E")]
			[Address(RVA = "0x4D8CB30", Offset = "0x4D8CB30", VA = "0x4D8CB30", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700021D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001310")]
			[Address(RVA = "0x4D8CB80", Offset = "0x4D8CB80", VA = "0x4D8CB80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600130B")]
		[Address(RVA = "0x4D8C260", Offset = "0x4D8C260", VA = "0x4D8C260")]
		[DebuggerHidden]
		public _003CGetFlattenedMethods_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600130C")]
		[Address(RVA = "0x4D8C8D0", Offset = "0x4D8C8D0", VA = "0x4D8C8D0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600130D")]
		[Address(RVA = "0x4D8C8E0", Offset = "0x4D8C8E0", VA = "0x4D8C8E0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600130F")]
		[Address(RVA = "0x4D8CB40", Offset = "0x4D8CB40", VA = "0x4D8CB40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001311")]
		[Address(RVA = "0x4D8CB90", Offset = "0x4D8CB90", VA = "0x4D8CB90", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001312")]
		[Address(RVA = "0x4D8CC40", Offset = "0x4D8CC40", VA = "0x4D8CC40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40009DB")]
	[FieldOffset(Offset = "0x0")]
	public static Type[] EmptyTypes;

	[Token(Token = "0x40009DC")]
	[FieldOffset(Offset = "0x8")]
	private static IDictionary<AttributeQuery, Attribute> _cachedAttributeQueries;

	[Token(Token = "0x40009DD")]
	[FieldOffset(Offset = "0x10")]
	private static BindingFlags DeclaredFlags;

	[Token(Token = "0x60012EF")]
	public static bool HasAttribute<TAttribute>(MemberInfo element)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F0")]
	public static bool HasAttribute<TAttribute>(MemberInfo element, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x4D8A9E0", Offset = "0x4D8A9E0", VA = "0x4D8A9E0")]
	public static bool HasAttribute(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x4D8A890", Offset = "0x4D8A890", VA = "0x4D8A890")]
	public static bool HasAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x4D8B5F0", Offset = "0x4D8B5F0", VA = "0x4D8B5F0")]
	public static Attribute GetAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return null;
	}

	[Token(Token = "0x60012F4")]
	public static TAttribute GetAttribute<TAttribute>(MemberInfo element, bool shouldCache) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x60012F5")]
	public static TAttribute GetAttribute<TAttribute>(MemberInfo element) where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x4D8B850", Offset = "0x4D8B850", VA = "0x4D8B850")]
	public static PropertyInfo GetDeclaredProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x4D8BA40", Offset = "0x4D8BA40", VA = "0x4D8BA40")]
	public static MethodInfo GetDeclaredMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x4D89620", Offset = "0x4D89620", VA = "0x4D89620")]
	public static ConstructorInfo GetDeclaredConstructor(this Type type, Type[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x4D8BC30", Offset = "0x4D8BC30", VA = "0x4D8BC30")]
	public static ConstructorInfo[] GetDeclaredConstructors(this Type type)
	{
		return null;
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x4D8BCC0", Offset = "0x4D8BCC0", VA = "0x4D8BCC0")]
	public static MemberInfo[] GetFlattenedMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x4D8BFE0", Offset = "0x4D8BFE0", VA = "0x4D8BFE0")]
	public static MethodInfo GetFlattenedMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x4D8C1D0", Offset = "0x4D8C1D0", VA = "0x4D8C1D0")]
	[IteratorStateMachine(typeof(_003CGetFlattenedMethods_003Ed__18))]
	public static IEnumerable<MethodInfo> GetFlattenedMethods(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x4D8C290", Offset = "0x4D8C290", VA = "0x4D8C290")]
	public static PropertyInfo GetFlattenedProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x4D8C480", Offset = "0x4D8C480", VA = "0x4D8C480")]
	public static MemberInfo GetDeclaredMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x4D8BBA0", Offset = "0x4D8BBA0", VA = "0x4D8BBA0")]
	public static MethodInfo[] GetDeclaredMethods(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x4D8B9B0", Offset = "0x4D8B9B0", VA = "0x4D8B9B0")]
	public static PropertyInfo[] GetDeclaredProperties(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x4D8C5E0", Offset = "0x4D8C5E0", VA = "0x4D8C5E0")]
	public static FieldInfo[] GetDeclaredFields(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x4D8A1D0", Offset = "0x4D8A1D0", VA = "0x4D8A1D0")]
	public static MemberInfo[] GetDeclaredMembers(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x4D8C670", Offset = "0x4D8C670", VA = "0x4D8C670")]
	public static MemberInfo AsMemberInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x4D8C680", Offset = "0x4D8C680", VA = "0x4D8C680")]
	public static bool IsType(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x4D8C6C0", Offset = "0x4D8C6C0", VA = "0x4D8C6C0")]
	public static Type AsType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x4D89610", Offset = "0x4D89610", VA = "0x4D89610")]
	public static Type Resolve(this Type type)
	{
		return null;
	}
}
