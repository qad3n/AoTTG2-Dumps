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
		[Address(RVA = "0x4A87830", Offset = "0x4A87830", VA = "0x4A87830")]
		[UnityEngine.Bindings.FreeFunction("IsWorldPlaying")]
		get;
	}

	[Token(Token = "0x1700002F")]
	public static extern bool isFocused
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x4A87860", Offset = "0x4A87860", VA = "0x4A87860")]
		[UnityEngine.Bindings.FreeFunction("IsPlayerFocused")]
		get;
	}

	[Token(Token = "0x17000030")]
	public static extern bool runInBackground
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x4A87890", Offset = "0x4A87890", VA = "0x4A87890")]
		[UnityEngine.Bindings.FreeFunction("SetPlayerSettingsRunInBackground")]
		set;
	}

	[Token(Token = "0x17000031")]
	public static extern bool isBatchMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x4A878C0", Offset = "0x4A878C0", VA = "0x4A878C0")]
		[UnityEngine.Bindings.FreeFunction("::IsBatchmode")]
		get;
	}

	[Token(Token = "0x17000032")]
	public static extern string dataPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x4A878F0", Offset = "0x4A878F0", VA = "0x4A878F0")]
		[UnityEngine.Bindings.FreeFunction("GetAppDataPath", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000033")]
	public static extern string streamingAssetsPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x4A87920", Offset = "0x4A87920", VA = "0x4A87920")]
		[UnityEngine.Bindings.FreeFunction("GetStreamingAssetsPath", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000034")]
	public static extern string persistentDataPath
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x4A87950", Offset = "0x4A87950", VA = "0x4A87950")]
		[UnityEngine.Bindings.FreeFunction("GetPersistentDataPathApplicationSpecific")]
		get;
	}

	[Token(Token = "0x17000035")]
	public static extern string unityVersion
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x4A87980", Offset = "0x4A87980", VA = "0x4A87980")]
		[UnityEngine.Bindings.FreeFunction("Application_Bindings::GetUnityVersion", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000036")]
	public static extern int targetFrameRate
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x4A879E0", Offset = "0x4A879E0", VA = "0x4A879E0")]
		[UnityEngine.Bindings.FreeFunction("SetTargetFrameRate")]
		set;
	}

	[Token(Token = "0x17000037")]
	public static extern RuntimePlatform platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x4A87A40", Offset = "0x4A87A40", VA = "0x4A87A40")]
		[UnityEngine.Bindings.FreeFunction("systeminfo::GetRuntimePlatform", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000038")]
	public static bool isMobilePlatform
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x4A87A70", Offset = "0x4A87A70", VA = "0x4A87A70")]
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
		[Address(RVA = "0x4A87B20", Offset = "0x4A87B20", VA = "0x4A87B20")]
		[UnityEngine.Bindings.FreeFunction("GetInternetReachability")]
		get;
	}

	[Token(Token = "0x1700003A")]
	public static CancellationToken exitCancellationToken
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x4A88370", Offset = "0x4A88370", VA = "0x4A88370")]
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
		[Address(RVA = "0x4A88950", Offset = "0x4A88950", VA = "0x4A88950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003C")]
	public static bool isEditor
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4A889B0", Offset = "0x4A889B0", VA = "0x4A889B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public static event LogCallback logMessageReceived
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4A87D20", Offset = "0x4A87D20", VA = "0x4A87D20")]
		add
		{
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x4A87E00", Offset = "0x4A87E00", VA = "0x4A87E00")]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4A87780", Offset = "0x4A87780", VA = "0x4A87780")]
	[UnityEngine.Bindings.FreeFunction("GetInputManager().QuitApplication")]
	public static extern void Quit(int exitCode);

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4A877B0", Offset = "0x4A877B0", VA = "0x4A877B0")]
	public static void Quit()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4A879B0", Offset = "0x4A879B0", VA = "0x4A879B0")]
	[UnityEngine.Bindings.FreeFunction("OpenURL")]
	public static extern void OpenURL(string url);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4A87A10", Offset = "0x4A87A10", VA = "0x4A87A10")]
	[UnityEngine.Bindings.FreeFunction("Application_Bindings::SetLogCallbackDefined")]
	private static extern void SetLogCallbackDefined(bool defined);

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4A87B50", Offset = "0x4A87B50", VA = "0x4A87B50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallLowMemory(ApplicationMemoryUsage usage)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4A87C80", Offset = "0x4A87C80", VA = "0x4A87C80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool HasLogCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4A87EB0", Offset = "0x4A87EB0", VA = "0x4A87EB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4A87FB0", Offset = "0x4A87FB0", VA = "0x4A87FB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit()
	{
		return default(bool);
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4A883F0", Offset = "0x4A883F0", VA = "0x4A883F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationQuit()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4A88510", Offset = "0x4A88510", VA = "0x4A88510")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ApplicationUnload()
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4A885B0", Offset = "0x4A885B0", VA = "0x4A885B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnBeforeRender()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4A887E0", Offset = "0x4A887E0", VA = "0x4A887E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4A88890", Offset = "0x4A88890", VA = "0x4A88890")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url)
	{
	}
}
