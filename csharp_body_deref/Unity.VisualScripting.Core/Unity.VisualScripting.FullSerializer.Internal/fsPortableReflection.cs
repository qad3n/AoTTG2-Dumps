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
		[Address(RVA = "0x4A65970", Offset = "0x4A65970", VA = "0x4A65970", Slot = "4")]
		public bool Equals(AttributeQuery x, AttributeQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001309")]
		[Address(RVA = "0x4A659D0", Offset = "0x4A659D0", VA = "0x4A659D0", Slot = "5")]
		public int GetHashCode(AttributeQuery obj)
		{
			return default(int);
		}

		[Token(Token = "0x600130A")]
		[Address(RVA = "0x4A65960", Offset = "0x4A65960", VA = "0x4A65960")]
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
			[Address(RVA = "0x4A65C80", Offset = "0x4A65C80", VA = "0x4A65C80", Slot = "6")]
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
			[Address(RVA = "0x4A65CD0", Offset = "0x4A65CD0", VA = "0x4A65CD0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600130B")]
		[Address(RVA = "0x4A653B0", Offset = "0x4A653B0", VA = "0x4A653B0")]
		[DebuggerHidden]
		public _003CGetFlattenedMethods_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600130C")]
		[Address(RVA = "0x4A65A20", Offset = "0x4A65A20", VA = "0x4A65A20", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600130D")]
		[Address(RVA = "0x4A65A30", Offset = "0x4A65A30", VA = "0x4A65A30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600130F")]
		[Address(RVA = "0x4A65C90", Offset = "0x4A65C90", VA = "0x4A65C90", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001311")]
		[Address(RVA = "0x4A65CE0", Offset = "0x4A65CE0", VA = "0x4A65CE0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001312")]
		[Address(RVA = "0x4A65D90", Offset = "0x4A65D90", VA = "0x4A65D90", Slot = "5")]
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
	[Address(RVA = "0x4A64440", Offset = "0x4A64440", VA = "0x4A64440")]
	public static bool HasAttribute(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x4A644A0", Offset = "0x4A644A0", VA = "0x4A644A0")]
	public static bool HasAttribute(MemberInfo element, Type attributeType, bool shouldCache)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x4A644B0", Offset = "0x4A644B0", VA = "0x4A644B0")]
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
	[Address(RVA = "0x4A64710", Offset = "0x4A64710", VA = "0x4A64710")]
	public static PropertyInfo GetDeclaredProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x4A64900", Offset = "0x4A64900", VA = "0x4A64900")]
	public static MethodInfo GetDeclaredMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x4A64AF0", Offset = "0x4A64AF0", VA = "0x4A64AF0")]
	public static ConstructorInfo GetDeclaredConstructor(this Type type, Type[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x4A64CF0", Offset = "0x4A64CF0", VA = "0x4A64CF0")]
	public static ConstructorInfo[] GetDeclaredConstructors(this Type type)
	{
		return null;
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x4A64D80", Offset = "0x4A64D80", VA = "0x4A64D80")]
	public static MemberInfo[] GetFlattenedMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x4A65130", Offset = "0x4A65130", VA = "0x4A65130")]
	public static MethodInfo GetFlattenedMethod(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x4A65320", Offset = "0x4A65320", VA = "0x4A65320")]
	[IteratorStateMachine(typeof(_003CGetFlattenedMethods_003Ed__18))]
	public static IEnumerable<MethodInfo> GetFlattenedMethods(this Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x4A653E0", Offset = "0x4A653E0", VA = "0x4A653E0")]
	public static PropertyInfo GetFlattenedProperty(this Type type, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x4A655D0", Offset = "0x4A655D0", VA = "0x4A655D0")]
	public static MemberInfo GetDeclaredMember(this Type type, string memberName)
	{
		return null;
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x4A64A60", Offset = "0x4A64A60", VA = "0x4A64A60")]
	public static MethodInfo[] GetDeclaredMethods(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x4A64870", Offset = "0x4A64870", VA = "0x4A64870")]
	public static PropertyInfo[] GetDeclaredProperties(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x4A65730", Offset = "0x4A65730", VA = "0x4A65730")]
	public static FieldInfo[] GetDeclaredFields(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x4A650A0", Offset = "0x4A650A0", VA = "0x4A650A0")]
	public static MemberInfo[] GetDeclaredMembers(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x4A657C0", Offset = "0x4A657C0", VA = "0x4A657C0")]
	public static MemberInfo AsMemberInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x4A657D0", Offset = "0x4A657D0", VA = "0x4A657D0")]
	public static bool IsType(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x4A65810", Offset = "0x4A65810", VA = "0x4A65810")]
	public static Type AsType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x4A5D7A0", Offset = "0x4A5D7A0", VA = "0x4A5D7A0")]
	public static Type Resolve(this Type type)
	{
		return null;
	}
}
