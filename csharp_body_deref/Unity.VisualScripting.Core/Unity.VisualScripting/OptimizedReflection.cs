// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.OptimizedReflection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000151")]
public static class OptimizedReflection
{
	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<FieldInfo, IOptimizedAccessor> fieldAccessors;

	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<PropertyInfo, IOptimizedAccessor> propertyAccessors;

	[Token(Token = "0x400082A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<MethodInfo, IOptimizedInvoker> methodInvokers;

	[Token(Token = "0x400082B")]
	[FieldOffset(Offset = "0x18")]
	public static readonly bool jitAvailable;

	[Token(Token = "0x400082C")]
	[FieldOffset(Offset = "0x19")]
	private static bool _useJitIfAvailable;

	[Token(Token = "0x17000170")]
	internal static bool useJit
	{
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x4D3EEA0", Offset = "0x4D3EEA0", VA = "0x4D3EEA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000171")]
	public static bool useJitIfAvailable
	{
		[Token(Token = "0x6000DCC")]
		[Address(RVA = "0x4D3F5C0", Offset = "0x4D3F5C0", VA = "0x4D3F5C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x4D3F630", Offset = "0x4D3F630", VA = "0x4D3F630")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public static bool safeMode
	{
		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x4D3F770", Offset = "0x4D3F770", VA = "0x4D3F770")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x4D3F7E0", Offset = "0x4D3F7E0", VA = "0x4D3F7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x4D3F430", Offset = "0x4D3F430", VA = "0x4D3F430")]
	static OptimizedReflection()
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x4D3F830", Offset = "0x4D3F830", VA = "0x4D3F830")]
	internal static void OnRuntimeMethodLoad()
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x4D3F680", Offset = "0x4D3F680", VA = "0x4D3F680")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x4D3F940", Offset = "0x4D3F940", VA = "0x4D3F940")]
	internal static void VerifyStaticTarget(Type targetType, object target)
	{
	}

	[Token(Token = "0x6000DD3")]
	internal static void VerifyInstanceTarget<TTArget>(object target)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x4D3F9A0", Offset = "0x4D3F9A0", VA = "0x4D3F9A0")]
	private static void VerifyTarget(Type targetType, object target, bool @static)
	{
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x4D3FAF0", Offset = "0x4D3FAF0", VA = "0x4D3FAF0")]
	private static bool SupportsOptimization(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x4D3FB80", Offset = "0x4D3FB80", VA = "0x4D3FB80")]
	public static IOptimizedAccessor Prewarm(this FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x4D403E0", Offset = "0x4D403E0", VA = "0x4D403E0")]
	public static object GetValueOptimized(this FieldInfo fieldInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x4D404F0", Offset = "0x4D404F0", VA = "0x4D404F0")]
	public static void SetValueOptimized(this FieldInfo fieldInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x4D40600", Offset = "0x4D40600", VA = "0x4D40600")]
	public static bool SupportsOptimization(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x4D3FBE0", Offset = "0x4D3FBE0", VA = "0x4D3FBE0")]
	private static IOptimizedAccessor GetFieldAccessor(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x4D407B0", Offset = "0x4D407B0", VA = "0x4D407B0")]
	public static IOptimizedAccessor Prewarm(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x4D41020", Offset = "0x4D41020", VA = "0x4D41020")]
	public static object GetValueOptimized(this PropertyInfo propertyInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x4D41130", Offset = "0x4D41130", VA = "0x4D41130")]
	public static void SetValueOptimized(this PropertyInfo propertyInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x4D41240", Offset = "0x4D41240", VA = "0x4D41240")]
	public static bool SupportsOptimization(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x4D40810", Offset = "0x4D40810", VA = "0x4D40810")]
	private static IOptimizedAccessor GetPropertyAccessor(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x4D3EC00", Offset = "0x4D3EC00", VA = "0x4D3EC00")]
	public static IOptimizedInvoker Prewarm(this MethodInfo methodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x4D45950", Offset = "0x4D45950", VA = "0x4D45950")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x4D45A60", Offset = "0x4D45A60", VA = "0x4D45A60")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x4D45B70", Offset = "0x4D45B70", VA = "0x4D45B70")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4D45C80", Offset = "0x4D45C80", VA = "0x4D45C80")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x4D45DA0", Offset = "0x4D45DA0", VA = "0x4D45DA0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4D45ED0", Offset = "0x4D45ED0", VA = "0x4D45ED0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4D46010", Offset = "0x4D46010", VA = "0x4D46010")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4D46160", Offset = "0x4D46160", VA = "0x4D46160")]
	public static bool SupportsOptimization(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4D413F0", Offset = "0x4D413F0", VA = "0x4D413F0")]
	private static IOptimizedInvoker GetMethodInvoker(MethodInfo methodInfo)
	{
		return null;
	}
}
