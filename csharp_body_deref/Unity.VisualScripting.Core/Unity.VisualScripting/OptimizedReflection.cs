// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.OptimizedReflection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000151")]
public static class OptimizedReflection
{
	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<FieldInfo, IOptimizedAccessor> fieldAccessors;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<PropertyInfo, IOptimizedAccessor> propertyAccessors;

	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<MethodInfo, IOptimizedInvoker> methodInvokers;

	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x18")]
	public static readonly bool jitAvailable;

	[Token(Token = "0x400082A")]
	[FieldOffset(Offset = "0x19")]
	private static bool _useJitIfAvailable;

	[Token(Token = "0x17000173")]
	internal static bool useJit
	{
		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x2E35320", Offset = "0x2E33920", VA = "0x182E35320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000174")]
	public static bool useJitIfAvailable
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x2E352D0", Offset = "0x2E338D0", VA = "0x182E352D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x2E35430", Offset = "0x2E33A30", VA = "0x182E35430")]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public static bool safeMode
	{
		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x2E35280", Offset = "0x2E33880", VA = "0x182E35280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x2E353D0", Offset = "0x2E339D0", VA = "0x182E353D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x2E350D0", Offset = "0x2E336D0", VA = "0x182E350D0")]
	static OptimizedReflection()
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x2E2F8B0", Offset = "0x2E2DEB0", VA = "0x182E2F8B0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x2E34780", Offset = "0x2E32D80", VA = "0x182E34780")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x2E34E60", Offset = "0x2E33460", VA = "0x182E34E60")]
	internal static void VerifyStaticTarget(Type targetType, object target)
	{
	}

	[Token(Token = "0x6000DDD")]
	internal static void VerifyInstanceTarget<TTArget>(object target)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x2E34EC0", Offset = "0x2E334C0", VA = "0x182E34EC0")]
	private static void VerifyTarget(Type targetType, object target, bool @static)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x2E349F0", Offset = "0x2E32FF0", VA = "0x182E349F0")]
	private static bool SupportsOptimization(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x2E34690", Offset = "0x2E32C90", VA = "0x182E34690")]
	public static IOptimizedAccessor Prewarm(this FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x2E33F40", Offset = "0x2E32540", VA = "0x182E33F40")]
	public static object GetValueOptimized(this FieldInfo fieldInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x2E348B0", Offset = "0x2E32EB0", VA = "0x182E348B0")]
	public static void SetValueOptimized(this FieldInfo fieldInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x2E34DA0", Offset = "0x2E333A0", VA = "0x182E34DA0")]
	public static bool SupportsOptimization(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x2E2F980", Offset = "0x2E2DF80", VA = "0x182E2F980")]
	private static IOptimizedAccessor GetFieldAccessor(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x2E346E0", Offset = "0x2E32CE0", VA = "0x182E346E0")]
	public static IOptimizedAccessor Prewarm(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x2E33FD0", Offset = "0x2E325D0", VA = "0x182E33FD0")]
	public static object GetValueOptimized(this PropertyInfo propertyInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x2E34950", Offset = "0x2E32F50", VA = "0x182E34950")]
	public static void SetValueOptimized(this PropertyInfo propertyInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x2E34CE0", Offset = "0x2E332E0", VA = "0x182E34CE0")]
	public static bool SupportsOptimization(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x2E337C0", Offset = "0x2E31DC0", VA = "0x182E337C0")]
	private static IOptimizedAccessor GetPropertyAccessor(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x2E34730", Offset = "0x2E32D30", VA = "0x182E34730")]
	public static IOptimizedInvoker Prewarm(this MethodInfo methodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x2E34290", Offset = "0x2E32890", VA = "0x182E34290")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x2E34200", Offset = "0x2E32800", VA = "0x182E34200")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x2E34160", Offset = "0x2E32760", VA = "0x182E34160")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x2E34060", Offset = "0x2E32660", VA = "0x182E34060")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x2E34490", Offset = "0x2E32A90", VA = "0x182E34490")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x2E34590", Offset = "0x2E32B90", VA = "0x182E34590")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x2E34390", Offset = "0x2E32990", VA = "0x182E34390")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x2E34A80", Offset = "0x2E33080", VA = "0x182E34A80")]
	public static bool SupportsOptimization(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x2E300E0", Offset = "0x2E2E6E0", VA = "0x182E300E0")]
	private static IOptimizedInvoker GetMethodInvoker(MethodInfo methodInfo)
	{
		return null;
	}
}
