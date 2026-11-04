// ==================== AoTTG2 cross-reference ====================
// Type: Discord.OverlayManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x20000FA")]
public class OverlayManager
{
	[Token(Token = "0x20000FB")]
	internal struct FFIEvents
	{
		[Token(Token = "0x20000FC")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ToggleHandler(IntPtr ptr, bool locked);

		[Token(Token = "0x40001B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ToggleHandler OnToggle;
	}

	[Token(Token = "0x20000FD")]
	internal struct FFIMethods
	{
		[Token(Token = "0x20000FE")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void IsEnabledMethod(IntPtr methodsPtr, ref bool enabled);

		[Token(Token = "0x20000FF")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void IsLockedMethod(IntPtr methodsPtr, ref bool locked);

		[Token(Token = "0x2000100")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetLockedCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000101")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetLockedMethod(IntPtr methodsPtr, bool locked, IntPtr callbackData, SetLockedCallback callback);

		[Token(Token = "0x2000102")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenActivityInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000103")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenActivityInviteMethod(IntPtr methodsPtr, ActivityActionType type, IntPtr callbackData, OpenActivityInviteCallback callback);

		[Token(Token = "0x2000104")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenGuildInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000105")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenGuildInviteMethod(IntPtr methodsPtr, string code, IntPtr callbackData, OpenGuildInviteCallback callback);

		[Token(Token = "0x2000106")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenVoiceSettingsCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000107")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OpenVoiceSettingsMethod(IntPtr methodsPtr, IntPtr callbackData, OpenVoiceSettingsCallback callback);

		[Token(Token = "0x2000108")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result InitDrawingDxgiMethod(IntPtr methodsPtr, IntPtr swapchain, bool useMessageForwarding);

		[Token(Token = "0x2000109")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void OnPresentMethod(IntPtr methodsPtr);

		[Token(Token = "0x200010A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ForwardMessageMethod(IntPtr methodsPtr, IntPtr message);

		[Token(Token = "0x200010B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void KeyEventMethod(IntPtr methodsPtr, bool down, string keyCode, KeyVariant variant);

		[Token(Token = "0x200010C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CharEventMethod(IntPtr methodsPtr, string character);

		[Token(Token = "0x200010D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MouseButtonEventMethod(IntPtr methodsPtr, byte down, int clickCount, MouseButton which, int x, int y);

		[Token(Token = "0x200010E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MouseMotionEventMethod(IntPtr methodsPtr, int x, int y);

		[Token(Token = "0x200010F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ImeCommitTextMethod(IntPtr methodsPtr, string text);

		[Token(Token = "0x2000110")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ImeSetCompositionMethod(IntPtr methodsPtr, string text, ref ImeUnderline underlines, int from, int to);

		[Token(Token = "0x2000111")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ImeCancelCompositionMethod(IntPtr methodsPtr);

		[Token(Token = "0x2000112")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetImeCompositionRangeCallbackCallback(IntPtr ptr, int from, int to, ref Rect bounds);

		[Token(Token = "0x2000113")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetImeCompositionRangeCallbackMethod(IntPtr methodsPtr, IntPtr callbackData, SetImeCompositionRangeCallbackCallback callback);

		[Token(Token = "0x2000114")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetImeSelectionBoundsCallbackCallback(IntPtr ptr, Rect anchor, Rect focus, bool isAnchorFirst);

		[Token(Token = "0x2000115")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetImeSelectionBoundsCallbackMethod(IntPtr methodsPtr, IntPtr callbackData, SetImeSelectionBoundsCallbackCallback callback);

		[Token(Token = "0x2000116")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate bool IsPointInsideClickZoneMethod(IntPtr methodsPtr, int x, int y);

		[Token(Token = "0x40001B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal IsEnabledMethod IsEnabled;

		[Token(Token = "0x40001B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal IsLockedMethod IsLocked;

		[Token(Token = "0x40001B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal SetLockedMethod SetLocked;

		[Token(Token = "0x40001B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal OpenActivityInviteMethod OpenActivityInvite;

		[Token(Token = "0x40001B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal OpenGuildInviteMethod OpenGuildInvite;

		[Token(Token = "0x40001BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal OpenVoiceSettingsMethod OpenVoiceSettings;

		[Token(Token = "0x40001BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal InitDrawingDxgiMethod InitDrawingDxgi;

		[Token(Token = "0x40001BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal OnPresentMethod OnPresent;

		[Token(Token = "0x40001BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal ForwardMessageMethod ForwardMessage;

		[Token(Token = "0x40001BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal KeyEventMethod KeyEvent;

		[Token(Token = "0x40001BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal CharEventMethod CharEvent;

		[Token(Token = "0x40001C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal MouseButtonEventMethod MouseButtonEvent;

		[Token(Token = "0x40001C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal MouseMotionEventMethod MouseMotionEvent;

		[Token(Token = "0x40001C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal ImeCommitTextMethod ImeCommitText;

		[Token(Token = "0x40001C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal ImeSetCompositionMethod ImeSetComposition;

		[Token(Token = "0x40001C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal ImeCancelCompositionMethod ImeCancelComposition;

		[Token(Token = "0x40001C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal SetImeCompositionRangeCallbackMethod SetImeCompositionRangeCallback;

		[Token(Token = "0x40001C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal SetImeSelectionBoundsCallbackMethod SetImeSelectionBoundsCallback;

		[Token(Token = "0x40001C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal IsPointInsideClickZoneMethod IsPointInsideClickZone;
	}

	[Token(Token = "0x2000117")]
	public delegate void SetLockedHandler(Result result);

	[Token(Token = "0x2000118")]
	public delegate void OpenActivityInviteHandler(Result result);

	[Token(Token = "0x2000119")]
	public delegate void OpenGuildInviteHandler(Result result);

	[Token(Token = "0x200011A")]
	public delegate void OpenVoiceSettingsHandler(Result result);

	[Token(Token = "0x200011B")]
	public delegate void SetImeCompositionRangeCallbackHandler(int from, int to, ref Rect bounds);

	[Token(Token = "0x200011C")]
	public delegate void SetImeSelectionBoundsCallbackHandler(Rect anchor, Rect focus, bool isAnchorFirst);

	[Token(Token = "0x200011D")]
	public delegate void ToggleHandler(bool locked);

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private ToggleHandler m_OnToggle;

	[Token(Token = "0x1700000C")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x540CD0", Offset = "0x53F2D0", VA = "0x180540CD0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000012")]
	public event ToggleHandler OnToggle
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x540C30", Offset = "0x53F230", VA = "0x180540C30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x540E30", Offset = "0x53F430", VA = "0x180540E30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x540A40", Offset = "0x53F040", VA = "0x180540A40")]
	internal OverlayManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x53F660", Offset = "0x53DC60", VA = "0x18053F660")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x53F790", Offset = "0x53DD90", VA = "0x18053F790")]
	public bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x53F7F0", Offset = "0x53DDF0", VA = "0x18053F7F0")]
	public bool IsLocked()
	{
		return default(bool);
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x5407D0", Offset = "0x53EDD0", VA = "0x1805407D0")]
	[MonoPInvokeCallback]
	private static void SetLockedCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x5408E0", Offset = "0x53EEE0", VA = "0x1805408E0")]
	public void SetLocked(bool locked, SetLockedHandler callback)
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x53FB90", Offset = "0x53E190", VA = "0x18053FB90")]
	[MonoPInvokeCallback]
	private static void OpenActivityInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x53FCA0", Offset = "0x53E2A0", VA = "0x18053FCA0")]
	public void OpenActivityInvite(ActivityActionType type, OpenActivityInviteHandler callback)
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x53FE00", Offset = "0x53E400", VA = "0x18053FE00")]
	[MonoPInvokeCallback]
	private static void OpenGuildInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x53FF10", Offset = "0x53E510", VA = "0x18053FF10")]
	public void OpenGuildInvite(string code, OpenGuildInviteHandler callback)
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x540070", Offset = "0x53E670", VA = "0x180540070")]
	[MonoPInvokeCallback]
	private static void OpenVoiceSettingsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x540180", Offset = "0x53E780", VA = "0x180540180")]
	public void OpenVoiceSettings(OpenVoiceSettingsHandler callback)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x53F5A0", Offset = "0x53DBA0", VA = "0x18053F5A0")]
	public void InitDrawingDxgi(IntPtr swapchain, bool useMessageForwarding)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x53FA20", Offset = "0x53E020", VA = "0x18053FA20")]
	public void OnPresent()
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x53F420", Offset = "0x53DA20", VA = "0x18053F420")]
	public void ForwardMessage(IntPtr message)
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x53F8C0", Offset = "0x53DEC0", VA = "0x18053F8C0")]
	public void KeyEvent(bool down, string keyCode, KeyVariant variant)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x53F3C0", Offset = "0x53D9C0", VA = "0x18053F3C0")]
	public void CharEvent(string character)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x53F930", Offset = "0x53DF30", VA = "0x18053F930")]
	public void MouseButtonEvent(byte down, int clickCount, MouseButton which, int x, int y)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x53F9B0", Offset = "0x53DFB0", VA = "0x18053F9B0")]
	public void MouseMotionEvent(int x, int y)
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x53F4D0", Offset = "0x53DAD0", VA = "0x18053F4D0")]
	public void ImeCommitText(string text)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x53F530", Offset = "0x53DB30", VA = "0x18053F530")]
	public void ImeSetComposition(string text, ImeUnderline underlines, int from, int to)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x53F480", Offset = "0x53DA80", VA = "0x18053F480")]
	public void ImeCancelComposition()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x5402D0", Offset = "0x53E8D0", VA = "0x1805402D0")]
	[MonoPInvokeCallback]
	private static void SetImeCompositionRangeCallbackCallbackImpl(IntPtr ptr, int from, int to, ref Rect bounds)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x5403F0", Offset = "0x53E9F0", VA = "0x1805403F0")]
	public void SetImeCompositionRangeCallback(SetImeCompositionRangeCallbackHandler callback)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x540540", Offset = "0x53EB40", VA = "0x180540540")]
	[MonoPInvokeCallback]
	private static void SetImeSelectionBoundsCallbackCallbackImpl(IntPtr ptr, Rect anchor, Rect focus, bool isAnchorFirst)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x540680", Offset = "0x53EC80", VA = "0x180540680")]
	public void SetImeSelectionBoundsCallback(SetImeSelectionBoundsCallbackHandler callback)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x53F850", Offset = "0x53DE50", VA = "0x18053F850")]
	public bool IsPointInsideClickZone(int x, int y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x53FA70", Offset = "0x53E070", VA = "0x18053FA70")]
	[MonoPInvokeCallback]
	private static void OnToggleImpl(IntPtr ptr, bool locked)
	{
	}
}
