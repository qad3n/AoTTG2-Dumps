// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstCompilerOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000013")]
public sealed class BurstCompilerOptions
{
	[Token(Token = "0x400002E")]
	private const string DisableCompilationArg = "--burst-disable-compilation";

	[Token(Token = "0x400002F")]
	private const string ForceSynchronousCompilationArg = "--burst-force-sync-compilation";

	[Token(Token = "0x4000030")]
	internal const string DefaultLibraryName = "lib_burst_generated";

	[Token(Token = "0x4000031")]
	internal const string BurstInitializeName = "burst.initialize";

	[Token(Token = "0x4000032")]
	internal const string BurstInitializeExternalsName = "burst.initialize.externals";

	[Token(Token = "0x4000033")]
	internal const string BurstInitializeStaticsName = "burst.initialize.statics";

	[Token(Token = "0x4000034")]
	internal const string OptionBurstcSwitch = "+burstc";

	[Token(Token = "0x4000035")]
	internal const string OptionGroup = "group";

	[Token(Token = "0x4000036")]
	internal const string OptionPlatform = "platform=";

	[Token(Token = "0x4000037")]
	internal const string OptionMinimumOSVersion = "minimum-os-version=";

	[Token(Token = "0x4000038")]
	internal const string OptionBackend = "backend=";

	[Token(Token = "0x4000039")]
	internal const string OptionGlobalSafetyChecksSetting = "global-safety-checks-setting=";

	[Token(Token = "0x400003A")]
	internal const string OptionDisableSafetyChecks = "disable-safety-checks";

	[Token(Token = "0x400003B")]
	internal const string OptionDisableOpt = "disable-opt";

	[Token(Token = "0x400003C")]
	internal const string OptionFastMath = "fastmath";

	[Token(Token = "0x400003D")]
	internal const string OptionTarget = "target=";

	[Token(Token = "0x400003E")]
	internal const string OptionOptLevel = "opt-level=";

	[Token(Token = "0x400003F")]
	internal const string OptionLogTimings = "log-timings";

	[Token(Token = "0x4000040")]
	internal const string OptionOptForSize = "opt-for-size";

	[Token(Token = "0x4000041")]
	internal const string OptionFloatPrecision = "float-precision=";

	[Token(Token = "0x4000042")]
	internal const string OptionFloatMode = "float-mode=";

	[Token(Token = "0x4000043")]
	internal const string OptionBranchProtection = "branch-protection=";

	[Token(Token = "0x4000044")]
	internal const string OptionWasmEnableThreads = "wasm-enable-threads";

	[Token(Token = "0x4000045")]
	internal const string OptionDisableWarnings = "disable-warnings=";

	[Token(Token = "0x4000046")]
	internal const string OptionAssemblyDefines = "assembly-defines=";

	[Token(Token = "0x4000047")]
	internal const string OptionDump = "dump=";

	[Token(Token = "0x4000048")]
	internal const string OptionFormat = "format=";

	[Token(Token = "0x4000049")]
	internal const string OptionDebugTrap = "debugtrap";

	[Token(Token = "0x400004A")]
	internal const string OptionDisableVectors = "disable-vectors";

	[Token(Token = "0x400004B")]
	internal const string OptionDebug = "debug=";

	[Token(Token = "0x400004C")]
	internal const string OptionDebugMode = "debugMode";

	[Token(Token = "0x400004D")]
	internal const string OptionStaticLinkage = "generate-static-linkage-methods";

	[Token(Token = "0x400004E")]
	internal const string OptionJobMarshalling = "generate-job-marshalling-methods";

	[Token(Token = "0x400004F")]
	internal const string OptionTempDirectory = "temp-folder=";

	[Token(Token = "0x4000050")]
	internal const string OptionEnableDirectExternalLinking = "enable-direct-external-linking";

	[Token(Token = "0x4000051")]
	internal const string OptionLinkerOptions = "linker-options=";

	[Token(Token = "0x4000052")]
	internal const string OptionEnableAutoLayoutFallbackCheck = "enable-autolayout-fallback-check";

	[Token(Token = "0x4000053")]
	internal const string OptionEnableFrameInfoRegistration = "enable-frame-info-registration";

	[Token(Token = "0x4000054")]
	internal const string OptionGenerateLinkXml = "generate-link-xml=";

	[Token(Token = "0x4000055")]
	internal const string OptionMetaDataGeneration = "meta-data-generation=";

	[Token(Token = "0x4000056")]
	internal const string OptionDisableStringInterpolationInExceptionMessages = "disable-string-interpolation-in-exception-messages";

	[Token(Token = "0x4000057")]
	internal const string OptionPlatformConfiguration = "platform-configuration=";

