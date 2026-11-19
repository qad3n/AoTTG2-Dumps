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
		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x18")]
		private MethodInfo _003C_003E2__current;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x28")]
		private Type thisArgumentType;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__thisArgumentType;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x38")]
		private MethodInfo[] _003C_003E7__wrap1;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x17000161")]
		private MethodInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMethodInfo_003E_002ECurrent
		{
			[Token(Token = "0x60006A9")]
			[Address(RVA = "0x67BE320", Offset = "0x67BD320", VA = "0x67BE320", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000162")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006AB")]
			[Address(RVA = "0x67BE370", Offset = "0x67BD370", VA = "0x67BE370", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x67B9D10", Offset = "0x67B8D10", VA = "0x67B9D10")]
		[DebuggerHidden]
		public _003CGetInheritedExtensionMethods_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x67BDF20", Offset = "0x67BCF20", VA = "0x67BDF20", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x67BDF30", Offset = "0x67BCF30", VA = "0x67BDF30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x67BE330", Offset = "0x67BD330", VA = "0x67BE330", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x67BE380", Offset = "0x67BD380", VA = "0x67BE380", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x67BE410", Offset = "0x67BD410", VA = "0x67BE410", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<ExtensionMethodCache> ExtensionMethodsCache;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Lazy<Dictionary<Type, MethodInfo[]>> InheritedExtensionMethodsCache;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Lazy<HashSet<MethodInfo>> GenericExtensionMethods;

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x67B94E0", Offset = "0x67B84E0", VA = "0x67B94E0")]
	static MemberUtility()
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x67B8B90", Offset = "0x67B7B90", VA = "0x67B8B90")]
	public static bool IsOperator(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x67B8C40", Offset = "0x67B7C40", VA = "0x67B8C40")]
	public static bool IsUserDefinedConversion(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x67B9750", Offset = "0x67B8750", VA = "0x67B9750")]
	public static MethodInfo MakeGenericMethodVia(this MethodInfo openConstructedMethod, params Type[] closedConstructedParameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x67B9BD0", Offset = "0x67B8BD0", VA = "0x67B9BD0")]
	public static bool IsGenericExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x67B9CA0", Offset = "0x67B8CA0", VA = "0x67B9CA0")]
	[IteratorStateMachine(typeof(_003CGetInheritedExtensionMethods_003Ed__8))]
	private static IEnumerable<MethodInfo> GetInheritedExtensionMethods(Type thisArgumentType)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x67B9D40", Offset = "0x67B8D40", VA = "0x67B9D40")]
	public static IEnumerable<MethodInfo> GetExtensionMethods(this Type thisArgumentType, bool inherited = true)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x67BA120", Offset = "0x67B9120", VA = "0x67BA120")]
	public static bool IsExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x67B8A90", Offset = "0x67B7A90", VA = "0x67B8A90")]
	public static bool IsExtensionMethod(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x67BA180", Offset = "0x67B9180", VA = "0x67BA180")]
	public static Delegate CreateDelegate(this MethodInfo methodInfo, Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x67BA190", Offset = "0x67B9190", VA = "0x67BA190")]
	public static bool IsAccessor(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x67BA220", Offset = "0x67B9220", VA = "0x67BA220")]
	public static Type GetAccessorType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x67BA2D0", Offset = "0x67B92D0", VA = "0x67BA2D0")]
	public static bool IsPubliclyGettable(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x67BA440", Offset = "0x67B9440", VA = "0x67BA440")]
	private static Type ExtendedDeclaringType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x67BA5B0", Offset = "0x67B95B0", VA = "0x67BA5B0")]
	public static Type ExtendedDeclaringType(this MemberInfo memberInfo, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x67BA630", Offset = "0x67B9630", VA = "0x67BA630")]
	public static bool IsStatic(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x67BA6A0", Offset = "0x67B96A0", VA = "0x67BA6A0")]
	public static bool IsStatic(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x67BA880", Offset = "0x67B9880", VA = "0x67BA880")]
	private static IEnumerable<ParameterInfo> GetParametersWithoutThis(this MethodBase methodBase)
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x67BA910", Offset = "0x67B9910", VA = "0x67BA910")]
	public static bool IsInvokedAsExtension(this MethodBase methodBase, Type targetType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x67BA9F0", Offset = "0x67B99F0", VA = "0x67BA9F0")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x67BAA70", Offset = "0x67B9A70", VA = "0x67BAA70")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x67BAB30", Offset = "0x67B9B30", VA = "0x67BAB30")]
	public static Type UnderlyingParameterType(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x67BABB0", Offset = "0x67B9BB0", VA = "0x67BABB0")]
	public static bool HasDefaultValue(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x67BABE0", Offset = "0x67B9BE0", VA = "0x67BABE0")]
	public static object DefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x67BAD70", Offset = "0x67B9D70", VA = "0x67BAD70")]
	public static object PseudoDefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x67BAF00", Offset = "0x67B9F00", VA = "0x67BAF00")]
	public static bool AllowsNull(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x67BB000", Offset = "0x67BA000", VA = "0x67BB000")]
	public static bool HasOutModifier(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x67BB0C0", Offset = "0x67BA0C0", VA = "0x67BB0C0")]
	public static bool CanWrite(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x67BB100", Offset = "0x67BA100", VA = "0x67BB100")]
	public static Member ToManipulator(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x67BB170", Offset = "0x67BA170", VA = "0x67BB170")]
	public static Member ToManipulator(this MemberInfo memberInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x67BB430", Offset = "0x67BA430", VA = "0x67BB430")]
	public static Member ToManipulator(this FieldInfo fieldInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x67BB490", Offset = "0x67BA490", VA = "0x67BB490")]
	public static Member ToManipulator(this PropertyInfo propertyInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x67BB4F0", Offset = "0x67BA4F0", VA = "0x67BB4F0")]
	public static Member ToManipulator(this MethodInfo methodInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x67BB550", Offset = "0x67BA550", VA = "0x67BB550")]
	public static Member ToManipulator(this ConstructorInfo constructorInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x67BB5B0", Offset = "0x67BA5B0", VA = "0x67BB5B0")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, Type[] paramTypes, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x67BB6C0", Offset = "0x67BA6C0", VA = "0x67BB6C0")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x67BB720", Offset = "0x67BA720", VA = "0x67BB720")]
	public static ConstructorInfo GetPublicConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x67BB780", Offset = "0x67BA780", VA = "0x67BB780")]
	public static ConstructorInfo GetDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x67BB8F0", Offset = "0x67BA8F0", VA = "0x67BB8F0")]
	public static ConstructorInfo GetPublicDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x67BBA50", Offset = "0x67BAA50", VA = "0x67BBA50")]
	public static MemberInfo[] GetExtendedMember(this Type type, string name, MemberTypes types, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x67BBC40", Offset = "0x67BAC40", VA = "0x67BBC40")]
	public static MemberInfo[] GetExtendedMembers(this Type type, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x67BBFC0", Offset = "0x67BAFC0", VA = "0x67BBFC0")]
	private static bool NameMatches(this MemberInfo member, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x67BBFF0", Offset = "0x67BAFF0", VA = "0x67BBFF0")]
	private static bool ParametersMatch(this MethodBase methodBase, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x67BC220", Offset = "0x67BB220", VA = "0x67BC220")]
	private static bool GenericArgumentsMatch(this MethodInfo method, IEnumerable<Type> genericArgumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x67BC310", Offset = "0x67BB310", VA = "0x67BC310")]
	public static bool SignatureMatches(this FieldInfo field, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x67BC3A0", Offset = "0x67BB3A0", VA = "0x67BC3A0")]
	public static bool SignatureMatches(this PropertyInfo property, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x67BC430", Offset = "0x67BB430", VA = "0x67BC430")]
	public static bool SignatureMatches(this ConstructorInfo constructor, string name, IEnumerable<Type> parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x67BC500", Offset = "0x67BB500", VA = "0x67BC500")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x67BC600", Offset = "0x67BB600", VA = "0x67BC600")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x67BC710", Offset = "0x67BB710", VA = "0x67BC710")]
	public static FieldInfo GetFieldUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x67BC880", Offset = "0x67BB880", VA = "0x67BC880")]
	public static PropertyInfo GetPropertyUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x67BC9E0", Offset = "0x67BB9E0", VA = "0x67BC9E0")]
	public static MethodInfo GetMethodUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	private static TMemberInfo DisambiguateHierarchy<TMemberInfo>(this IEnumerable<TMemberInfo> members, Type type) where TMemberInfo : MemberInfo
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x67BCB40", Offset = "0x67BBB40", VA = "0x67BCB40")]
	public static FieldInfo Disambiguate(this IEnumerable<FieldInfo> fields, Type type)
	{
		return null;
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x67BCC60", Offset = "0x67BBC60", VA = "0x67BCC60")]
	public static PropertyInfo Disambiguate(this IEnumerable<PropertyInfo> properties, Type type)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x67BCD80", Offset = "0x67BBD80", VA = "0x67BCD80")]
	public static ConstructorInfo Disambiguate(this IEnumerable<ConstructorInfo> constructors, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x67BCFB0", Offset = "0x67BBFB0", VA = "0x67BCFB0")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x67BD200", Offset = "0x67BC200", VA = "0x67BD200")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes)
	{
		return null;
	}
}
