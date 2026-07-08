using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000175")]
public static class TypeUtility
{
	[Token(Token = "0x2000179")]
	[CompilerGenerated]
	private sealed class _003CGetTypesSafely_003Ed__35 : IEnumerable<Type>, IEnumerable, IEnumerator<Type>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400089F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40008A0")]
		[FieldOffset(Offset = "0x18")]
		private Type _003C_003E2__current;

		[Token(Token = "0x40008A1")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40008A2")]
		[FieldOffset(Offset = "0x28")]
		private Assembly assembly;

		[Token(Token = "0x40008A3")]
		[FieldOffset(Offset = "0x30")]
		public Assembly _003C_003E3__assembly;

		[Token(Token = "0x40008A4")]
		[FieldOffset(Offset = "0x38")]
		private Type[] _003C_003E7__wrap1;

		[Token(Token = "0x40008A5")]
		[FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x1700019E")]
		private Type System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EType_003E_002ECurrent
		{
			[Token(Token = "0x6000F2C")]
			[Address(RVA = "0x4A30E40", Offset = "0x4A30E40", VA = "0x4A30E40", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700019F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F2E")]
			[Address(RVA = "0x4A30E90", Offset = "0x4A30E90", VA = "0x4A30E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x4A2FC50", Offset = "0x4A2FC50", VA = "0x4A2FC50")]
		[DebuggerHidden]
		public _003CGetTypesSafely_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x4A30910", Offset = "0x4A30910", VA = "0x4A30910", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x4A30920", Offset = "0x4A30920", VA = "0x4A30920", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F2D")]
		[Address(RVA = "0x4A30E50", Offset = "0x4A30E50", VA = "0x4A30E50", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000F2F")]
		[Address(RVA = "0x4A30EA0", Offset = "0x4A30EA0", VA = "0x4A30EA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Type> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EType_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F30")]
		[Address(RVA = "0x4A30F40", Offset = "0x4A30F40", VA = "0x4A30F40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200017A")]
	[CompilerGenerated]
	private sealed class _003CHierarchy_003Ed__19 : IEnumerable<Type>, IEnumerable, IEnumerator<Type>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40008A6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40008A7")]
		[FieldOffset(Offset = "0x18")]
		private Type _003C_003E2__current;

		[Token(Token = "0x40008A8")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40008A9")]
		[FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x40008AA")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x40008AB")]
		[FieldOffset(Offset = "0x38")]
		private Type _003CbaseType_003E5__2;

		[Token(Token = "0x40008AC")]
		[FieldOffset(Offset = "0x40")]
		private IEnumerator<Type> _003C_003E7__wrap2;

		[Token(Token = "0x170001A0")]
		private Type System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EType_003E_002ECurrent
		{
			[Token(Token = "0x6000F35")]
			[Address(RVA = "0x4A315E0", Offset = "0x4A315E0", VA = "0x4A315E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F37")]
			[Address(RVA = "0x4A31630", Offset = "0x4A31630", VA = "0x4A31630", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F31")]
		[Address(RVA = "0x4A2D410", Offset = "0x4A2D410", VA = "0x4A2D410")]
		[DebuggerHidden]
		public _003CHierarchy_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F32")]
		[Address(RVA = "0x4A30F50", Offset = "0x4A30F50", VA = "0x4A30F50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F33")]
		[Address(RVA = "0x4A31000", Offset = "0x4A31000", VA = "0x4A31000", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F34")]
		[Address(RVA = "0x4A31540", Offset = "0x4A31540", VA = "0x4A31540")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x4A315F0", Offset = "0x4A315F0", VA = "0x4A315F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x4A31640", Offset = "0x4A31640", VA = "0x4A31640", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Type> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EType_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x4A316E0", Offset = "0x4A316E0", VA = "0x4A316E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<Type> _numericTypes;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HashSet<Type> _numericConstructTypes;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<Type> typesWithShortStrings;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Type, object> defaultPrimitives;

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x4A2C050", Offset = "0x4A2C050", VA = "0x4A2C050")]
	public static bool IsBasic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x4A2C220", Offset = "0x4A2C220", VA = "0x4A2C220")]
	public static bool IsNumeric(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x4A2C300", Offset = "0x4A2C300", VA = "0x4A2C300")]
	public static bool IsNumericConstruct(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x4A2C3E0", Offset = "0x4A2C3E0", VA = "0x4A2C3E0")]
	public static Namespace Namespace(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x4A2C450", Offset = "0x4A2C450", VA = "0x4A2C450")]
	public static Func<object> Instantiator(this Type type, bool nonPublic = true)
	{
		return null;
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4A2C590", Offset = "0x4A2C590", VA = "0x4A2C590")]
	public static Func<object[], object> Instantiator(this Type type, bool nonPublic = true, params Type[] parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4A2C7F0", Offset = "0x4A2C7F0", VA = "0x4A2C7F0")]
	public static object TryInstantiate(this Type type, bool nonPublic = true, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4A2CA00", Offset = "0x4A2CA00", VA = "0x4A2CA00")]
	public static object Instantiate(this Type type, bool nonPublic = true, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x4A2CC90", Offset = "0x4A2CC90", VA = "0x4A2CC90")]
	public static object Default(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4A2CDF0", Offset = "0x4A2CDF0", VA = "0x4A2CDF0")]
	public static object PseudoDefault(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x4A298B0", Offset = "0x4A298B0", VA = "0x4A298B0")]
	public static bool IsStatic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x4A29870", Offset = "0x4A29870", VA = "0x4A29870")]
	public static bool IsAbstract(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x4A2D060", Offset = "0x4A2D060", VA = "0x4A2D060")]
	public static bool IsConcrete(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x4A2D0C0", Offset = "0x4A2D0C0", VA = "0x4A2D0C0")]
	public static IEnumerable<Type> GetInterfaces(this Type type, bool includeInherited)
	{
		return null;
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x4A2D1C0", Offset = "0x4A2D1C0", VA = "0x4A2D1C0")]
	public static IEnumerable<Type> BaseTypeAndInterfaces(this Type type, bool inheritedInterfaces = true)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x4A2D390", Offset = "0x4A2D390", VA = "0x4A2D390")]
	[IteratorStateMachine(typeof(_003CHierarchy_003Ed__19))]
	public static IEnumerable<Type> Hierarchy(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x4A2D440", Offset = "0x4A2D440", VA = "0x4A2D440")]
	public static IEnumerable<Type> AndBaseTypeAndInterfaces(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x4A2D4E0", Offset = "0x4A2D4E0", VA = "0x4A2D4E0")]
	public static IEnumerable<Type> AndInterfaces(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4A2D560", Offset = "0x4A2D560", VA = "0x4A2D560")]
	public static IEnumerable<Type> AndHierarchy(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4A2D660", Offset = "0x4A2D660", VA = "0x4A2D660")]
	public static Type GetListElementType(Type listType, bool allowNonGeneric)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x4A2D9B0", Offset = "0x4A2D9B0", VA = "0x4A2D9B0")]
	public static Type GetEnumerableElementType(Type enumerableType, bool allowNonGeneric)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4A2DCF0", Offset = "0x4A2DCF0", VA = "0x4A2DCF0")]
	public static Type GetDictionaryItemType(Type dictionaryType, bool allowNonGeneric, int genericArgumentIndex)
	{
		return null;
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4A2E040", Offset = "0x4A2E040", VA = "0x4A2E040")]
	public static Type GetDictionaryKeyType(Type dictionaryType, bool allowNonGeneric)
	{
		return null;
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4A2E090", Offset = "0x4A2E090", VA = "0x4A2E090")]
	public static Type GetDictionaryValueType(Type dictionaryType, bool allowNonGeneric)
	{
		return null;
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x4A2E0F0", Offset = "0x4A2E0F0", VA = "0x4A2E0F0")]
	public static bool IsNullable(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x4A2CDD0", Offset = "0x4A2CDD0", VA = "0x4A2CDD0")]
	public static bool IsReferenceType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x4A2E1A0", Offset = "0x4A2E1A0", VA = "0x4A2E1A0")]
	public static bool IsStruct(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x4A2E200", Offset = "0x4A2E200", VA = "0x4A2E200")]
	public static bool IsAssignableFrom(this Type type, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4A2E280", Offset = "0x4A2E280", VA = "0x4A2E280")]
	public static bool CanMakeGenericTypeVia(this Type openConstructedType, Type closedConstructedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x4A2EBF0", Offset = "0x4A2EBF0", VA = "0x4A2EBF0")]
	public static Type MakeGenericTypeVia(this Type openConstructedType, Type closedConstructedType, Dictionary<Type, Type> resolvedGenericParameters, bool safe = true)
	{
		return null;
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x4A2F800", Offset = "0x4A2F800", VA = "0x4A2F800")]
	public static string ToShortString(this object o, int maxLength = 20)
	{
		return null;
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x4A235E0", Offset = "0x4A235E0", VA = "0x4A235E0")]
	[IteratorStateMachine(typeof(_003CGetTypesSafely_003Ed__35))]
	public static IEnumerable<Type> GetTypesSafely(this Assembly assembly)
	{
		return null;
	}
}
