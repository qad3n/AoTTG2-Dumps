// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MemberUtility
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

[Token(Token = "0x20000F3")]
public static class MemberUtility
{
	[Token(Token = "0x20000FC")]
	[CompilerGenerated]
	private sealed class _003CGetInheritedExtensionMethods_003Ed__8 : IEnumerable<MethodInfo>, IEnumerable, IEnumerator<MethodInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x18")]
		private MethodInfo _003C_003E2__current;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x28")]
		private Type thisArgumentType;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__thisArgumentType;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x38")]
		private MethodInfo[] _003C_003E7__wrap1;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x1700015E")]
		private MethodInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMethodInfo_003E_002ECurrent
		{
			[Token(Token = "0x600069F")]
			[Address(RVA = "0x4CCFBE0", Offset = "0x4CCFBE0", VA = "0x4CCFBE0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006A1")]
			[Address(RVA = "0x4CCFC30", Offset = "0x4CCFC30", VA = "0x4CCFC30", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x4CCB4E0", Offset = "0x4CCB4E0", VA = "0x4CCB4E0")]
		[DebuggerHidden]
		public _003CGetInheritedExtensionMethods_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x4CCF7B0", Offset = "0x4CCF7B0", VA = "0x4CCF7B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600069E")]
		[Address(RVA = "0x4CCF7C0", Offset = "0x4CCF7C0", VA = "0x4CCF7C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x4CCFBF0", Offset = "0x4CCFBF0", VA = "0x4CCFBF0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x4CCFC40", Offset = "0x4CCFC40", VA = "0x4CCFC40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x4CCFCE0", Offset = "0x4CCFCE0", VA = "0x4CCFCE0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<ExtensionMethodCache> ExtensionMethodsCache;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Lazy<Dictionary<Type, MethodInfo[]>> InheritedExtensionMethodsCache;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Lazy<HashSet<MethodInfo>> GenericExtensionMethods;

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4CCAC90", Offset = "0x4CCAC90", VA = "0x4CCAC90")]
	static MemberUtility()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4CCA330", Offset = "0x4CCA330", VA = "0x4CCA330")]
	public static bool IsOperator(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4CCA3E0", Offset = "0x4CCA3E0", VA = "0x4CCA3E0")]
	public static bool IsUserDefinedConversion(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x4CCAF00", Offset = "0x4CCAF00", VA = "0x4CCAF00")]
	public static MethodInfo MakeGenericMethodVia(this MethodInfo openConstructedMethod, params Type[] closedConstructedParameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x4CCB390", Offset = "0x4CCB390", VA = "0x4CCB390")]
	public static bool IsGenericExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4CCB460", Offset = "0x4CCB460", VA = "0x4CCB460")]
	[IteratorStateMachine(typeof(_003CGetInheritedExtensionMethods_003Ed__8))]
	private static IEnumerable<MethodInfo> GetInheritedExtensionMethods(Type thisArgumentType)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4CCB510", Offset = "0x4CCB510", VA = "0x4CCB510")]
	public static IEnumerable<MethodInfo> GetExtensionMethods(this Type thisArgumentType, bool inherited = true)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4CCB960", Offset = "0x4CCB960", VA = "0x4CCB960")]
	public static bool IsExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4CCA240", Offset = "0x4CCA240", VA = "0x4CCA240")]
	public static bool IsExtensionMethod(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x4CCB9C0", Offset = "0x4CCB9C0", VA = "0x4CCB9C0")]
	public static Delegate CreateDelegate(this MethodInfo methodInfo, Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x4CCB9D0", Offset = "0x4CCB9D0", VA = "0x4CCB9D0")]
	public static bool IsAccessor(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4CCBA60", Offset = "0x4CCBA60", VA = "0x4CCBA60")]
	public static Type GetAccessorType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4CCBB10", Offset = "0x4CCBB10", VA = "0x4CCBB10")]
	public static bool IsPubliclyGettable(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4CCBC80", Offset = "0x4CCBC80", VA = "0x4CCBC80")]
	private static Type ExtendedDeclaringType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4CCBDF0", Offset = "0x4CCBDF0", VA = "0x4CCBDF0")]
	public static Type ExtendedDeclaringType(this MemberInfo memberInfo, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4CCBE70", Offset = "0x4CCBE70", VA = "0x4CCBE70")]
	public static bool IsStatic(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4CCBEE0", Offset = "0x4CCBEE0", VA = "0x4CCBEE0")]
	public static bool IsStatic(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4CCC0B0", Offset = "0x4CCC0B0", VA = "0x4CCC0B0")]
	private static IEnumerable<ParameterInfo> GetParametersWithoutThis(this MethodBase methodBase)
	{
		return null;
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x4CCC140", Offset = "0x4CCC140", VA = "0x4CCC140")]
	public static bool IsInvokedAsExtension(this MethodBase methodBase, Type targetType)
	{
		return default(bool);
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4CCC220", Offset = "0x4CCC220", VA = "0x4CCC220")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4CCC2A0", Offset = "0x4CCC2A0", VA = "0x4CCC2A0")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4CCC360", Offset = "0x4CCC360", VA = "0x4CCC360")]
	public static Type UnderlyingParameterType(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4CCC3E0", Offset = "0x4CCC3E0", VA = "0x4CCC3E0")]
	public static bool HasDefaultValue(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4CCC410", Offset = "0x4CCC410", VA = "0x4CCC410")]
	public static object DefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4CCC5A0", Offset = "0x4CCC5A0", VA = "0x4CCC5A0")]
	public static object PseudoDefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4CCC730", Offset = "0x4CCC730", VA = "0x4CCC730")]
	public static bool AllowsNull(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4CCC830", Offset = "0x4CCC830", VA = "0x4CCC830")]
	public static bool HasOutModifier(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4CCC8F0", Offset = "0x4CCC8F0", VA = "0x4CCC8F0")]
	public static bool CanWrite(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4CCC930", Offset = "0x4CCC930", VA = "0x4CCC930")]
	public static Member ToManipulator(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4CCC9A0", Offset = "0x4CCC9A0", VA = "0x4CCC9A0")]
	public static Member ToManipulator(this MemberInfo memberInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4CCCC60", Offset = "0x4CCCC60", VA = "0x4CCCC60")]
	public static Member ToManipulator(this FieldInfo fieldInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4CCCCC0", Offset = "0x4CCCCC0", VA = "0x4CCCCC0")]
	public static Member ToManipulator(this PropertyInfo propertyInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4CCCD20", Offset = "0x4CCCD20", VA = "0x4CCCD20")]
	public static Member ToManipulator(this MethodInfo methodInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4CCCD80", Offset = "0x4CCCD80", VA = "0x4CCCD80")]
	public static Member ToManipulator(this ConstructorInfo constructorInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4CCCDE0", Offset = "0x4CCCDE0", VA = "0x4CCCDE0")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, Type[] paramTypes, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4CCCEF0", Offset = "0x4CCCEF0", VA = "0x4CCCEF0")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4CCCF50", Offset = "0x4CCCF50", VA = "0x4CCCF50")]
	public static ConstructorInfo GetPublicConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4CCCFB0", Offset = "0x4CCCFB0", VA = "0x4CCCFB0")]
	public static ConstructorInfo GetDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4CCD120", Offset = "0x4CCD120", VA = "0x4CCD120")]
	public static ConstructorInfo GetPublicDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4CCD280", Offset = "0x4CCD280", VA = "0x4CCD280")]
	public static MemberInfo[] GetExtendedMember(this Type type, string name, MemberTypes types, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4CCD470", Offset = "0x4CCD470", VA = "0x4CCD470")]
	public static MemberInfo[] GetExtendedMembers(this Type type, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4CCD850", Offset = "0x4CCD850", VA = "0x4CCD850")]
	private static bool NameMatches(this MemberInfo member, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4CCD880", Offset = "0x4CCD880", VA = "0x4CCD880")]
	private static bool ParametersMatch(this MethodBase methodBase, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4CCDAB0", Offset = "0x4CCDAB0", VA = "0x4CCDAB0")]
	private static bool GenericArgumentsMatch(this MethodInfo method, IEnumerable<Type> genericArgumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4CCDBA0", Offset = "0x4CCDBA0", VA = "0x4CCDBA0")]
	public static bool SignatureMatches(this FieldInfo field, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4CCDC30", Offset = "0x4CCDC30", VA = "0x4CCDC30")]
	public static bool SignatureMatches(this PropertyInfo property, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4CCDCC0", Offset = "0x4CCDCC0", VA = "0x4CCDCC0")]
	public static bool SignatureMatches(this ConstructorInfo constructor, string name, IEnumerable<Type> parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4CCDD90", Offset = "0x4CCDD90", VA = "0x4CCDD90")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x4CCDE90", Offset = "0x4CCDE90", VA = "0x4CCDE90")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4CCDFA0", Offset = "0x4CCDFA0", VA = "0x4CCDFA0")]
	public static FieldInfo GetFieldUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4CCE110", Offset = "0x4CCE110", VA = "0x4CCE110")]
	public static PropertyInfo GetPropertyUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4CCE270", Offset = "0x4CCE270", VA = "0x4CCE270")]
	public static MethodInfo GetMethodUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000680")]
	private static TMemberInfo DisambiguateHierarchy<TMemberInfo>(this IEnumerable<TMemberInfo> members, Type type) where TMemberInfo : MemberInfo
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4CCE3D0", Offset = "0x4CCE3D0", VA = "0x4CCE3D0")]
	public static FieldInfo Disambiguate(this IEnumerable<FieldInfo> fields, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4CCE4F0", Offset = "0x4CCE4F0", VA = "0x4CCE4F0")]
	public static PropertyInfo Disambiguate(this IEnumerable<PropertyInfo> properties, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4CCE610", Offset = "0x4CCE610", VA = "0x4CCE610")]
	public static ConstructorInfo Disambiguate(this IEnumerable<ConstructorInfo> constructors, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4CCE840", Offset = "0x4CCE840", VA = "0x4CCE840")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4CCEA90", Offset = "0x4CCEA90", VA = "0x4CCEA90")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes)
	{
		return null;
	}
}
