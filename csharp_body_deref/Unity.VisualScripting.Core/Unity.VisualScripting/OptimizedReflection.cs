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
		[Address(RVA = "0x682C330", Offset = "0x682B330", VA = "0x682C330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000174")]
	public static bool useJitIfAvailable
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x682CA30", Offset = "0x682BA30", VA = "0x682CA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x682CAA0", Offset = "0x682BAA0", VA = "0x682CAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public static bool safeMode
	{
		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x682CBF0", Offset = "0x682BBF0", VA = "0x682CBF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x682CC60", Offset = "0x682BC60", VA = "0x682CC60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x682C8A0", Offset = "0x682B8A0", VA = "0x682C8A0")]
	static OptimizedReflection()
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x682CB00", Offset = "0x682BB00", VA = "0x682CB00")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x682CCB0", Offset = "0x682BCB0", VA = "0x682CCB0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x682CDD0", Offset = "0x682BDD0", VA = "0x682CDD0")]
	internal static void VerifyStaticTarget(Type targetType, object target)
	{
	}

	[Token(Token = "0x6000DDD")]
	internal static void VerifyInstanceTarget<TTArget>(object target)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x682CE30", Offset = "0x682BE30", VA = "0x682CE30")]
	private static void VerifyTarget(Type targetType, object target, bool @static)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x682CF80", Offset = "0x682BF80", VA = "0x682CF80")]
	private static bool SupportsOptimization(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x682D010", Offset = "0x682C010", VA = "0x682D010")]
	public static IOptimizedAccessor Prewarm(this FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x682D710", Offset = "0x682C710", VA = "0x682D710")]
	public static object GetValueOptimized(this FieldInfo fieldInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x682D820", Offset = "0x682C820", VA = "0x682D820")]
	public static void SetValueOptimized(this FieldInfo fieldInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x682D930", Offset = "0x682C930", VA = "0x682D930")]
	public static bool SupportsOptimization(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x682D070", Offset = "0x682C070", VA = "0x682D070")]
	private static IOptimizedAccessor GetFieldAccessor(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x682DAD0", Offset = "0x682CAD0", VA = "0x682DAD0")]
	public static IOptimizedAccessor Prewarm(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x682E200", Offset = "0x682D200", VA = "0x682E200")]
	public static object GetValueOptimized(this PropertyInfo propertyInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x682E310", Offset = "0x682D310", VA = "0x682E310")]
	public static void SetValueOptimized(this PropertyInfo propertyInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x682E420", Offset = "0x682D420", VA = "0x682E420")]
	public static bool SupportsOptimization(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x682DB30", Offset = "0x682CB30", VA = "0x682DB30")]
	private static IOptimizedAccessor GetPropertyAccessor(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x682C0C0", Offset = "0x682B0C0", VA = "0x682C0C0")]
	public static IOptimizedInvoker Prewarm(this MethodInfo methodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x6831690", Offset = "0x6830690", VA = "0x6831690")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x68317A0", Offset = "0x68307A0", VA = "0x68317A0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x68318B0", Offset = "0x68308B0", VA = "0x68318B0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x68319C0", Offset = "0x68309C0", VA = "0x68319C0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x6831AE0", Offset = "0x6830AE0", VA = "0x6831AE0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x6831C10", Offset = "0x6830C10", VA = "0x6831C10")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x6831D50", Offset = "0x6830D50", VA = "0x6831D50")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x6831EA0", Offset = "0x6830EA0", VA = "0x6831EA0")]
	public static bool SupportsOptimization(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x682E5C0", Offset = "0x682D5C0", VA = "0x682E5C0")]
	private static IOptimizedInvoker GetMethodInvoker(MethodInfo methodInfo)
	{
		return null;
	}
}
