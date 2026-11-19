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
		[Address(RVA = "0x68733A0", Offset = "0x68723A0", VA = "0x68733A0", Slot = "4")]
		public bool Equals(AttributeQuery x, AttributeQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001316")]
		[Address(RVA = "0x6873400", Offset = "0x6872400", VA = "0x6873400", Slot = "5")]
		public int GetHashCode(AttributeQuery obj)
		{
			return default(int);
		}

		[Token(Token = "0x6001317")]
		[Address(RVA = "0x6873390", Offset = "0x6872390", VA = "0x6873390")]
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
			[Address(RVA = "0x68736B0", Offset = "0x68726B0", VA = "0x68736B0", Slot = "6")]
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
			[Address(RVA = "0x6873700", Offset = "0x6872700", VA = "0x6873700", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001318")]
		[Address(RVA = "0x6872E00", Offset = "0x6871E00", VA = "0x6872E00")]
		[DebuggerHidden]
		public _003CGetFlattenedMethods_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001319")]
		[Address(RVA = "0x6873450", Offset = "0x6872450", VA = "0x6873450", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600131A")]
		[Address(RVA = "0x6873460", Offset = "0x6872460", VA = "0x6873460", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600131C")]
		[Address(RVA = "0x68736C0", Offset = "0x68726C0", VA = "0x68736C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600131E")]
		[Address(RVA = "0x6873710", Offset = "0x6872710", VA = "0x6873710", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600131F")]
		[Address(RVA = "0x68737B0", Offset = "0x68727B0", VA = "0x68737B0", Slot = "5")]
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
	[Address(RVA = "0x6871EF0", Offset = "0x6870EF0", VA = "0x6871EF0")]
	public static bool HasAttribute(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x6871F50", Offset = "0x6870F50", VA = "0x6871F50")]
	public static bool HasAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x6871F60", Offset = "0x6870F60", VA = "0x6871F60")]
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
	[Address(RVA = "0x68721C0", Offset = "0x68711C0", VA = "0x68721C0")]
	public static PropertyInfo GetDeclaredProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x68723B0", Offset = "0x68713B0", VA = "0x68723B0")]
	public static MethodInfo GetDeclaredMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x68725A0", Offset = "0x68715A0", VA = "0x68725A0")]
	public static ConstructorInfo GetDeclaredConstructor(this Type type, Type[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x68727A0", Offset = "0x68717A0", VA = "0x68727A0")]
	public static ConstructorInfo[] GetDeclaredConstructors(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x6872830", Offset = "0x6871830", VA = "0x6872830")]
	public static MemberInfo[] GetFlattenedMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x6872BB0", Offset = "0x6871BB0", VA = "0x6872BB0")]
	public static MethodInfo GetFlattenedMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x6872D80", Offset = "0x6871D80", VA = "0x6872D80")]
	[IteratorStateMachine(typeof(_003CGetFlattenedMethods_003Ed__18))]
	public static IEnumerable<MethodInfo> GetFlattenedMethods(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x6872E30", Offset = "0x6871E30", VA = "0x6872E30")]
	public static PropertyInfo GetFlattenedProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x6873000", Offset = "0x6872000", VA = "0x6873000")]
	public static MemberInfo GetDeclaredMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x6872510", Offset = "0x6871510", VA = "0x6872510")]
	public static MethodInfo[] GetDeclaredMethods(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x6872320", Offset = "0x6871320", VA = "0x6872320")]
	public static PropertyInfo[] GetDeclaredProperties(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x6873160", Offset = "0x6872160", VA = "0x6873160")]
	public static FieldInfo[] GetDeclaredFields(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x6872B20", Offset = "0x6871B20", VA = "0x6872B20")]
	public static MemberInfo[] GetDeclaredMembers(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x68731F0", Offset = "0x68721F0", VA = "0x68731F0")]
	public static MemberInfo AsMemberInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x6873200", Offset = "0x6872200", VA = "0x6873200")]
	public static bool IsType(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x6873240", Offset = "0x6872240", VA = "0x6873240")]
	public static Type AsType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x686B830", Offset = "0x686A830", VA = "0x686B830")]
	public static Type Resolve(this Type type)
	{
		return null;
	}
}