	[Token(Token = "0x4000058")]
	internal const string OptionStackProtector = "stack-protector=";

	[Token(Token = "0x4000059")]
	internal const string OptionStackProtectorBufferSize = "stack-protector-buffer-size=";

	[Token(Token = "0x400005A")]
	internal const string OptionForceDisableFrameInfoRegistration = "force-disable-frame-info-registration";

	[Token(Token = "0x400005B")]
	internal const string OptionCacheDirectory = "cache-directory=";

	[Token(Token = "0x400005C")]
	internal const string OptionJitDisableFunctionCaching = "disable-function-caching";

	[Token(Token = "0x400005D")]
	internal const string OptionJitDisableAssemblyCaching = "disable-assembly-caching";

	[Token(Token = "0x400005E")]
	internal const string OptionJitEnableAssemblyCachingLogs = "enable-assembly-caching-logs";

	[Token(Token = "0x400005F")]
	internal const string OptionJitEnableSynchronousCompilation = "enable-synchronous-compilation";

	[Token(Token = "0x4000060")]
	internal const string OptionJitCompilationPriority = "compilation-priority=";

	[Token(Token = "0x4000061")]
	internal const string OptionJitIsForFunctionPointer = "is-for-function-pointer";

	[Token(Token = "0x4000062")]
	internal const string OptionJitManagedFunctionPointer = "managed-function-pointer=";

	[Token(Token = "0x4000063")]
	internal const string OptionJitManagedDelegateHandle = "managed-delegate-handle=";

	[Token(Token = "0x4000064")]
	internal const string OptionEnableInterpreter = "enable-interpreter";

	[Token(Token = "0x4000065")]
	internal const string OptionAotAssemblyFolder = "assembly-folder=";

	[Token(Token = "0x4000066")]
	internal const string OptionRootAssembly = "root-assembly=";

	[Token(Token = "0x4000067")]
	internal const string OptionIncludeRootAssemblyReferences = "include-root-assembly-references=";

	[Token(Token = "0x4000068")]
	internal const string OptionAotMethod = "method=";

	[Token(Token = "0x4000069")]
	internal const string OptionAotType = "type=";

	[Token(Token = "0x400006A")]
	internal const string OptionAotAssembly = "assembly=";

	[Token(Token = "0x400006B")]
	internal const string OptionAotOutputPath = "output=";

	[Token(Token = "0x400006C")]
	internal const string OptionAotKeepIntermediateFiles = "keep-intermediate-files";

	[Token(Token = "0x400006D")]
	internal const string OptionAotNoLink = "nolink";

	[Token(Token = "0x400006E")]
	internal const string OptionAotOnlyStaticMethods = "only-static-methods";

	[Token(Token = "0x400006F")]
	internal const string OptionMethodPrefix = "method-prefix=";

	[Token(Token = "0x4000070")]
	internal const string OptionAotNoNativeToolchain = "no-native-toolchain";

	[Token(Token = "0x4000071")]
	internal const string OptionAotEmitLlvmObjects = "emit-llvm-objects";

	[Token(Token = "0x4000072")]
	internal const string OptionAotKeyFolder = "key-folder=";

	[Token(Token = "0x4000073")]
	internal const string OptionAotDecodeFolder = "decode-folder=";

	[Token(Token = "0x4000074")]
	internal const string OptionVerbose = "verbose";

	[Token(Token = "0x4000075")]
	internal const string OptionValidateExternalToolChain = "validate-external-tool-chain";

	[Token(Token = "0x4000076")]
	internal const string OptionCompilerThreads = "threads=";

	[Token(Token = "0x4000077")]
	internal const string OptionChunkSize = "chunk-size=";

	[Token(Token = "0x4000078")]
	internal const string OptionPrintLogOnMissingPInvokeCallbackAttribute = "print-monopinvokecallbackmissing-message";

	[Token(Token = "0x4000079")]
	internal const string OptionOutputMode = "output-mode=";

	[Token(Token = "0x400007A")]
	internal const string OptionAlwaysCreateOutput = "always-create-output=";

	[Token(Token = "0x400007B")]
	internal const string OptionAotPdbSearchPaths = "pdb-search-paths=";

	[Token(Token = "0x400007C")]
	internal const string OptionSafetyChecks = "safety-checks";

	[Token(Token = "0x400007D")]
	internal const string OptionLibraryOutputMode = "library-output-mode=";

	[Token(Token = "0x400007E")]
	internal const string OptionCompilationId = "compilation-id=";

	[Token(Token = "0x400007F")]
	internal const string OptionTargetFramework = "target-framework=";

	[Token(Token = "0x4000080")]
	internal const string OptionDiscardAssemblies = "discard-assemblies=";

