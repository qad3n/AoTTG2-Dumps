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
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/IsPlaying.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Application/Application.bindings.h")]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Logging/LogSystem.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TargetFrameRate.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/ApplicationSpecificPersistentDataPath.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/BuildSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/AdsIdHandler.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/ApplicationInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Network/NetworkUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/LoadSceneOperation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/PreloadManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Argv.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/URLUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/Player.h")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static MemoryUsageChangedCallback memoryUsageChanged;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x10")]
	private static LogCallback s_LogCallbackHandler;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x18")]
	private static LogCallback s_LogCallbackHandlerThreaded;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<bool> m_focusChanged;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string> deepLinkActivated;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Func<bool> wantsToQuit;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x68BC0D0", Offset = "0x68BB0D0", VA = "0x68BC0D0")]
		[UnityEngine.Bindings.FreeFunction("IsWorldPlaying")]
		get;
	}

	[Token(Token = "0x17000046")]
	public static extern bool isFocused
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x68BC100", Offset = "0x68BB100", VA = "0x68BC100")]
		[UnityEngine.Bindings.FreeFunction("IsPlayerFocused")]
		get;
	}

	[Token(Token = "0x17000047")]
	public static string buildGUID
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x68BC130", Offset = "0x68BB130", VA = "0x68BC130")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetBuildGUID")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	public static extern bool runInBackground
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x68BC260", Offset = "0x68BB260", VA = "0x68BC260")]
		[UnityEngine.Bindings.FreeFunction("SetPlayerSettingsRunInBackground")]
		set;
	}

	[Token(Token = "0x17000049")]
	public static extern bool isBatchMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x68BC290", Offset = "0x68BB290", VA = "0x68BC290")]
		[UnityEngine.Bindings.FreeFunction("::IsBatchmode")]
		get;
	}

	[Token(Token = "0x1700004A")]
	public static string dataPath
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x68BC2C0", Offset = "0x68BB2C0", VA = "0x68BC2C0")]
		[UnityEngine.Bindings.FreeFunction("GetAppDataPath", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public static string streamingAssetsPath
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x68BC3F0", Offset = "0x68BB3F0", VA = "0x68BC3F0")]
		[UnityEngine.Bindings.FreeFunction("GetStreamingAssetsPath", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public static string persistentDataPath
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x68BC520", Offset = "0x68BB520", VA = "0x68BC520")]
		[UnityEngine.Bindings.FreeFunction("GetPersistentDataPathApplicationSpecific")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	public static string unityVersion
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x68BC650", Offset = "0x68BB650", VA = "0x68BC650")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersion", IsThreadSafe = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	internal static extern int unityVersionVer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x68BC780", Offset = "0x68BB780", VA = "0x68BC780")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersionVer", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700004F")]
	internal static extern int unityVersionMaj
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x68BC7B0", Offset = "0x68BB7B0", VA = "0x68BC7B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersionMaj", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000050")]
	public static string productName
	{
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x68BC7E0", Offset = "0x68BB7E0", VA = "0x68BC7E0")]
		[UnityEngine.Bindings.FreeFunction("GetPlayerSettings().GetProductName")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000051")]
	public static extern int targetFrameRate
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x68BCAD0", Offset = "0x68BBAD0", VA = "0x68BCAD0")]
		[UnityEngine.Bindings.FreeFunction("GetTargetFrameRate")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x68BCB00", Offset = "0x68BBB00", VA = "0x68BCB00")]
		[UnityEngine.Bindings.FreeFunction("SetTargetFrameRate")]
		set;
	}

	[Token(Token = "0x17000052")]
	public static string consoleLogPath
	{
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x68BCB60", Offset = "0x68BBB60", VA = "0x68BCB60")]
		[UnityEngine.Bindings.FreeFunction("GetConsoleLogPath")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public static extern RuntimePlatform platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000238")]
		[Address(RVA = "0x68BCC90", Offset = "0x68BBC90", VA = "0x68BCC90")]
		[UnityEngine.Bindings.FreeFunction("systeminfo::GetRuntimePlatform", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000054")]
	public static bool isMobilePlatform
	{
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x68BCCC0", Offset = "0x68BBCC0", VA = "0x68BCCC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000055")]
	public static extern NetworkReachability internetReachability
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x68BCD80", Offset = "0x68BBD80", VA = "0x68BCD80")]
		[UnityEngine.Bindings.FreeFunction("GetInternetReachability")]
		get;
	}

	[Token(Token = "0x17000056")]
	public static CancellationToken exitCancellationToken
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x68BD970", Offset = "0x68BC970", VA = "0x68BD970")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x17000057")]
	[Obsolete("Use SceneManager to determine what scenes have been loaded")]
	public static int loadedLevel
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x68BE050", Offset = "0x68BD050", VA = "0x68BE050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public static bool isEditor
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x68BE0A0", Offset = "0x68BD0A0", VA = "0x68BE0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public static event LogCallback logMessageReceived
	{
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x68BCF80", Offset = "0x68BBF80", VA = "0x68BCF80")]
		add
		{
		}
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x68BD060", Offset = "0x68BC060", VA = "0x68BD060")]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event Action<bool> focusChanged
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x68BD220", Offset = "0x68BC220", VA = "0x68BD220")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x68BD310", Offset = "0x68BC310", VA = "0x68BD310")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action quitting
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x68BD400", Offset = "0x68BC400", VA = "0x68BD400")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x68BD4E0", Offset = "0x68BC4E0", VA = "0x68BD4E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x68BC020", Offset = "0x68BB020", VA = "0x68BC020")]
	[UnityEngine.Bindings.FreeFunction("GetInputManager().QuitApplication")]
	public static extern void Quit(int exitCode);

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x68BC050", Offset = "0x68BB050", VA = "0x68BC050")]
	public static void Quit()
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x68BC910", Offset = "0x68BB910", VA = "0x68BC910")]
	[UnityEngine.Bindings.FreeFunction("OpenURL")]
	public static void OpenURL(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000236")]
	[Address(RVA = "0x68BCB30", Offset = "0x68BBB30", VA = "0x68BCB30")]
	[UnityEngine.Bindings.FreeFunction("Application_Bindings::SetLogCallbackDefined")]
	private static extern void SetLogCallbackDefined(bool defined);

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x68BCDB0", Offset = "0x68BBDB0", VA = "0x68BCDB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallLowMemory(ApplicationMemoryUsage usage)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x68BCEE0", Offset = "0x68BBEE0", VA = "0x68BCEE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool HasLogCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x68BD120", Offset = "0x68BC120", VA = "0x68BD120")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x68BD5C0", Offset = "0x68BC5C0", VA = "0x68BD5C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit()
	{
		return default(bool);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x68BD9F0", Offset = "0x68BC9F0", VA = "0x68BD9F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_InitializeExitCancellationToken()
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x68BDB00", Offset = "0x68BCB00", VA = "0x68BDB00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_RaiseExitCancellationToken()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x68BDB80", Offset = "0x68BCB80", VA = "0x68BDB80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationQuit()
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x68BDC30", Offset = "0x68BCC30", VA = "0x68BDC30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationUnload()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x68BDCE0", Offset = "0x68BCCE0", VA = "0x68BDCE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnBeforeRender()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x68BDED0", Offset = "0x68BCED0", VA = "0x68BDED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x68BDF90", Offset = "0x68BCF90", VA = "0x68BDF90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x68BC230", Offset = "0x68BB230", VA = "0x68BC230")]
	private static extern void get_buildGUID_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x68BC3C0", Offset = "0x68BB3C0", VA = "0x68BC3C0")]
	private static extern void get_dataPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x68BC4F0", Offset = "0x68BB4F0", VA = "0x68BC4F0")]
	private static extern void get_streamingAssetsPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x68BC620", Offset = "0x68BB620", VA = "0x68BC620")]
	private static extern void get_persistentDataPath_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000254")]
	[Address(RVA = "0x68BC750", Offset = "0x68BB750", VA = "0x68BC750")]
	private static extern void get_unityVersion_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x68BC8E0", Offset = "0x68BB8E0", VA = "0x68BC8E0")]
	private static extern void get_productName_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x68BCAA0", Offset = "0x68BBAA0", VA = "0x68BCAA0")]
	private static extern void OpenURL_Injected(ref ManagedSpanWrapper url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x68BCC60", Offset = "0x68BBC60", VA = "0x68BCC60")]
	private static extern void get_consoleLogPath_Injected(out ManagedSpanWrapper ret);
}
