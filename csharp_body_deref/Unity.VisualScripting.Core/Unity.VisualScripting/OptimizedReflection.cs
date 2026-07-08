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
		[Address(RVA = "0x4A1A2D0", Offset = "0x4A1A2D0", VA = "0x4A1A2D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000171")]
	public static bool useJitIfAvailable
	{
		[Token(Token = "0x6000DCC")]
		[Address(RVA = "0x4A1A9F0", Offset = "0x4A1A9F0", VA = "0x4A1A9F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x4A1AA60", Offset = "0x4A1AA60", VA = "0x4A1AA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public static bool safeMode
	{
		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x4A1ABA0", Offset = "0x4A1ABA0", VA = "0x4A1ABA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x4A1AC10", Offset = "0x4A1AC10", VA = "0x4A1AC10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x4A1A860", Offset = "0x4A1A860", VA = "0x4A1A860")]
	static OptimizedReflection()
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x4A1AC60", Offset = "0x4A1AC60", VA = "0x4A1AC60")]
	internal static void OnRuntimeMethodLoad()
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x4A1AAB0", Offset = "0x4A1AAB0", VA = "0x4A1AAB0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x4A1AD70", Offset = "0x4A1AD70", VA = "0x4A1AD70")]
	internal static void VerifyStaticTarget(Type targetType, object target)
	{
	}

	[Token(Token = "0x6000DD3")]
	internal static void VerifyInstanceTarget<TTArget>(object target)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x4A1ADD0", Offset = "0x4A1ADD0", VA = "0x4A1ADD0")]
	private static void VerifyTarget(Type targetType, object target, bool @static)
	{
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x4A1AF20", Offset = "0x4A1AF20", VA = "0x4A1AF20")]
	private static bool SupportsOptimization(MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x4A1AFB0", Offset = "0x4A1AFB0", VA = "0x4A1AFB0")]
	public static IOptimizedAccessor Prewarm(this FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x4A1B810", Offset = "0x4A1B810", VA = "0x4A1B810")]
	public static object GetValueOptimized(this FieldInfo fieldInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x4A1B920", Offset = "0x4A1B920", VA = "0x4A1B920")]
	public static void SetValueOptimized(this FieldInfo fieldInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x4A1BA30", Offset = "0x4A1BA30", VA = "0x4A1BA30")]
	public static bool SupportsOptimization(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x4A1B010", Offset = "0x4A1B010", VA = "0x4A1B010")]
	private static IOptimizedAccessor GetFieldAccessor(FieldInfo fieldInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x4A1BBE0", Offset = "0x4A1BBE0", VA = "0x4A1BBE0")]
	public static IOptimizedAccessor Prewarm(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x4A1C450", Offset = "0x4A1C450", VA = "0x4A1C450")]
	public static object GetValueOptimized(this PropertyInfo propertyInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x4A1C560", Offset = "0x4A1C560", VA = "0x4A1C560")]
	public static void SetValueOptimized(this PropertyInfo propertyInfo, object target, object value)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x4A1C670", Offset = "0x4A1C670", VA = "0x4A1C670")]
	public static bool SupportsOptimization(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x4A1BC40", Offset = "0x4A1BC40", VA = "0x4A1BC40")]
	private static IOptimizedAccessor GetPropertyAccessor(PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x4A1A030", Offset = "0x4A1A030", VA = "0x4A1A030")]
	public static IOptimizedInvoker Prewarm(this MethodInfo methodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x4A20D80", Offset = "0x4A20D80", VA = "0x4A20D80")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x4A20E90", Offset = "0x4A20E90", VA = "0x4A20E90")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x4A20FA0", Offset = "0x4A20FA0", VA = "0x4A20FA0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4A210B0", Offset = "0x4A210B0", VA = "0x4A210B0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x4A211D0", Offset = "0x4A211D0", VA = "0x4A211D0")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4A21300", Offset = "0x4A21300", VA = "0x4A21300")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4A21440", Offset = "0x4A21440", VA = "0x4A21440")]
	public static object InvokeOptimized(this MethodInfo methodInfo, object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4A21590", Offset = "0x4A21590", VA = "0x4A21590")]
	public static bool SupportsOptimization(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4A1C820", Offset = "0x4A1C820", VA = "0x4A1C820")]
	private static IOptimizedInvoker GetMethodInvoker(MethodInfo methodInfo)
	{
		return null;
	}
}
