// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.TypeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Reflection;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Pool;
using UnityEngine.Scripting;

namespace Unity.Properties;

[Token(Token = "0x2000067")]
public static class TypeUtility
{
	[Token(Token = "0x2000068")]
	private interface ITypeConstructor
	{
		[Token(Token = "0x17000040")]
		bool CanBeInstantiated
		{
			[Token(Token = "0x6000195")]
			get;
		}

		[Token(Token = "0x6000196")]
		object Instantiate();
	}

	[Token(Token = "0x2000069")]
	private interface ITypeConstructor<T> : ITypeConstructor
	{
		[Token(Token = "0x6000197")]
		new T Instantiate();

		[Token(Token = "0x6000198")]
		void SetExplicitConstructor(Func<T> constructor);
	}

	[Token(Token = "0x200006A")]
	private class TypeConstructor<T> : ITypeConstructor<T>, ITypeConstructor
	{
		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		private Func<T> m_ExplicitConstructor;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		private Func<T> m_ImplicitConstructor;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		private IConstructor<T> m_OverrideConstructor;

		[Token(Token = "0x17000041")]
		private bool Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002ECanBeInstantiated
		{
			[Token(Token = "0x6000199")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600019A")]
		public TypeConstructor()
		{
		}

		[Token(Token = "0x600019B")]
		private void SetImplicitConstructor()
		{
		}

		[Token(Token = "0x600019C")]
		private static T CreateValueTypeInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x600019D")]
		private static T CreateScriptableObjectInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x600019E")]
		private static T CreateClassInstance()
		{
			return (T)null;
		}

		[Token(Token = "0x600019F")]
		public void SetExplicitConstructor(Func<T> constructor)
		{
		}

		[Token(Token = "0x60001A0")]
		private T Unity_002EProperties_002ETypeUtility_002EITypeConstructor_003CT_003E_002EInstantiate()
		{
			return (T)null;
		}

		[Token(Token = "0x60001A1")]
		private object Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002EInstantiate()
		{
			return null;
		}
	}

	[Token(Token = "0x200006B")]
	private class NonConstructable : ITypeConstructor
	{
		[Token(Token = "0x17000042")]
		private bool Unity_002EProperties_002ETypeUtility_002EITypeConstructor_002ECanBeInstantiated
		{
			[Token(Token = "0x60001A2")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x2FEB5E0", Offset = "0x2FE9BE0", VA = "0x182FEB5E0", Slot = "5")]
		public object Instantiate()
		{
			return null;
		}

		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public NonConstructable()
		{
		}
	}

	[Token(Token = "0x200006C")]
	private struct Cache<T>
	{
		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x0")]
		public static ITypeConstructor<T> TypeConstructor;
	}

	[Token(Token = "0x200006D")]
	private class TypeConstructorVisitor : ITypeVisitor
	{
		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x10")]
		public ITypeConstructor TypeConstructor;

		[Token(Token = "0x60001A5")]
		public void Visit<TContainer>()
		{
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TypeConstructorVisitor()
		{
		}
	}

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, ITypeConstructor> s_TypeConstructors;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo s_CreateTypeConstructor;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ConcurrentDictionary<Type, string> s_CachedResolvedName;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ObjectPool<StringBuilder> s_Builders;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x20")]
	private static readonly object syncedPoolObject;

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x2FF4520", Offset = "0x2FF2B20", VA = "0x182FF4520")]
	static TypeUtility()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2FF3AD0", Offset = "0x2FF20D0", VA = "0x182FF3AD0")]
	public static string GetTypeDisplayName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2FF3C00", Offset = "0x2FF2200", VA = "0x182FF3C00")]
	private static string GetTypeDisplayName(Type type, IReadOnlyList<Type> args, ref int argIndex)
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2FF3920", Offset = "0x2FF1F20", VA = "0x182FF3920")]
	public static Type GetRootType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2FF3650", Offset = "0x2FF1C50", VA = "0x182FF3650")]
	[Preserve]
	private static ITypeConstructor CreateTypeConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	private static ITypeConstructor<T> CreateTypeConstructor<T>()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2FF3A10", Offset = "0x2FF2010", VA = "0x182FF3A10")]
	private static ITypeConstructor GetTypeConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	private static ITypeConstructor<T> GetTypeConstructor<T>()
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2FF32E0", Offset = "0x2FF18E0", VA = "0x182FF32E0")]
	public static bool CanBeInstantiated(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000189")]
	public static bool CanBeInstantiated<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600018A")]
	public static void SetExplicitInstantiationMethod<T>(Func<T> constructor)
	{
	}

	[Token(Token = "0x600018B")]
	public static T Instantiate<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x600018C")]
	public static bool TryInstantiate<T>(out T instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600018D")]
	public static T Instantiate<T>(Type derivedType)
	{
		return (T)null;
	}

	[Token(Token = "0x600018E")]
	public static bool TryInstantiate<T>(Type derivedType, out T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600018F")]
	public static TArray InstantiateArray<TArray>(int count = 0)
	{
		return (TArray)null;
	}

	[Token(Token = "0x6000190")]
	public static bool TryInstantiateArray<TArray>(int count, out TArray instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000191")]
	public static TArray InstantiateArray<TArray>(Type derivedType, int count = 0)
	{
		return (TArray)null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2FF34D0", Offset = "0x2FF1AD0", VA = "0x182FF34D0")]
	private static void CheckIsAssignableFrom(Type type, Type derivedType)
	{
	}

	[Token(Token = "0x6000193")]
	private static void CheckCanBeInstantiated<T>(ITypeConstructor<T> constructor)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2FF33F0", Offset = "0x2FF19F0", VA = "0x182FF33F0")]
	private static void CheckCanBeInstantiated(ITypeConstructor constructor, Type type)
	{
	}
}
