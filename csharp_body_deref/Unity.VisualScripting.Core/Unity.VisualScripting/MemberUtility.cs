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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetInheritedExtensionMethods_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x2DDCCA0", Offset = "0x2DDB2A0", VA = "0x182DDCCA0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x2DDD140", Offset = "0x2DDB740", VA = "0x182DDD140", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x2DDD0A0", Offset = "0x2DDB6A0", VA = "0x182DDD0A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x2DDD0A0", Offset = "0x2DDB6A0", VA = "0x182DDD0A0", Slot = "5")]
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
	[Address(RVA = "0x2DDBBB0", Offset = "0x2DDA1B0", VA = "0x182DDBBB0")]
	static MemberUtility()
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2DDA4A0", Offset = "0x2DD8AA0", VA = "0x182DDA4A0")]
	public static bool IsOperator(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x2DDA9F0", Offset = "0x2DD8FF0", VA = "0x182DDA9F0")]
	public static bool IsUserDefinedConversion(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x2DDAAA0", Offset = "0x2DD90A0", VA = "0x182DDAAA0")]
	public static MethodInfo MakeGenericMethodVia(this MethodInfo openConstructedMethod, params Type[] closedConstructedParameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x2DDA350", Offset = "0x2DD8950", VA = "0x182DDA350")]
	public static bool IsGenericExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x2DD9980", Offset = "0x2DD7F80", VA = "0x182DD9980")]
	[IteratorStateMachine(typeof(_003CGetInheritedExtensionMethods_003Ed__8))]
	private static IEnumerable<MethodInfo> GetInheritedExtensionMethods(Type thisArgumentType)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x2DD9470", Offset = "0x2DD7A70", VA = "0x182DD9470")]
	public static IEnumerable<MethodInfo> GetExtensionMethods(this Type thisArgumentType, bool inherited = true)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x2DDA2F0", Offset = "0x2DD88F0", VA = "0x182DDA2F0")]
	public static bool IsExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x2DDA210", Offset = "0x2DD8810", VA = "0x182DDA210")]
	public static bool IsExtensionMethod(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x1A6E4C0", Offset = "0x1A6CAC0", VA = "0x181A6E4C0")]
	public static Delegate CreateDelegate(this MethodInfo methodInfo, Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x2DDA150", Offset = "0x2DD8750", VA = "0x182DDA150")]
	public static bool IsAccessor(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x2DD8D30", Offset = "0x2DD7330", VA = "0x182DD8D30")]
	public static Type GetAccessorType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x2DDA560", Offset = "0x2DD8B60", VA = "0x182DDA560")]
	public static bool IsPubliclyGettable(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x2DD8970", Offset = "0x2DD6F70", VA = "0x182DD8970")]
	private static Type ExtendedDeclaringType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x2DD8AB0", Offset = "0x2DD70B0", VA = "0x182DD8AB0")]
	public static Type ExtendedDeclaringType(this MemberInfo memberInfo, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x20FB640", Offset = "0x20F9C40", VA = "0x1820FB640")]
	public static bool IsStatic(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x2DDA7B0", Offset = "0x2DD8DB0", VA = "0x182DDA7B0")]
	public static bool IsStatic(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x2DD9D50", Offset = "0x2DD8350", VA = "0x182DD9D50")]
	private static IEnumerable<ParameterInfo> GetParametersWithoutThis(this MethodBase methodBase)
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x2DDA3F0", Offset = "0x2DD89F0", VA = "0x182DDA3F0")]
	public static bool IsInvokedAsExtension(this MethodBase methodBase, Type targetType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x2DD9AF0", Offset = "0x2DD80F0", VA = "0x182DD9AF0")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x2DD9A00", Offset = "0x2DD8000", VA = "0x182DD9A00")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x2DDBB30", Offset = "0x2DDA130", VA = "0x182DDBB30")]
	public static Type UnderlyingParameterType(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x2DDA060", Offset = "0x2DD8660", VA = "0x182DDA060")]
	public static bool HasDefaultValue(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x2DD7F40", Offset = "0x2DD6540", VA = "0x182DD7F40")]
	public static object DefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x2DDB0F0", Offset = "0x2DD96F0", VA = "0x182DDB0F0")]
	public static object PseudoDefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x2DD7E00", Offset = "0x2DD6400", VA = "0x182DD7E00")]
	public static bool AllowsNull(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2DDA090", Offset = "0x2DD8690", VA = "0x182DDA090")]
	public static bool HasOutModifier(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x2DD7F00", Offset = "0x2DD6500", VA = "0x182DD7F00")]
	public static bool CanWrite(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x2DDB9D0", Offset = "0x2DD9FD0", VA = "0x182DDB9D0")]
	public static Member ToManipulator(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x2DDB610", Offset = "0x2DD9C10", VA = "0x182DDB610")]
	public static Member ToManipulator(this MemberInfo memberInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x2DDBAC0", Offset = "0x2DDA0C0", VA = "0x182DDBAC0")]
	public static Member ToManipulator(this FieldInfo fieldInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x2DDB960", Offset = "0x2DD9F60", VA = "0x182DDB960")]
	public static Member ToManipulator(this PropertyInfo propertyInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2DDBA50", Offset = "0x2DDA050", VA = "0x182DDBA50")]
	public static Member ToManipulator(this MethodInfo methodInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2DDB8F0", Offset = "0x2DD9EF0", VA = "0x182DDB8F0")]
	public static Member ToManipulator(this ConstructorInfo constructorInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x2DD8E50", Offset = "0x2DD7450", VA = "0x182DD8E50")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, Type[] paramTypes, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2DD8F40", Offset = "0x2DD7540", VA = "0x182DD8F40")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x2DD9F50", Offset = "0x2DD8550", VA = "0x182DD9F50")]
	public static ConstructorInfo GetPublicConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2DD8FA0", Offset = "0x2DD75A0", VA = "0x182DD8FA0")]
	public static ConstructorInfo GetDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2DD9FB0", Offset = "0x2DD85B0", VA = "0x182DD9FB0")]
	public static ConstructorInfo GetPublicDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x2DD9050", Offset = "0x2DD7650", VA = "0x182DD9050")]
	public static MemberInfo[] GetExtendedMember(this Type type, string name, MemberTypes types, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x2DD9210", Offset = "0x2DD7810", VA = "0x182DD9210")]
	public static MemberInfo[] GetExtendedMembers(this Type type, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x2DDAED0", Offset = "0x2DD94D0", VA = "0x182DDAED0")]
	private static bool NameMatches(this MemberInfo member, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x2DDAF10", Offset = "0x2DD9510", VA = "0x182DDAF10")]
	private static bool ParametersMatch(this MethodBase methodBase, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x2DD8C40", Offset = "0x2DD7240", VA = "0x182DD8C40")]
	private static bool GenericArgumentsMatch(this MethodInfo method, IEnumerable<Type> genericArgumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x2DDB320", Offset = "0x2DD9920", VA = "0x182DDB320")]
	public static bool SignatureMatches(this FieldInfo field, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x2DDB2A0", Offset = "0x2DD98A0", VA = "0x182DDB2A0")]
	public static bool SignatureMatches(this PropertyInfo property, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x2DDB480", Offset = "0x2DD9A80", VA = "0x182DDB480")]
	public static bool SignatureMatches(this ConstructorInfo constructor, string name, IEnumerable<Type> parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x2DDB540", Offset = "0x2DD9B40", VA = "0x182DDB540")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x2DDB3A0", Offset = "0x2DD99A0", VA = "0x182DDB3A0")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x2DD9810", Offset = "0x2DD7E10", VA = "0x182DD9810")]
	public static FieldInfo GetFieldUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x2DD9DF0", Offset = "0x2DD83F0", VA = "0x182DD9DF0")]
	public static PropertyInfo GetPropertyUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x2DD9BF0", Offset = "0x2DD81F0", VA = "0x182DD9BF0")]
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
	[Address(RVA = "0x2DD80F0", Offset = "0x2DD66F0", VA = "0x182DD80F0")]
	public static FieldInfo Disambiguate(this IEnumerable<FieldInfo> fields, Type type)
	{
		return null;
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x2DD8460", Offset = "0x2DD6A60", VA = "0x182DD8460")]
	public static PropertyInfo Disambiguate(this IEnumerable<PropertyInfo> properties, Type type)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x2DD8570", Offset = "0x2DD6B70", VA = "0x182DD8570")]
	public static ConstructorInfo Disambiguate(this IEnumerable<ConstructorInfo> constructors, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x2DD8760", Offset = "0x2DD6D60", VA = "0x182DD8760")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x2DD8200", Offset = "0x2DD6800", VA = "0x182DD8200")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes)
	{
		return null;
	}
}