	[Token(Token = "0x4000081")]
	internal const string OptionSaveExtraContext = "save-extra-context";

	[Token(Token = "0x4000082")]
	internal const string CompilerCommandShutdown = "$shutdown";

	[Token(Token = "0x4000083")]
	internal const string CompilerCommandCancel = "$cancel";

	[Token(Token = "0x4000084")]
	internal const string CompilerCommandEnableCompiler = "$enable_compiler";

	[Token(Token = "0x4000085")]
	internal const string CompilerCommandDisableCompiler = "$disable_compiler";

	[Token(Token = "0x4000086")]
	internal const string CompilerCommandSetDefaultOptions = "$set_default_options";

	[Token(Token = "0x4000087")]
	internal const string CompilerCommandTriggerSetupRecompilation = "$trigger_setup_recompilation";

	[Token(Token = "0x4000088")]
	internal const string CompilerCommandIsCurrentCompilationDone = "$is_current_compilation_done";

	[Token(Token = "0x4000089")]
	internal const string CompilerCommandTriggerRecompilation = "$trigger_recompilation";

	[Token(Token = "0x400008A")]
	internal const string CompilerCommandInitialize = "$initialize";

	[Token(Token = "0x400008B")]
	internal const string CompilerCommandDomainReload = "$domain_reload";

	[Token(Token = "0x400008C")]
	internal const string CompilerCommandVersionNotification = "$version";

	[Token(Token = "0x400008D")]
	internal const string CompilerCommandGetTargetCpuFromHost = "$get_target_cpu_from_host";

	[Token(Token = "0x400008E")]
	internal const string CompilerCommandSetProfileCallbacks = "$set_profile_callbacks";

	[Token(Token = "0x400008F")]
	internal const string CompilerCommandUnloadBurstNatives = "$unload_burst_natives";

	[Token(Token = "0x4000090")]
	internal const string CompilerCommandIsNativeApiAvailable = "$is_native_api_available";

	[Token(Token = "0x4000091")]
	internal const string CompilerCommandILPPCompilation = "$ilpp_compilation";

	[Token(Token = "0x4000092")]
	internal const string CompilerCommandIsArmTestEnv = "$is_arm_test_env";

	[Token(Token = "0x4000093")]
	internal const string CompilerCommandNotifyAssemblyCompilationNotRequired = "$notify_assembly_compilation_not_required";

	[Token(Token = "0x4000094")]
	internal const string CompilerCommandNotifyAssemblyCompilationFinished = "$notify_assembly_compilation_finished";

	[Token(Token = "0x4000095")]
	internal const string CompilerCommandNotifyCompilationStarted = "$notify_compilation_started";

	[Token(Token = "0x4000096")]
	internal const string CompilerCommandNotifyCompilationFinished = "$notify_compilation_finished";

	[Token(Token = "0x4000097")]
	internal const string CompilerCommandDirtyAllAssemblies = "$dirty_all_assemblies";

	[Token(Token = "0x4000098")]
	internal const string CompilerCommandAotCompilation = "$aot_compilation";

	[Token(Token = "0x4000099")]
	internal const string CompilerCommandRequestInitialiseDebuggerCommmand = "$request_debug_command";

	[Token(Token = "0x400009A")]
	internal const string CompilerCommandInitialiseDebuggerCommmand = "$load_debugger_interface";

	[Token(Token = "0x400009B")]
	internal const string CompilerCommandRequestSetProtocolVersionEditor = "$request_set_protocol_version_editor";

	[Token(Token = "0x400009C")]
	internal const string CompilerCommandSetProtocolVersionBurst = "$set_protocol_version_burst";

