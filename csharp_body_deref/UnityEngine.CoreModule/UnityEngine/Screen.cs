// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Screen
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20000CE")]
[UnityEngine.Bindings.StaticAccessor("GetScreenManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScreenManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/WindowLayout.h")]
public sealed class Screen
{
	[Token(Token = "0x170000B8")]
	public static extern int width
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x68CF4F0", Offset = "0x68CE4F0", VA = "0x68CF4F0")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x170000B9")]
	public static extern int height
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x68CF520", Offset = "0x68CE520", VA = "0x68CF520")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x170000BA")]
	public static extern float dpi
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x68CF550", Offset = "0x68CE550", VA = "0x68CF550")]
		[UnityEngine.Bindings.NativeName("GetDPI")]
		get;
	}

	[Token(Token = "0x170000BB")]
	public static ScreenOrientation orientation
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x68CF5E0", Offset = "0x68CE5E0", VA = "0x68CF5E0")]
		get
		{
			return default(ScreenOrientation);
		}
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x68CF610", Offset = "0x68CE610", VA = "0x68CF610")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public static bool autorotateToPortrait
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x68CF6F0", Offset = "0x68CE6F0", VA = "0x68CF6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public static bool autorotateToPortraitUpsideDown
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x68CF730", Offset = "0x68CE730", VA = "0x68CF730")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public static bool autorotateToLandscapeLeft
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x68CF770", Offset = "0x68CE770", VA = "0x68CF770")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public static bool autorotateToLandscapeRight
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x68CF7B0", Offset = "0x68CE7B0", VA = "0x68CF7B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public static Resolution currentResolution
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x68CF7F0", Offset = "0x68CE7F0", VA = "0x68CF7F0")]
		get
		{
			return default(Resolution);
		}
	}

	[Token(Token = "0x170000C1")]
	public static extern bool fullScreen
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x68CF860", Offset = "0x68CE860", VA = "0x68CF860")]
		[UnityEngine.Bindings.NativeName("IsFullscreen")]
		get;
	}

	[Token(Token = "0x170000C2")]
	public static extern FullScreenMode fullScreenMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x68CF890", Offset = "0x68CE890", VA = "0x68CF890")]
		[UnityEngine.Bindings.NativeName("GetFullscreenMode")]
		get;
	}

	[Token(Token = "0x170000C3")]
	public static Rect safeArea
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x68CF8C0", Offset = "0x68CE8C0", VA = "0x68CF8C0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x170000C4")]
	public static int msaaSamples
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x68CFB60", Offset = "0x68CEB60", VA = "0x68CFB60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public static Resolution[] resolutions
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x68CFB90", Offset = "0x68CEB90", VA = "0x68CFB90")]
		[UnityEngine.Bindings.FreeFunction("ScreenScripting::GetResolutions")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x68CF580", Offset = "0x68CE580", VA = "0x68CF580")]
	private static extern void RequestOrientation(ScreenOrientation orient);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x68CF5B0", Offset = "0x68CE5B0", VA = "0x68CF5B0")]
	private static extern ScreenOrientation GetScreenOrientation();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x68CF6B0", Offset = "0x68CE6B0", VA = "0x68CF6B0")]
	[UnityEngine.Bindings.NativeName("SetIsOrientationEnabled")]
	private static extern void SetOrientationEnabled(EnabledOrientation orient, bool enabled);

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x68CF930", Offset = "0x68CE930", VA = "0x68CF930")]
	[UnityEngine.Bindings.NativeName("RequestResolution")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode, RefreshRate preferredRefreshRate)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x68CF9D0", Offset = "0x68CE9D0", VA = "0x68CF9D0")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x68CFA30", Offset = "0x68CEA30", VA = "0x68CFA30")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("SetResolution(int, int, bool, int) is obsolete. Use SetResolution(int, int, FullScreenMode, RefreshRate) instead.")]
	public static void SetResolution(int width, int height, bool fullscreen, [UnityEngine.Internal.DefaultValue("0")] int preferredRefreshRate)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x68CFAA0", Offset = "0x68CEAA0", VA = "0x68CFAA0")]
	public static void SetResolution(int width, int height, bool fullscreen)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000466")]
	[Address(RVA = "0x68CFB00", Offset = "0x68CEB00", VA = "0x68CFB00")]
	[UnityEngine.Bindings.NativeName("SetRequestedMSAASamples")]
	public static extern void SetMSAASamples(int numSamples);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000467")]
	[Address(RVA = "0x68CFB30", Offset = "0x68CEB30", VA = "0x68CFB30")]
	[UnityEngine.Bindings.NativeName("GetRequestedMSAASamples")]
	private static extern int GetMSAASamples();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046A")]
	[Address(RVA = "0x68CF830", Offset = "0x68CE830", VA = "0x68CF830")]
	private static extern void get_currentResolution_Injected(out Resolution ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046B")]
	[Address(RVA = "0x68CF900", Offset = "0x68CE900", VA = "0x68CF900")]
	private static extern void get_safeArea_Injected(out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046C")]
	[Address(RVA = "0x68CF980", Offset = "0x68CE980", VA = "0x68CF980")]
	private static extern void SetResolution_Injected(int width, int height, FullScreenMode fullscreenMode, [In] ref RefreshRate preferredRefreshRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x68CFC90", Offset = "0x68CEC90", VA = "0x68CFC90")]
	private static extern void get_resolutions_Injected(out BlittableArrayWrapper ret);
}
