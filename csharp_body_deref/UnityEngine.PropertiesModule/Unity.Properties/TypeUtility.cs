using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Reflection;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Pool;
using UnityEngine.Scripting;

namespace Unity.Properties;

[Token(Token = "0x2000035")]
public static class TypeUtility
{
	[Token(Token = "0x2000036")]
	private interface ITypeConstructor
	{
		[Token(Token = "0x1700002C")]
		bool CanBeInstantiated
		{
			[Token(Token = "0x6000179")]
			get;
		}

		[Token(Token = "0x600017A")]
		object Instantiate();
	}

	[Token(Token = "0x2000037")]
	private interface ITypeConstructor<T> : ITypeConstructor
	{
		[Token(Token = "0x600017B")]
		new T Instantiate();

		[Token(Token = "0x600017C")]
		void SetExplicitConstructor(Func<T> constructor);
	}

	[Token(Token = "0x2000038")]
	private class TypeConstructor<T> : ITypeConstructor<T>, ITypeConstructor
	{
		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x0")]
		private Func<T> m_ExplicitConstructor;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x0")]
		private Func<T> m_ImplicitConstructor;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0x0")]
		private IConstructor<T> m_OverrideConstructor;

		[Token(Token = "0x1700002D")]
		private bool Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002ECanBeInstantiated
		{
			[Token(Token = "0x600017D")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600017E")]
		public TypeConstructor()
		{
		}

		[Token(Token = "0x600017F")]
		private void SetImplicitConstructor()
		{
		}

		[Token(Token = "0x6000180")]
		private static T CreateValueTypeInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x6000181")]
		private static T CreateScriptableObjectInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x6000182")]
		private static T CreateClassInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x6000183")]
		public void SetExplicitConstructor(Func<T> constructor)
		{
		}

		[Token(Token = "0x6000184")]
		private T Unity_002EProperties_002ETypeUtility_002EITypeConstructor_003CT_003E_002EInstantiate()
		{
			return (T)null;
		}

		[Token(Token = "0x6000185")]
		private object Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002EInstantiate()
		{
			return null;
		}
	}

	[Token(Token = "0x2000039")]
	private class NonConstructable : ITypeConstructor
	{
		[Token(Token = "0x1700002E")]
		private bool Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002ECanBeInstantiated
		{
			[Token(Token = "0x6000186")]
			[Address(RVA = "0x4B72070", Offset = "0x4B72070", VA = "0x4B72070", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4B72080", Offset = "0x4B72080", VA = "0x4B72080", Slot = "5")]
		public object Instantiate()
		{
			return null;
		}

		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4B71C10", Offset = "0x4B71C10", VA = "0x4B71C10")]
		public NonConstructable()
		{
		}
	}

	[Token(Token = "0x200003A")]
	private struct Cache<T>
	{
		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x0")]
		public static ITypeConstructor<T> TypeConstructor;
	}

	[Token(Token = "0x200003B")]
	private class TypeConstructorVisitor : ITypeVisitor
	{
		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x10")]
		public ITypeConstructor TypeConstructor;

		[Token(Token = "0x6000189")]
		public void Visit<TContainer>()
		{
		}

		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4B71C00", Offset = "0x4B71C00", VA = "0x4B71C00")]
		public TypeConstructorVisitor()
		{
		}
	}

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, ITypeConstructor> s_TypeConstructors;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo s_CreateTypeConstructor;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConcurrentDictionary<Type, string> s_CachedResolvedName;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ObjectPool<StringBuilder> s_Builders;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x20")]
	private static readonly object syncedPoolObject;

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4B70670", Offset = "0x4B70670", VA = "0x4B70670")]
	static TypeUtility()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4B70AD0", Offset = "0x4B70AD0", VA = "0x4B70AD0")]
	public static string GetTypeDisplayName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4B70BF0", Offset = "0x4B70BF0", VA = "0x4B70BF0")]
	private static string GetTypeDisplayName(Type type, IReadOnlyList<Type> args, ref int argIndex)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4B715D0", Offset = "0x4B715D0", VA = "0x4B715D0")]
	public static Type GetRootType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4B716D0", Offset = "0x4B716D0", VA = "0x4B716D0")]
	[Preserve]
	private static ITypeConstructor CreateTypeConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	private static ITypeConstructor<T> CreateTypeConstructor<T>()
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4B71C20", Offset = "0x4B71C20", VA = "0x4B71C20")]
	private static ITypeConstructor GetTypeConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	private static ITypeConstructor<T> GetTypeConstructor<T>()
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4B71CD0", Offset = "0x4B71CD0", VA = "0x4B71CD0")]
	public static bool CanBeInstantiated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600016D")]
	public static bool CanBeInstantiated<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600016E")]
	public static void SetExplicitInstantiationMethod<T>(Func<T> constructor)
	{
	}

	[Token(Token = "0x600016F")]
	public static T Instantiate<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000170")]
	public static bool TryInstantiate<T>(out T instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000171")]
	public static T Instantiate<T>(Type derivedType)
	{
		return (T)null;
	}

	[Token(Token = "0x6000172")]
	public static bool TryInstantiate<T>(Type derivedType, out T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	public static TArray InstantiateArray<TArray>(int count = 0)
	{
		return (TArray)null;
	}

	[Token(Token = "0x6000174")]
	public static bool TryInstantiateArray<TArray>(int count, out TArray instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	public static TArray InstantiateArray<TArray>(Type derivedType, int count = 0)
	{
		return (TArray)null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4B71DC0", Offset = "0x4B71DC0", VA = "0x4B71DC0")]
	private static void CheckIsAssignableFrom(Type type, Type derivedType)
	{
	}

	[Token(Token = "0x6000177")]
	private static void CheckCanBeInstantiated<T>(ITypeConstructor<T> constructor)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4B71F30", Offset = "0x4B71F30", VA = "0x4B71F30")]
	private static void CheckCanBeInstantiated(ITypeConstructor constructor, Type type)
	{
	}
}