	[Token(Token = "0x400009D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly bool ForceDisableBurstCompilation;

	[Token(Token = "0x400009E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static readonly bool ForceBurstCompilationSynchronously;

	[Token(Token = "0x400009F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	internal static readonly bool IsSecondaryUnityProcess;

	[Token(Token = "0x40000A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _enableBurstCompilation;

	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	private bool _enableBurstCompileSynchronously;

	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12")]
	private bool _enableBurstSafetyChecks;

	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13")]
	private bool _enableBurstTimings;

	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private bool _enableBurstDebug;

	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15")]
	private bool _forceEnableBurstSafetyChecks;

	[Token(Token = "0x1700000B")]
	private bool IsGlobal
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x6310740", Offset = "0x630F740", VA = "0x6310740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public bool IsEnabled
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x6310750", Offset = "0x630F750", VA = "0x6310750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool EnableBurstCompilation
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x63107B0", Offset = "0x630F7B0", VA = "0x63107B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x6310620", Offset = "0x630F620", VA = "0x6310620")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool EnableBurstCompileSynchronously
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x63107E0", Offset = "0x630F7E0", VA = "0x63107E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x63107F0", Offset = "0x630F7F0", VA = "0x63107F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool EnableBurstSafetyChecks
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x6310820", Offset = "0x630F820", VA = "0x6310820")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x6310710", Offset = "0x630F710", VA = "0x6310710")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool ForceEnableBurstSafetyChecks
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x6310840", Offset = "0x630F840", VA = "0x6310840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x6310850", Offset = "0x630F850", VA = "0x6310850")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool EnableBurstDebug
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x6310880", Offset = "0x630F880", VA = "0x6310880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x6310890", Offset = "0x630F890", VA = "0x6310890")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	[Obsolete("This property is no longer used and will be removed in a future major release")]
	public bool DisableOptimizations
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x63108C0", Offset = "0x630F8C0", VA = "0x63108C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x63108D0", Offset = "0x630F8D0", VA = "0x63108D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	[Obsolete("This property is no longer used and will be removed in a future major release. Use the [BurstCompile(FloatMode = FloatMode.Fast)] on the method directly to enable this feature")]
	public bool EnableFastMath
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x63108E0", Offset = "0x630F8E0", VA = "0x63108E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x63108F0", Offset = "0x630F8F0", VA = "0x63108F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	internal bool EnableBurstTimings
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x6310900", Offset = "0x630F900", VA = "0x6310900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x6310910", Offset = "0x630F910", VA = "0x6310910")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	internal bool RequiresSynchronousCompilation
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x6310940", Offset = "0x630F940", VA = "0x6310940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	internal Action OptionsChanged
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x63109A0", Offset = "0x630F9A0", VA = "0x63109A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x63109B0", Offset = "0x630F9B0", VA = "0x63109B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x630FFA0", Offset = "0x630EFA0", VA = "0x630FFA0")]
	internal static string SerialiseCompilationOptionsSafe(string[] roots, string[] folders, string options)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x6310200", Offset = "0x630F200", VA = "0x6310200")]
	internal static (string[], string[], string) DeserialiseCompilationOptionsSafe(string from)
	{
		return default((string[], string[], string));
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x63105D0", Offset = "0x630F5D0", VA = "0x63105D0")]
	private BurstCompilerOptions()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x630F5B0", Offset = "0x630E5B0", VA = "0x630F5B0")]
	internal BurstCompilerOptions(bool isGlobal)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x63109C0", Offset = "0x630F9C0", VA = "0x63109C0")]
	internal BurstCompilerOptions Clone()
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6310B00", Offset = "0x630FB00", VA = "0x6310B00")]
	private static bool TryGetAttribute(MemberInfo member, out BurstCompileAttribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6311010", Offset = "0x6310010", VA = "0x6311010")]
	private static bool TryGetAttribute(Assembly assembly, out BurstCompileAttribute attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6310B90", Offset = "0x630FB90", VA = "0x6310B90")]
	private static BurstCompileAttribute GetBurstCompileAttribute(MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x630E910", Offset = "0x630D910", VA = "0x630E910")]
	internal static bool HasBurstCompileAttribute(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x6311090", Offset = "0x6310090", VA = "0x6311090")]
	internal static void MergeAttributes(ref BurstCompileAttribute memberAttribute, in BurstCompileAttribute assemblyAttribute)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x63111C0", Offset = "0x63101C0", VA = "0x63111C0")]
	internal bool TryGetOptions(MemberInfo member, out string flagsOut, bool isForILPostProcessing = false, bool isForCompilerClient = false, bool deterministicCompilation = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x63113A0", Offset = "0x63103A0", VA = "0x63113A0")]
	internal string GetOptions([Optional] BurstCompileAttribute attr, bool isForILPostProcessing = false, bool isForCompilerClient = false, bool deterministicCompilation = false)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6311EF0", Offset = "0x6310EF0", VA = "0x6311EF0")]
	private static void AddOption(StringBuilder builder, string option)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x6311E20", Offset = "0x6310E20", VA = "0x6311E20")]
	internal static string GetOption(string optionName, [Optional] object value)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x63107C0", Offset = "0x630F7C0", VA = "0x63107C0")]
	private void OnOptionsChanged()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x6310830", Offset = "0x630F830", VA = "0x6310830")]
	private void MaybeTriggerRecompilation()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6311F40", Offset = "0x6310F40", VA = "0x6311F40")]
	static BurstCompilerOptions()
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x63120A0", Offset = "0x63110A0", VA = "0x63120A0")]
	private static bool CheckIsSecondaryUnityProcess()
	{
		return default(bool);
	}
}
