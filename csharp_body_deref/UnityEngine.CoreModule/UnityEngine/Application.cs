// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Application
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000091")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Application/Application.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/BuildSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Network/NetworkUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/LoadSceneOperation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/PreloadManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Argv.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/URLUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/Player.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/ApplicationSpecificPersistentDataPath.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/ApplicationInfo.h")]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Logging/LogSystem.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TargetFrameRate.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/AdsIdHandler.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/IsPlaying.h")]
public class Application
{
	[Token(Token = "0x2000092")]
	public delegate void LowMemoryCallback();

	[Token(Token = "0x2000093")]
	public delegate void MemoryUsageChangedCallback(in ApplicationMemoryUsageChange usage);

	[Token(Token = "0x2000094")]
	public delegate void LogCallback(string condition, string stackTrace, LogType type);

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static LowMemoryCallback lowMemory;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static MemoryUsageChangedCallback memoryUsageChanged;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x10")]
	private static LogCallback s_LogCallbackHandler;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x18")]
	private static LogCallback s_LogCallbackHandlerThreaded;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> m_focusChanged;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string> deepLinkActivated;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Func<bool> wantsToQuit;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action m_quitting;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action unloading;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x48")]
	private static CancellationTokenSource s_currentCancellationTokenSource;

	[Token(Token = "0x17000045")]
	public static extern bool isPlaying
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x2EBA850", Offset = "0x2EB8E50", VA = "0x182EBA850")]
		[UnityEngine.Bindings.FreeFunction("IsWorldPlaying")]
		get;
	}

	[Token(Token = "0x17000046")]
	public static extern bool isFocused
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x2EBA780", Offset = "0x2EB8D80", VA = "0x182EBA780")]
		[UnityEngine.Bindings.FreeFunction("IsPlayerFocused")]
		get;
	}

	[Token(Token = "0x17000047")]
	public static extern bool runInBackground
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x2EBB120", Offset = "0x2EB9720", VA = "0x182EBB120")]
		[UnityEngine.Bindings.FreeFunction("SetPlayerSettingsRunInBackground")]
		set;
	}

	[Token(Token = "0x17000048")]
	public static extern bool isBatchMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x2EBA750", Offset = "0x2EB8D50", VA = "0x182EBA750")]
		[UnityEngine.Bindings.FreeFunction("::IsBatchmode")]
		get;
	}

	[Token(Token = "0x17000049")]
	public static string dataPath
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x2EBA5E0", Offset = "0x2EB8BE0", VA = "0x182EBA5E0")]
		[UnityEngine.Bindings.FreeFunction("GetAppDataPath", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public static string streamingAssetsPath
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x2EBAB90", Offset = "0x2EB9190", VA = "0x182EBAB90")]
		[UnityEngine.Bindings.FreeFunction("GetStreamingAssetsPath", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public static string persistentDataPath
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x2EBA920", Offset = "0x2EB8F20", VA = "0x182EBA920")]
		[UnityEngine.Bindings.FreeFunction("GetPersistentDataPathApplicationSpecific")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public static string unityVersion
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x2EBAD40", Offset = "0x2EB9340", VA = "0x182EBAD40")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersion", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	internal static extern int unityVersionVer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x2EBACD0", Offset = "0x2EB92D0", VA = "0x182EBACD0")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersionVer", IsThreadSafe = true)]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get;
	}

	[Token(Token = "0x1700004E")]
	internal static extern int unityVersionMaj
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x2EBACA0", Offset = "0x2EB92A0", VA = "0x182EBACA0")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersionMaj", IsThreadSafe = true)]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get;
	}

	[Token(Token = "0x1700004F")]
	public static string productName
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x2EBAA70", Offset = "0x2EB9070", VA = "0x182EBAA70")]
		[UnityEngine.Bindings.FreeFunction("GetPlayerSettings().GetProductName")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public static extern int targetFrameRate
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x2EBAC70", Offset = "0x2EB9270", VA = "0x182EBAC70")]
		[UnityEngine.Bindings.FreeFunction("GetTargetFrameRate")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x2EBB160", Offset = "0x2EB9760", VA = "0x182EBB160")]
		[UnityEngine.Bindings.FreeFunction("SetTargetFrameRate")]
		set;
	}

	[Token(Token = "0x17000051")]
	public static string consoleLogPath
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x2EBA4C0", Offset = "0x2EB8AC0", VA = "0x182EBA4C0")]
		[UnityEngine.Bindings.FreeFunction("GetConsoleLogPath")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public static extern RuntimePlatform platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x2EBAA00", Offset = "0x2EB9000", VA = "0x182EBAA00")]
		[UnityEngine.Bindings.FreeFunction("systeminfo::GetRuntimePlatform", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000053")]
	public static bool isMobilePlatform
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x2EBA7B0", Offset = "0x2EB8DB0", VA = "0x182EBA7B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	public static extern NetworkReachability internetReachability
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x2EBA720", Offset = "0x2EB8D20", VA = "0x182EBA720")]
		[UnityEngine.Bindings.FreeFunction("GetInternetReachability")]
		get;
	}

	[Token(Token = "0x17000055")]
	public static CancellationToken exitCancellationToken
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x2EBA6C0", Offset = "0x2EB8CC0", VA = "0x182EBA6C0")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("Use SceneManager to determine what scenes have been loaded")]
	public static int loadedLevel
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x2EBA880", Offset = "0x2EB8E80", VA = "0x182EBA880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000057")]
	public static bool isEditor
	{
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public static event LogCallback logMessageReceived
	{
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x2EBA260", Offset = "0x2EB8860", VA = "0x182EBA260")]
		add
		{
		}
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x2EBAF30", Offset = "0x2EB9530", VA = "0x182EBAF30")]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event Action<bool> focusChanged
	{
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x2EBA150", Offset = "0x2EB8750", VA = "0x182EBA150")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x2EBAE20", Offset = "0x2EB9420", VA = "0x182EBAE20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action quitting
	{
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x2EBA380", Offset = "0x2EB8980", VA = "0x182EBA380")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x2EBB020", Offset = "0x2EB9620", VA = "0x182EBB020")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x2EB9FF0", Offset = "0x2EB85F0", VA = "0x182EB9FF0")]
	[UnityEngine.Bindings.FreeFunction("GetInputManager().QuitApplication")]
	public static extern void Quit(int exitCode);

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2EBA030", Offset = "0x2EB8630", VA = "0x182EBA030")]
	public static void Quit()
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x2EB9E50", Offset = "0x2EB8450", VA = "0x182EB9E50")]
	[UnityEngine.Bindings.FreeFunction("OpenURL")]
	public static void OpenURL(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000233")]
	[Address(RVA = "0x2EBA090", Offset = "0x2EB8690", VA = "0x182EBA090")]
	[UnityEngine.Bindings.FreeFunction("Application_Bindings::SetLogCallbackDefined")]
	private static extern void SetLogCallbackDefined(bool defined);

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2EB96B0", Offset = "0x2EB7CB0", VA = "0x182EB96B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallLowMemory(ApplicationMemoryUsage usage)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x2EB97F0", Offset = "0x2EB7DF0", VA = "0x182EB97F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool HasLogCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x2EB95E0", Offset = "0x2EB7BE0", VA = "0x182EB95E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x2EB9990", Offset = "0x2EB7F90", VA = "0x182EB9990")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit()
	{
		return default(bool);
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x2EB9B30", Offset = "0x2EB8130", VA = "0x182EB9B30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_InitializeExitCancellationToken()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x2EB9C30", Offset = "0x2EB8230", VA = "0x182EB9C30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_RaiseExitCancellationToken()
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x2EB9870", Offset = "0x2EB7E70", VA = "0x182EB9870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationQuit()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x2EB9900", Offset = "0x2EB7F00", VA = "0x182EB9900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationUnload()
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2EB9DD0", Offset = "0x2EB83D0", VA = "0x182EB9DD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnBeforeRender()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x2EB9D30", Offset = "0x2EB8330", VA = "0x182EB9D30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x2EB9C90", Offset = "0x2EB8290", VA = "0x182EB9C90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x2EBA5A0", Offset = "0x2EB8BA0", VA = "0x182EBA5A0")]
	private static extern void get_dataPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x2EBAB50", Offset = "0x2EB9150", VA = "0x182EBAB50")]
	private static extern void get_streamingAssetsPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x2EBA8E0", Offset = "0x2EB8EE0", VA = "0x182EBA8E0")]
	private static extern void get_persistentDataPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x2EBAD00", Offset = "0x2EB9300", VA = "0x182EBAD00")]
	private static extern void get_unityVersion_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x2EBAA30", Offset = "0x2EB9030", VA = "0x182EBAA30")]
	private static extern void get_productName_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x2EB9E10", Offset = "0x2EB8410", VA = "0x182EB9E10")]
	private static extern void OpenURL_Injected(ref ManagedSpanWrapper url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x2EBA480", Offset = "0x2EB8A80", VA = "0x182EBA480")]
	private static extern void get_consoleLogPath_Injected(out ManagedSpanWrapper ret);
}
