// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstCompiler
// Update status: NEW in this game update
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
		[Address(RVA = "0x295ABB0", Offset = "0x29591B0", VA = "0x18295ABB0")]
		public CommandBuilder()
		{
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x295A9E0", Offset = "0x2958FE0", VA = "0x18295A9E0")]
		public CommandBuilder Begin(string cmd)
		{
			return null;
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x295AB50", Offset = "0x2959150", VA = "0x18295AB50")]
		public CommandBuilder With(string arg)
		{
			return null;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x295AAA0", Offset = "0x29590A0", VA = "0x18295AAA0")]
		public CommandBuilder With(IntPtr arg)
		{
			return null;
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x295A9B0", Offset = "0x2958FB0", VA = "0x18295A9B0")]
		public CommandBuilder And(char sep = '|')
		{
			return null;
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x295AA30", Offset = "0x2959030", VA = "0x18295AA30")]
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
		[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
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
			[Address(RVA = "0x295AFF0", Offset = "0x29595F0", VA = "0x18295AFF0")]
			[BurstDiscard]
			private static void GetFunctionPointerDiscard(ref IntPtr P_0)
			{
			}

			[Token(Token = "0x6000052")]
			[Address(RVA = "0x295B170", Offset = "0x2959770", VA = "0x18295B170")]
			private static IntPtr GetFunctionPointer()
			{
				return default(IntPtr);
			}

			[Token(Token = "0x6000053")]
			[Address(RVA = "0x295B2E0", Offset = "0x29598E0", VA = "0x18295B2E0")]
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
		[Address(RVA = "0x2950870", Offset = "0x294EE70", VA = "0x182950870")]
		[BurstCompile]
		[MonoPInvokeCallback(typeof(IsBurstEnabledDelegate))]
		private static bool IsBurstEnabled()
		{
			return default(bool);
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x564910", Offset = "0x562F10", VA = "0x180564910")]
		[BurstDiscard]
		private static void DiscardedMethod(ref bool value)
		{
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x2950880", Offset = "0x294EE80", VA = "0x182950880")]
		private static bool IsCompiledByBurst(Delegate del)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x2950830", Offset = "0x294EE30", VA = "0x182950830")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000054")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
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
		[Address(RVA = "0x29551B0", Offset = "0x29537B0", VA = "0x1829551B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2954550", Offset = "0x2952B50", VA = "0x182954550")]
	public static bool IsLoadAdditionalLibrarySupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2953570", Offset = "0x2951B70", VA = "0x182953570")]
	private static CommandBuilder BeginCompilerCommand(string cmd)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2954A50", Offset = "0x2953050", VA = "0x182954A50")]
	public static void SetExecutionMode(BurstExecutionEnvironment mode)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2954270", Offset = "0x2952870", VA = "0x182954270")]
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
	[Address(RVA = "0x2953870", Offset = "0x2951E70", VA = "0x182953870")]
	[Obsolete("This method will be removed in a future version of Burst")]
	public static IntPtr CompileILPPMethod(RuntimeMethodHandle burstMethodHandle, RuntimeMethodHandle managedMethodHandle, RuntimeTypeHandle delegateTypeHandle)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x29536E0", Offset = "0x2951CE0", VA = "0x1829536E0")]
	public static IntPtr CompileILPPMethod2(RuntimeMethodHandle burstMethodHandle)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2954490", Offset = "0x2952A90", VA = "0x182954490")]
	[Obsolete("This method will be removed in a future version of Burst")]
	public unsafe static void* GetILPPMethodFunctionPointer(IntPtr ilppMethod)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2954280", Offset = "0x2952880", VA = "0x182954280")]
	public unsafe static void* GetILPPMethodFunctionPointer2(IntPtr ilppMethod, RuntimeMethodHandle managedMethodHandle, RuntimeTypeHandle delegateTypeHandle)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x29538B0", Offset = "0x2951EB0", VA = "0x1829538B0")]
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
	[Address(RVA = "0x2954100", Offset = "0x2952700", VA = "0x182954100")]
	private unsafe static void* Compile(object delegateObj, bool isFunctionPointer, bool deterministicCompilation = false)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x29538F0", Offset = "0x2951EF0", VA = "0x1829538F0")]
	private unsafe static void* Compile(object delegateObj, MethodInfo methodInfo, bool isFunctionPointer, bool isILPostProcessing, bool deterministicCompilation = false)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Shutdown()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Cancel()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal static bool IsCurrentCompilationDone()
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Enable()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Disable()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool IsHostEditorArm()
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2954A60", Offset = "0x2953060", VA = "0x182954A60")]
	internal static void TriggerUnsafeStaticMethodRecompilation()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void TriggerRecompilation()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2954ED0", Offset = "0x29534D0", VA = "0x182954ED0")]
	internal static void UnloadAdditionalLibraries()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x29544D0", Offset = "0x2952AD0", VA = "0x1829544D0")]
	internal static bool IsApiAvailable(string apiName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x29545B0", Offset = "0x2952BB0", VA = "0x1829545B0")]
	internal static int RequestSetProtocolVersion(int version)
	{
		return default(int);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Initialize(string[] assemblyFolders, string[] ignoreAssemblies)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void NotifyCompilationStarted(string[] assemblyFolders, string[] ignoreAssemblies)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void NotifyAssemblyCompilationNotRequired(string assemblyName)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void NotifyAssemblyCompilationFinished(string assemblyName, string[] defines)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void NotifyCompilationFinished()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2953540", Offset = "0x2951B40", VA = "0x182953540")]
	internal static string AotCompilation(string[] assemblyFolders, string[] assemblyRoots, string options)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void SetProfilerCallbacks()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x29549A0", Offset = "0x2952FA0", VA = "0x1829549A0")]
	private static string SendRawCommandToCompiler(string command)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x29546E0", Offset = "0x2952CE0", VA = "0x1829546E0")]
	private static string SendCommandToCompiler(string commandName, [Optional] string commandArgs)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void DummyMethod()
	{
	}
}
