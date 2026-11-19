// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstCompiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using AOT;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Burst;

[Token(Token = "0x2000008")]
public static class BurstCompiler
{
	[Token(Token = "0x2000009")]
	private class CommandBuilder
	{
		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private StringBuilder _builder;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool _hasArgs;

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x630DC60", Offset = "0x630CC60", VA = "0x630DC60")]
		public CommandBuilder()
		{
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x630DCD0", Offset = "0x630CCD0", VA = "0x630DCD0")]
		public CommandBuilder Begin(string cmd)
		{
			return null;
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x630F3B0", Offset = "0x630E3B0", VA = "0x630F3B0")]
		public CommandBuilder With(string arg)
		{
			return null;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x630F600", Offset = "0x630E600", VA = "0x630F600")]
		public CommandBuilder With(IntPtr arg)
		{
			return null;
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x630F6A0", Offset = "0x630E6A0", VA = "0x630F6A0")]
		public CommandBuilder And(char sep = '|')
		{
			return null;
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x630F400", Offset = "0x630E400", VA = "0x630F400")]
		public string SendToCompiler()
		{
			return null;
		}
	}

	[Token(Token = "0x200000A")]
	[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
	internal class StaticTypeReinitAttribute : Attribute
	{
		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly Type reinitType;

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x630F6D0", Offset = "0x630E6D0", VA = "0x630F6D0")]
		public StaticTypeReinitAttribute(Type toReinit)
		{
		}
	}

	[Token(Token = "0x200000B")]
	[BurstCompile]
	internal static class BurstCompilerHelper
	{
		[Token(Token = "0x200000C")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		private delegate bool IsBurstEnabledDelegate();

		[Token(Token = "0x200000D")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		internal delegate bool IsBurstEnabled_00000143_0024PostfixBurstDelegate();

		[Token(Token = "0x200000E")]
		internal static class IsBurstEnabled_00000143_0024BurstDirectCall
		{
			[Token(Token = "0x4000023")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private static IntPtr Pointer;

			[Token(Token = "0x6000051")]
			[Address(RVA = "0x630FCB0", Offset = "0x630ECB0", VA = "0x630FCB0")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x6000052")]
			[Address(RVA = "0x630FE10", Offset = "0x630EE10", VA = "0x630FE10")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x6000053")]
			[Address(RVA = "0x630F710", Offset = "0x630E710", VA = "0x630F710")]
			public static bool Invoke()
			{
				return default(bool);
			}
		}

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly bool IsBurstGenerated;

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x630F700", Offset = "0x630E700", VA = "0x630F700")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(IsBurstEnabledDelegate))]
		private static bool IsBurstEnabled()
		{
			return default(bool);
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x630F8B0", Offset = "0x630E8B0", VA = "0x630F8B0")]
		[BurstDiscard]
		private static void DiscardedMethod(ref bool value)
		{
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x630F8C0", Offset = "0x630E8C0", VA = "0x630F8C0")]
		private static bool IsCompiledByBurst(Delegate del)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x630FAE0", Offset = "0x630EAE0", VA = "0x630FAE0")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(IsBurstEnabledDelegate))]
		internal static bool IsBurstEnabled_0024BurstManaged()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200000F")]
	private class FakeDelegate
	{
		[Token(Token = "0x1700000A")]
		[Preserve]
		public MethodInfo Method
		{
			[Token(Token = "0x6000055")]
			[Address(RVA = "0x630FE30", Offset = "0x630EE30", VA = "0x630FE30")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x630DF90", Offset = "0x630CF90", VA = "0x630DF90")]
		public FakeDelegate(MethodInfo method)
		{
		}
	}

	[Token(Token = "0x4000019")]
	[ThreadStatic]
	private static CommandBuilder _cmdBuilder;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool _IsEnabled;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly BurstCompilerOptions Options;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static Action OnCompileILPPMethod2;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly MethodInfo DummyMethodInfo;

	[Token(Token = "0x17000009")]
	public static bool IsEnabled
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x630DD20", Offset = "0x630CD20", VA = "0x630DD20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x630D920", Offset = "0x630C920", VA = "0x630D920")]
	public static bool IsLoadAdditionalLibrarySupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x630DAB0", Offset = "0x630CAB0", VA = "0x630DAB0")]
	private static CommandBuilder BeginCompilerCommand(string cmd)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x630DDC0", Offset = "0x630CDC0", VA = "0x630DDC0")]
	public static void SetExecutionMode(BurstExecutionEnvironment mode)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x630DDD0", Offset = "0x630CDD0", VA = "0x630DDD0")]
	public static BurstExecutionEnvironment GetExecutionMode()
	{
		return default(BurstExecutionEnvironment);
	}

	[Token(Token = "0x600001B")]
	internal static T CompileDelegate<T>(T delegateMethod, bool deterministicCompilation = false) where T : class
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void VerifyDelegateIsNotMulticast<T>(T delegateMethod) where T : class
	{
	}

	[Token(Token = "0x600001D")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute<T>(T delegateMethod) where T : class
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x630DDE0", Offset = "0x630CDE0", VA = "0x630DDE0")]
	[Obsolete("This method will be removed in a future version of Burst")]
	public static IntPtr CompileILPPMethod(RuntimeMethodHandle burstMethodHandle, RuntimeMethodHandle managedMethodHandle, RuntimeTypeHandle delegateTypeHandle)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x630DE20", Offset = "0x630CE20", VA = "0x630DE20")]
	public static IntPtr CompileILPPMethod2(RuntimeMethodHandle burstMethodHandle)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x630E580", Offset = "0x630D580", VA = "0x630E580")]
	[Obsolete("This method will be removed in a future version of Burst")]
	public unsafe static void* GetILPPMethodFunctionPointer(IntPtr ilppMethod)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x630E5C0", Offset = "0x630D5C0", VA = "0x630E5C0")]
	public unsafe static void* GetILPPMethodFunctionPointer2(IntPtr ilppMethod, RuntimeMethodHandle managedMethodHandle, RuntimeTypeHandle delegateTypeHandle)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x630E7D0", Offset = "0x630D7D0", VA = "0x630E7D0")]
	[Obsolete("This method will be removed in a future version of Burst")]
	public unsafe static void* CompileUnsafeStaticMethod(RuntimeMethodHandle handle)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000023")]
	public static FunctionPointer<T> CompileFunctionPointer<T>(T delegateMethod) where T : class
	{
		return default(FunctionPointer<T>);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x630E810", Offset = "0x630D810", VA = "0x630E810")]
	private unsafe static void* Compile(object delegateObj, bool isFunctionPointer, bool deterministicCompilation = false)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x630DFC0", Offset = "0x630CFC0", VA = "0x630DFC0")]
	private unsafe static void* Compile(object delegateObj, MethodInfo methodInfo, bool isFunctionPointer, bool isILPostProcessing, bool deterministicCompilation = false)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x630E9C0", Offset = "0x630D9C0", VA = "0x630E9C0")]
	internal static void Shutdown()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x630E9D0", Offset = "0x630D9D0", VA = "0x630E9D0")]
	internal static void Cancel()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x630E9E0", Offset = "0x630D9E0", VA = "0x630E9E0")]
	internal static bool IsCurrentCompilationDone()
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x630E9F0", Offset = "0x630D9F0", VA = "0x630E9F0")]
	internal static void Enable()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x630EA00", Offset = "0x630DA00", VA = "0x630EA00")]
	internal static void Disable()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x630EA10", Offset = "0x630DA10", VA = "0x630EA10")]
	internal static bool IsHostEditorArm()
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x630EA20", Offset = "0x630DA20", VA = "0x630EA20")]
	internal static void TriggerUnsafeStaticMethodRecompilation()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x630EF70", Offset = "0x630DF70", VA = "0x630EF70")]
	internal static void TriggerRecompilation()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x630EF80", Offset = "0x630DF80", VA = "0x630EF80")]
	internal static void UnloadAdditionalLibraries()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x630DA30", Offset = "0x630CA30", VA = "0x630DA30")]
	internal static bool IsApiAvailable(string apiName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x630F120", Offset = "0x630E120", VA = "0x630F120")]
	internal static int RequestSetProtocolVersion(int version)
	{
		return default(int);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x630F270", Offset = "0x630E270", VA = "0x630F270")]
	internal static void Initialize(string[] assemblyFolders, string[] ignoreAssemblies)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x630F280", Offset = "0x630E280", VA = "0x630F280")]
	internal static void NotifyCompilationStarted(string[] assemblyFolders, string[] ignoreAssemblies)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x630F290", Offset = "0x630E290", VA = "0x630F290")]
	internal static void NotifyAssemblyCompilationNotRequired(string assemblyName)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x630F2A0", Offset = "0x630E2A0", VA = "0x630F2A0")]
	internal static void NotifyAssemblyCompilationFinished(string assemblyName, string[] defines)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x630F2B0", Offset = "0x630E2B0", VA = "0x630F2B0")]
	internal static void NotifyCompilationFinished()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x630F2C0", Offset = "0x630E2C0", VA = "0x630F2C0")]
	internal static string AotCompilation(string[] assemblyFolders, string[] assemblyRoots, string options)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x630F2F0", Offset = "0x630E2F0", VA = "0x630F2F0")]
	internal static void SetProfilerCallbacks()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x630F300", Offset = "0x630E300", VA = "0x630F300")]
	private static string SendRawCommandToCompiler(string command)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x630EFE0", Offset = "0x630DFE0", VA = "0x630EFE0")]
	private static string SendCommandToCompiler(string commandName, [Optional] string commandArgs)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x630F470", Offset = "0x630E470", VA = "0x630F470")]
	private static void DummyMethod()
	{
	}
}
