// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Application
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000075")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Application/Application.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/IsPlaying.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/ApplicationSpecificPersistentDataPath.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/AdsIdHandler.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Application/ApplicationInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/PreloadManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/URLUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/PreloadManager/LoadSceneOperation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/Player.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/BuildSettings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Logging/LogSystem.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Argv.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Network/NetworkUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/TargetFrameRate.h")]
public class Application
{
	[Token(Token = "0x2000076")]
	public delegate void LowMemoryCallback();

	[Token(Token = "0x2000077")]
	public delegate void MemoryUsageChangedCallback(in ApplicationMemoryUsageChange usage);

	[Token(Token = "0x2000078")]
	public delegate void LogCallback(string condition, string stackTrace, LogType type);

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static LowMemoryCallback lowMemory;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static MemoryUsageChangedCallback memoryUsageChanged;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x10")]
	private static LogCallback s_LogCallbackHandler;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x18")]
	private static LogCallback s_LogCallbackHandlerThreaded;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> focusChanged;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string> deepLinkActivated;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Func<bool> wantsToQuit;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action quitting;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action unloading;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x48")]
	private static CancellationTokenSource s_currentCancellationTokenSource;

	[Token(Token = "0x1700002E")]
	public static extern bool isPlaying
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x4DAF050", Offset = "0x4DAF050", VA = "0x4DAF050")]
		[UnityEngine.Bindings.FreeFunction("IsWorldPlaying")]
		get;
	}

	[Token(Token = "0x1700002F")]
	public static extern bool isFocused
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x4DAF080", Offset = "0x4DAF080", VA = "0x4DAF080")]
		[UnityEngine.Bindings.FreeFunction("IsPlayerFocused")]
		get;
	}

	[Token(Token = "0x17000030")]
	public static extern bool runInBackground
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x4DAF0B0", Offset = "0x4DAF0B0", VA = "0x4DAF0B0")]
		[UnityEngine.Bindings.FreeFunction("SetPlayerSettingsRunInBackground")]
		set;
	}

	[Token(Token = "0x17000031")]
	public static extern bool isBatchMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x4DAF0E0", Offset = "0x4DAF0E0", VA = "0x4DAF0E0")]
		[UnityEngine.Bindings.FreeFunction("::IsBatchmode")]
		get;
	}

	[Token(Token = "0x17000032")]
	public static extern string dataPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x4DAF110", Offset = "0x4DAF110", VA = "0x4DAF110")]
		[UnityEngine.Bindings.FreeFunction("GetAppDataPath", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000033")]
	public static extern string streamingAssetsPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x4DAF140", Offset = "0x4DAF140", VA = "0x4DAF140")]
		[UnityEngine.Bindings.FreeFunction("GetStreamingAssetsPath", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000034")]
	public static extern string persistentDataPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x4DAF170", Offset = "0x4DAF170", VA = "0x4DAF170")]
		[UnityEngine.Bindings.FreeFunction("GetPersistentDataPathApplicationSpecific")]
		get;
	}

	[Token(Token = "0x17000035")]
	public static extern string unityVersion
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x4DAF1A0", Offset = "0x4DAF1A0", VA = "0x4DAF1A0")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersion", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000036")]
	public static extern int targetFrameRate
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x4DAF200", Offset = "0x4DAF200", VA = "0x4DAF200")]
		[UnityEngine.Bindings.FreeFunction("SetTargetFrameRate")]
		set;
	}

	[Token(Token = "0x17000037")]
	public static extern RuntimePlatform platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4DAF260", Offset = "0x4DAF260", VA = "0x4DAF260")]
		[UnityEngine.Bindings.FreeFunction("systeminfo::GetRuntimePlatform", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000038")]
	public static bool isMobilePlatform
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4DAF290", Offset = "0x4DAF290", VA = "0x4DAF290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public static extern NetworkReachability internetReachability
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x4DAF340", Offset = "0x4DAF340", VA = "0x4DAF340")]
		[UnityEngine.Bindings.FreeFunction("GetInternetReachability")]
		get;
	}

	[Token(Token = "0x1700003A")]
	public static CancellationToken exitCancellationToken
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x4DAFB90", Offset = "0x4DAFB90", VA = "0x4DAFB90")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x1700003B")]
	[Obsolete("Use SceneManager to determine what scenes have been loaded")]
	public static int loadedLevel
	{
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4DB0170", Offset = "0x4DB0170", VA = "0x4DB0170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003C")]
	public static bool isEditor
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4DB01D0", Offset = "0x4DB01D0", VA = "0x4DB01D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public static event LogCallback logMessageReceived
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4DAF540", Offset = "0x4DAF540", VA = "0x4DAF540")]
		add
		{
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x4DAF620", Offset = "0x4DAF620", VA = "0x4DAF620")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4DAEFA0", Offset = "0x4DAEFA0", VA = "0x4DAEFA0")]
	[UnityEngine.Bindings.FreeFunction("GetInputManager().QuitApplication")]
	public static extern void Quit(int exitCode);

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4DAEFD0", Offset = "0x4DAEFD0", VA = "0x4DAEFD0")]
	public static void Quit()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4DAF1D0", Offset = "0x4DAF1D0", VA = "0x4DAF1D0")]
	[UnityEngine.Bindings.FreeFunction("OpenURL")]
	public static extern void OpenURL(string url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4DAF230", Offset = "0x4DAF230", VA = "0x4DAF230")]
	[UnityEngine.Bindings.FreeFunction("Application_Bindings::SetLogCallbackDefined")]
	private static extern void SetLogCallbackDefined(bool defined);

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4DAF370", Offset = "0x4DAF370", VA = "0x4DAF370")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallLowMemory(ApplicationMemoryUsage usage)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4DAF4A0", Offset = "0x4DAF4A0", VA = "0x4DAF4A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool HasLogCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4DAF6D0", Offset = "0x4DAF6D0", VA = "0x4DAF6D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4DAF7D0", Offset = "0x4DAF7D0", VA = "0x4DAF7D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit()
	{
		return default(bool);
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4DAFC10", Offset = "0x4DAFC10", VA = "0x4DAFC10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationQuit()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4DAFD30", Offset = "0x4DAFD30", VA = "0x4DAFD30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationUnload()
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4DAFDD0", Offset = "0x4DAFDD0", VA = "0x4DAFDD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnBeforeRender()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4DB0000", Offset = "0x4DB0000", VA = "0x4DB0000")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4DB00B0", Offset = "0x4DB00B0", VA = "0x4DB00B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url)
	{
	}
}
